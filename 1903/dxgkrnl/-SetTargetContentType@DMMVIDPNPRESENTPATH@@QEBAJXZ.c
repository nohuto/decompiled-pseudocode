/*
 * XREFs of ?SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C02BF29C
 * Callers:
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02B5480 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003B14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiSetTargetContentType@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETCONTENTTYPE@@@Z @ 0x1C01FD728 (-DdiSetTargetContentType@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETCONTENTTYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetContentType(DMMVIDPNPRESENTPATH *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  DXGADAPTER **v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  const GUID *v14; // r8
  D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v23; // rax
  _DXGKARG_SETTARGETCONTENTTYPE v24; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v4 = *(_QWORD *)(v3 + 40);
  if ( !v4 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v5);
    v4 = *(_QWORD *)(v3 + 40);
  }
  v6 = *(_QWORD *)(v4 + 88);
  v7 = *(DXGADAPTER ***)(v6 + 8);
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
    v7 = *(DXGADAPTER ***)(v6 + 8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v7[2]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7[2] + 24) + 64LL) + 40LL);
  if ( *(_DWORD *)(v12 + 28) < 0x700Au )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v9);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v7, *(_DWORD *)(*((_QWORD *)this + 11) + 24LL)) )
    return 0LL;
  v24 = 0LL;
  v15 = *((_DWORD *)this + 41);
  v24.TargetId = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  v24.ContentType = v15;
  v16 = ADAPTER_DISPLAY::DdiSetTargetContentType((ADAPTER_DISPLAY *)v7, &v24, v14);
  v20 = v16;
  if ( v16 == -1073741637 )
  {
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v21 + 24) = this;
    *(_QWORD *)(v21 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v21);
    return 3221225659LL;
  }
  if ( v16 >= 0 )
    return 0LL;
  v23 = WdLogNewEntry5_WdError(v18, v17, v19);
  *(_QWORD *)(v23 + 24) = this;
  *(_QWORD *)(v23 + 32) = v20;
  WdLogEvent5_WdError(v23);
  return (unsigned int)v20;
}
