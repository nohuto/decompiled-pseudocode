/*
 * XREFs of ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1801C86C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801C88D0 (-CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801C8AA0 (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@@Z @ 0x1801C8CC0 (-FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$vector@V-$shared_ptr@UPeopl.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::ClosePeoplePane(PeoplePaneViewManager *this, const unsigned __int16 *a2)
{
  char *v3; // rsi
  PeoplePaneViewManager *v4; // rcx
  struct IApplicationView *v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  int ShareViewInfosByContactId; // eax
  PeoplePaneViewManager *v9; // rcx
  char *v10; // rsi
  __int64 v11; // rdx
  char *v12; // rdi
  struct IApplicationView *v13; // rdx
  char *i; // rdi
  std::_Ref_count_base *v15; // rcx
  __int128 v17; // [rsp+28h] [rbp-30h] BYREF
  char *v18; // [rsp+38h] [rbp-20h] BYREF
  __int128 v19; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v17 = 0LL;
  v3 = (char *)this - 88;
  if ( (int)PeoplePaneViewManager::FindPaneViewInfoByContactId((char *)this - 88, a2, &v17) >= 0 )
  {
    v5 = *(struct IApplicationView **)(v17 + 32);
    if ( v5 )
    {
      v6 = PeoplePaneViewManager::CloseView(v4, v5);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x193,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v6);
        goto LABEL_18;
      }
    }
  }
  v18 = 0LL;
  v19 = 0LL;
  ShareViewInfosByContactId = PeoplePaneViewManager::FindShareViewInfosByContactId(v3, a2, &v18);
  v7 = ShareViewInfosByContactId;
  v10 = v18;
  if ( ShareViewInfosByContactId >= 0 )
  {
    v12 = v18;
    if ( v18 == (char *)v19 )
    {
LABEL_11:
      v7 = 0;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v13 = *(struct IApplicationView **)(*(_QWORD *)v12 + 32LL);
      if ( v13 )
      {
        ShareViewInfosByContactId = PeoplePaneViewManager::CloseView(v9, v13);
        v7 = ShareViewInfosByContactId;
        if ( ShareViewInfosByContactId < 0 )
          break;
      }
      v12 += 16;
      if ( v12 == (char *)v19 )
        goto LABEL_11;
    }
    v11 = 414LL;
  }
  else
  {
    v11 = 409LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)ShareViewInfosByContactId);
LABEL_12:
  if ( v10 )
  {
    for ( i = v10; i != (char *)v19; i += 16 )
    {
      v15 = (std::_Ref_count_base *)*((_QWORD *)i + 1);
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
    }
    std::_Deallocate<16,0>(
      v10,
      (const struct std::nothrow_t *)((*((_QWORD *)&v19 + 1) - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL));
  }
LABEL_18:
  if ( *((_QWORD *)&v17 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v17 + 1));
  return v7;
}
