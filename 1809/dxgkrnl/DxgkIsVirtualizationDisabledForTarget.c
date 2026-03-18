/*
 * XREFs of DxgkIsVirtualizationDisabledForTarget @ 0x1C00C2320
 * Callers:
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00BF6E4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00CE7D0 (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00DDBB0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C028C3AC (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00C2428 (IsVirtualizationDisabledForTarget.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00C25BC (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C00E4368 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 */

__int64 __fastcall DxgkIsVirtualizationDisabledForTarget(
        struct _LUID a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        _DWORD *a7)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v10; // rax
  __int64 v11; // rcx
  DXGADAPTER *v12; // rdi
  __int64 v13; // rcx
  int VideoOutputTechnology; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v22[8]; // [rsp+28h] [rbp-30h] BYREF
  DXGADAPTER *v23; // [rsp+30h] [rbp-28h]
  char v24; // [rsp+38h] [rbp-20h]
  LONG HighPart; // [rsp+64h] [rbp+Ch]

  HighPart = a1.HighPart;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1);
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v21);
  v12 = v10;
  if ( v10 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v10) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v19 + 24) = 7854LL;
      WdLogEvent5_WdAssertion(v19);
    }
    v23 = v12;
    v24 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
    DXGADAPTER::ReleaseReference(v12);
    if ( *((_DWORD *)v12 + 44) == 1 )
    {
      if ( a5
        && (VideoOutputTechnology = DmmGetVideoOutputTechnology(v12, a2, a5, a6),
            v16 = VideoOutputTechnology,
            VideoOutputTechnology < 0) )
      {
        v20 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v20 + 24) = v12;
        *(_QWORD *)(v20 + 32) = v16;
        WdLogEvent5_WdError(v20);
      }
      else
      {
        if ( a7 )
          *a7 = DmmGetTargetUsage(v12, a2, 0LL);
        LODWORD(v16) = IsVirtualizationDisabledForTarget(v12, a2);
      }
    }
    else
    {
      LODWORD(v16) = -1073741130;
    }
    if ( v24 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
    return (unsigned int)v16;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v18 + 24) = HighPart;
    *(_QWORD *)(v18 + 32) = a1.LowPart;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
}
