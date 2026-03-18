/*
 * XREFs of ?DisplayID_GetSerialNumber@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C0050318
 * Callers:
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00B46DC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C013E8B4 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0297514 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 * Callees:
 *     ?DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEAUDisplayIDObj@@AEAPEAU_DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK@@@Z @ 0x1C0050488 (-DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEAUDisplayIDObj@@AEAPEAU_DISPLAYID_PRODUCT_IDEN.c)
 *     ?IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ @ 0x1C00506E8 (-IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0050708 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall DisplayID_GetSerialNumber(struct DisplayIDObj *a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  unsigned __int8 *v3; // rdx
  wchar_t *v4; // r10
  struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225485LL;
  v5 = 0LL;
  result = DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK(a1, &v5);
  if ( (int)result >= 0 )
  {
    if ( DisplayID_ProductId_Parser::IsValidBlock((DisplayID_ProductId_Parser *)&v5) )
      return RtlStringCchPrintfW(v4, 9uLL, L"%08x", v3[8] + ((v3[9] + ((v3[10] + (v3[11] << 8)) << 8)) << 8));
    else
      return 3221225659LL;
  }
  return result;
}
