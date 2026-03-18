/*
 * XREFs of ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C01A6490
 * Callers:
 *     RawInputThread @ 0x1C001CA60 (RawInputThread.c)
 * Callees:
 *     _RegisterRawInputDevices @ 0x1C0059A48 (_RegisterRawInputDevices.c)
 *     ?ReadTabletButtonSettings@@YAXXZ @ 0x1C01A63F0 (-ReadTabletButtonSettings@@YAXXZ.c)
 */

void RegisterTabletButtonHandler(void)
{
  _DWORD v0[2]; // [rsp+20h] [rbp-18h] BYREF
  void (__fastcall *v1)(struct DEVICEINFO *); // [rsp+28h] [rbp-10h]

  v0[0] = 589825;
  v1 = TabletButtonHandler;
  v0[1] = 256;
  ReadTabletButtonSettings();
  RegisterRawInputDevices((__int64)v0, 1u, 1u);
}
