/*
 * XREFs of TtmpCalloutCreateWatchdog @ 0x1408BB05C
 * Callers:
 *     TtmpStartCallout @ 0x1408BB9D0 (TtmpStartCallout.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 */

NTSTATUS __fastcall TtmpCalloutCreateWatchdog(__int64 a1)
{
  _DWORD InputBuffer[26]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a1 )
    return -1073741670;
  memset(&InputBuffer[1], 0, 0x5CuLL);
  InputBuffer[0] = 21;
  return NtPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, (PVOID)(a1 + 24), 8u);
}
