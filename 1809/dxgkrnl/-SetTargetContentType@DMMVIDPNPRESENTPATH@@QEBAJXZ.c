/*
 * XREFs of ?SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C0286F2C
 * Callers:
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C027D1F4 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiSetTargetContentType@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETCONTENTTYPE@@@Z @ 0x1C01CF530 (-DdiSetTargetContentType@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETCONTENTTYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetContentType(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  DXGADAPTER **v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  const GUID *v12; // r8
  D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v21; // rax
  _DXGKARG_SETTARGETCONTENTTYPE v22; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
    v3 = *(_QWORD *)(v2 + 40);
  }
  v5 = *(_QWORD *)(v3 + 88);
  v6 = *(DXGADAPTER ***)(v5 + 8);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
    v6 = *(DXGADAPTER ***)(v5 + 8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6[2] + 24) + 64LL) + 40LL);
  if ( *(_DWORD *)(v10 + 28) < 0x700Au )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v6, *(_DWORD *)(*((_QWORD *)this + 11) + 24LL)) )
    return 0LL;
  v13 = *((_DWORD *)this + 41);
  v22.TargetId = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  v22.ContentType = v13;
  v14 = ADAPTER_DISPLAY::DdiSetTargetContentType((ADAPTER_DISPLAY *)v6, &v22, v12);
  v18 = v14;
  if ( v14 == -1073741637 )
  {
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v19);
    return 3221225659LL;
  }
  if ( v14 >= 0 )
    return 0LL;
  v21 = WdLogNewEntry5_WdError(v16);
  *(_QWORD *)(v21 + 24) = this;
  *(_QWORD *)(v21 + 32) = v18;
  WdLogEvent5_WdError(v21);
  return (unsigned int)v18;
}
