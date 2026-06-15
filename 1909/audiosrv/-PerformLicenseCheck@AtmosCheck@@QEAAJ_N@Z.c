/*
 * XREFs of ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180037244
 * Callers:
 *     ?StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180037220 (-StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180058F90 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x180059140 (-StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c0a465a537957875493a7f1285b2ffbd___::Run @ 0x18005A9F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c0a465a537957875493a7f1285b2ffbd___--Run.c)
 *     _lambda_07ea8ee8549f00f16399909de546051c_::operator() @ 0x18006B150 (_lambda_07ea8ee8549f00f16399909de546051c_--operator().c)
 *     _lambda_54bc6dde1f28aafe8f150296654e3c03_::operator() @ 0x18006B370 (_lambda_54bc6dde1f28aafe8f150296654e3c03_--operator().c)
 *     _lambda_a70780d56f8e66bb41551630c0bd5b4d_::operator() @ 0x18006B600 (_lambda_a70780d56f8e66bb41551630c0bd5b4d_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a0f022487c8cee8834c9675ba7b0437b___::Run @ 0x18006C3E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a0f022487c8cee8834c9675ba7b0437b___--Run.c)
 *     std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x1800E15A0 (std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180037444 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wi.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180038030 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180038224 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180059428 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180059474 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fb23503d9b3566a26ea1a9c0ca33164d___ @ 0x18006AB94 (Windows--Internal--ComTaskPool--QueueTask__lambda_fb23503d9b3566a26ea1a9c0ca33164d___.c)
 *     ??1HmdInfo@@QEAA@XZ @ 0x18006B06C (--1HmdInfo@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AtmosCheck::PerformLicenseCheck(AtmosCheck *this, char a2, const GUID *a3, const GUID *a4)
{
  bool v4; // zf
  unsigned int v7; // ebx
  HRESULT ApartmentType; // eax
  unsigned int v10; // ebx
  DWORD CurrentThreadId; // eax
  __int64 v12; // rdx
  AtmosCheck *v13; // rcx
  int cData; // [rsp+28h] [rbp-19h]
  bool v15; // [rsp+38h] [rbp-9h] BYREF
  int v16; // [rsp+3Ch] [rbp-5h] BYREF
  APTTYPE pAptType; // [rsp+40h] [rbp-1h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+44h] [rbp+3h] BYREF
  AtmosCheck *v19; // [rsp+48h] [rbp+7h] BYREF
  __m128i si128; // [rsp+50h] [rbp+Fh] BYREF
  int v21; // [rsp+60h] [rbp+1Fh]
  int v22; // [rsp+64h] [rbp+23h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+27h] BYREF
  int *v24; // [rsp+78h] [rbp+37h]
  bool *v25; // [rsp+80h] [rbp+3Fh]
  char v26; // [rsp+88h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v16 = 0;
  v4 = *((_BYTE *)this + 96) == 0;
  pAptType = APTTYPE_MTA;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v21 = -2147023728;
  v22 = -2147023728;
  v15 = 0;
  if ( !v4 )
  {
    if ( *((_BYTE *)this + 600) )
    {
      if ( (unsigned int)dword_1801B54F0 > 5 )
        TlgWrite((TraceLoggingHProvider)&dword_1801B54F0, &unk_18017C243, a3, a4, 2u, &pData);
    }
    else if ( AtmosCheck::IsLicenseEvaluationRequired(this) )
    {
      wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::ReportUsageToService();
      ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
      if ( ApartmentType < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x505,
          (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)ApartmentType,
          cData);
      v19 = this;
      if ( this )
        (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)this + 8LL))(this);
      v10 = 0;
      if ( pAptType == APTTYPE_MTA )
        v10 = 4;
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&pData, this);
      v26 = a2;
      *(_QWORD *)&pData.Size = &si128;
      v24 = &v16;
      v25 = &v15;
      CurrentThreadId = GetCurrentThreadId();
      Windows::Internal::ComTaskPool::QueueTask__lambda_fb23503d9b3566a26ea1a9c0ca33164d___(
        v10,
        v12,
        CurrentThreadId,
        &pData);
      HmdInfo::~HmdInfo((HmdInfo *)&pData);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
      v7 = v16;
      if ( v16 >= 0 && a2 && (v15 || *((_DWORD *)this + 46) == 3) )
      {
        if ( *((_QWORD *)this + 5) )
        {
          AtmosCheck::Trace(v13, "Calling AtmosCodecsStatusChanged callback", 0);
          (***((void (__fastcall ****)(_QWORD))this + 5))(*((_QWORD *)this + 5));
          v7 = v16;
        }
      }
      AtmosCheck::TraceResult(this, v7, v15);
      *((_DWORD *)this + 46) = 7;
      return v7;
    }
    return 0LL;
  }
  v7 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4D5,
    (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
    (const char *)0x8000FFFFLL);
  return v7;
}
