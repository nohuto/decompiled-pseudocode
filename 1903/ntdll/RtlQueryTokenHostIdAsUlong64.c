/*
 * XREFs of RtlQueryTokenHostIdAsUlong64 @ 0x180081780
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQuerySecurityAttributesToken @ 0x18009F150 (ZwQuerySecurityAttributesToken.c)
 */

NTSTATUS __cdecl RtlQueryTokenHostIdAsUlong64(HANDLE TokenHandle, PULONG64 HostId)
{
  NTSTATUS result; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp-348h] BYREF
  _BYTE Buffer[4]; // [rsp+38h] [rbp-340h] BYREF
  int v6; // [rsp+3Ch] [rbp-33Ch]
  __int64 v7; // [rsp+40h] [rbp-338h]

  result = ZwQuerySecurityAttributesToken(
             TokenHandle,
             (PUNICODE_STRING)&stru_180118898,
             1u,
             Buffer,
             0x330u,
             &ReturnLength);
  if ( result >= 0 )
  {
    if ( v6 )
    {
      *HostId = **(_QWORD **)(v7 + 32);
      return 0;
    }
    else
    {
      return -1073741275;
    }
  }
  return result;
}
