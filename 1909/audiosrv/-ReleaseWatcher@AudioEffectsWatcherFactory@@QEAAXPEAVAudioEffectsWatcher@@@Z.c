/*
 * XREFs of ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x1800CC0A4
 * Callers:
 *     s_afxCloseAudioEffectsWatcher @ 0x1800CC340 (s_afxCloseAudioEffectsWatcher.c)
 *     s_afxOpenAudioEffectsWatcher @ 0x1800CC450 (s_afxOpenAudioEffectsWatcher.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x1800CB6F0 (--_GAudioEffectsWatcher@@QEAAPEAXI@Z.c)
 *     ?ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ @ 0x1800CC030 (-ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ.c)
 *     ?RemoveAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800CC2C8 (-RemoveAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioEffectsWatcherFactory::ReleaseWatcher(
        AudioEffectsWatcherFactory *this,
        struct AudioEffectsWatcher *a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  lpCriticalSection = &TheAudioEffectsWatcherFactory;
  v4 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !(unsigned int)AudioEffectsWatcher::ReleaseAppRef(a2) )
  {
    ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAt(
      &qword_1801B7C48,
      *((_QWORD *)a2 + 10));
    AudioEffectsWatcher::`scalar deleting destructor'(a2);
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}
