/*
 * XREFs of ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002E66C
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0002CA0 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 *     HMDestroyUnlockedObject @ 0x1C002D920 (HMDestroyUnlockedObject.c)
 *     DestroyThreadsObjects @ 0x1C002E4A0 (DestroyThreadsObjects.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C002EC58 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     HandleInputDestDestruction @ 0x1C0032304 (HandleInputDestDestruction.c)
 *     DestroyProcessInfo @ 0x1C0032CF4 (DestroyProcessInfo.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C004547C (-ResetSystemColors@@YAXXZ.c)
 *     xxxResetDisplayDevice @ 0x1C0046FB0 (xxxResetDisplayDevice.c)
 *     ApiSetEditionUpdateAsyncKeyState @ 0x1C006F990 (ApiSetEditionUpdateAsyncKeyState.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C006FF70 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     ApiSetEditionPostEventMessage @ 0x1C008893C (ApiSetEditionPostEventMessage.c)
 *     InitUserScreen @ 0x1C0098FE4 (InitUserScreen.c)
 *     NtUserEnableTouchPad @ 0x1C00EE7F0 (NtUserEnableTouchPad.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00F1DB0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C013E308 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0143E40 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C015735C (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C015751C (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002E700 (UserIsUserCritSecInExclusive.c)
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
