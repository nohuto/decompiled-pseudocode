/*
 * XREFs of HMAssignmentUnlock @ 0x1C0023C00
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0027FC0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C0035070 (zzzDestroyQueue.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C006F0A8 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C00B47C0 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B5364 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B5F44 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     DestroyKL @ 0x1C00BA3F4 (DestroyKL.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0166D8C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C017F530 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01826B8 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     HMUnlockObjectInternal @ 0x1C0026A50 (HMUnlockObjectInternal.c)
 */

__int64 __fastcall HMAssignmentUnlock(__int64 *a1)
{
  __int64 v2; // rcx

  GetDomainLockRef(14LL);
  v2 = *a1;
  *a1 = 0LL;
  if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
    return HMUnlockObjectInternal();
  return v2;
}
