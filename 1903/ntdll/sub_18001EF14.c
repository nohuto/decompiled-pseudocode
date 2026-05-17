/*
 * XREFs of sub_18001EF14 @ 0x18001EF14
 * Callers:
 *     RtlRestoreContext @ 0x18001EE50 (RtlRestoreContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_18001EF14(PVOID a1)
{
  struct _TEB *v1; // rdx

  v1 = NtCurrentTeb();
  return a1 >= v1->NtTib.StackLimit && a1 <= v1->NtTib.StackBase;
}
