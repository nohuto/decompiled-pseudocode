/*
 * XREFs of NtGdiCreateDIBSection @ 0x1C0025B10
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C0025F08 (GreGetBitmapBitsSize.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C0025FA8 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C0026080 (GreCreateDIBitmapReal.c)
 *     GreGetDCDpiScaleValue @ 0x1C00EAEB8 (GreGetDCDpiScaleValue.c)
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
  __int64 DIBitmapReal; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  int DCDpiScaleValue; // eax
  struct tagBITMAPINFO *v16; // rcx
  NTSTATUS v17; // esi
  HANDLE v18; // rax
  void *v19; // rsi
  _QWORD *v20; // r8
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 CurrentProcess; // rax
  ULONG v28; // ecx
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
LABEL_19:
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
          CurrentProcess = PsGetCurrentProcess(v24, v23, v25, v26);
          v17 = MmMapViewOfSection(Object, CurrentProcess, &BaseAddress, 0LL, RegionSize, &v33, &RegionSize, 1, 0, 4);
          if ( v17 < 0 )
            EngSetLastError(0x57u);
          ObfDereferenceObject(Object);
          goto LABEL_12;
        }
        v28 = 87;
      }
      else
      {
        v17 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
        a3 = 0;
        if ( v17 >= 0 )
          goto LABEL_12;
        v28 = 8;
      }
      EngSetLastError(v28);
LABEL_12:
      if ( v17 >= 0 )
      {
        v33 = (char *)BaseAddress + (unsigned __int16)a3;
        v18 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
        v19 = v18;
        Object = v18;
        if ( v18
          && (DIBitmapReal = GreCreateDIBitmapReal(
                               a1,
                               a5,
                               Size,
                               BitmapBitsSize,
                               (__int64)a2,
                               a3,
                               (__int64)v18,
                               a7 & 0x14 | 2u,
                               a8,
                               0LL)) != 0 )
        {
          v20 = (_QWORD *)a9;
          if ( a9 >= MmUserProbeAddress )
            v20 = (_QWORD *)MmUserProbeAddress;
          *v20 = v33;
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
            if ( v19 )
              MmUnsecureVirtualMemory(v19);
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
      goto LABEL_19;
    }
  }
  return DIBitmapReal;
}
