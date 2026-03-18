/*
 * XREFs of ?DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C0056C74
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C0170900 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0172D54 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C01730CC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C017379C (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01739E4 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00016AC (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEAUDisplayIDObj@@AEAPEAU_DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK@@@Z @ 0x1C0056E5C (-DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEAUDisplayIDObj@@AEAPEAU_DISPLAYID_PRODUCT_IDEN.c)
 *     ?IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ @ 0x1C00570BC (-IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ.c)
 */

__int64 __fastcall DisplayID_GetProductCode(struct DisplayIDObj *a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  wchar_t *v4; // r10
  struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225485LL;
  v5 = 0LL;
  result = DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK(a1, &v5);
  if ( (int)result >= 0 )
  {
    if ( DisplayID_ProductId_Parser::IsValidBlock((DisplayID_ProductId_Parser *)&v5) )
      return RtlStringCchPrintfW(v4, 5LL, L"%04x", *(unsigned __int8 *)(v3 + 6) + (*(unsigned __int8 *)(v3 + 7) << 8));
    else
      return 3221225659LL;
  }
  return result;
}
