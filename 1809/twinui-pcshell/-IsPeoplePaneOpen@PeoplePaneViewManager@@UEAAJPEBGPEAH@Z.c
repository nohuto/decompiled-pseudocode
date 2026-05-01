/*
 * XREFs of ?IsPeoplePaneOpen@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x1801C9D50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801C8AA0 (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 */

__int64 __fastcall PeoplePaneViewManager::IsPeoplePaneOpen(RTL_SRWLOCK *this, unsigned __int16 *a2, int *a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  std::_Ref_count_base *v7[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_OWORD *)v7 = 0LL;
  if ( (int)PeoplePaneViewManager::FindPaneViewInfoByContactId(this - 11, a2, v7) >= 0 && *((_QWORD *)v7[0] + 4) )
  {
    if ( *((_DWORD *)v7[0] + 15) )
    {
      v4 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AA,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)0x80070057LL);
      goto LABEL_8;
    }
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  *a3 = v5;
  v4 = 0;
LABEL_8:
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
  return v4;
}
