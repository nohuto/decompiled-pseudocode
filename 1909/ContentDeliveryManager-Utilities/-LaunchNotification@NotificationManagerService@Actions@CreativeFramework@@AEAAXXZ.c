/*
 * XREFs of ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x180090EF4
 * Callers:
 *     ?Invoke@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ @ 0x180090D90 (-Invoke@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067F1C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180083EE4 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator_ea_180083EE4.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180084294 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_180084294.c)
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x18008C400 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x18009ACF8 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::Actions::NotificationManagerService::LaunchNotification(const WCHAR **this)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  bool v4; // si
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID, PVOID, __int64, const WCHAR *, PVOID); // r12
  const WCHAR *v7; // rax
  HSTRING_HEADER *v8; // r15
  const WCHAR *v9; // rcx
  HSTRING_HEADER *v10; // r14
  __int64 ToastContentXML; // rax
  HSTRING_HEADER *v12; // rax
  __int64 v13; // r9
  int v14; // eax
  const WCHAR *v15; // [rsp+48h] [rbp-79h] BYREF
  __int64 v16; // [rsp+50h] [rbp-71h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-69h] BYREF
  void *v18[3]; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp-41h]
  HSTRING_HEADER v20; // [rsp+88h] [rbp-39h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-21h]
  HSTRING_HEADER v22; // [rsp+A8h] [rbp-19h] BYREF
  HSTRING_HEADER v23; // [rsp+C8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v17[1] = -2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)v17);
  v16 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v17[0] + 72LL))(v17[0], &v16);
  v3 = retaddr;
  if ( v2 < 0 )
  {
LABEL_22:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x71,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v2);
    JUMPOUT(0x180091122LL);
  }
  v19 = 7LL;
  v18[2] = 0LL;
  LOWORD(v18[0]) = 0;
  std::wstring::assign(v18, (char *)L"isGhost", aIsghost[0] != 0 ? 7 : 0);
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
    (__int64)(this + 15),
    &v15,
    v18);
  if ( v19 >= 8 )
    operator delete(v18[0]);
  v4 = v15 != this[15] && std::operator==<wchar_t>((_QWORD *)v15 + 8, L"true");
  v5 = v16;
  v6 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64, const WCHAR *, PVOID))(*(_QWORD *)v16 + 56LL);
  v7 = (const WCHAR *)(this + 10);
  if ( (unsigned __int64)this[13] >= 8 )
    v7 = *(const WCHAR **)v7;
  v15 = v7;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, &v15);
  v9 = (const WCHAR *)(this + 6);
  if ( (unsigned __int64)this[9] >= 8 )
    v9 = *(const WCHAR **)v9;
  v15 = v9;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, &v15);
  ToastContentXML = CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML(this[17], v18);
  if ( *(_QWORD *)(ToastContentXML + 24) >= 8uLL )
    ToastContentXML = *(_QWORD *)ToastContentXML;
  v15 = (const WCHAR *)ToastContentXML;
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, &v15);
  LOBYTE(v13) = v4;
  v14 = v6(v5, v12[1].Reserved.Reserved1, v10[1].Reserved.Reserved1, v13, this[14], v8[1].Reserved.Reserved1);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_22;
  }
  v21 = 0LL;
  if ( v19 >= 8 )
    operator delete(v18[0]);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
}
