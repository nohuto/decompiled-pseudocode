/*
 * XREFs of Command_D0Entry @ 0x1C00095AC
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     Command_Initialize @ 0x1C000A1EC (Command_Initialize.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000B5C4 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall Command_D0Entry(__int64 a1, int a2)
{
  char v4; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(a1 + 16),
      a2,
      7,
      16,
      (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
      a1,
      v4);
  }
  Command_Initialize(a1);
  return 0LL;
}
