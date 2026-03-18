/*
 * XREFs of ThreadUnlock1 @ 0x1C0025E10
 * Callers:
 *     DestroyThreadsObjects @ 0x1C00281A0 (DestroyThreadsObjects.c)
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 *     xxxEnumDisplayMonitors @ 0x1C003E730 (xxxEnumDisplayMonitors.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C004196C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C006F0A8 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C006FBA4 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C0070860 (xxxActivateKeyboardLayout.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0070920 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     HMUnlockObjectInternal @ 0x1C0026A50 (HMUnlockObjectInternal.c)
 */

__int64 ThreadUnlock1()
{
  __int64 ThreadWin32Thread; // rdx
  _QWORD *v1; // rax
  __int64 result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v1 = *(_QWORD **)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = *v1;
  result = v1[1];
  if ( result )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(result + 8), 0xFFFFFFFF) == 1 )
      return HMUnlockObjectInternal(result);
  }
  return result;
}
