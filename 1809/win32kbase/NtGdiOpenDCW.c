/*
 * XREFs of NtGdiOpenDCW @ 0x1C005E1A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     AllocFreeTmpBuffer @ 0x1C0023DB0 (AllocFreeTmpBuffer.c)
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 *     hdcOpenDCW @ 0x1C002B5E0 (hdcOpenDCW.c)
 *     FreeTmpBuffer @ 0x1C005E4C0 (FreeTmpBuffer.c)
 *     UserGetDesktopDC @ 0x1C005E630 (UserGetDesktopDC.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C005E740 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C005EA70 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall NtGdiOpenDCW(
        unsigned __int16 *a1,
        struct _devicemodeW *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        void *a7,
        struct _DRIVER_INFO_2W *a8,
        ULONG64 a9)
{
  HDC v12; // r14
  unsigned int v13; // ecx
  char *v14; // r15
  size_t v15; // rbx
  void *v16; // rsi
  int v17; // ebx
  int v18; // eax
  struct _devicemodeW *v20; // [rsp+60h] [rbp-48h]
  HDC v21; // [rsp+68h] [rbp-40h]

  v12 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(a4);
  v13 = *a1;
  v14 = (char *)*((_QWORD *)a1 + 1);
  if ( *a1 )
  {
    v15 = v13;
    v16 = (void *)AllocFreeTmpBuffer(v13 + 2);
    if ( v16 )
    {
      if ( &v14[v15] < v14 || (unsigned __int64)&v14[v15] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v16, v14, v15);
      *((_WORD *)v16 + (v15 >> 1)) = 0;
    }
  }
  else
  {
    v16 = 0LL;
  }
  if ( !a2 || (v20 = CaptureDEVMODEW(a2)) != 0LL )
  {
    v17 = 1;
    v18 = 1;
  }
  else
  {
    v18 = 0;
    v17 = 1;
  }
  if ( !v18 || a8 && (v21 = (HDC)CaptureDriverInfo2W(a8)) == 0LL )
    v17 = 0;
  if ( v17 )
    v12 = hdcOpenDCW((unsigned __int16 *)v16, v20, a4, a5, a7, 0LL, v21, a9, a6);
  if ( v16 )
    FreeTmpBuffer(v16);
  if ( v20 )
  {
    PopThreadGuardedObject(&v20[-1].dmICMMethod);
    Win32FreePool((__int64)&v20[-1].dmICMMethod);
  }
  if ( v21 )
  {
    PopThreadGuardedObject((_QWORD *)v21 - 4);
    Win32FreePool((__int64)(v21 - 8));
  }
  return (__int64)v12;
}
