/*
 * XREFs of DxgkReleaseAdapterOpmI2CSync @ 0x1C0151B00
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00519A4 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0051BC0 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0051D60 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C015109C (DpiPdoHandleOpmIoctls.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0153900 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0151B38 (-ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterOpmI2CSync(__int64 a1, __int64 a2, __int64 a3)
{
  ADAPTER_DISPLAY *v4; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx

  if ( a1 )
  {
    v4 = *(ADAPTER_DISPLAY **)(a1 + 2552);
    if ( v4 )
    {
      ADAPTER_DISPLAY::ReleaseOpmI2CSync(v4);
      return 0LL;
    }
    v6 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v6 + 24) = a1;
    v7 = -1073741637;
    *(_QWORD *)(v6 + 32) = -1073741637LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(0LL, a2, a3);
    v7 = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdError(v6);
  return v7;
}
