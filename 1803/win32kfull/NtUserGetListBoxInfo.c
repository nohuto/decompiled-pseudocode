/*
 * XREFs of NtUserGetListBoxInfo @ 0x1C01EF220
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetListBoxInfo @ 0x1C02036D0 (xxxGetListBoxInfo.c)
 */

__int64 __fastcall NtUserGetListBoxInfo(__int64 a1)
{
  ULONG_PTR v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int ListBoxInfo; // ebx
  ULONG_PTR v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  ListBoxInfo = 0;
  v7 = v2;
  if ( v2 )
  {
    v12[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v12;
    v12[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    ListBoxInfo = xxxGetListBoxInfo(v2);
    ThreadUnlock1(v9, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v3, v7, v4, v5);
  return ListBoxInfo;
}
