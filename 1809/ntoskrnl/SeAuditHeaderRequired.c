/*
 * XREFs of SeAuditHeaderRequired @ 0x1400BC1D0
 * Callers:
 *     ObpAllocateObject @ 0x140645A60 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_14040D882 || byte_14040D883 || byte_14040D89A || byte_14040D89B);
}
