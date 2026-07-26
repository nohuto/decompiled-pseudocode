/*
 * XREFs of CmRegUtilWstrValueSetWstrString @ 0x1C012986C
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C01290C4 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C002CDC8 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C01296B8 (CmRegUtilUcValueSetUcString.c)
 */

NTSTATUS __fastcall CmRegUtilWstrValueSetWstrString(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS result; // eax
  const WCHAR *v4; // r10
  void *v5; // r9
  _UNICODE_STRING v6; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

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
