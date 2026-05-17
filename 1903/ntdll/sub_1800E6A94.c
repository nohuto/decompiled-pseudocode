/*
 * XREFs of sub_1800E6A94 @ 0x1800E6A94
 * Callers:
 *     sub_180007200 @ 0x180007200 (sub_180007200.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E6A94(__int64 a1)
{
  if ( *(_QWORD *)a1 == -1LL )
    return 0LL;
  else
    return *(unsigned int *)(*(_QWORD *)a1 + 36LL);
}
