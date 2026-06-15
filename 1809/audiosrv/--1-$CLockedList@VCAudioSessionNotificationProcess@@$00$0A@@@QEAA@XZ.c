/*
 * XREFs of ??1?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x1800C6FC4
 * Callers:
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$5 @ 0x1800C74B7 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$5.c)
 * Callees:
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800B6BB0 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ??1?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800C6F88 (--1-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotificationPr.c)
 *     ?RemoveAt@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800C921C (-RemoveAt@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotific.c)
 */

void __fastcall CLockedList<CAudioSessionNotificationProcess,1,0>::~CLockedList<CAudioSessionNotificationProcess,1,0>(
        LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
  while ( *(_QWORD *)&lpCriticalSection[1].LockCount )
    ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::RemoveAt(
      &lpCriticalSection[1],
      0LL);
  LeaveCriticalSection(lpCriticalSection);
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)&lpCriticalSection[1].SpinCount);
  ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::~CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>((void **)&lpCriticalSection[1].DebugInfo);
  DeleteCriticalSection(lpCriticalSection);
}
