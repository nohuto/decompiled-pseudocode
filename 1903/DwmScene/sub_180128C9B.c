/*
 * XREFs of sub_180128C9B @ 0x180128C9B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D71C @ 0x18000D71C (sub_18000D71C.c)
 */

__int64 __fastcall sub_180128C9B(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 88) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 88) &= ~1u;
    return sub_18000D71C((__int64 *)(a2 + 80));
  }
  return result;
}
