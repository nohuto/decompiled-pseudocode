/*
 * XREFs of sub_1800F58EC @ 0x1800F58EC
 * Callers:
 *     sub_1800A8FC4 @ 0x1800A8FC4 (sub_1800A8FC4.c)
 * Callees:
 *     sub_1800F56B8 @ 0x1800F56B8 (sub_1800F56B8.c)
 */

__int64 __fastcall sub_1800F58EC(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 112) )
    return sub_1800F56B8(a1);
  return result;
}
