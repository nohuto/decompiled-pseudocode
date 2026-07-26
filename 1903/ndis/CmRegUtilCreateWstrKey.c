/*
 * XREFs of CmRegUtilCreateWstrKey @ 0x1C01293EC
 * Callers:
 *     PiRegStateOpenClassKey @ 0x1C0128D48 (PiRegStateOpenClassKey.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1C0129224 (PpRegStateUpdateStackCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C002CDD8 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilCreateUcKey @ 0x1C012934C (CmRegUtilCreateUcKey.c)
 */

NTSTATUS __fastcall CmRegUtilCreateWstrKey(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        HANDLE KeyHandle,
        ULONG *a6,
        _QWORD *a7)
{
  NTSTATUS result; // eax
  __int64 v8; // r8
  void *v9; // r9
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return CmRegUtilCreateUcKey(v9, &DestinationString, v8, (ULONG)v9, KeyHandle, a6, a7);
  return result;
}
