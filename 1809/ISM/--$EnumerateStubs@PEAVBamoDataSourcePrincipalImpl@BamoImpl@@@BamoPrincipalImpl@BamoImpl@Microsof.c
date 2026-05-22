/*
 * XREFs of ??$EnumerateStubs@PEAVBamoDataSourcePrincipalImpl@BamoImpl@@@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@PEAVBamoDataSourcePrincipalImpl@1@@Z1@Z @ 0x18001D318
 * Callers:
 *     ?SetDragNDropContextualProcessor@BamoInputSystemPrincipal@@UEAAXPEAVBamoDragNDropContextualProcessorPrincipal@@@Z @ 0x18001B8E0 (-SetDragNDropContextualProcessor@BamoInputSystemPrincipal@@UEAAXPEAVBamoDragNDropContextualProce.c)
 *     ?SetEdgyControllerServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoEdgyControllerServerPrincipal@@@Z @ 0x18001B990 (-SetEdgyControllerServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoEdgyControllerServerPrincipal@@@.c)
 *     ?SetMagnifierServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoMagnifierServerPrincipal@@@Z @ 0x18001BA50 (-SetMagnifierServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoMagnifierServerPrincipal@@@Z.c)
 *     ?SetHeatGripService@BamoInputSystemPrincipal@@UEAAXPEAVBamoHeatGripServicePrincipal@@@Z @ 0x18001BB10 (-SetHeatGripService@BamoInputSystemPrincipal@@UEAAXPEAVBamoHeatGripServicePrincipal@@@Z.c)
 *     ?SetInputDeliveryServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z @ 0x18001BBD0 (-SetInputDeliveryServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z.c)
 *     ?SetInputSiteManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputSiteManagerPrincipal@@@Z @ 0x18001BC90 (-SetInputSiteManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputSiteManagerPrincipal@@@Z.c)
 *     ?SetControllerNavigationManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoControllerNavigationManagerPrincipal@@@Z @ 0x18001BD50 (-SetControllerNavigationManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoControllerNavigationManag.c)
 *     ?SetTestCommands@BamoInputSystemPrincipal@@UEAAXPEAVBamoTestCommandsPrincipal@@@Z @ 0x18001BE10 (-SetTestCommands@BamoInputSystemPrincipal@@UEAAXPEAVBamoTestCommandsPrincipal@@@Z.c)
 *     ?SetSystemCursorController@BamoInputSystemPrincipal@@UEAAXPEAVBamoSystemCursorControllerPrincipal@@@Z @ 0x18001BED0 (-SetSystemCursorController@BamoInputSystemPrincipal@@UEAAXPEAVBamoSystemCursorControllerPrincipa.c)
 *     ?BroadcastAddDataSource@BamoDataProviderPrincipal@@UEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x180098850 (-BroadcastAddDataSource@BamoDataProviderPrincipal@@UEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 *     ?BroadcastRemoveDataSource@BamoDataProviderPrincipal@@UEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x1800988E0 (-BroadcastRemoveDataSource@BamoDataProviderPrincipal@@UEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 *     ?SetUniqueId@BamoDataSourcePrincipal@@UEAAXAEBU_LUID@@@Z @ 0x180099800 (-SetUniqueId@BamoDataSourcePrincipal@@UEAAXAEBU_LUID@@@Z.c)
 *     ?SetRestrictToProcessId@BamoDataSourcePrincipal@@UEAAXI@Z @ 0x1800998C0 (-SetRestrictToProcessId@BamoDataSourcePrincipal@@UEAAXI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<BamoImpl::BamoDataSourcePrincipalImpl *>(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3)
{
  __int64 i; // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = *(_QWORD *)(a1 + 32); i; i = *(_QWORD *)(i + 48) )
  {
    if ( *(_BYTE *)(i + 32) )
    {
      v6 = a2(i, a3);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D7,
          (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
          (const char *)(unsigned int)v6);
        return v7;
      }
    }
  }
  return 0;
}
