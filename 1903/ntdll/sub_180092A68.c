/*
 * XREFs of sub_180092A68 @ 0x180092A68
 * Callers:
 *     longjmp @ 0x180090420 (longjmp.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall sub_180092A68(_QWORD *a1)
{
  struct _TEB *result; // rax
  PVOID v2; // r8

  result = (struct _TEB *)_guard_check_icall_fptr;
  if ( (char *)_guard_check_icall_fptr != (char *)_misaligned_access )
  {
    result = NtCurrentTeb();
    v2 = (PVOID)a1[2];
    if ( v2 < result->NtTib.StackLimit || v2 > result->NtTib.StackBase )
      __fastfail(0xDu);
    if ( !*a1 )
      __fastfail(0xDu);
  }
  return result;
}
