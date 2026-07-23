/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x1408950F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetTokenNamedObjectPath @ 0x14089600C (RtlpGetTokenNamedObjectPath.c)
 */

NTSTATUS __cdecl RtlGetTokenNamedObjectPath(HANDLE TokenHandle, PSID Sid, PUNICODE_STRING ObjectPath)
{
  return RtlpGetTokenNamedObjectPath(TokenHandle, 0LL);
}
