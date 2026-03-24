/*
 * XREFs of SeAuditHeaderRequired @ 0x1400BC1F0
 * Callers:
 *     ObpAllocateObject @ 0x140645A40 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_14040D822 || byte_14040D823 || byte_14040D83A || byte_14040D83B);
}
