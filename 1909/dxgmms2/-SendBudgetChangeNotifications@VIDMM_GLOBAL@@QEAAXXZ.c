/*
 * XREFs of ?SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00C3A8C
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0088B00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 */

void __fastcall VIDMM_GLOBAL::SendBudgetChangeNotifications(VIDMM_GLOBAL *this)
{
  int updated; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD v7[8]; // [rsp+40h] [rbp-58h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[0] = *(_QWORD *)(*((_QWORD *)this + 3) + 276LL);
  updated = ZwUpdateWnfStateData(&WNF_DX_VIDMM_BUDGETCHANGE_NOTIFICATION, v7, 64LL);
  v5 = updated;
  if ( updated < 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdAssertion(v6);
  }
}
