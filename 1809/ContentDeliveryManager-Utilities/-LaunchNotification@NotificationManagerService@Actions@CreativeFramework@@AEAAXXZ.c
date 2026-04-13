/*
 * XREFs of ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008EF14
 * Callers:
 *     ?Invoke@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008EDC0 (-Invoke@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180049B00 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800661EC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180082130 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator_ea_180082130.c)
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x18008A490 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x180097144 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::Actions::NotificationManagerService::LaunchNotification(const WCHAR **this)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  bool v4; // r15
  const WCHAR *v5; // rax
  const WCHAR *v6; // rax
  __int64 ToastContentXML; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  const WCHAR *v12; // r9
  int v13; // eax
  __int64 v14; // [rsp+48h] [rbp-89h] BYREF
  const WCHAR *v15; // [rsp+50h] [rbp-81h] BYREF
  __int64 v16; // [rsp+58h] [rbp-79h] BYREF
  const WCHAR *v17; // [rsp+60h] [rbp-71h] BYREF
  const WCHAR *v18[2]; // [rsp+68h] [rbp-69h] BYREF
  void *v19[3]; // [rsp+78h] [rbp-59h] BYREF
  unsigned __int64 v20; // [rsp+90h] [rbp-41h]
  _BYTE v21[24]; // [rsp+98h] [rbp-39h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-21h]
  _BYTE v23[24]; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-1h]
  _BYTE v25[24]; // [rsp+D8h] [rbp+7h] BYREF
  __int64 v26; // [rsp+F0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v18[1] = (const WCHAR *)-2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v16);
  v14 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 72LL))(v16, &v14);
  v3 = retaddr;
  if ( v2 < 0 )
  {
LABEL_22:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x71,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v2);
    JUMPOUT(0x18008F141LL);
  }
  v20 = 7LL;
  v19[2] = 0LL;
  LOWORD(v19[0]) = 0;
  std::wstring::assign(v19, (char *)L"isGhost", aIsghost[0] != 0 ? 7 : 0);
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
    (__int64)(this + 15),
    &v15,
    v19);
  if ( v20 >= 8 )
    operator delete(v19[0]);
  v4 = v15 != this[15] && std::operator==<wchar_t>((_QWORD *)v15 + 8, L"true");
  v5 = (const WCHAR *)(this + 10);
  if ( (unsigned __int64)this[13] >= 8 )
    v5 = *(const WCHAR **)v5;
  v15 = v5;
  v6 = (const WCHAR *)(this + 6);
  if ( (unsigned __int64)this[9] >= 8 )
    v6 = *(const WCHAR **)v6;
  v17 = v6;
  ToastContentXML = CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML(this[17], v19);
  if ( *(_QWORD *)(ToastContentXML + 24) >= 8uLL )
    ToastContentXML = *(_QWORD *)ToastContentXML;
  v18[0] = (const WCHAR *)ToastContentXML;
  v8 = v14;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v25, &v15);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v23, &v17);
  v11 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v21, v18) + 24);
  v12 = this[14];
  LOBYTE(v12) = v4;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, const WCHAR *, const WCHAR *, _QWORD))(*(_QWORD *)v8 + 56LL))(
          v8,
          v11,
          *(_QWORD *)(v10 + 24),
          v12,
          this[14],
          *(_QWORD *)(v9 + 24));
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_22;
  }
  v22 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  if ( v20 >= 8 )
    operator delete(v19[0]);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
}
