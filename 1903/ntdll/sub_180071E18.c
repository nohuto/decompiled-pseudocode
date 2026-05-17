/*
 * XREFs of sub_180071E18 @ 0x180071E18
 * Callers:
 *     LdrInitializeThunk @ 0x180071DF0 (LdrInitializeThunk.c)
 * Callees:
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 *     sub_1800D0BEC @ 0x1800D0BEC (sub_1800D0BEC.c)
 */

struct _TEB *__fastcall sub_180071E18(__int64 a1, __int64 a2)
{
  struct _TEB *result; // rax

  if ( !byte_1801664E4 )
    sub_1800D0BEC();
  result = NtCurrentTeb();
  if ( (result->SameTebFlags & 0x4000) == 0 )
    return (struct _TEB *)sub_180071E6C(a1, a2);
  return result;
}
