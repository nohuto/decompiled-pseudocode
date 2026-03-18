/*
 * XREFs of PopAvlGetPowerRequestKey @ 0x1405891B4
 * Callers:
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1405890BC (PopAvlFindOrMakeStatsForPowerRequest.c)
 * Callees:
 *     RtlInitString @ 0x140002070 (RtlInitString.c)
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     PsGetCurrentProcess @ 0x1400F1310 (PsGetCurrentProcess.c)
 *     PopUnicodeStringDeepCopy @ 0x140588974 (PopUnicodeStringDeepCopy.c)
 *     PopAnsiStringToUnicodeString @ 0x140588D18 (PopAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall PopAvlGetPowerRequestKey(__int64 a1, UNICODE_STRING *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  UNICODE_STRING *p_DestinationString; // rdx
  _KPROCESS *CurrentProcess; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 80);
  if ( *(_DWORD *)v3 )
  {
    CurrentProcess = PsGetCurrentProcess();
    RtlInitString((PSTRING)&DestinationString, (PCSZ)&CurrentProcess[1].ActiveProcessors.Bitmap[12]);
    return PopAnsiStringToUnicodeString(a2, (PCANSI_STRING)&DestinationString);
  }
  else
  {
    v5 = *(_QWORD *)(v3 + 8);
    if ( v5 && (v6 = *(_QWORD *)(v5 + 8)) != 0 )
    {
      p_DestinationString = (UNICODE_STRING *)(v6 + 56);
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, UNIDENTIFIED_DRIVER);
      p_DestinationString = &DestinationString;
    }
    return PopUnicodeStringDeepCopy(a2, p_DestinationString, a3, 0x54515750u);
  }
}
