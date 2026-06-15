/*
 * XREFs of ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x1800CBBF8
 * Callers:
 *     s_afxOpenAudioEffectsWatcher @ 0x1800CC8E0 (s_afxOpenAudioEffectsWatcher.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCOnDeviceWorkItem@@PEAV312@1@Z @ 0x1800BF6A8 (-NewNode@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x1800CB920 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 *     ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x1800CBB80 (--_GAudioEffectsWatcher@@QEAAPEAXI@Z.c)
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x1800CBDB0 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ?ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ @ 0x1800CC4C0 (-ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioEffectsWatcherFactory::GetWatcher(
        AudioEffectsWatcherFactory *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        struct AudioEffectsWatcher **a5)
{
  struct AudioEffectsWatcher **v8; // rsi
  _QWORD *i; // rdi
  __int64 v10; // rbx
  int v11; // edi
  AudioEffectsWatcher *v12; // rax
  AudioEffectsWatcher *v13; // rbx
  __int64 *v14; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v17; // [rsp+40h] [rbp-28h]
  AudioEffectsWatcherFactory *v18; // [rsp+70h] [rbp+8h] BYREF

  v18 = this;
  v8 = a5;
  *a5 = 0LL;
  lpCriticalSection = &TheAudioEffectsWatcherFactory;
  v17 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = (_QWORD *)qword_1801B8C48; i; i = (_QWORD *)*i )
  {
    v10 = i[2];
    if ( CompareStringOrdinal(a2, -1, *(LPCWCH *)(v10 + 24), -1, 1) == 2
      && a3 == *(_DWORD *)(v10 + 32)
      && a4 == *(_DWORD *)(v10 + 36) )
    {
      if ( ++*(_DWORD *)(v10 + 72) < 0x3FFFFFFFu )
      {
        v11 = 0;
        *v8 = (struct AudioEffectsWatcher *)v10;
        goto LABEL_22;
      }
      AudioEffectsWatcher::ReleaseAppRef((AudioEffectsWatcher *)v10);
      goto LABEL_14;
    }
  }
  v12 = (AudioEffectsWatcher *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v12;
  if ( v12 )
    v13 = AudioEffectsWatcher::AudioEffectsWatcher(v12);
  else
    v13 = 0LL;
  v18 = v13;
  if ( !v13 )
  {
LABEL_14:
    v11 = -2147024882;
    goto LABEL_22;
  }
  v11 = AudioEffectsWatcher::Init(v13, a2, a3, a4);
  if ( v11 >= 0 )
  {
    v14 = ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::NewNode(
            (__int64)&qword_1801B8C48,
            (__int64 *)&v18,
            qword_1801B8C50);
    if ( qword_1801B8C50 )
      *(_QWORD *)qword_1801B8C50 = v14;
    else
      qword_1801B8C48 = (__int64)v14;
    qword_1801B8C50 = (__int64)v14;
    *((_QWORD *)v13 + 10) = v14;
    ++*((_DWORD *)v13 + 18);
    *v8 = v13;
    v11 = 0;
    v13 = 0LL;
  }
  if ( v13 )
    AudioEffectsWatcher::`scalar deleting destructor'(v13);
LABEL_22:
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v11;
}
