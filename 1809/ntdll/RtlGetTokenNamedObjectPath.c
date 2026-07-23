/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x18004CA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetTokenNamedObjectPath(HANDLE TokenHandle, PSID Sid, PUNICODE_STRING ObjectPath)
{
  return RtlpGetTokenNamedObjectPath(TokenHandle, 0LL, (_BYTE)Sid != 0, ObjectPath);
}
