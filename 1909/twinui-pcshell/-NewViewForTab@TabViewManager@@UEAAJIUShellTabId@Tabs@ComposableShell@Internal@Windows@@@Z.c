/*
 * XREFs of ?NewViewForTab@TabViewManager@@UEAAJIUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180251A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabViewManager::NewViewForTab(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(__int64 **)(a1 + 1224);
  v4 = *v3;
  v6 = *a3;
  return (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *))(v4 + 48))(v3, a2, &v6);
}
