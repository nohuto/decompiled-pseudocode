/*
 * XREFs of sub_1800B2A38 @ 0x1800B2A38
 * Callers:
 *     sub_1800B2A38 @ 0x1800B2A38 (sub_1800B2A38.c)
 *     sub_1800B2BDC @ 0x1800B2BDC (sub_1800B2BDC.c)
 *     sub_18012FBFA @ 0x18012FBFA (sub_18012FBFA.c)
 * Callees:
 *     sub_1800751C0 @ 0x1800751C0 (sub_1800751C0.c)
 *     sub_1800B2A38 @ 0x1800B2A38 (sub_1800B2A38.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800B2A38(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_1800B2A38(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800751C0(v2 + 4, 0);
    result = j_j__o_free(v2);
  }
  return result;
}
