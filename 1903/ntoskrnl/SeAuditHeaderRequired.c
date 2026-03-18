/*
 * XREFs of SeAuditHeaderRequired @ 0x14003A400
 * Callers:
 *     ObpAllocateObject @ 0x1405F2D60 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140435F80 || byte_140435F81 || byte_140435F98 || byte_140435F99);
}
