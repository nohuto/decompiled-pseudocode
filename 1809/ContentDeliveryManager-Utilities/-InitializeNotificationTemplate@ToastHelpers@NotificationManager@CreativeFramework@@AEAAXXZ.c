/*
 * XREFs of ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x180096E54
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18008E7B8 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180043F88 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180065FE4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800661EC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180082130 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator_ea_180082130.c)
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x18008A490 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x180098C6C (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::InitializeNotificationTemplate(void **this)
{
  unsigned __int64 v2; // rdi
  void *v3; // rbx
  void **v4; // rax
  wil::details::in1diag3 *v5; // rcx
  void **v6; // rax
  __int64 v7; // rsi
  char *v8; // rbx
  const char *v9; // rdx
  int v10; // eax
  void *v11; // rbx
  void **v12; // rax
  char *v13; // rdx
  _QWORD v14[2]; // [rsp+48h] [rbp-49h] BYREF
  void *v15[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v16; // [rsp+68h] [rbp-29h]
  unsigned __int64 v17; // [rsp+70h] [rbp-21h]
  void *v18[2]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v19; // [rsp+88h] [rbp-9h]
  unsigned __int64 v20; // [rsp+90h] [rbp-1h]
  char *v21[3]; // [rsp+98h] [rbp+7h] BYREF
  unsigned __int64 v22; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v14[1] = -2LL;
  v17 = 7LL;
  v2 = 0LL;
  v16 = 0LL;
  LOWORD(v15[0]) = 0;
  std::wstring::assign(v15, (char *)L"templateType", aTemplatetype[0] != 0 ? 0xC : 0);
  v3 = this[4];
  v4 = (void **)std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
                  (__int64)(this + 4),
                  v14,
                  v15);
  v5 = retaddr;
  if ( *v4 == v3 )
    goto LABEL_28;
  if ( v17 >= 8 )
    operator delete(v15[0]);
  v17 = 7LL;
  v16 = 0LL;
  LOWORD(v15[0]) = 0;
  std::wstring::assign(v15, (char *)L"templateType", aTemplatetype[0] != 0 ? 0xC : 0);
  v6 = (void **)std::map<std::wstring,std::wstring>::operator[](this + 4, v15);
  v22 = 7LL;
  v21[2] = 0LL;
  LOWORD(v21[0]) = 0;
  v7 = -1LL;
  std::wstring::assign((void **)v21, v6, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v17 >= 8 )
    operator delete(v15[0]);
  v17 = 7LL;
  v16 = 0LL;
  LOWORD(v15[0]) = 0;
  v8 = (char *)&unk_180183970;
  while ( !std::operator==<wchar_t>(v21, *((_WORD **)v8 + 1)) )
  {
    v8 += 24;
    if ( v8 == (char *)&std::invalid_argument `RTTI Type Descriptor' )
    {
      v9 = (const char *)v21;
      if ( v22 >= 8 )
        v9 = v21[0];
      wil::details::in1diag3::Throw_HrIfMsg(
        retaddr,
        (void *)0xCF,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070057LL,
        this[2] == 0LL,
        (__int64)"%ls",
        v9);
      goto LABEL_24;
    }
  }
  v10 = *(_DWORD *)v8;
  *((_DWORD *)this + 12) = *(_DWORD *)v8;
  if ( v10 == 6 )
  {
    v20 = 7LL;
    v19 = 0LL;
    LOWORD(v18[0]) = 0;
    std::wstring::assign(v18, (char *)L"customSchema", aCustomschema[0] != 0 ? 0xC : 0);
    v11 = this[4];
    if ( (void *)*std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
                    (__int64)(this + 4),
                    v14,
                    v18) != v11 )
    {
      if ( v20 >= 8 )
        operator delete(v18[0]);
      v20 = 7LL;
      v19 = 0LL;
      LOWORD(v18[0]) = 0;
      std::wstring::assign(v18, (char *)L"customSchema", aCustomschema[0] != 0 ? 0xC : 0);
      v12 = (void **)std::map<std::wstring,std::wstring>::operator[](this + 4, v18);
      if ( this != v12 )
        std::wstring::assign(this, v12, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v20 >= 8 )
        operator delete(v18[0]);
      goto LABEL_24;
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)0x80070057LL);
LABEL_28:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0xB9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)0x80070057LL);
    JUMPOUT(0x18009713DLL);
  }
  v13 = (char *)*((_QWORD *)v8 + 2);
  if ( *(_WORD *)v13 )
  {
    do
      ++v7;
    while ( *(_WORD *)&v13[2 * v7] );
    v2 = v7;
  }
  std::wstring::assign(this, v13, v2);
LABEL_24:
  if ( v22 >= 8 )
    operator delete(v21[0]);
}
