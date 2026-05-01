/*
 * XREFs of LoggingUtil::GetTabIsSelected @ 0x18024FFC8
 * Callers:
 *     ?InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTabGroup@5678@@Z @ 0x18025117C (-InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasu.c)
 *     ?TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@I@Z @ 0x18025D84C (-TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationVi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall LoggingUtil::GetTabIsSelected(__int64 a1)
{
  char v1; // bl
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 && (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 176LL))(a1, &v3) >= 0 )
    return v3 != 0;
  return v1;
}
