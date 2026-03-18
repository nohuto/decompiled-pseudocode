/*
 * XREFs of ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1C00A76F0
 * Callers:
 *     InitializeGre @ 0x1C0266080 (InitializeGre.c)
 * Callees:
 *     <none>
 */

void InitializeDefaultDCAttributes(void)
{
  dword_1C0214920 = 0;
  *(_DWORD *)&WPP_MAIN_CB.SectorSize = 0xFFFFFF;
  *(_DWORD *)(&WPP_MAIN_CB.Spare1 + 1) = 0xFFFFFF;
  WPP_MAIN_CB.Reserved = (PVOID)0xFFFFFF00FFFFFFLL;
  dword_1C0214924 = 0;
  *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = 0uLL;
  dword_1C0214890 = -1;
  dword_1C0214894 = -1;
  *(_OWORD *)((char *)&WPP_MAIN_CB.Dpc.DpcListEntry.Next + 4) = 0uLL;
  xmmword_1C0214904 = 0uLL;
  WPP_MAIN_CB.DeviceLock.Header.LockNV = 16;
  dword_1C0214860 = 1;
  dword_1C0214864 = 16843277;
  dword_1C0214870 = 2;
  dword_1C0214874 = 1;
  dword_1C0214878 = 1;
  dword_1C0214880 = 0;
  qword_1C02148A0 = 0LL;
  dword_1C02148F0 = 1;
  *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.Type = _xmm;
  *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 75;
  *(_OWORD *)((char *)&WPP_MAIN_CB.DeviceQueue.1 + 4) = _xmm;
  HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = 83;
  xmmword_1C02148F4 = _xmm;
  dword_1C0214914 = 99;
  dword_1C0214918 = 1098907648;
  dword_1C021491C = 1098907648;
  LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 1;
  qword_1C02148CC = 0x100000001LL;
  qword_1C02148DC = 0x100000001LL;
  dword_1C02148E4 = 6146;
  WPP_MAIN_CB.ActiveThreadCount = 1;
}
