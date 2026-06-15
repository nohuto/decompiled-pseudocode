/*
 * XREFs of ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x14000EEE8
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140010710 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140030FE0 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCC4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?InternalSetAtIndex@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAXHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x14000F13C (-InternalSetAtIndex@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x140013A34 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x14002F654 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x14002FA98 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSystemAudioDeviceCollection::Add(const unsigned __int16 *a1, struct CSystemAudioDeviceBase *a2)
{
  unsigned __int16 v3; // dx
  __int64 v4; // rax
  void *v5; // rax
  void *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _QWORD *v9; // rdx
  HINSTANCE StringResourceInstance; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v13; // [rsp+30h] [rbp-10h]
  struct CSystemAudioDeviceBase *v14; // [rsp+58h] [rbp+18h] BYREF
  __int64 v15; // [rsp+60h] [rbp+20h] BYREF

  v14 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSadMap;
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v15 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  if ( !a1 )
  {
    LODWORD(v4) = 0;
LABEL_5:
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v15, a1, (unsigned int)v4);
    goto LABEL_6;
  }
  if ( (unsigned __int64)a1 >= 0x10000 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a1[v4] );
    goto LABEL_5;
  }
  StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)a1, v3);
  if ( StringResourceInstance )
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
      &v15,
      StringResourceInstance,
      (unsigned __int16)a1);
LABEL_6:
  v5 = (void *)_o__recalloc(qword_140087020, (int)qword_140087030 + 1, 8LL);
  if ( v5 && (qword_140087020 = v5, (v6 = (void *)_o__recalloc(qword_140087028, (int)qword_140087030 + 1, 8LL)) != 0LL) )
  {
    qword_140087028 = v6;
    ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::InternalSetAtIndex(
      v7,
      (unsigned int)qword_140087030,
      &v15,
      &v14,
      -2LL,
      lpCriticalSection);
    v8 = 1;
    LODWORD(qword_140087030) = qword_140087030 + 1;
  }
  else
  {
    v8 = 0;
  }
  v9 = (_QWORD *)(v15 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
