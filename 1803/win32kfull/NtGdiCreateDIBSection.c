/*
 * XREFs of NtGdiCreateDIBSection @ 0x1C0016580
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C000C580 (GreGetDCDpiScaleValue.c)
 *     GreGetBitmapBitsSize @ 0x1C0016930 (GreGetBitmapBitsSize.c)
 *     bCaptureBitmapInfo @ 0x1C00169D0 (bCaptureBitmapInfo.c)
 *     GreCreateDIBitmapReal @ 0x1C0016AA0 (GreCreateDIBitmapReal.c)
 */

__int64 __fastcall NtGdiCreateDIBSection(
        HDC a1,
        void *a2,
        int a3,
        void *a4,
        int a5,
        int a6,
        char a7,
        __int64 a8,
        ULONG64 a9)
{
  __int64 DIBitmapReal; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  int DCDpiScaleValue; // eax
  __int64 v16; // rcx
  NTSTATUS v17; // esi
  HANDLE v18; // rax
  void *v19; // rsi
  _QWORD *v20; // r8
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 CurrentProcess; // rax
  ULONG v26; // ecx
  int v27; // [rsp+70h] [rbp-68h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-60h] BYREF
  __int64 v29; // [rsp+80h] [rbp-58h]
  PVOID BaseAddress; // [rsp+88h] [rbp-50h] BYREF
  PVOID v31; // [rsp+90h] [rbp-48h] BYREF
  PVOID Object; // [rsp+98h] [rbp-40h] BYREF
  unsigned int BitmapBitsSize; // [rsp+F8h] [rbp+20h]

  DIBitmapReal = 0LL;
  v27 = 0;
  if ( a4 )
  {
    v29 = 0LL;
    BaseAddress = 0LL;
    bCaptureBitmapInfo(a4);
    if ( (a7 & 0x10) != 0 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      v14 = (unsigned int)DCDpiScaleValue;
      if ( DCDpiScaleValue > 1 )
      {
        v16 = v29;
        if ( 0x7FFFFFFF / DCDpiScaleValue < (int)abs32(*(_DWORD *)(v29 + 8))
          || (v13 = (unsigned int)(*(int *)(v29 + 4) >> 31),
              0x7FFFFFFF / DCDpiScaleValue < (int)((v13 ^ *(_DWORD *)(v29 + 4)) - v13)) )
        {
          ExRaiseStatus(-1073741675);
        }
        *(_DWORD *)(v29 + 8) *= DCDpiScaleValue;
        *(_DWORD *)(v16 + 4) *= DCDpiScaleValue;
      }
    }
    if ( v29 )
    {
      BitmapBitsSize = GreGetBitmapBitsSize(v29, v13, v14);
      RegionSize = BitmapBitsSize;
      if ( !BitmapBitsSize )
      {
LABEL_19:
        FreeThreadBufferWithTag(v29);
        return DIBitmapReal;
      }
      if ( a2 )
      {
        v31 = (PVOID)(a3 & 0xFFFF0000);
        RegionSize = BitmapBitsSize + (unsigned __int64)(unsigned __int16)a3;
        CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
        v17 = ObReferenceObjectByHandle(a2, 6u, MmSectionObjectType, CurrentThreadPreviousMode, &Object, 0LL);
        if ( v17 >= 0 )
        {
          CurrentProcess = PsGetCurrentProcess(v24, v23);
          v17 = MmMapViewOfSection(Object, CurrentProcess, &BaseAddress, 0LL, RegionSize, &v31, &RegionSize, 1, 0, 4);
          if ( v17 < 0 )
            EngSetLastError(0x57u);
          ObfDereferenceObject(Object);
          goto LABEL_12;
        }
        v26 = 87;
      }
      else
      {
        v17 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
        a3 = 0;
        if ( v17 >= 0 )
          goto LABEL_12;
        v26 = 8;
      }
      EngSetLastError(v26);
LABEL_12:
      if ( v17 >= 0 )
      {
        v31 = (char *)BaseAddress + (unsigned __int16)a3;
        v18 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
        v19 = v18;
        Object = v18;
        if ( v18
          && (DIBitmapReal = GreCreateDIBitmapReal(
                               a1,
                               a5,
                               a6,
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
          *v20 = v31;
          v27 = 1;
        }
        else
        {
          EngSetLastError(0x57u);
        }
        if ( !v27 )
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
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v31, &RegionSize, 0x8000u);
            }
          }
        }
      }
      goto LABEL_19;
    }
  }
  return DIBitmapReal;
}
