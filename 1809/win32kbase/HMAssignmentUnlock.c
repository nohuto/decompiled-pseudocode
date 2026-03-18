/*
 * XREFs of HMAssignmentUnlock @ 0x1C002FD40
 * Callers:
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C0006234 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C002E2A0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C002E4A0 (DestroyThreadsObjects.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C005FD10 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C0060914 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     DestroyKL @ 0x1C0063B44 (DestroyKL.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0063DFC (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C00E48C0 (zzzDestroyQueue.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0138A2C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C014CEE0 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C014F7FC (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C002FDB0 (HMUnlockObjectInternal.c)
 */

__int64 __fastcall HMAssignmentUnlock(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF) == 1 )
    return HMUnlockObjectInternal(v1);
  return v1;
}
