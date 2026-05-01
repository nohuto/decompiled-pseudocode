/*
 * XREFs of ?PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x180242000
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindPendingShareViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18023F994 (-FindPendingShareViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePan.c)
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x180240878 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::PeopleShareViewReady(RTL_SRWLOCK *this, unsigned __int16 *a2, int a3)
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  _OWORD v8[2]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8[0] = 0LL;
  v4 = this - 11;
  if ( (int)PeoplePaneViewManager::FindPendingShareViewInfoByContactId(this - 11, a2, v8) < 0
    || (v5 = PeoplePaneViewManager::HandleViewReady(v4, a3, (__int64 ***)v8), v6 = v5, v5 >= 0) )
  {
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CE,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( *((_QWORD *)&v8[0] + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v8[0] + 1));
  return v6;
}
