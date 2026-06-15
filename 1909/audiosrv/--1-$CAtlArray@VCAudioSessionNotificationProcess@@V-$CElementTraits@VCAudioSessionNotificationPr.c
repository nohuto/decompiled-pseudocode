/*
 * XREFs of ??1?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800D5474
 * Callers:
 *     _CLockedList_CAudioSessionNotificationProcess_1_0_::ForEachEntry_::_1_::dtor$0 @ 0x1800710D8 (_CLockedList_CAudioSessionNotificationProcess_1_0_--ForEachEntry_--_1_--dtor$0.c)
 *     ??1?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x1800D54B0 (--1-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CAudioSessionManager@@EEAA@XZ @ 0x1800D5708 (--1CAudioSessionManager@@EEAA@XZ.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@CAXPEAVCAudioSessionNotificationProcess@@_K@Z @ 0x1800D5F74 (-CallDestructors@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSession.c)
 */

void __fastcall ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::~CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>(
        void **a1)
{
  CAudioSessionNotificationProcess *v2; // rcx

  v2 = (CAudioSessionNotificationProcess *)*a1;
  if ( v2 )
  {
    ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::CallDestructors(v2);
    free(*a1);
  }
}
