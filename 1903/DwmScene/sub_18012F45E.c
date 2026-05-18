/*
 * XREFs of sub_18012F45E @ 0x18012F45E
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D71C @ 0x18000D71C (sub_18000D71C.c)
 */

__int64 __fastcall sub_18012F45E(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 68) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 68) &= ~1u;
    return sub_18000D71C((__int64 *)(a2 + 120));
  }
  return result;
}
