/*
 * XREFs of sub_1800E32F0 @ 0x1800E32F0
 * Callers:
 *     sub_18007D6D0 @ 0x18007D6D0 (sub_18007D6D0.c)
 * Callees:
 *     sub_1800E30B0 @ 0x1800E30B0 (sub_1800E30B0.c)
 */

__int64 __fastcall sub_1800E32F0(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm0
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  *(_OWORD *)(a1 + 8) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 16);
  v4 = *(_OWORD *)(a2 + 32);
  v5 = a2 + 56;
  *(_OWORD *)(a1 + 40) = v4;
  _InterlockedExchange((volatile __int32 *)(a1 + 56), 0);
  v6 = a1 + 64;
  if ( v6 != v5 )
    sub_1800E30B0(v6, *(char **)v5, *(_QWORD *)(v5 + 8));
  result = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 88) = result;
  return result;
}
