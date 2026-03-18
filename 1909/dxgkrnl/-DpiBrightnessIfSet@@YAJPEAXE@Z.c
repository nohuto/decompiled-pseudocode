/*
 * XREFs of ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C02A7CF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00D0908 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00D192C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiCallDrvSetBrightness @ 0x1C02A8700 (DpiCallDrvSetBrightness.c)
 */

__int64 __fastcall DpiBrightnessIfSet(_QWORD *Arg0, unsigned __int8 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int16 v6; // ax
  __int64 v7; // rdx
  int v8; // edi
  bool v9; // zf
  __int64 v10; // r8
  _DWORD v12[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v13; // [rsp+38h] [rbp-21h]
  __int128 v14; // [rsp+40h] [rbp-19h]
  __int64 v15; // [rsp+50h] [rbp-9h]
  int v16; // [rsp+58h] [rbp-1h]
  int v17; // [rsp+5Ch] [rbp+3h]
  int v18; // [rsp+60h] [rbp+7h]
  int v19; // [rsp+64h] [rbp+Bh]
  int v20; // [rsp+68h] [rbp+Fh]
  int v21; // [rsp+6Ch] [rbp+13h]
  __int64 v22; // [rsp+70h] [rbp+17h]

  v2 = Arg0[8];
  v3 = 0LL;
  v6 = *(_WORD *)(v2 + 4754);
  if ( v6 == 2 )
    v3 = v2 + 4752;
  v7 = 0LL;
  if ( v6 == 1 )
    v7 = v2 + 4752;
  if ( (!v3 || !*(_QWORD *)(v3 + 40)) && (!v7 || !*(_QWORD *)(v7 + 40)) )
    return 3221225659LL;
  KeWaitForSingleObject((PVOID)(v2 + 4480), Executive, 0, 0, 0LL);
  v8 = DpiAcquireCoreSyncAccessSafe((__int64)Arg0, 0);
  if ( v8 >= 0 )
  {
    v9 = *(_BYTE *)(v2 + 4464) == 0;
    *(_BYTE *)(v2 + 4472) = a2;
    if ( !v9 || *(_BYTE *)(v2 + 4465) )
    {
      v8 = 0;
    }
    else
    {
      v8 = DpiCallDrvSetBrightness(Arg0);
      if ( v8 >= 0 )
        *(_BYTE *)(v2 + 4384) = a2;
      if ( *(_BYTE *)(v2 + 4466) )
      {
        v17 = 0;
        v16 = 0;
        v15 = 0LL;
        v21 = 0;
        v14 = 0uLL;
        v13 = 0LL;
        v19 = a2;
        v22 = *(_QWORD *)(v2 + 2672);
        v12[0] = 30;
        v12[1] = 72;
        v18 = 67;
        v20 = v8;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v12, 0x200000000LL, v10);
      }
    }
    DpiReleaseCoreSyncAccessSafe((__int64)Arg0, 0);
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4480), 0);
  return (unsigned int)v8;
}
