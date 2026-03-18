/*
 * XREFs of NtUserGetListBoxInfo @ 0x1C022D660
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetListBoxInfo @ 0x1C02451D8 (xxxGetListBoxInfo.c)
 */

__int64 __fastcall NtUserGetListBoxInfo(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int ListBoxInfo; // ebx
  ULONG_PTR v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  ListBoxInfo = 0;
  v5 = v2;
  if ( v2 )
  {
    v10 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v10;
    v11 = v2;
    HMLockObject(v2);
    ListBoxInfo = xxxGetListBoxInfo(v5);
    ThreadUnlock1(v7, v6, v8);
  }
  UserSessionSwitchLeaveCrit(v3);
  return ListBoxInfo;
}
