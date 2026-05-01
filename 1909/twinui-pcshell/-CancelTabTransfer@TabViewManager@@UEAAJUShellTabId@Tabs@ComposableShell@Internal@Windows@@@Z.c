/*
 * XREFs of ?CancelTabTransfer@TabViewManager@@UEAAJUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18024C1A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabViewManager::CancelTabTransfer(__int64 a1, __int128 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(__int64 **)(a1 + 1224);
  v3 = *v2;
  v5 = *a2;
  return (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v3 + 72))(v2, &v5);
}
