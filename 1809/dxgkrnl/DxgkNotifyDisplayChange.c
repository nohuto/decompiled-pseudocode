/*
 * XREFs of DxgkNotifyDisplayChange @ 0x1C0242B84
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D4904 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C013EC74 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNotifyDisplayChange(char a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rcx
  void (__fastcall *v4)(__int64); // rax
  __int64 v6; // rbx
  __int64 v7; // rcx

  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    Current = (struct DXGPROCESS *)*((_QWORD *)Current + 13);
  if ( Current && (v4 = (void (__fastcall *)(__int64))*((_QWORD *)Current + 47)) != 0LL )
  {
    LOBYTE(v3) = a1;
    v4(v3);
    return 0LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v6 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v7);
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
}
