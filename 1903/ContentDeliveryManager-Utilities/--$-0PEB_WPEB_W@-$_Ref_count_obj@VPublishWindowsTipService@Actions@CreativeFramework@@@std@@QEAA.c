/*
 * XREFs of ??$?0PEB_WPEB_W@?$_Ref_count_obj@VPublishWindowsTipService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W0@Z @ 0x1800947F8
 * Callers:
 *     ??$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA?AV?$shared_ptr@VPublishWindowsTipService@Actions@CreativeFramework@@@0@$$QEAPEB_W0@Z @ 0x180094788 (--$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA-AV-$share.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067CBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Ref_count_obj<CreativeFramework::Actions::PublishWindowsTipService>::_Ref_count_obj<CreativeFramework::Actions::PublishWindowsTipService>(
        __int64 a1,
        char **a2,
        char **a3)
{
  char v4; // si
  _QWORD *v5; // rdi
  char *v6; // rbp
  char *v7; // rdx
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = 1;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
  v5 = (_QWORD *)(a1 + 16);
  v6 = *a3;
  v7 = *a2;
  *(_QWORD *)(a1 + 16) = &CreativeFramework::Actions::PublishWindowsTipService::`vftable';
  v8 = (_QWORD *)(a1 + 24);
  v8[3] = 7LL;
  v8[2] = 0LL;
  *(_WORD *)v8 = 0;
  v9 = -1LL;
  if ( *(_WORD *)v7 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)&v7[2 * v10] );
  }
  else
  {
    v10 = 0LL;
  }
  std::wstring::assign(v8, v7, v10);
  v5[8] = 7LL;
  v5[7] = 0LL;
  *((_WORD *)v5 + 20) = 0;
  if ( *(_WORD *)v6 )
  {
    do
      ++v9;
    while ( *(_WORD *)&v6[2 * v9] );
  }
  else
  {
    v9 = 0LL;
  }
  std::wstring::assign(v5 + 5, v6, v9);
  v11 = v5[3];
  if ( v11 - 1 > 0xFF )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)0x80070057LL);
    JUMPOUT(0x18009492FLL);
  }
  if ( v11 <= 0x100 && v5[7] )
    v4 = 0;
  if ( v4 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  return a1;
}
