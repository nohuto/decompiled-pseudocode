/*
 * XREFs of sub_1800F57DC @ 0x1800F57DC
 * Callers:
 *     sub_1800A8EB4 @ 0x1800A8EB4 (sub_1800A8EB4.c)
 * Callees:
 *     sub_1800F55A8 @ 0x1800F55A8 (sub_1800F55A8.c)
 */

__int64 __fastcall sub_1800F57DC(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 112) )
    return sub_1800F55A8(a1);
  return result;
}
