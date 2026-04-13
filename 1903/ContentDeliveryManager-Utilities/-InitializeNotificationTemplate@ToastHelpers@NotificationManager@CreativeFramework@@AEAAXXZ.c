/*
 * XREFs of ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x18009A840
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x1800905D4 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180044E38 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180067AB0 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067CBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180083D34 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator_ea_180083D34.c)
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x18008C220 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x18009C680 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::InitializeNotificationTemplate(void **this)
{
  unsigned __int64 v2; // rbx
  void **v3; // rax
  wil::details::in1diag3 *v4; // r10
  void **v5; // rax
  __int64 v6; // rsi
  char *v7; // rdi
  const char *v8; // rdx
  int v9; // eax
  void **v10; // rax
  char *v11; // rdx
  _QWORD v12[2]; // [rsp+48h] [rbp-49h] BYREF
  void *v13[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v14; // [rsp+68h] [rbp-29h]
  unsigned __int64 v15; // [rsp+70h] [rbp-21h]
  void *v16[2]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v17; // [rsp+88h] [rbp-9h]
  unsigned __int64 v18; // [rsp+90h] [rbp-1h]
  char *v19[3]; // [rsp+98h] [rbp+7h] BYREF
  unsigned __int64 v20; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v12[1] = -2LL;
  v15 = 7LL;
  v2 = 0LL;
  v14 = 0LL;
  LOWORD(v13[0]) = 0;
  std::wstring::assign(v13, (char *)L"templateType", aTemplatetype[0] != 0 ? 0xC : 0);
  v3 = (void **)std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
                  (__int64)(this + 4),
                  v12,
                  v13);
  v4 = retaddr;
  if ( *v3 == this[4] )
    goto LABEL_28;
  if ( v15 >= 8 )
    operator delete(v13[0]);
  v15 = 7LL;
  v14 = 0LL;
  LOWORD(v13[0]) = 0;
  std::wstring::assign(v13, (char *)L"templateType", aTemplatetype[0] != 0 ? 0xC : 0);
  v5 = (void **)std::map<std::wstring,std::wstring>::operator[](this + 4, v13);
  v20 = 7LL;
  v19[2] = 0LL;
  LOWORD(v19[0]) = 0;
  v6 = -1LL;
  std::wstring::assign((void **)v19, v5, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v15 >= 8 )
    operator delete(v13[0]);
  v15 = 7LL;
  v14 = 0LL;
  LOWORD(v13[0]) = 0;
  v7 = (char *)&unk_18018D9E0;
  while ( !std::operator==<wchar_t>(v19, *((_WORD **)v7 + 1)) )
  {
    v7 += 24;
    if ( v7 == (char *)&std::invalid_argument `RTTI Type Descriptor' )
    {
      v8 = (const char *)v19;
      if ( v20 >= 8 )
        v8 = v19[0];
      wil::details::in1diag3::Throw_HrIfMsg(
        retaddr,
        (void *)0xCE,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070057LL,
        this[2] == 0LL,
        (__int64)"%ls",
        v8);
      goto LABEL_24;
    }
  }
  v9 = *(_DWORD *)v7;
  *((_DWORD *)this + 12) = *(_DWORD *)v7;
  if ( v9 == 6 )
  {
    v18 = 7LL;
    v17 = 0LL;
    LOWORD(v16[0]) = 0;
    std::wstring::assign(v16, (char *)L"customSchema", aCustomschema[0] != 0 ? 0xC : 0);
    if ( (void *)*std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
                    (__int64)(this + 4),
                    v12,
                    v16) != this[4] )
    {
      if ( v18 >= 8 )
        operator delete(v16[0]);
      v18 = 7LL;
      v17 = 0LL;
      LOWORD(v16[0]) = 0;
      std::wstring::assign(v16, (char *)L"customSchema", aCustomschema[0] != 0 ? 0xC : 0);
      v10 = (void **)std::map<std::wstring,std::wstring>::operator[](this + 4, v16);
      if ( this != v10 )
        std::wstring::assign(this, v10, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v18 >= 8 )
        operator delete(v16[0]);
      goto LABEL_24;
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)0x80070057LL);
LABEL_28:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0xB8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)0x80070057LL);
    JUMPOUT(0x18009AB2FLL);
  }
  v11 = (char *)*((_QWORD *)v7 + 2);
  if ( *(_WORD *)v11 )
  {
    do
      ++v6;
    while ( *(_WORD *)&v11[2 * v6] );
    v2 = v6;
  }
  std::wstring::assign(this, v11, v2);
LABEL_24:
  if ( v20 >= 8 )
    operator delete(v19[0]);
}
