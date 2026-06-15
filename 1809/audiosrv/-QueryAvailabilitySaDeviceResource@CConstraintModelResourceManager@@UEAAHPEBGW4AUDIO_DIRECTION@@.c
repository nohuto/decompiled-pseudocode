/*
 * XREFs of ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800F5140
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z @ 0x180030D10 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058D1C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800F37A4 (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?GetEndpointResourceValidity@CConstraintModelResourceManager@@AEAAJPEBGPEAH@Z @ 0x1800F4260 (-GetEndpointResourceValidity@CConstraintModelResourceManager@@AEAAJPEBGPEAH@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x1800F45DC (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18013EBA8 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___M.c)
 */

__int64 __fastcall CConstraintModelResourceManager::QueryAvailabilitySaDeviceResource(
        __int64 a1,
        const unsigned __int16 *a2,
        WINBOOL a3,
        __int128 *a4,
        int a5,
        unsigned int a6)
{
  struct _ResourceInfo *v9; // rdi
  unsigned int v10; // r14d
  unsigned int v11; // esi
  CConstraintModelResourceManager *v12; // rcx
  int EndpointResourceValidity; // eax
  CConstraintModel *v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  int v17; // ebx
  int v18; // eax
  __int64 v19; // rcx
  int StreamResourceConsumption; // eax
  int EndpointInformationFromId; // eax
  void *v22; // r8
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  TraceLoggingHProvider v25; // r10
  void *v26; // r8
  __int64 v27; // r11
  LPCGUID v28; // r8
  LPCGUID v29; // r9
  TraceLoggingHProvider v30; // r10
  unsigned int pData; // [rsp+28h] [rbp-D8h]
  int v33; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+44h] [rbp-BCh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+50h] [rbp-B0h] BYREF
  struct _ResourceInfo *v37; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-98h] BYREF
  char v40; // [rsp+70h] [rbp-90h]
  __int128 v41; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v42[296]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 v43[201]; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned __int16 v44[261]; // [rsp+34Ah] [rbp+24Ah] BYREF
  unsigned int v45[3]; // [rsp+554h] [rbp+454h] BYREF
  EVENT_DATA_DESCRIPTOR v46; // [rsp+560h] [rbp+460h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+580h] [rbp+480h] BYREF
  unsigned int *v48; // [rsp+590h] [rbp+490h]
  __int64 v49; // [rsp+598h] [rbp+498h]
  int *v50; // [rsp+5A0h] [rbp+4A0h]
  __int64 v51; // [rsp+5A8h] [rbp+4A8h]
  wil::details::in1diag3 *retaddr; // [rsp+5F8h] [rbp+4F8h]

  fPending = a3;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
  v33 = 0;
  memset_0(v42, 0, 0x4D0uLL);
  v38 = 0LL;
  v9 = 0LL;
  v10 = 0;
  LODWORD(Context) = 0;
  v37 = 0LL;
  v11 = 1;
  v36 = 1;
  EndpointResourceValidity = CConstraintModelResourceManager::GetEndpointResourceValidity(v12, a2, &v36);
  v17 = EndpointResourceValidity;
  if ( EndpointResourceValidity < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x381,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
      (const char *)(unsigned int)EndpointResourceValidity);
  v33 = v17;
  if ( v17 < 0 )
    goto LABEL_30;
  v18 = v17;
  if ( v36 )
  {
    v19 = *(_QWORD *)(a1 + 16);
    v41 = *a4;
    StreamResourceConsumption = CConstraintModel::GetStreamResourceConsumption(v19, a2, v15, &v41, a5, &Context, &v37);
    v17 = StreamResourceConsumption;
    if ( StreamResourceConsumption < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x385,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
        (const char *)(unsigned int)StreamResourceConsumption);
    v10 = (unsigned int)Context;
    v18 = v17;
    v9 = v37;
    v33 = v17;
  }
  if ( v18 >= 0 && v10 )
  {
    EndpointInformationFromId = CConstraintModel::GetEndpointInformationFromId(v14, a2, v43, v16, v44, pData, v45);
    v17 = EndpointInformationFromId;
    if ( EndpointInformationFromId < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x391,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
        (const char *)(unsigned int)EndpointInformationFromId);
    v33 = v17;
    if ( v17 >= 0 )
    {
      v33 = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
              a1,
              (__int64)v43,
              (__int64)v44,
              v45[0],
              a6,
              fPending,
              1);
      if ( v33 >= 0 )
        goto LABEL_20;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v22);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      if ( **((_DWORD **)Context + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, a2);
        v49 = 4LL;
        v50 = &v33;
        v48 = &a6;
        v51 = 4LL;
        TlgWrite(v25, &unk_180174C43, v23, v24, 5u, &v46);
      }
      v17 = v33;
      if ( v33 >= 0 )
      {
LABEL_20:
        v33 = CConstraintModelResourceManager::AcquireResourceHandle(
                (CConstraintModelResourceManager *)a1,
                v9,
                v10,
                a6,
                1,
                &v38);
        v17 = v33;
        if ( v33 < 0 )
        {
          Context = 0LL;
          if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
            && fPending )
          {
            Context = qword_1801B3518;
            qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
            qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v26);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
          }
          if ( **((_DWORD **)Context + 1) > 4u )
          {
            TlgCreateWsz(&pDesc, a2);
            v49 = v27;
            v50 = &v33;
            v48 = &a6;
            v51 = v27;
            TlgWrite(v30, &unk_180174BCA, v28, v29, 5u, &v46);
          }
          v17 = v33;
        }
      }
    }
  }
  if ( v9 )
  {
    operator delete(v9);
    v17 = v33;
  }
  if ( v17 < 0 )
LABEL_30:
    v11 = 0;
  if ( v40 )
    LeaveCriticalSection(lpCriticalSection);
  return v11;
}
