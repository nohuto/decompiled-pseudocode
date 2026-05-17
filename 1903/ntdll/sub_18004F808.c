/*
 * XREFs of sub_18004F808 @ 0x18004F808
 * Callers:
 *     sub_18004E040 @ 0x18004E040 (sub_18004E040.c)
 *     sub_18004F6D0 @ 0x18004F6D0 (sub_18004F6D0.c)
 *     sub_180050634 @ 0x180050634 (sub_180050634.c)
 * Callees:
 *     sub_18004F860 @ 0x18004F860 (sub_18004F860.c)
 */

__int64 __fastcall sub_18004F808(__int64 a1, __int64 a2)
{
  if ( sub_18004F860(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
