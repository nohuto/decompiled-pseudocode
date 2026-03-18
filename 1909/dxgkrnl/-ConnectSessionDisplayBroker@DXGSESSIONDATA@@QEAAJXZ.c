/*
 * XREFs of ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C00C870C
 * Callers:
 *     DxgkDispMgrOperation @ 0x1C00C8C40 (DxgkDispMgrOperation.c)
 * Callees:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0002294 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1C00C877C (-SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1C00C8824 (-EnsureConnected@DispBrokerClient@@AEAAJXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C010287C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DXGSESSIONDATA::ConnectSessionDisplayBroker(DXGSESSIONDATA *this)
{
  unsigned int **v1; // rsi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGGLOBAL *Global; // rax

  v1 = (unsigned int **)((char *)this + 18776);
  v3 = DispBrokerClient::EnsureConnected((DXGSESSIONDATA *)((char *)this + 18776));
  v7 = v3;
  if ( v3 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v14 + 24) = **v1;
    *(_QWORD *)(v14 + 32) = v7;
    WdLogEvent5_WdError(v14);
  }
  else
  {
    LODWORD(v7) = 0;
  }
  if ( (int)v7 < 0 )
  {
    DxgkLogCodePointPacketForSession(0x6Cu, *(unsigned int *)this, v7, 0, 0, 0LL);
    v18 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v18 + 24) = *(unsigned int *)this;
    *(_QWORD *)(v18 + 32) = (int)v7;
    WdLogEvent5_WdError(v18);
    return (unsigned int)v7;
  }
  else
  {
    v8 = DXGSESSIONDATA::SendCachedIddDisplayConfigRequest(this);
    v12 = v8;
    if ( v8 == -1073741749 )
    {
      v19 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v19 + 24) = *(unsigned int *)this;
      WdLogEvent5_WdWarning(v19);
    }
    else if ( v8 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
      v21 = *(unsigned int *)this;
      v20[5] = 0LL;
      v20[3] = v21;
      v20[4] = v12;
      WdLogEvent5_WdError(v20);
      Global = DXGGLOBAL::GetGlobal(v23, v22);
      DXGGLOBAL::IterateAdaptersWithCallback(
        Global,
        lambda_e7ca8b971ae1a22ae980baf136bd7096_::_lambda_invoker_cdecl_,
        this,
        4LL);
    }
    return 0LL;
  }
}
