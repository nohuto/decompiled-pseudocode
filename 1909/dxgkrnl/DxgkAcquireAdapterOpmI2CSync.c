/*
 * XREFs of DxgkAcquireAdapterOpmI2CSync @ 0x1C0155A50
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00519E4 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0051C00 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0051DA0 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C0154F5C (DpiPdoHandleOpmIoctls.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C01577C0 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkAcquireAdapterOpmI2CSync(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax

  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL, a2, a3);
    v7 = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
LABEL_8:
    WdLogEvent5_WdError(v6);
    return v7;
  }
  v4 = *(_QWORD *)(a1 + 2552);
  if ( !v4 )
  {
    v6 = WdLogNewEntry5_WdError(a1, a2, a3);
    v7 = -1073741637;
    *(_QWORD *)(v6 + 24) = a1;
    *(_QWORD *)(v6 + 32) = -1073741637LL;
    goto LABEL_8;
  }
  if ( *(struct _KTHREAD **)(v4 + 320) == KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v8 + 24) = 3812LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v4 + 304));
  return 0LL;
}
