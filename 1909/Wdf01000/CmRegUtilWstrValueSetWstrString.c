/*
 * XREFs of CmRegUtilWstrValueSetWstrString @ 0x1C00C9B0C
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00C927C (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C00932CC (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C00C9958 (CmRegUtilUcValueSetUcString.c)
 */

__int64 __fastcall CmRegUtilWstrValueSetWstrString(void *KeyHandle, wchar_t *ValueName, wchar_t *ValueData)
{
  __int64 result; // rax
  wchar_t *v4; // r10
  void *v5; // r9
  _UNICODE_STRING valueString; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING unicodeStringValueName; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&unicodeStringValueName.Length = 0LL;
  unicodeStringValueName.Buffer = 0LL;
  *(_QWORD *)&valueString.Length = 0LL;
  valueString.Buffer = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&valueString, ValueData);
  if ( (int)result >= 0 )
  {
    result = WdmlibRtlInitUnicodeStringEx(&unicodeStringValueName, v4);
    if ( (int)result >= 0 )
      return CmRegUtilUcValueSetUcString(v5, &unicodeStringValueName, &valueString);
  }
  return result;
}
