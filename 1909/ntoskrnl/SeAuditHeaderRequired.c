/*
 * XREFs of SeAuditHeaderRequired @ 0x14003A800
 * Callers:
 *     ObpAllocateObject @ 0x1405F36C0 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140435F00 || byte_140435F01 || byte_140435F18 || byte_140435F19);
}
