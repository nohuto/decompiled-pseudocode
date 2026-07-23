/*
 * XREFs of MiJumpStack @ 0x14016A2B0
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpc @ 0x140120460 (KeGenericCallDpc.c)
 */

char __fastcall MiJumpStack(struct _SINGLE_LIST_ENTRY *a1)
{
  return KeGenericCallDpc((struct _SINGLE_LIST_ENTRY *)MiDoStackCopy, a1);
}
