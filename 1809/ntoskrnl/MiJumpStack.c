/*
 * XREFs of MiJumpStack @ 0x14016A190
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpc @ 0x1401203D0 (KeGenericCallDpc.c)
 */

char __fastcall MiJumpStack(struct _SINGLE_LIST_ENTRY *a1)
{
  return KeGenericCallDpc((struct _SINGLE_LIST_ENTRY *)MiDoStackCopy, a1);
}
