/*
 * XREFs of ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x180101000
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z @ 0x18000C910 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800522DC (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800FF664 (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?GetEndpointResourceValidity@CConstraintModelResourceManager@@AEAAJPEBGPEAH@Z @ 0x180100120 (-GetEndpointResourceValidity@CConstraintModelResourceManager@@AEAAJPEBGPEAH@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x1801004A0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180142C38 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___M.c)
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
  TraceLoggingHProvider v24; // r9
  void *v25; // r8
  __int64 v26; // r10
  LPCGUID v27; // r8
  TraceLoggingHProvider v28; // r9
  unsigned int pData; // [rsp+28h] [rbp-D8h]
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+44h] [rbp-BCh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  struct _ResourceInfo *v35; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-98h] BYREF
  char v38; // [rsp+70h] [rbp-90h]
  __int128 v39; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v40[296]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 v41[201]; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned __int16 v42[261]; // [rsp+34Ah] [rbp+24Ah] BYREF
  unsigned int v43[3]; // [rsp+554h] [rbp+454h] BYREF
  EVENT_DATA_DESCRIPTOR v44; // [rsp+560h] [rbp+460h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+580h] [rbp+480h] BYREF
  unsigned int *v46; // [rsp+590h] [rbp+490h]
  __int64 v47; // [rsp+598h] [rbp+498h]
  int *v48; // [rsp+5A0h] [rbp+4A0h]
  __int64 v49; // [rsp+5A8h] [rbp+4A8h]
  wil::details::in1diag3 *retaddr; // [rsp+5F8h] [rbp+4F8h]

  fPending = a3;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
  memset_0(v40, 0, 0x4D0uLL);
  v36 = 0LL;
  v9 = 0LL;
  v10 = 0;
  LODWORD(Context) = 0;
  v35 = 0LL;
  v11 = 1;
  v34 = 1;
  EndpointResourceValidity = CConstraintModelResourceManager::GetEndpointResourceValidity(v12, a2, &v34);
  v17 = EndpointResourceValidity;
  if ( EndpointResourceValidity < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x381,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
      (const char *)(unsigned int)EndpointResourceValidity);
  v31 = v17;
  if ( v17 < 0 )
    goto LABEL_30;
  v18 = v17;
  if ( v34 )
  {
    v19 = *(_QWORD *)(a1 + 16);
    v39 = *a4;
    StreamResourceConsumption = CConstraintModel::GetStreamResourceConsumption(v19, a2, v15, &v39, a5, &Context, &v35);
    v17 = StreamResourceConsumption;
    if ( StreamResourceConsumption < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x385,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
        (const char *)(unsigned int)StreamResourceConsumption);
    v10 = (unsigned int)Context;
    v18 = v17;
    v9 = v35;
    v31 = v17;
  }
  if ( v18 >= 0 && v10 )
  {
    EndpointInformationFromId = CConstraintModel::GetEndpointInformationFromId(v14, a2, v41, v16, v42, pData, v43);
    v17 = EndpointInformationFromId;
    if ( EndpointInformationFromId < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x391,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
        (const char *)(unsigned int)EndpointInformationFromId);
    v31 = v17;
    if ( v17 >= 0 )
    {
      v31 = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
              a1,
              (__int64)v41,
              (__int64)v42,
              v43[0],
              a6,
              fPending,
              1);
      if ( v31 >= 0 )
        goto LABEL_20;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = &qword_1801B8588;
        qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v22);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
      }
      if ( **((_DWORD **)Context + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, a2);
        v47 = 4LL;
        v48 = &v31;
        v46 = &a6;
        v49 = 4LL;
        TlgWrite(v24, &unk_180179C1B, v23, (LPCGUID)v24, 5u, &v44);
      }
      v17 = v31;
      if ( v31 >= 0 )
      {
LABEL_20:
        v31 = CConstraintModelResourceManager::AcquireResourceHandle(
                (CConstraintModelResourceManager *)a1,
                v9,
                v10,
                a6,
                1,
                &v36);
        v17 = v31;
        if ( v31 < 0 )
        {
          Context = 0LL;
          if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
            && fPending )
          {
            Context = &qword_1801B8588;
            qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
            qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v25);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
          }
          if ( **((_DWORD **)Context + 1) > 4u )
          {
            TlgCreateWsz(&pDesc, a2);
            v47 = v26;
            v48 = &v31;
            v46 = &a6;
            v49 = v26;
            TlgWrite(v28, &unk_180179BA2, v27, (LPCGUID)v28, 5u, &v44);
          }
          v17 = v31;
        }
      }
    }
  }
  if ( v9 )
  {
    operator delete(v9);
    v17 = v31;
  }
  if ( v17 < 0 )
LABEL_30:
    v11 = 0;
  if ( v38 )
    LeaveCriticalSection(lpCriticalSection);
  return v11;
}
