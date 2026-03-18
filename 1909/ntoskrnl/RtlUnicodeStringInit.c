/*
 * XREFs of RtlUnicodeStringInit @ 0x14027F434
 * Callers:
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
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
