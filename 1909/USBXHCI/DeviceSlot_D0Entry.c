/*
 * XREFs of DeviceSlot_D0Entry @ 0x1C0015B1C
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C000B5C4 (WPP_RECORDER_SF_qd.c)
 *     DeviceSlot_Initialize @ 0x1C0015CA0 (DeviceSlot_Initialize.c)
 */

__int64 __fastcall DeviceSlot_D0Entry(__int64 a1, int a2)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      0xAu,
      0xDu,
      (__int64)(&Context.EnableBitsCount + 1),
      a1,
      a2);
  return DeviceSlot_Initialize(a1);
}
