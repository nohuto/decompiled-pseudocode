/*
 * XREFs of DxgkReleaseAdapterOpmI2CSync @ 0x1C01C8474
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C004A5B4 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C004A7C0 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C004A980 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C013E690 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C027196C (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01C42F0 (-ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterOpmI2CSync(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  struct _KTHREAD **v5; // rcx

  if ( !a1 )
  {
    v2 = WdLogNewEntry5_WdError(0LL);
    v3 = -1073741811;
    *(_QWORD *)(v2 + 24) = -1073741811LL;
LABEL_3:
    WdLogEvent5_WdError(v2);
    return v3;
  }
  v5 = *(struct _KTHREAD ***)(a1 + 2520);
  if ( !v5 )
  {
    v2 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v2 + 24) = a1;
    v3 = -1073741637;
    *(_QWORD *)(v2 + 32) = -1073741637LL;
    goto LABEL_3;
  }
  ADAPTER_DISPLAY::ReleaseOpmI2CSync(v5);
  return 0LL;
}
