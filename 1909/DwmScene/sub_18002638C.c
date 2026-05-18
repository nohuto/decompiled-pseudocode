/*
 * XREFs of sub_18002638C @ 0x18002638C
 * Callers:
 *     sub_180026530 @ 0x180026530 (sub_180026530.c)
 *     sub_18009D6BC @ 0x18009D6BC (sub_18009D6BC.c)
 *     sub_18009F14C @ 0x18009F14C (sub_18009F14C.c)
 *     sub_1800A9714 @ 0x1800A9714 (sub_1800A9714.c)
 *     sub_1800B14C0 @ 0x1800B14C0 (sub_1800B14C0.c)
 *     sub_1800D28C0 @ 0x1800D28C0 (sub_1800D28C0.c)
 *     sub_1800D2B40 @ 0x1800D2B40 (sub_1800D2B40.c)
 *     sub_1800F8668 @ 0x1800F8668 (sub_1800F8668.c)
 * Callees:
 *     sub_180021828 @ 0x180021828 (sub_180021828.c)
 *     sub_180025A9C @ 0x180025A9C (sub_180025A9C.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18002638C(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rsi
  __int64 *v4; // r14
  __int64 v5; // rax
  __int64 result; // rax

  v2 = *a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  v4 = v3;
  v5 = *a1;
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      sub_180025A9C((__int64)a1, (__int64 *)v4[2]);
      v4 = (__int64 *)*v4;
      sub_180021828((__int64)(v3 + 4), 0);
      j_j__o_free(v3);
      v3 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
    v5 = *a1;
  }
  *(_QWORD *)(v5 + 8) = v2;
  *(_QWORD *)*a1 = v2;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = v2;
  a1[1] = 0LL;
  return result;
}
