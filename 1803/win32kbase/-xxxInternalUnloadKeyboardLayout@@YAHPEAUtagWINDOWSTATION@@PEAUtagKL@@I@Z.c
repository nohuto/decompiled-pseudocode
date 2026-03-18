/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0129C00
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0129D60 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxUnloadKeyboardLayout @ 0x1C012AE60 (xxxUnloadKeyboardLayout.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0022E20 (ThreadUnlock1.c)
 *     HMAssignmentUnlock @ 0x1C0037430 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C00374D0 (HMAssignmentLock.c)
 *     HKLtoPKL @ 0x1C005BC40 (HKLtoPKL.c)
 *     HMMarkObjectDestroy @ 0x1C005F400 (HMMarkObjectDestroy.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C012A970 (xxxInternalActivateKeyboardLayout.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C013F0B8 (ApiSetEditionNotifyShellLanguageHook.c)
 */

__int64 __fastcall xxxInternalUnloadKeyboardLayout(struct tagKL **a1, struct tagKL *a2, unsigned int a3)
{
  struct tagTHREADINFO *v3; // rdi
  unsigned int v4; // esi
  __int64 v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-58h]
  __int128 v11; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v12[3]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v13[3]; // [rsp+68h] [rbp-20h] BYREF

  v3 = gptiCurrent;
  v4 = a3 & 0x80000000;
  if ( a2 == (struct tagKL *)gspklBaseLayout && !v4 )
    return 0LL;
  v12[0] = *((_QWORD *)gptiCurrent + 51);
  *((_QWORD *)gptiCurrent + 51) = v12;
  v12[1] = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  if ( a2 == (struct tagKL *)gspklGlobalActive )
    HMAssignmentUnlock(&gspklGlobalActive);
  HMMarkObjectDestroy(a2);
  *((_DWORD *)a2 + 8) |= 0x20000000u;
  if ( !v4 && *((struct tagKL **)v3 + 54) == a2 )
  {
    v9 = HKLtoPKL((__int64)v3, 1LL);
    if ( v9 )
    {
      v13[0] = *((_QWORD *)v3 + 51);
      *((_QWORD *)v3 + 51) = v13;
      v13[1] = v9;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      xxxInternalActivateKeyboardLayout(v9, a3, 0LL);
      ThreadUnlock1();
    }
  }
  if ( a1[5] == a2 && a2 != *((struct tagKL **)a2 + 2) )
  {
    *(_QWORD *)&v10 = a1 + 5;
    *((_QWORD *)&v10 + 1) = *((_QWORD *)a2 + 2);
    v11 = v10;
    HMAssignmentLock((__int64)&v11);
  }
  ThreadUnlock1();
  xxxWindowEvent(0x80000000LL, 0LL, 0LL);
  ApiSetEditionNotifyShellLanguageHook(v3, 0LL, 0LL);
  return 1LL;
}
