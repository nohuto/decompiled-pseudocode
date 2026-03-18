/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0063DFC
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0063FE4 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxUnloadKeyboardLayout @ 0x1C014E530 (xxxUnloadKeyboardLayout.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C00250E0 (ThreadUnlock1.c)
 *     HMAssignmentUnlock @ 0x1C002FD40 (HMAssignmentUnlock.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0064468 (ApiSetEditionNotifyShellLanguageHook.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0064BC0 (xxxInternalActivateKeyboardLayout.c)
 *     HKLtoPKL @ 0x1C0065680 (HKLtoPKL.c)
 *     HMMarkObjectDestroy @ 0x1C00659B0 (HMMarkObjectDestroy.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C0065E78 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxInternalUnloadKeyboardLayout(struct tagWINDOWSTATION *a1, struct tagKL *a2, int a3)
{
  struct tagTHREADINFO *v4; // rdi
  struct tagKL *v7; // rax
  struct tagKL *v8; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v14[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-20h] BYREF

  v4 = gptiCurrent;
  if ( a2 == (struct tagKL *)gspklBaseLayout && a3 >= 0 )
    return 0LL;
  v14[0] = *((_QWORD *)gptiCurrent + 52);
  *((_QWORD *)gptiCurrent + 52) = v14;
  v14[1] = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  if ( a2 == (struct tagKL *)gspklGlobalActive )
    HMAssignmentUnlock(&gspklGlobalActive);
  HMMarkObjectDestroy(a2);
  *((_DWORD *)a2 + 8) |= 0x20000000u;
  if ( a3 >= 0 && *((struct tagKL **)v4 + 55) == a2 )
  {
    v10 = HKLtoPKL(v4, 1LL);
    if ( v10 )
    {
      v15[0] = *((_QWORD *)v4 + 52);
      *((_QWORD *)v4 + 52) = v15;
      v15[1] = v10;
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      xxxInternalActivateKeyboardLayout(a1, v10, (unsigned int)a3, 0LL);
      ThreadUnlock1();
    }
  }
  if ( a1 )
    v7 = (struct tagKL *)*((_QWORD *)a1 + 5);
  else
    v7 = (struct tagKL *)gspklWinstaLessSessionLayouts;
  if ( v7 == a2 )
  {
    v8 = (struct tagKL *)*((_QWORD *)a2 + 2);
    if ( a2 != v8 && !LockKbdLayoutListHead(a1, v8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  }
  ThreadUnlock1();
  xxxWindowEvent(0x80000000LL, 0LL, 0LL, 0LL, 0);
  ApiSetEditionNotifyShellLanguageHook(v4, 0LL, 0LL);
  return 1LL;
}
