/*
 * XREFs of ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003009C
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0003B80 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     DestroyThreadsObjects @ 0x1C0028B40 (DestroyThreadsObjects.c)
 *     xxxCreateThreadInfo @ 0x1C002EBB4 (xxxCreateThreadInfo.c)
 *     HandleInputDestDestruction @ 0x1C002FD60 (HandleInputDestDestruction.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0030264 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     DestroyProcessInfo @ 0x1C0035D10 (DestroyProcessInfo.c)
 *     ApiSetEditionUpdateAsyncKeyState @ 0x1C004E538 (ApiSetEditionUpdateAsyncKeyState.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C004ED00 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     InitUserScreen @ 0x1C00625FC (InitUserScreen.c)
 *     xxxResetDisplayDevice @ 0x1C0062FC0 (xxxResetDisplayDevice.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00632C4 (-ResetSystemColors@@YAXXZ.c)
 *     ApiSetEditionPostEventMessage @ 0x1C0080170 (ApiSetEditionPostEventMessage.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00AA02C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMDestroyUnlockedObject @ 0x1C00B05A0 (HMDestroyUnlockedObject.c)
 *     NtUserEnableTouchPad @ 0x1C0114A70 (NtUserEnableTouchPad.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0119EA0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C016AC40 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0170B10 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C018DEC8 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C018E070 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C0030130 (UserIsUserCritSecInExclusive.c)
 */

UserAtomicCheck *__fastcall UserAtomicCheck::UserAtomicCheck(UserAtomicCheck *this)
{
  unsigned int v3; // eax
  _DWORD *i; // rcx
  unsigned __int64 v5; // rbx

  *(_BYTE *)this = 0;
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
      if ( gpAtomickCheckStacks )
      {
        *((_DWORD *)this + 1) = ++gdwAtomicCheckSerial;
        v3 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          for ( i = (_DWORD *)gpAtomickCheckStacks; *i; i += 16 )
          {
            if ( ++v3 >= gdwAtomicCheckLogSize )
              return this;
          }
          v5 = (unsigned __int64)v3 << 6;
          *(_DWORD *)(v5 + gpAtomickCheckStacks) = *((_DWORD *)this + 1);
          *(_DWORD *)(v5 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(v5 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                      * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v5 + gpAtomickCheckStacks + 16), 6u, 0x200u);
        }
      }
    }
  }
  return this;
}
