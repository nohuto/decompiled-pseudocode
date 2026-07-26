/*
 * XREFs of WdmlibRtlInitUnicodeStringEx @ 0x1C0082694
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C0108D20 (PiRegStateReadStackCreationSettingsFromKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C0108EF0 (PpRegStateReadCreateClassCreationSettings.c)
 *     CmRegUtilCreateWstrKey @ 0x1C0109218 (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C01092D0 (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C01095D4 (CmRegUtilWstrValueGetDword.c)
 *     CmRegUtilWstrValueSetFullBuffer @ 0x1C0109604 (CmRegUtilWstrValueSetFullBuffer.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C0109658 (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall WdmlibRtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned __int16 v2; // r8
  unsigned __int64 v3; // rax
  NTSTATUS result; // eax
  unsigned __int16 v5; // ax

  v2 = 0;
  if ( SourceString )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( SourceString[v3] );
    if ( v3 > 0x7FFE )
      return -1073741562;
    v5 = 2 * v3;
    v2 = v5 + 2;
  }
  else
  {
    SourceString = 0LL;
    v5 = 0;
  }
  DestinationString->Length = v5;
  result = 0;
  DestinationString->MaximumLength = v2;
  DestinationString->Buffer = (wchar_t *)SourceString;
  return result;
}
