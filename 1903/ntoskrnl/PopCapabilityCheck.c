/*
 * XREFs of PopCapabilityCheck @ 0x1402F1894
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x1408D1A90 (RtlCapabilityCheck.c)
 */

BOOLEAN __fastcall PopCapabilityCheck(wchar_t *a1)
{
  char v1; // bl
  wchar_t *v3; // rdx
  __int64 v4; // rcx
  __int16 v5; // ax
  NTSTATUS v6; // eax
  BOOLEAN v7; // cl
  UNICODE_STRING CapabilityName; // [rsp+20h] [rbp-18h] BYREF
  BOOLEAN HasCapability; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  HasCapability = 0;
  if ( a1 )
  {
    *(_QWORD *)&CapabilityName.Length = 0LL;
    v3 = a1;
    CapabilityName.Buffer = 0LL;
    v4 = 0x7FFFLL;
    do
    {
      if ( !*v3 )
        break;
      ++v3;
      --v4;
    }
    while ( v4 );
    v5 = v4 ? 0x7FFF - v4 : 0;
    if ( v4 )
    {
      CapabilityName.Buffer = a1;
      CapabilityName.Length = 2 * v5;
      CapabilityName.MaximumLength = 2 * v5 + 2;
      v6 = RtlCapabilityCheck(0LL, &CapabilityName, &HasCapability);
      v7 = HasCapability;
      if ( v6 < 0 )
        return 0;
      return v7;
    }
  }
  return v1;
}
