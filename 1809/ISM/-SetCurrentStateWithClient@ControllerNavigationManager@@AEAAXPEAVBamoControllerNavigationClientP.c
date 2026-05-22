/*
 * XREFs of ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x1800309E4
 * Callers:
 *     ?OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ @ 0x18002AFF0 (-OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ.c)
 *     ?RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationClientProxy@@@Z @ 0x180030870 (-RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVB.c)
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180053A30 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ?EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x1800305F8 (-EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x180030728 (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ControllerNavigationManager::SetCurrentStateWithClient(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationClientProxy *a2)
{
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 32LL))((char *)a2 + 8) )
    ControllerNavigationManager::EnableNavigation(this, a2);
  else
    ControllerNavigationManager::DisableNavigation(this);
}
