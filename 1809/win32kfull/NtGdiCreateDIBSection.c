/*
 * XREFs of NtGdiCreateDIBSection @ 0x1C004D2C0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C004D798 (GreGetBitmapBitsSize.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C004EF84 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C004F05C (GreCreateDIBitmapReal.c)
 *     GreGetDCDpiScaleValue @ 0x1C0106A90 (GreGetDCDpiScaleValue.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall NtGdiCreateDIBSection(
        HDC a1,
        void *a2,
        int a3,
        struct tagBITMAPINFO *a4,
        unsigned int a5,
        size_t Size,
        char a7,
        __int64 a8,
        ULONG64 a9)
{
  __int64 DIBitmapReal; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  int DCDpiScaleValue; // eax
  struct tagBITMAPINFO *v16; // rcx
  NTSTATUS v17; // edi
  ULONG v18; // ecx
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 CurrentProcess; // rax
  HANDLE v25; // rax
  void *v26; // rdi
  _QWORD *v27; // r8
  int v29; // [rsp+70h] [rbp-68h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-60h] BYREF
  struct tagBITMAPINFO *v31; // [rsp+80h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-50h] BYREF
  PVOID v33; // [rsp+90h] [rbp-48h] BYREF
  PVOID Object; // [rsp+98h] [rbp-40h] BYREF
  unsigned int BitmapBitsSize; // [rsp+F8h] [rbp+20h]

  DIBitmapReal = 0LL;
  v29 = 0;
  if ( a4 )
  {
    v31 = 0LL;
    BaseAddress = 0LL;
    bCaptureBitmapInfo(a4, a5, (unsigned int)Size, &v31);
    if ( (a7 & 0x10) != 0 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      v14 = (unsigned int)DCDpiScaleValue;
      if ( DCDpiScaleValue > 1 )
      {
        v16 = v31;
        if ( 0x7FFFFFFF / DCDpiScaleValue < (int)abs32(v31->bmiHeader.biHeight)
          || (v13 = (unsigned int)(v31->bmiHeader.biWidth >> 31),
              0x7FFFFFFF / DCDpiScaleValue < (int)((v13 ^ v31->bmiHeader.biWidth) - v13)) )
        {
          ExRaiseStatus(-1073741675);
        }
        v31->bmiHeader.biHeight *= DCDpiScaleValue;
        v16->bmiHeader.biWidth *= DCDpiScaleValue;
      }
    }
    if ( v31 )
    {
      BitmapBitsSize = GreGetBitmapBitsSize(v31, v13, v14);
      RegionSize = BitmapBitsSize;
      if ( !BitmapBitsSize )
      {
LABEL_39:
        FreeThreadBufferWithTag(v31);
        return DIBitmapReal;
      }
      if ( a2 )
      {
        v33 = (PVOID)(a3 & 0xFFFF0000);
        RegionSize = BitmapBitsSize + (unsigned __int64)(unsigned __int16)a3;
        CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
        v17 = ObReferenceObjectByHandle(a2, 6u, MmSectionObjectType, CurrentThreadPreviousMode, &Object, 0LL);
        if ( v17 >= 0 )
        {
          CurrentProcess = PsGetCurrentProcess(v21, v20, v22, v23);
          v17 = MmMapViewOfSection(Object, CurrentProcess, &BaseAddress, 0LL, RegionSize, &v33, &RegionSize, 1, 0, 4);
          if ( v17 < 0 )
            EngSetLastError(0x57u);
          ObfDereferenceObject(Object);
          goto LABEL_19;
        }
        v18 = 87;
      }
      else
      {
        v17 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
        a3 = 0;
        if ( v17 >= 0 )
          goto LABEL_19;
        v18 = 8;
      }
      EngSetLastError(v18);
LABEL_19:
      if ( v17 >= 0 )
      {
        v33 = (char *)BaseAddress + (unsigned __int16)a3;
        if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
          v25 = (HANDLE)GrepSecureVirtualMemory(BaseAddress, RegionSize, 4LL);
        else
          v25 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
        v26 = v25;
        Object = v25;
        if ( v25
          && (DIBitmapReal = GreCreateDIBitmapReal(
                               a1,
                               a5,
                               Size,
                               BitmapBitsSize,
                               (__int64)a2,
                               a3,
                               (__int64)v25,
                               a7 & 0x14 | 2u,
                               a8,
                               0LL)) != 0 )
        {
          v27 = (_QWORD *)a9;
          if ( a9 >= MmUserProbeAddress )
            v27 = (_QWORD *)MmUserProbeAddress;
          *v27 = v33;
          v29 = 1;
        }
        else
        {
          EngSetLastError(0x57u);
        }
        if ( !v29 )
        {
          if ( DIBitmapReal )
          {
            bDeleteSurface(DIBitmapReal);
            DIBitmapReal = 0LL;
          }
          else
          {
            if ( v26 )
            {
              if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
                GrepUnsecureVirtualMemory(v26);
              else
                MmUnsecureVirtualMemory(v26);
            }
            if ( a2 )
            {
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            }
            else
            {
              RegionSize = 0LL;
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v33, &RegionSize, 0x8000u);
            }
          }
        }
      }
      goto LABEL_39;
    }
  }
  return DIBitmapReal;
}
