/*
 * XREFs of ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x180046A1C
 * Callers:
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x1800489EC (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001524C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x1800460A8 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180046C64 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 *     ??$GetActivationFactory@UIJsonObjectStatics@Json@Data@Windows@@@wil@@YA?AV?$com_ptr_t@UIJsonObjectStatics@Json@Data@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004AA90 (--$GetActivationFactory@UIJsonObjectStatics@Json@Data@Windows@@@wil@@YA-AV-$com_ptr_t@UIJsonObje.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MobilityExperience::ActivityWrapper::SetActivityComplete(MobilityExperience::ActivityWrapper *this)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64, PVOID, __int64 *); // rsi
  HSTRING_HEADER *v4; // rdi
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, HSTRING *); // rdi
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  char *StringRawBuffer; // rax
  void **v14; // rdx
  int v15; // eax
  HSTRING string; // [rsp+28h] [rbp-39h] BYREF
  __int64 v17; // [rsp+30h] [rbp-31h] BYREF
  __int64 v18; // [rsp+38h] [rbp-29h] BYREF
  __int64 v19; // [rsp+40h] [rbp-21h] BYREF
  const WCHAR *v20[2]; // [rsp+48h] [rbp-19h] BYREF
  void *v21[3]; // [rsp+58h] [rbp-9h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp+Fh]
  HSTRING_HEADER v23; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v20[1] = (const WCHAR *)-2LL;
  v20[0] = L"{ \"complete\": true }";
  MobilityExperience::ActivityWrapper::GetUserActivityPayload(this, &v18);
  wil::GetActivationFactory<Windows::Data::Json::IJsonObjectStatics>(&v19);
  v17 = 0LL;
  v2 = v19;
  v3 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v19 + 48LL);
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, v20);
  v17 = 0LL;
  v5 = v3(v2, v4[1].Reserved.Reserved1, &v17);
  v6 = retaddr;
  if ( v5 < 0 )
    goto LABEL_17;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 232LL))(v18, v17);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x281,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v7);
    goto LABEL_19;
  }
  string = 0LL;
  v9 = v18;
  v10 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v18 + 256LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v11 = v10(v9, &string);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x284,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x180046C5CLL);
  }
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
  CreativeFramework::CommonHelper::StringUtils::WStringToUtf8String((__int64)v21, StringRawBuffer);
  v14 = v21;
  if ( v22 >= 0x10 )
    v14 = (void **)v21[0];
  v15 = (*(__int64 (__fastcall **)(_QWORD, void **))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1), v14);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x286,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v15);
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x27F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v5);
    goto LABEL_18;
  }
  if ( v22 >= 0x10 )
    operator delete(v21[0]);
  v22 = 15LL;
  v21[2] = 0LL;
  LOBYTE(v21[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
}
