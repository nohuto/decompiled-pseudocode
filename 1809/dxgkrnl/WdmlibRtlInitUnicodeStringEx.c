/*
 * XREFs of WdmlibRtlInitUnicodeStringEx @ 0x1C001F7A8
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C0157C64 (PpRegStateReadCreateClassCreationSettings.c)
 *     CmRegUtilWstrValueSetFullBuffer @ 0x1C0157E58 (CmRegUtilWstrValueSetFullBuffer.c)
 *     CmRegUtilCreateWstrKey @ 0x1C0157EAC (CmRegUtilCreateWstrKey.c)
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C0157FA8 (PiRegStateReadStackCreationSettingsFromKey.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C01582CC (CmRegUtilWstrValueGetDword.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C0158368 (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C02620B8 (CmRegUtilWstrValueSetWstrString.c)
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
