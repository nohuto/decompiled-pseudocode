/*
 * XREFs of CmRegUtilWstrValueSetWstrString @ 0x1C029BEBC
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C017C328 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0021D8C (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C029BDA4 (CmRegUtilUcValueSetUcString.c)
 */

NTSTATUS __fastcall CmRegUtilWstrValueSetWstrString(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS result; // eax
  const WCHAR *v4; // r10
  void *v5; // r9
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v6.Length = 0LL;
  v6.Buffer = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&v6, a3);
  if ( result >= 0 )
  {
    result = WdmlibRtlInitUnicodeStringEx(&DestinationString, v4);
    if ( result >= 0 )
      return CmRegUtilUcValueSetUcString(v5, &DestinationString, &v6.Length);
  }
  return result;
}
