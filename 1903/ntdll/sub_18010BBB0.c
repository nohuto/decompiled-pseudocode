/*
 * XREFs of sub_18010BBB0 @ 0x18010BBB0
 * Callers:
 *     sub_18004F6D0 @ 0x18004F6D0 (sub_18004F6D0.c)
 * Callees:
 *     sub_18004F860 @ 0x18004F860 (sub_18004F860.c)
 */

__int64 __fastcall sub_18010BBB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  v4 = sub_18004F860(a1 + 16, 8 * ((a2 + 1) << *(_DWORD *)(a1 + 8)) - 1, 8 * (a3 << *(_DWORD *)(a1 + 8)));
  if ( v4 == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + ((v4 / 8) >> *(_DWORD *)(a1 + 8) << *(_DWORD *)(a1 + 8));
}
