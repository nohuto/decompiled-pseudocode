/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x180082740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetTokenNamedObjectPath(HANDLE TokenHandle, PSID Sid, PUNICODE_STRING ObjectPath)
{
  return sub_18000BCF8(TokenHandle, 0LL, (_BYTE)Sid != 0, ObjectPath);
}
