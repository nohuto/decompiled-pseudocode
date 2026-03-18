/*
 * XREFs of PopCapabilityCheck @ 0x1402F15F4
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x1408D1390 (RtlCapabilityCheck.c)
 */

char __fastcall PopCapabilityCheck(wchar_t *a1)
{
  wchar_t *v2; // rdx
  __int64 v3; // rcx
  __int16 v4; // ax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 )
  {
    *(_QWORD *)&SourceString.Length = 0LL;
    v2 = a1;
    SourceString.Buffer = 0LL;
    v3 = 0x7FFFLL;
    do
    {
      if ( !*v2 )
        break;
      ++v2;
      --v3;
    }
    while ( v3 );
    if ( v3 )
      v4 = 0x7FFF - v3;
    else
      v4 = 0;
    if ( v3 )
    {
      SourceString.Buffer = a1;
      SourceString.Length = 2 * v4;
      SourceString.MaximumLength = 2 * v4 + 2;
      RtlCapabilityCheck(0LL, &SourceString);
    }
  }
  return 0;
}
