/*
 * XREFs of NtGdiOpenDCW @ 0x1C0043B40
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     PopThreadGuardedObject @ 0x1C001E1D0 (PopThreadGuardedObject.c)
 *     AllocFreeTmpBuffer @ 0x1C001F470 (AllocFreeTmpBuffer.c)
 *     FreeTmpBuffer @ 0x1C0043E70 (FreeTmpBuffer.c)
 *     hdcOpenDCW @ 0x1C0044DB0 (hdcOpenDCW.c)
 *     UserGetDesktopDC @ 0x1C004567C (UserGetDesktopDC.c)
 *     CaptureDriverInfo2W @ 0x1C0060B40 (CaptureDriverInfo2W.c)
 *     CaptureDEVMODEW @ 0x1C006BF30 (CaptureDEVMODEW.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

__int64 __fastcall NtGdiOpenDCW(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        void *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // r14
  unsigned int v12; // ecx
  char *v13; // r15
  size_t v14; // rbx
  void *v15; // rsi
  int v16; // ebx
  int v17; // eax
  __int64 v19; // [rsp+60h] [rbp-48h]
  __int64 v20; // [rsp+68h] [rbp-40h]

  v11 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(a4, 0LL, 1LL);
  v12 = *a1;
  v13 = (char *)*((_QWORD *)a1 + 1);
  if ( *a1 )
  {
    v14 = v12;
    v15 = (void *)AllocFreeTmpBuffer(v12 + 2);
    if ( v15 )
    {
      if ( &v13[v14] < v13 || (unsigned __int64)&v13[v14] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v15, v13, v14);
      *((_WORD *)v15 + (v14 >> 1)) = 0;
    }
  }
  else
  {
    v15 = 0LL;
  }
  if ( !a2 || (v19 = CaptureDEVMODEW(a2)) != 0 )
  {
    v16 = 1;
    v17 = 1;
  }
  else
  {
    v17 = 0;
    v16 = 1;
  }
  if ( !v17 || a8 && (v20 = CaptureDriverInfo2W()) == 0 )
    v16 = 0;
  if ( v16 )
    v11 = hdcOpenDCW((PCWSTR)v15, a7, 0LL, v20, a9, a6);
  if ( v15 )
    FreeTmpBuffer(v15);
  if ( v19 )
  {
    PopThreadGuardedObject((_QWORD *)(v19 - 32));
    Win32FreePool(v19 - 32);
  }
  if ( v20 )
  {
    PopThreadGuardedObject((_QWORD *)(v20 - 32));
    Win32FreePool(v20 - 32);
  }
  return v11;
}
