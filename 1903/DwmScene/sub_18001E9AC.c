/*
 * XREFs of sub_18001E9AC @ 0x18001E9AC
 * Callers:
 *     sub_18001F450 @ 0x18001F450 (sub_18001F450.c)
 * Callees:
 *     sub_180025584 @ 0x180025584 (sub_180025584.c)
 */

__int64 __fastcall sub_18001E9AC(__int64 a1, __int64 a2, _QWORD **a3)
{
  __int64 result; // rax

  result = sub_180025584(a1);
  *(_WORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = **a3;
  *(_QWORD *)(result + 96) = 0LL;
  return result;
}
