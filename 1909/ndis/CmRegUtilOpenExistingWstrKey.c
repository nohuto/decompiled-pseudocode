/*
 * XREFs of CmRegUtilOpenExistingWstrKey @ 0x1C01294B8
 * Callers:
 *     PiRegStateOpenClassKey @ 0x1C0128D48 (PiRegStateOpenClassKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C01290C4 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C002CDC8 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilOpenExistingUcKey @ 0x1C012944C (CmRegUtilOpenExistingUcKey.c)
 */

int __fastcall CmRegUtilOpenExistingWstrKey(__int64 a1, const WCHAR *a2)
{
  int result; // eax
  _QWORD *v3; // r9
  ACCESS_MASK v4; // r10d
  void *v5; // r11
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return CmRegUtilOpenExistingUcKey(v5, &DestinationString, v4, v3);
  return result;
}
