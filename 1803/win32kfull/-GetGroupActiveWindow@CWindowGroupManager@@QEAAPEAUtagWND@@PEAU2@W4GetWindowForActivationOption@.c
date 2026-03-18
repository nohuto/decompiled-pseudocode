/*
 * XREFs of ?GetGroupActiveWindow@CWindowGroupManager@@QEAAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@WindowGroupingWindowManagement@@@Z @ 0x1C01FCCD8
 * Callers:
 *     ?GetWindowForActivation@WindowGroupingWindowManagement@@YAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@1@@Z @ 0x1C006B5FC (-GetWindowForActivation@WindowGroupingWindowManagement@@YAPEAUtagWND@@PEAU2@W4GetWindowForActiva.c)
 * Callees:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_3212fd7ef511ca7df9e37cab43438ea4___ @ 0x1C01FC104 (CWindowGroupManager--_ExecuteGroupAction__lambda_3212fd7ef511ca7df9e37cab43438ea4___.c)
 */

__int64 __fastcall CWindowGroupManager::GetGroupActiveWindow(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 *v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a1;
  v3 = *(_DWORD *)(a2 + 280);
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
