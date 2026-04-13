/*
 * XREFs of ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x180045A64
 * Callers:
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x1800479CC (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x180045100 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180045CA8 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 *     ??$GetActivationFactory@UIJsonObjectStatics@Json@Data@Windows@@@wil@@YA?AV?$com_ptr_t@UIJsonObjectStatics@Json@Data@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180049A38 (--$GetActivationFactory@UIJsonObjectStatics@Json@Data@Windows@@@wil@@YA-AV-$com_ptr_t@UIJsonObje.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MobilityExperience::ActivityWrapper::SetActivityComplete(MobilityExperience::ActivityWrapper *this)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  char *StringRawBuffer; // rax
  void **v12; // rdx
  int v13; // eax
  HSTRING string; // [rsp+28h] [rbp-29h] BYREF
  __int64 v15; // [rsp+30h] [rbp-21h] BYREF
  __int64 v16; // [rsp+38h] [rbp-19h] BYREF
  __int64 v17; // [rsp+40h] [rbp-11h] BYREF
  const WCHAR *v18[2]; // [rsp+48h] [rbp-9h] BYREF
  void *v19[3]; // [rsp+58h] [rbp+7h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp+1Fh]
  _BYTE v21[32]; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v18[1] = (const WCHAR *)-2LL;
  v18[0] = L"{ \"complete\": true }";
  MobilityExperience::ActivityWrapper::GetUserActivityPayload(this, &v16);
  wil::GetActivationFactory<Windows::Data::Json::IJsonObjectStatics>(&v17);
  v2 = v17;
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v21, v18);
  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, *(_QWORD *)(v3 + 24), &v15);
  v5 = retaddr;
  if ( v4 < 0 )
    goto LABEL_17;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 232LL))(v16, v15);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x274,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v6);
    goto LABEL_19;
  }
  v8 = v16;
  WindowsDeleteString(0LL);
  string = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v8 + 256LL))(v8, &string);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x277,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v9);
    JUMPOUT(0x180045CA0LL);
  }
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
  CreativeFramework::CommonHelper::StringUtils::WStringToUtf8String((__int64)v19, StringRawBuffer);
  v12 = v19;
  if ( v20 >= 0x10 )
    v12 = (void **)v19[0];
  v13 = (*(__int64 (__fastcall **)(_QWORD, void **))(**((_QWORD **)this + 1) + 168LL))(*((_QWORD *)this + 1), v12);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x279,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v13);
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x272,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v4);
    goto LABEL_18;
  }
  if ( v20 >= 0x10 )
    operator delete(v19[0]);
  v20 = 15LL;
  v19[2] = 0LL;
  LOBYTE(v19[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
}
