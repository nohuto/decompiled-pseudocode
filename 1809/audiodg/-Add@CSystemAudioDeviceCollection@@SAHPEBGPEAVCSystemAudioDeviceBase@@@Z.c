/*
 * XREFs of ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140011EA8
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140011CD0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400369E0 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x140011F80 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x140012138 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x140012160 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudi.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1400354AC (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x14003571C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSystemAudioDeviceCollection::Add(const unsigned __int16 *a1, struct CSystemAudioDeviceBase *a2)
{
  unsigned __int16 v3; // dx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  HINSTANCE StringResourceInstance; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v10; // [rsp+30h] [rbp-10h]
  struct CSystemAudioDeviceBase *v11; // [rsp+58h] [rbp+18h] BYREF
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF

  v11 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSadMap;
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v12 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  if ( !a1 )
  {
    LODWORD(v4) = 0;
LABEL_5:
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v12, a1, (unsigned int)v4);
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
      &v12,
      StringResourceInstance,
      (unsigned __int16)a1);
LABEL_6:
  v6 = ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::Add(
         v5,
         &v12,
         &v11);
  ATL::CStringData::Release((ATL::CStringData *)(v12 - 24));
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
