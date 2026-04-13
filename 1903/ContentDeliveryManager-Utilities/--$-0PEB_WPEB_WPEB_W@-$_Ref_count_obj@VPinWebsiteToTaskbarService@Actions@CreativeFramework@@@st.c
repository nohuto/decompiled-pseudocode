/*
 * XREFs of ??$?0PEB_WPEB_WPEB_W@?$_Ref_count_obj@VPinWebsiteToTaskbarService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W00@Z @ 0x180090170
 * Callers:
 *     wil::details::functor_wrapper_other__lambda_a111f9909dcb1fbe287f852ebd02ec50__&_std::shared_ptr_CreativeFramework::Actions::PinWebsiteToTaskbarService___::Run @ 0x180090280 (wil--details--functor_wrapper_other__lambda_a111f9909dcb1fbe287f852ebd02ec50__-_std--shared_ptr_.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067CBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Ref_count_obj<CreativeFramework::Actions::PinWebsiteToTaskbarService>::_Ref_count_obj<CreativeFramework::Actions::PinWebsiteToTaskbarService>(
        __int64 a1,
        char **a2,
        char **a3,
        char **a4)
{
  _QWORD *v5; // r14
  char *v6; // rsi
  char *v7; // rbp
  char *v8; // rdx
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
  v5 = (_QWORD *)(a1 + 16);
  v6 = *a4;
  v7 = *a3;
  v8 = *a2;
  *(_QWORD *)(a1 + 16) = &CreativeFramework::Actions::PinWebsiteToTaskbarService::`vftable';
  v9 = (_QWORD *)(a1 + 24);
  v9[3] = 7LL;
  v10 = 0LL;
  v9[2] = 0LL;
  *(_WORD *)v9 = 0;
  v11 = -1LL;
  if ( *(_WORD *)v8 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)&v8[2 * v12] );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::assign(v9, v8, v12);
  v5[8] = 7LL;
  v5[7] = 0LL;
  *((_WORD *)v5 + 20) = 0;
  if ( *(_WORD *)v7 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)&v7[2 * v13] );
  }
  else
  {
    v13 = 0LL;
  }
  std::wstring::assign(v5 + 5, v7, v13);
  v5[12] = 7LL;
  v5[11] = 0LL;
  *((_WORD *)v5 + 36) = 0;
  if ( *(_WORD *)v6 )
  {
    do
      ++v11;
    while ( *(_WORD *)&v6[2 * v11] );
    v10 = v11;
  }
  std::wstring::assign(v5 + 9, v6, v10);
  return a1;
}
