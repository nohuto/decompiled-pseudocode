/*
 * XREFs of __except_validate_context_record @ 0x180096198
 * Callers:
 *     __C_specific_handler @ 0x180090360 (__C_specific_handler.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall _except_validate_context_record(__int64 a1)
{
  struct _TEB *result; // rax
  void *v2; // rcx

  result = (struct _TEB *)_guard_check_icall_fptr;
  if ( (char *)_guard_check_icall_fptr != (char *)RtlEndStrongEnumerationHashTable )
  {
    result = NtCurrentTeb();
    v2 = *(void **)(a1 + 152);
    if ( v2 < result->NtTib.StackLimit || v2 > result->NtTib.StackBase )
      __fastfail(0xDu);
  }
  return result;
}
