/*
 * XREFs of PopCadTriggerDriverLoad @ 0x1408B6064
 * Callers:
 *     PopBatteryAdd @ 0x1408A9080 (PopBatteryAdd.c)
 *     PopCadHpmiPnpNotification @ 0x1408B6000 (PopCadHpmiPnpNotification.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwLoadDriver @ 0x1401C2C50 (ZwLoadDriver.c)
 */

NTSTATUS __fastcall PopCadTriggerDriverLoad(unsigned int a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  _m_prefetchw(&PopCadLoadReason);
  result = _InterlockedOr(&PopCadLoadReason, a1);
  if ( !result )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\CAD");
    return ZwLoadDriver(&DestinationString);
  }
  return result;
}
