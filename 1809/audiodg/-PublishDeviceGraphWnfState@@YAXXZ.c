/*
 * XREFs of ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D050
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140009040 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14000FAE0 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140010200 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400102E0 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x1400107D0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140011CD0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140012EC0 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140039240 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     AudioDGGetDeviceGraphWnfStateName @ 0x14003E2F0 (AudioDGGetDeviceGraphWnfStateName.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003FCB0 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x140031CBC (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?FreePlexes@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXXZ @ 0x140032F94 (-FreePlexes@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?InitHashTable@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAA_NI_N@Z @ 0x140033454 (-InitHashTable@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x140033CF0 (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 *     ?FreeNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1400355B0 (-FreeNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x1400356DC (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSys.c)
 *     ?Rehash@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAXI@Z @ 0x140035838 (-Rehash@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x140035974 (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x14003E504 (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 *     ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14003E704 (-DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDi.c)
 *     ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x14003F454 (-LinkDisplayNodes@@YAXAEAV-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDispl.c)
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x14003F9CC (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 */

// Hidden C++ exception states: #wind=5
void PublishDeviceGraphWnfState(void)
{
  float v0; // xmm2_4
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  float v3; // xmm0_4
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  void *v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  int v10; // esi
  unsigned int v11; // edi
  _QWORD *ValueAt; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  int v15; // eax
  CDisplayNode *v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // r14d
  unsigned int i; // edx
  __int64 v21; // rsi
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // r14d
  unsigned int j; // edx
  __int64 v29; // rsi
  __int64 v30; // rdi
  _QWORD *v31; // rbx
  unsigned __int64 v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-D0h] BYREF
  char v36; // [rsp+38h] [rbp-C8h]
  void *Block; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-B8h]
  int v39; // [rsp+50h] [rbp-B0h]
  int v40; // [rsp+54h] [rbp-ACh]
  int v41; // [rsp+58h] [rbp-A8h]
  int v42; // [rsp+5Ch] [rbp-A4h]
  unsigned __int64 v43; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v44; // [rsp+68h] [rbp-98h]
  int v45; // [rsp+70h] [rbp-90h]
  int v46; // [rsp+74h] [rbp-8Ch]
  ATL::CAtlPlex *v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  void *v49; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v50; // [rsp+98h] [rbp-68h]
  int v51; // [rsp+A0h] [rbp-60h]
  int v52; // [rsp+A4h] [rbp-5Ch]
  int v53; // [rsp+A8h] [rbp-58h]
  int v54; // [rsp+ACh] [rbp-54h]
  unsigned __int64 v55; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v56; // [rsp+B8h] [rbp-48h]
  int v57; // [rsp+C0h] [rbp-40h]
  int v58; // [rsp+C4h] [rbp-3Ch]
  ATL::CAtlPlex *v59; // [rsp+C8h] [rbp-38h]
  __int64 v60; // [rsp+D0h] [rbp-30h]
  __int128 v61; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v62; // [rsp+F0h] [rbp-10h]
  ATL::CAtlPlex *v63[2]; // [rsp+F8h] [rbp-8h]
  int v64; // [rsp+108h] [rbp+8h]
  __int64 v65; // [rsp+110h] [rbp+10h]
  unsigned int v66; // [rsp+150h] [rbp+50h] BYREF
  void *v67; // [rsp+158h] [rbp+58h] BYREF

  v65 = -2LL;
  v61 = 0LL;
  v62 = 0LL;
  *(_OWORD *)v63 = 0LL;
  v64 = 10;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 17;
  v57 = 0;
  v58 = 10;
  v59 = 0LL;
  v60 = 0LL;
  v52 = 1061158912;
  v53 = 1048576000;
  v54 = 1074790400;
  v0 = 17.0 * 2.25;
  v1 = 0LL;
  if ( (float)(17.0 * 2.25) >= 9.223372e18 )
  {
    v0 = v0 - 9.223372e18;
    if ( v0 < 9.223372e18 )
      v1 = 0x8000000000000000uLL;
  }
  v2 = v1 + (unsigned int)(int)v0;
  v55 = v2;
  v3 = 17.0 * 0.25;
  v4 = 0LL;
  if ( (float)(17.0 * 0.25) >= 9.223372e18 )
  {
    v3 = v3 - 9.223372e18;
    if ( v3 < 9.223372e18 )
      v4 = 0x8000000000000000uLL;
  }
  v5 = v4 + (unsigned int)(int)v3;
  v56 = v5;
  if ( v5 < 0x11 )
    v56 = 0LL;
  Block = 0LL;
  v38 = 0LL;
  v39 = 17;
  v45 = 0;
  v46 = 10;
  v47 = 0LL;
  v48 = 0LL;
  v40 = 1061158912;
  v41 = 1048576000;
  v42 = 1074790400;
  v43 = v2;
  v44 = v4 + (unsigned int)(int)v3;
  if ( v5 < 0x11 )
    v44 = 0LL;
  v6 = 0LL;
  v67 = 0LL;
  if ( !g_DeviceGraphWnfStateNameCreated )
    goto LABEL_12;
  lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSadMap;
  v36 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v10 = qword_140089020;
  v11 = 0;
  if ( (int)qword_140089020 <= 0 )
  {
LABEL_28:
    if ( v36 )
      LeaveCriticalSection(lpCriticalSection);
    lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSubmixList;
    v36 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v13 = (_QWORD *)SubmixList;
    if ( !SubmixList )
    {
LABEL_33:
      if ( v36 )
        LeaveCriticalSection(lpCriticalSection);
      LinkDisplayNodes(&v49, &Block);
      v15 = SerializeDeviceGraphs(&v61, &v67, &v66);
      v6 = v67;
      if ( v15 >= 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(
          g_DeviceGraphWnfStateName,
          0LL,
          v67,
          v66,
          0LL);
      goto LABEL_37;
    }
    while ( 1 )
    {
      v14 = v13[2];
      v13 = (_QWORD *)*v13;
      if ( (int)DumpDeviceGraph(v14, &v61, &v49, &Block) < 0 )
        break;
      if ( !v13 )
        goto LABEL_33;
    }
  }
  else
  {
    while ( 1 )
    {
      ValueAt = (_QWORD *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
                            v9,
                            v11);
      if ( (*(int (__fastcall **)(_QWORD, __int128 *, void **, void **))(*(_QWORD *)*ValueAt + 192LL))(
             *ValueAt,
             &v61,
             &v49,
             &Block) < 0 )
        break;
      if ( (int)++v11 >= v10 )
        goto LABEL_28;
    }
  }
  if ( v36 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_37:
  if ( v62 )
  {
    while ( (_QWORD)v61 )
    {
      v16 = *(CDisplayNode **)(v61 + 16);
      v17 = *(_QWORD *)v61;
      *(_QWORD *)&v61 = v17;
      if ( v17 )
        *(_QWORD *)(v17 + 8) = 0LL;
      else
        v61 = 0uLL;
      ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::FreeNode(&v61);
      if ( v16 )
        CDisplayNode::`scalar deleting destructor'(v16, v18);
      if ( !v62 )
        goto LABEL_12;
    }
LABEL_73:
    ATL::AtlThrowImpl(-2147467259);
  }
LABEL_12:
  operator delete(v6);
  ++v45;
  v7 = Block;
  if ( Block )
  {
    v19 = 0;
    for ( i = v39; v19 < i; ++v19 )
    {
      v21 = v7[v19];
      if ( v21 )
      {
        do
        {
          v22 = v21;
          v23 = (_QWORD *)(v21 + 56);
          v21 = *(_QWORD *)(v21 + 56);
          ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v22 + 8);
          *v23 = v48;
          v48 = v22;
          v24 = v38 - 1;
          v38 = v24;
          if ( v24 < v44 && !v45 )
          {
            v25 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&Block);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &Block,
              v25);
            v24 = v38;
          }
          if ( !v24 )
            ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::FreePlexes(&Block);
        }
        while ( v21 );
        i = v39;
        v7 = Block;
      }
    }
  }
  operator delete(v7);
  Block = 0LL;
  v38 = 0LL;
  if ( !v45 )
  {
    v26 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&Block);
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::InitHashTable(
      &Block,
      v26,
      0LL);
  }
  v48 = 0LL;
  if ( v47 )
  {
    ATL::CAtlPlex::FreeDataChain(v47);
    v47 = 0LL;
  }
  --v45;
  ++v57;
  v8 = v49;
  if ( v49 )
  {
    v27 = 0;
    for ( j = v51; v27 < j; ++v27 )
    {
      v29 = v8[v27];
      if ( v29 )
      {
        do
        {
          v30 = v29;
          v31 = (_QWORD *)(v29 + 56);
          v29 = *(_QWORD *)(v29 + 56);
          ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v30 + 8);
          *v31 = v60;
          v60 = v30;
          v32 = v50 - 1;
          v50 = v32;
          if ( v32 < v56 && !v57 )
          {
            v33 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&v49);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &v49,
              v33);
            v32 = v50;
          }
          if ( !v32 )
            ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::FreePlexes(&v49);
        }
        while ( v29 );
        j = v51;
        v8 = v49;
      }
    }
  }
  operator delete(v8);
  v49 = 0LL;
  v50 = 0LL;
  if ( !v57 )
  {
    v34 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&v49);
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::InitHashTable(
      &v49,
      v34,
      0LL);
  }
  v60 = 0LL;
  if ( v59 )
  {
    ATL::CAtlPlex::FreeDataChain(v59);
    v59 = 0LL;
  }
  --v57;
  if ( v62 )
  {
    while ( (_QWORD)v61 )
    {
      *(_QWORD *)&v61 = *(_QWORD *)v61;
      ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::FreeNode(&v61);
      if ( !v62 )
        goto LABEL_23;
    }
    goto LABEL_73;
  }
LABEL_23:
  v61 = 0LL;
  v63[1] = 0LL;
  if ( v63[0] )
    ATL::CAtlPlex::FreeDataChain(v63[0]);
}
