/*
 * XREFs of ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000EF5C
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000ED50 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C0129C74 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 *     ?RemoveCopyProtection@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C0183710 (-RemoveCopyProtection@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I.c)
 * Callees:
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000EFAC (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(DMMVIDPNPRESENTPATH *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  v3 = (int)a2;
  if ( (unsigned int)(a2 - 1) > 2 )
  {
    v6 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v6 + 24) = v3;
    WdLogEvent5_WdError(v6);
    v10 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
    v10[3] = v3;
    v10[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v10[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    WdLogEvent5_WdWarning(v10);
    return 3223192399LL;
  }
  else if ( DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(
              this,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)a2) )
  {
    *((_DWORD *)this + 43) = v3;
    return 0LL;
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v11[3] = v3;
    v11[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v11[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    WdLogEvent5_WdDmmEvent(v11);
    return 3223192326LL;
  }
}
