/*
 * XREFs of LoggingUtil::GetGroupSizeFromTab @ 0x1801DC860
 * Callers:
 *     ?Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801E69F4 (-Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShel.c)
 *     ?TabViewManagerAddVirtualTabToView@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EBCD4 (-TabViewManagerAddVirtualTabToView@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     LoggingUtil::GetTabGroupSize @ 0x1801DD3C0 (LoggingUtil--GetTabGroupSize.c)
 */

__int64 __fastcall LoggingUtil::GetGroupSizeFromTab(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 168LL))(a1, &v2) >= 0 )
    return LoggingUtil::GetTabGroupSize(v2);
  else
    return 0LL;
}
