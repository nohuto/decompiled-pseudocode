/*
 * XREFs of LoggingUtil::GetGroupSizeFromTab @ 0x18022FDAC
 * Callers:
 *     ?Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180239384 (-Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShel.c)
 *     ?TabViewManagerAddVirtualTabToView@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18023DFCC (-TabViewManagerAddVirtualTabToView@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     LoggingUtil::GetTabGroupSize @ 0x1802309A0 (LoggingUtil--GetTabGroupSize.c)
 */

__int64 __fastcall LoggingUtil::GetGroupSizeFromTab(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 168LL))(a1, &v2) >= 0 )
    return LoggingUtil::GetTabGroupSize(v2);
  else
    return 0LL;
}
