/*
 * XREFs of DxgkOpmCreateHandle @ 0x1C01C7E40
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C004A5B4 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C027196C (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C01C3948 (-OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpmCreateHandle(DXGADAPTER ***this, void *a2, void **a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  DXGADAPTER **v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rax

  if ( !this )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v6 + 24) = 865LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 866LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 867LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = this[315];
  if ( v10 )
  {
    if ( v10[26] != KeGetCurrentThread() )
    {
      v11 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v11 + 24) = 871LL;
      WdLogEvent5_WdAssertion(v11);
      v10 = this[315];
    }
    return ADAPTER_DISPLAY::OpmCreateHandle(v10, a2, a3);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v13);
    return 3221225659LL;
  }
}
