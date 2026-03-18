/*
 * XREFs of CmRegUtilCreateWstrKey @ 0x1C017C520
 * Callers:
 *     PpRegStateUpdateStackCreationSettings @ 0x1C017C018 (PpRegStateUpdateStackCreationSettings.c)
 *     PiRegStateOpenClassKey @ 0x1C017C620 (PiRegStateOpenClassKey.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0021D8C (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilCreateUcKey @ 0x1C017C580 (CmRegUtilCreateUcKey.c)
 */

NTSTATUS __fastcall CmRegUtilCreateWstrKey(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        void *KeyHandle,
        __int64 a6,
        __int64 a7)
{
  NTSTATUS result; // eax
  int v8; // r8d
  int v9; // r9d
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return CmRegUtilCreateUcKey(v9, (int)&DestinationString, v8, v9, KeyHandle, a6, a7);
  return result;
}
