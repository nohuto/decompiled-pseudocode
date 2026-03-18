/*
 * XREFs of ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C02BF0E0
 * Callers:
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C00CF030 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003B14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C0055738 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ?DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTION@@@Z @ 0x1C01FD444 (-DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTI.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(DMMVIDPNPRESENTPATH *this, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  DXGADAPTER **v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  const GUID *v15; // r8
  D3DDDI_VIDEO_PRESENT_TARGET_ID v16; // ecx
  D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v25; // rax
  _DXGKARG_SETTARGETANALOGCOPYPROTECTION v26; // [rsp+20h] [rbp-28h] BYREF

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
  v16 = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  v26.CopyProtectionSupport = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)*((_DWORD *)this + 42);
  v17 = *((_DWORD *)this + 43);
  v26.TargetId = v16;
  v26.CopyProtectionType = v17;
  if ( v17 == D3DKMDT_VPPMT_MACROVISION_APSTRIGGER )
    v26.APSTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits(this, v14);
  else
    v26.APSTriggerBits = 0;
  v18 = ADAPTER_DISPLAY::DdiSetTargetAnalogCopyProtection((ADAPTER_DISPLAY *)v7, &v26, v15);
  v22 = v18;
  if ( v18 == -1073741637 )
  {
    v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v23 + 24) = this;
    *(_QWORD *)(v23 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v23);
    return 3221225659LL;
  }
  if ( v18 >= 0 )
    return 0LL;
  v25 = WdLogNewEntry5_WdError(v20, v19, v21);
  *(_QWORD *)(v25 + 24) = this;
  *(_QWORD *)(v25 + 32) = v22;
  WdLogEvent5_WdError(v25);
  return (unsigned int)v22;
}
