/*
 * XREFs of DxgkIsVirtualizationDisabledForTarget @ 0x1C0148D00
 * Callers:
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00D12E0 (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00D8BF4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00F4750 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02C4C3C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C00D0100 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00F1710 (IsVirtualizationDisabledForTarget.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0128718 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 */

__int64 __fastcall DxgkIsVirtualizationDisabledForTarget(
        struct _LUID a1,
        __int64 a2,
        bool *a3,
        bool *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        _DWORD *a7)
{
  unsigned int v9; // esi
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  DXGADAPTER *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  int VideoOutputTechnology; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v29[8]; // [rsp+28h] [rbp-30h] BYREF
  DXGADAPTER *v30; // [rsp+30h] [rbp-28h]
  char v31; // [rsp+38h] [rbp-20h]
  LONG HighPart; // [rsp+64h] [rbp+Ch]

  HighPart = a1.HighPart;
  v9 = a2;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1, a2);
  v12 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v28);
  v16 = v12;
  if ( v12 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v12) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v26 + 24) = 8040LL;
      WdLogEvent5_WdAssertion(v26);
    }
    v30 = v16;
    v31 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
    DXGADAPTER::ReleaseReferenceNoTracking(v16);
    if ( *((_DWORD *)v16 + 44) == 1 )
    {
      if ( a5
        && (VideoOutputTechnology = DmmGetVideoOutputTechnology(v16, v9, a5, a6),
            v19 = VideoOutputTechnology,
            VideoOutputTechnology < 0) )
      {
        v27 = WdLogNewEntry5_WdError(v23, v22, v24);
        *(_QWORD *)(v27 + 24) = v16;
        *(_QWORD *)(v27 + 32) = v19;
        WdLogEvent5_WdError(v27);
      }
      else
      {
        if ( a7 )
          *a7 = DmmGetTargetUsage(v16, v9, 0LL);
        LODWORD(v19) = IsVirtualizationDisabledForTarget(v16, v9, a3, a4);
      }
    }
    else
    {
      LODWORD(v19) = -1073741130;
    }
    if ( v31 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
    return (unsigned int)v19;
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v25 + 24) = HighPart;
    *(_QWORD *)(v25 + 32) = a1.LowPart;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
}
