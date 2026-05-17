/*
 * XREFs of sub_180092A28 @ 0x180092A28
 * Callers:
 *     __C_specific_handler @ 0x18008CC40 (__C_specific_handler.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall sub_180092A28(__int64 a1)
{
  struct _TEB *result; // rax
  PVOID v2; // rcx

  result = (struct _TEB *)_guard_check_icall_fptr;
  if ( (char *)_guard_check_icall_fptr != (char *)_misaligned_access )
  {
    result = NtCurrentTeb();
    v2 = *(PVOID *)(a1 + 152);
    if ( v2 < result->NtTib.StackLimit || v2 > result->NtTib.StackBase )
      __fastfail(0xDu);
  }
  return result;
}
