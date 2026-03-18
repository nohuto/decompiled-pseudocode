/*
 * XREFs of WdmlibRtlInitUnicodeStringEx @ 0x1C0021D3C
 * Callers:
 *     CmRegUtilWstrValueSetFullBuffer @ 0x1C0178350 (CmRegUtilWstrValueSetFullBuffer.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C0178538 (PpRegStateReadCreateClassCreationSettings.c)
 *     CmRegUtilCreateWstrKey @ 0x1C0178730 (CmRegUtilCreateWstrKey.c)
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C01789C0 (PiRegStateReadStackCreationSettingsFromKey.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C0178B88 (CmRegUtilWstrValueGetDword.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C0178C30 (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C029BAAC (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall WdmlibRtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned __int16 v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int16 v4; // ax
  NTSTATUS result; // eax

  v2 = 0;
  if ( !SourceString )
  {
    SourceString = 0LL;
    v4 = 0;
    goto LABEL_6;
  }
  v3 = -1LL;
  do
    ++v3;
  while ( SourceString[v3] );
  if ( v3 <= 0x7FFE )
  {
    v4 = 2 * v3;
    v2 = v4 + 2;
LABEL_6:
    DestinationString->Length = v4;
    result = 0;
    DestinationString->MaximumLength = v2;
    DestinationString->Buffer = (wchar_t *)SourceString;
    return result;
  }
  return -1073741562;
}
