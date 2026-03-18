/*
 * XREFs of CmRegUtilWstrValueGetDword @ 0x1C017C978
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C017C7B0 (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0021D8C (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilUcValueGetDword @ 0x1C017C9B4 (CmRegUtilUcValueGetDword.c)
 */

NTSTATUS __fastcall CmRegUtilWstrValueGetDword(__int64 a1, const WCHAR *a2)
{
  NTSTATUS result; // eax
  __int64 v3; // r10
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return CmRegUtilUcValueGetDword(v3, &DestinationString);
  return result;
}
