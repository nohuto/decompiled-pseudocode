/*
 * XREFs of ?GetGroupActiveWindow@CWindowGroupManager@@QEAAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@WindowGroupingWindowManagement@@@Z @ 0x1C0225730
 * Callers:
 *     _lambda_0d160d279100fee8fb6f37f20079cc99_::_lambda_invoker_cdecl_ @ 0x1C0009CD0 (_lambda_0d160d279100fee8fb6f37f20079cc99_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_3212fd7ef511ca7df9e37cab43438ea4___ @ 0x1C0224B84 (CWindowGroupManager--_ExecuteGroupAction__lambda_3212fd7ef511ca7df9e37cab43438ea4___.c)
 */

__int64 __fastcall CWindowGroupManager::GetGroupActiveWindow(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 *v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a1;
  v3 = *(_DWORD *)(a2 + 292);
  v6 = 0LL;
  v7 = v3;
  v5[0] = (__int64 *)a2;
  v5[1] = &v6;
  CWindowGroupManager::_ExecuteGroupAction__lambda_3212fd7ef511ca7df9e37cab43438ea4___(
    (__int64)`anonymous namespace'::g_windowGroupManager,
    &v7,
    v5);
  return v6;
}
