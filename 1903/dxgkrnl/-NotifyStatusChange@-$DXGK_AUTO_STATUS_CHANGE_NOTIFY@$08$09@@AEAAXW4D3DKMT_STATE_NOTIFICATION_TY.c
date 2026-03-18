/*
 * XREFs of ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0001C98
 * Callers:
 *     ??1?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@QEAA@XZ @ 0x1C00451E4 (--1-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@QEAA@XZ.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C9B94 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     DxgkGetPathsModality @ 0x1C00D6780 (DxgkGetPathsModality.c)
 * Callees:
 *     DxgkStatusChangeNotify @ 0x1C00CBEA0 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(__int64 *a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  _DWORD v4[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  v4[0] = a2;
  v4[1] = 0;
  v5 = *a1;
  result = DxgkStatusChangeNotify(v4);
  if ( (int)result < 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v3 + 24) = 1518LL;
    return WdLogEvent5_WdAssertion(v3);
  }
  return result;
}
