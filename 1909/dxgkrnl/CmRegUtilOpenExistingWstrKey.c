/*
 * XREFs of CmRegUtilOpenExistingWstrKey @ 0x1C017CA20
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C017C328 (PpRegStateReadCreateClassCreationSettings.c)
 *     PiRegStateOpenClassKey @ 0x1C017C620 (PiRegStateOpenClassKey.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0021D8C (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilOpenExistingUcKey @ 0x1C017CA60 (CmRegUtilOpenExistingUcKey.c)
 */

NTSTATUS __fastcall CmRegUtilOpenExistingWstrKey(__int64 a1, const WCHAR *a2)
{
  NTSTATUS result; // eax
  unsigned int v3; // r10d
  __int64 v4; // r11
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return CmRegUtilOpenExistingUcKey(v4, &DestinationString, v3);
  return result;
}
