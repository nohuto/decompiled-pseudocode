/*
 * XREFs of ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002EACC
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
 *     <none>
 */

UserAtomicCheck *__fastcall UserAtomicCheck::UserAtomicCheck(UserAtomicCheck *this)
{
  unsigned int v3; // eax
  _DWORD *i; // rcx
  unsigned __int64 v5; // rbx

  *(_BYTE *)this = 0;
  if ( gpresUser )
  {
    if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 )
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
