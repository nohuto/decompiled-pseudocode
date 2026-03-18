/*
 * XREFs of RtlUnicodeStringInit @ 0x1C002D990
 * Callers:
 *     HUBREG_ValidateAndPopulateEndpointPriorities @ 0x1C002DE04 (HUBREG_ValidateAndPopulateEndpointPriorities.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C0072CE8 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 *     HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x1C0077780 (HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringInit(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS result; // eax
  __int64 v3; // r9
  NTSTRSAFE_PCWSTR v4; // rax
  __int16 v5; // r8
  unsigned __int16 v6; // r8

  *(_QWORD *)&DestinationString->Length = 0LL;
  result = 0;
  DestinationString->Buffer = 0LL;
  if ( pszSrc )
  {
    v3 = 0x7FFFLL;
    v4 = pszSrc;
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v3;
    }
    while ( v3 );
    result = v3 == 0 ? 0xC000000D : 0;
    if ( v3 )
      v5 = 0x7FFF - v3;
    else
      v5 = 0;
    if ( v3 )
    {
      if ( DestinationString )
      {
        v6 = 2 * v5;
        DestinationString->Buffer = (wchar_t *)pszSrc;
        DestinationString->Length = v6;
        DestinationString->MaximumLength = v6 + 2;
      }
      else
      {
        return -1073741811;
      }
    }
  }
  return result;
}
