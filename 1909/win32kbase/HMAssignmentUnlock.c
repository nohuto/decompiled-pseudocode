/*
 * XREFs of HMAssignmentUnlock @ 0x1C0024120
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0028960 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     xxxDestroyThreadInfo @ 0x1C00322E8 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C0034320 (zzzDestroyQueue.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0073198 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C00B1CE0 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B2884 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B3464 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     DestroyKL @ 0x1C00B7334 (DestroyKL.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0164B8C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C017D340 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01804C8 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     HMUnlockObjectInternal @ 0x1C0026F70 (HMUnlockObjectInternal.c)
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
