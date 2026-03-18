/*
 * XREFs of ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002EB20
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0003B80 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     DestroyThreadsObjects @ 0x1C00281A0 (DestroyThreadsObjects.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C002EA2C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C002F9C4 (xxxCreateThreadInfo.c)
 *     HandleInputDestDestruction @ 0x1C0030B70 (HandleInputDestDestruction.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0030FB4 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     DestroyProcessInfo @ 0x1C0036D0C (DestroyProcessInfo.c)
 *     ApiSetEditionUpdateAsyncKeyState @ 0x1C0042BF8 (ApiSetEditionUpdateAsyncKeyState.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C00436F0 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     xxxResetDisplayDevice @ 0x1C00639B0 (xxxResetDisplayDevice.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C0064094 (-ResetSystemColors@@YAXXZ.c)
 *     InitUserScreen @ 0x1C00761B4 (InitUserScreen.c)
 *     ApiSetEditionPostEventMessage @ 0x1C0083FA0 (ApiSetEditionPostEventMessage.c)
 *     HMDestroyUnlockedObject @ 0x1C00B34D0 (HMDestroyUnlockedObject.c)
 *     NtUserEnableTouchPad @ 0x1C01173E0 (NtUserEnableTouchPad.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C011C810 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C016CE40 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0172D00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01900B8 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C0190260 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002EB70 (UserIsUserCritSecInExclusive.c)
 */

void __fastcall UserAtomicCheck::~UserAtomicCheck(UserAtomicCheck *this)
{
  unsigned int v2; // edx

  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      if ( !*(_BYTE *)this )
      {
        LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
        if ( gpAtomickCheckStacks )
        {
          v2 = 0;
          if ( gdwAtomicCheckLogSize )
          {
            while ( *(_DWORD *)(((unsigned __int64)v2 << 6) + gpAtomickCheckStacks) != *((_DWORD *)this + 1) )
            {
              if ( ++v2 >= gdwAtomicCheckLogSize )
                return;
            }
            *(_DWORD *)(((unsigned __int64)v2 << 6) + gpAtomickCheckStacks) = 0;
          }
        }
      }
    }
  }
}
