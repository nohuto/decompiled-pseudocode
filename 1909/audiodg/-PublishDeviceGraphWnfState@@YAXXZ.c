/*
 * XREFs of ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400046A4
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000C3C0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14000DB70 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140010700 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x1400317A0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140033EB0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     AudioDGGetDeviceGraphWnfStateName @ 0x14003A6E0 (AudioDGGetDeviceGraphWnfStateName.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003C100 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14003DA68 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x14003DEC0 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x14003E0C0 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 * Callees:
 *     ??0?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAA@IMMMI@Z @ 0x140003CAC (--0-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElementTra.c)
 *     ?RemoveAll@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140004878 (-RemoveAll@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCB4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x1400105BC (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A454 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreePlexes@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEAAXXZ @ 0x14002CC2C (-FreePlexes@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElement.c)
 *     ?InitHashTable@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAA_NI_N@Z @ 0x14002D100 (-InitHashTable@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x14002DA74 (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 *     ?FreeNode@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14002F8AC (-FreeNode@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAXPEAV.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x14002F9D8 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSys.c)
 *     ?Rehash@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAXI@Z @ 0x14002FB34 (-Rehash@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL.c)
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x14003A8F4 (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 *     ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14003AB28 (-DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDi.c)
 *     ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x14003B87C (-LinkDisplayNodes@@YAXAEAV-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDispl.c)
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x14003BE98 (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall PublishDeviceGraphWnfState(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  float v3; // xmm4_4
  void *v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  int v8; // esi
  unsigned int v9; // ebx
  _QWORD *ValueAt; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  CDisplayNode *v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // r14d
  unsigned int i; // edx
  __int64 v19; // rsi
  __int64 v20; // rdi
  _QWORD *v21; // rbx
  unsigned __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // r14d
  unsigned int j; // edx
  __int64 v27; // rsi
  __int64 v28; // rdi
  _QWORD *v29; // rbx
  unsigned __int64 v30; // rax
  unsigned int v31; // eax
  unsigned int v32; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C8h]
  void *Block; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-B8h]
  unsigned int v37; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v38; // [rsp+70h] [rbp-98h]
  __int64 v39; // [rsp+78h] [rbp-90h]
  ATL::CAtlPlex *v40; // [rsp+80h] [rbp-88h]
  __int64 v41; // [rsp+88h] [rbp-80h]
  void *v42; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v43; // [rsp+A0h] [rbp-68h]
  unsigned int v44; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v45; // [rsp+C0h] [rbp-48h]
  int v46; // [rsp+C8h] [rbp-40h]
  ATL::CAtlPlex *v47; // [rsp+D0h] [rbp-38h]
  __int64 v48; // [rsp+D8h] [rbp-30h]
  __int128 v49; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v50; // [rsp+F8h] [rbp-10h]
  __int128 v51; // [rsp+100h] [rbp-8h]
  int v52; // [rsp+110h] [rbp+8h]
  __int64 v53; // [rsp+118h] [rbp+10h]
  unsigned int v54; // [rsp+168h] [rbp+60h] BYREF
  void *v55; // [rsp+170h] [rbp+68h] BYREF

  v53 = -2LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 10;
  ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>(
    (__int64)&v42,
    a2,
    0.75,
    0.25,
    SLODWORD(FLOAT_2_25));
  ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>(
    (__int64)&Block,
    v2,
    v3,
    0.25,
    SLODWORD(FLOAT_2_25));
  v4 = 0LL;
  v55 = 0LL;
  if ( g_DeviceGraphWnfStateNameCreated )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSadMap;
    LOBYTE(v34) = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v8 = qword_140086030;
    v9 = 0;
    if ( (int)qword_140086030 <= 0 )
    {
LABEL_17:
      if ( (_BYTE)v34 )
        LeaveCriticalSection(lpCriticalSection);
      lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSubmixList;
      LOBYTE(v34) = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
      v11 = (_QWORD *)SubmixList;
      while ( v11 )
      {
        v12 = v11[2];
        v11 = (_QWORD *)*v11;
        if ( (int)DumpDeviceGraph(v12, &v49, &v42, &Block) < 0 )
          goto LABEL_20;
      }
      if ( (_BYTE)v34 )
        LeaveCriticalSection(lpCriticalSection);
      LinkDisplayNodes(&v42, &Block);
      v13 = SerializeDeviceGraphs(&v49, &v55, &v54);
      v4 = v55;
      if ( v13 >= 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(
          g_DeviceGraphWnfStateName,
          0LL,
          v55,
          v54,
          0LL);
    }
    else
    {
      while ( 1 )
      {
        ValueAt = (_QWORD *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
                              v7,
                              v9);
        if ( (*(int (__fastcall **)(_QWORD, __int128 *, void **, void **))(*(_QWORD *)*ValueAt + 192LL))(
               *ValueAt,
               &v49,
               &v42,
               &Block) < 0 )
          break;
        if ( (int)++v9 >= v8 )
          goto LABEL_17;
      }
LABEL_20:
      if ( (_BYTE)v34 )
        LeaveCriticalSection(lpCriticalSection);
    }
  }
  while ( v50 )
  {
    if ( !(_QWORD)v49 )
      ATL::AtlThrowImpl(-2147467259);
    v14 = *(CDisplayNode **)(v49 + 16);
    v15 = *(_QWORD *)v49;
    *(_QWORD *)&v49 = v15;
    if ( v15 )
      *(_QWORD *)(v15 + 8) = 0LL;
    else
      v49 = 0uLL;
    ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::FreeNode(&v49);
    if ( v14 )
      CDisplayNode::`scalar deleting destructor'(v14, v16);
  }
  operator delete(v4);
  LODWORD(v39) = v39 + 1;
  v5 = Block;
  if ( Block )
  {
    v17 = 0;
    for ( i = v37; v17 < i; ++v17 )
    {
      v19 = v5[v17];
      if ( v19 )
      {
        do
        {
          v20 = v19;
          v21 = (_QWORD *)(v19 + 56);
          v19 = *(_QWORD *)(v19 + 56);
          ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll(v20 + 8);
          *v21 = v41;
          v41 = v20;
          v22 = v36 - 1;
          v36 = v22;
          if ( v22 < v38 && !(_DWORD)v39 )
          {
            v23 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&Block);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &Block,
              v23);
            v22 = v36;
          }
          if ( !v22 )
            ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::FreePlexes(&Block);
        }
        while ( v19 );
        i = v37;
        v5 = Block;
      }
    }
  }
  operator delete(v5);
  Block = 0LL;
  v36 = 0LL;
  if ( !(_DWORD)v39 )
  {
    v24 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&Block);
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::InitHashTable(
      &Block,
      v24,
      0LL);
  }
  v41 = 0LL;
  if ( v40 )
  {
    ATL::CAtlPlex::FreeDataChain(v40);
    v40 = 0LL;
  }
  LODWORD(v39) = v39 - 1;
  ++v46;
  v6 = v42;
  if ( v42 )
  {
    v25 = 0;
    for ( j = v44; v25 < j; ++v25 )
    {
      v27 = v6[v25];
      if ( v27 )
      {
        do
        {
          v28 = v27;
          v29 = (_QWORD *)(v27 + 56);
          v27 = *(_QWORD *)(v27 + 56);
          ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll(v28 + 8);
          *v29 = v48;
          v48 = v28;
          v30 = v43 - 1;
          v43 = v30;
          if ( v30 < v45 && !v46 )
          {
            v31 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&v42);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &v42,
              v31);
            v30 = v43;
          }
          if ( !v30 )
            ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::FreePlexes(&v42);
        }
        while ( v27 );
        j = v44;
        v6 = v42;
      }
    }
  }
  operator delete(v6);
  v42 = 0LL;
  v43 = 0LL;
  if ( !v46 )
  {
    v32 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&v42);
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::InitHashTable(
      &v42,
      v32,
      0LL);
  }
  v48 = 0LL;
  if ( v47 )
  {
    ATL::CAtlPlex::FreeDataChain(v47);
    v47 = 0LL;
  }
  --v46;
  ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll(&v49);
}
