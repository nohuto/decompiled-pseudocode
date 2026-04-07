/*
 * XREFs of ?IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x18007F738
 * Callers:
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180087000 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 * Callees:
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x18007F4C8 (-FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z.c)
 */

__int64 __fastcall CDesktopManager::IsMonitorVirtual(CDWMDXGIEnumeration **this, HMONITOR a2, bool *a3)
{
  int DxgiOutputDescriptor; // eax
  unsigned int v7; // ebx
  _BYTE v9[288]; // [rsp+20h] [rbp-128h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  *a3 = 0;
  memset_0(v9, 0, sizeof(v9));
  DxgiOutputDescriptor = CDWMDXGIEnumeration::FindDxgiOutputDescriptor(this[19], a2, (struct DXGIOutputInfo *)v9);
  v7 = DxgiOutputDescriptor;
  if ( DxgiOutputDescriptor >= 0 )
  {
    if ( v9[200] < 0 )
      *a3 = 1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD8C,
      (__int64)"windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)DxgiOutputDescriptor);
    return v7;
  }
}
