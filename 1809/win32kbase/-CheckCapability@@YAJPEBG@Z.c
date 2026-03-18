/*
 * XREFs of ?CheckCapability@@YAJPEBG@Z @ 0x1C00EC684
 * Callers:
 *     NtSetCursorInputSpace @ 0x1C00EDFA0 (NtSetCursorInputSpace.c)
 *     NtSetShellCursorState @ 0x1C00EE310 (NtSetShellCursorState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckCapability(const unsigned __int16 *a1)
{
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  const unsigned __int16 *v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  LOBYTE(v3) = 0;
  RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer");
  result = RtlCapabilityCheck(0LL, &DestinationString, &v3);
  if ( (int)result >= 0 && !(_BYTE)v3 )
    return 3221225506LL;
  return result;
}
