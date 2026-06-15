/*
 * XREFs of ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180016490
 * Callers:
 *     ?StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180016440 (-StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x1800546E4 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x1800549C0 (-StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z.c)
 *     _lambda_3a6a9ae2d1ede84324f1e385780d9b63_::operator() @ 0x180067B40 (_lambda_3a6a9ae2d1ede84324f1e385780d9b63_--operator().c)
 *     _lambda_d16d110d62607e9e7a123dfd70e3b2fb_::operator() @ 0x180067D8C (_lambda_d16d110d62607e9e7a123dfd70e3b2fb_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_def7c7ce47039446187daa2faf99ada6___::Run @ 0x1800685C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_def7c7ce47039446187daa2faf99ada6___--Run.c)
 *     ?ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800D65C0 (-ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 * Callees:
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180016678 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180016870 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800199D4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wi.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x1800549F8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??1HmdInfo@@QEAA@XZ @ 0x180065388 (--1HmdInfo@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c13819b0d879b62a077923732e057450___ @ 0x1800676F0 (Windows--Internal--ComTaskPool--QueueTask__lambda_c13819b0d879b62a077923732e057450___.c)
 *     _lambda_c13819b0d879b62a077923732e057450_::_lambda_c13819b0d879b62a077923732e057450_ @ 0x18006796C (_lambda_c13819b0d879b62a077923732e057450_--_lambda_c13819b0d879b62a077923732e057450_.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AtmosCheck::PerformLicenseCheck(AtmosCheck *this, char a2)
{
  bool v2; // zf
  unsigned int v5; // ebx
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int v10; // edi
  __int64 v11; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v13; // rdx
  AtmosCheck *v14; // rcx
  int cData; // [rsp+20h] [rbp-39h]
  bool v16[8]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v17[8]; // [rsp+38h] [rbp-21h] BYREF
  int v18; // [rsp+40h] [rbp-19h] BYREF
  APTTYPE pAptType; // [rsp+44h] [rbp-15h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+48h] [rbp-11h] BYREF
  AtmosCheck *v21; // [rsp+50h] [rbp-9h] BYREF
  __m128i si128; // [rsp+58h] [rbp-1h] BYREF
  int v23; // [rsp+68h] [rbp+Fh]
  int v24; // [rsp+6Ch] [rbp+13h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v18 = 0;
  v2 = *((_BYTE *)this + 72) == 0;
  v17[0] = a2;
  pAptType = APTTYPE_MTA;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v23 = -2147023728;
  v24 = -2147023728;
  v16[0] = 0;
  if ( !v2 )
  {
    if ( *((_BYTE *)this + 552) )
    {
      if ( (unsigned int)dword_1801B1580 > 5 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1801B1580, 0LL) )
          TlgWrite(v6, &unk_1801782B7, v7, v8, 2u, &pData);
      }
    }
    else if ( AtmosCheck::IsLicenseEvaluationRequired(this) )
    {
      wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::ReportUsageToService();
      CoGetApartmentType(&pAptType, &pAptQualifier);
      v21 = this;
      if ( this )
        (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)this + 8LL))(this);
      v10 = 0;
      if ( pAptType == APTTYPE_MTA )
        v10 = 4;
      v11 = lambda_c13819b0d879b62a077923732e057450_::_lambda_c13819b0d879b62a077923732e057450_(
              (unsigned int)&pData,
              (unsigned int)&v21,
              (unsigned int)&si128,
              (unsigned int)&v18,
              (__int64)v16,
              (__int64)v17);
      CurrentThreadId = GetCurrentThreadId();
      Windows::Internal::ComTaskPool::QueueTask__lambda_c13819b0d879b62a077923732e057450___(
        v10,
        v13,
        CurrentThreadId,
        v11);
      HmdInfo::~HmdInfo((HmdInfo *)&pData);
      if ( this )
        (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)this + 16LL))(this);
      v5 = v18;
      if ( v18 >= 0 && a2 && v16[0] && *((_QWORD *)this + 2) )
      {
        AtmosCheck::Trace(v14, "Calling AtmosCodecsStatusChanged callback", 0);
        (***((void (__fastcall ****)(_QWORD))this + 2))(*((_QWORD *)this + 2));
        v5 = v18;
      }
      AtmosCheck::TraceResult(this, v5, v16[0]);
      *((_DWORD *)this + 38) = 6;
      return v5;
    }
    return 0LL;
  }
  v5 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4AB,
    (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
    (const char *)0x8000FFFFLL,
    cData);
  return v5;
}
