/*
 * XREFs of PopAvlGetPowerRequestKey @ 0x14069F44C
 * Callers:
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14069F35C (PopAvlFindOrMakeStatsForPowerRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlInitString @ 0x1400EBCC0 (RtlInitString.c)
 *     PopUnicodeStringDeepCopy @ 0x14069DC34 (PopUnicodeStringDeepCopy.c)
 *     PopAnsiStringToUnicodeString @ 0x14069E0AC (PopAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall PopAvlGetPowerRequestKey(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v6; // rdx
  UNICODE_STRING *p_DestinationString; // rdx
  const WCHAR *v8; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  ANSI_STRING SourceString; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(v3 + 8);
  if ( *(_DWORD *)v3 )
  {
    if ( v4 )
    {
      RtlInitString(&SourceString, (PCSZ)(v4 + 1104));
      return PopAnsiStringToUnicodeString(a2, &SourceString);
    }
    v8 = UNIDENTIFIED_PROCESS;
    goto LABEL_9;
  }
  if ( !v4 || (v6 = *(_QWORD *)(v4 + 8)) == 0 )
  {
    v8 = UNIDENTIFIED_DRIVER;
LABEL_9:
    RtlInitUnicodeString(&DestinationString, v8);
    p_DestinationString = &DestinationString;
    return PopUnicodeStringDeepCopy(a2, p_DestinationString);
  }
  p_DestinationString = (UNICODE_STRING *)(v6 + 56);
  return PopUnicodeStringDeepCopy(a2, p_DestinationString);
}
