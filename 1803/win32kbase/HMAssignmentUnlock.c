/*
 * XREFs of HMAssignmentUnlock @ 0x1C0037430
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0035470 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C0035630 (DestroyThreadsObjects.c)
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     zzzDestroyQueue @ 0x1C00703F0 (zzzDestroyQueue.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0111BBC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01278A0 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0129C00 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     CleanupKeyboardLayouts @ 0x1C012A510 (CleanupKeyboardLayouts.c)
 *     DestroyKL @ 0x1C012A5F4 (DestroyKL.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C012C504 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C012D7E4 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C0037470 (HMUnlockObjectInternal.c)
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
