/*
 * XREFs of DxgkNotifyDisplayChange @ 0x1C0277FD4
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C9B94 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0150AD0 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNotifyDisplayChange(__int64 a1, __int64 a2)
{
  char v2; // bl
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  void (__fastcall *v7)(__int64); // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx

  v2 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
    Current = (struct DXGPROCESS *)*((_QWORD *)Current + 12);
  if ( Current && (v7 = (void (__fastcall *)(__int64))*((_QWORD *)Current + 46)) != 0LL )
  {
    LOBYTE(v5) = v2;
    v7(v5);
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v9 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v11, v10);
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
}
