/*
 * XREFs of SeAuditHeaderRequired @ 0x1400BC130
 * Callers:
 *     ObpAllocateObject @ 0x140646A60 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_14040E8C2 || byte_14040E8C3 || byte_14040E8DA || byte_14040E8DB);
}
