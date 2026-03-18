/*
 * XREFs of ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C026C1C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     DpiCallDrvSetBrightness @ 0x1C026CABC (DpiCallDrvSetBrightness.c)
 */

__int64 __fastcall DpiBrightnessIfSet(_QWORD *Arg0, unsigned __int8 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int16 v6; // ax
  __int64 v7; // rdx
  int v8; // edi
  bool v9; // zf
  _QWORD v11[10]; // [rsp+30h] [rbp-29h] BYREF

  v2 = Arg0[8];
  v3 = 0LL;
  v6 = *(_WORD *)(v2 + 4642);
  if ( v6 == 2 )
    v3 = v2 + 4640;
  v7 = 0LL;
  if ( v6 == 1 )
    v7 = v2 + 4640;
  if ( (!v3 || !*(_QWORD *)(v3 + 40)) && (!v7 || !*(_QWORD *)(v7 + 40)) )
    return 3221225659LL;
  KeWaitForSingleObject((PVOID)(v2 + 4368), Executive, 0, 0, 0LL);
  v8 = DpiAcquireCoreSyncAccessSafe((__int64)Arg0, 0);
  if ( v8 >= 0 )
  {
    v9 = *(_BYTE *)(v2 + 4352) == 0;
    *(_BYTE *)(v2 + 4360) = a2;
    if ( !v9 || *(_BYTE *)(v2 + 4353) )
    {
      v8 = 0;
    }
    else
    {
      v8 = DpiCallDrvSetBrightness(Arg0);
      if ( v8 >= 0 )
        *(_BYTE *)(v2 + 4272) = a2;
      if ( *(_BYTE *)(v2 + 4354) )
      {
        memset(v11, 0, 0x48uLL);
        memset(&v11[1], 0, 36);
        HIDWORD(v11[6]) = a2;
        v11[8] = *(_QWORD *)(v2 + 2600);
        v11[0] = 0x480000001ELL;
        LODWORD(v11[6]) = 67;
        v11[7] = (unsigned int)v8;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v11);
      }
    }
    DpiReleaseCoreSyncAccessSafe((__int64)Arg0, 0);
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4368), 0);
  return (unsigned int)v8;
}
