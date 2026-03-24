/*
 * XREFs of TtmpCalloutCreateWatchdog @ 0x14087DC88
 * Callers:
 *     TtmpStartCallout @ 0x14087E5E0 (TtmpStartCallout.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 */

NTSTATUS __fastcall TtmpCalloutCreateWatchdog(__int64 a1)
{
  _DWORD InputBuffer[26]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a1 )
    return -1073741670;
  memset(InputBuffer, 0, 0x60uLL);
  InputBuffer[0] = 21;
  return NtPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, (PVOID)(a1 + 24), 8u);
}
