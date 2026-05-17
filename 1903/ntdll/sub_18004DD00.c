/*
 * XREFs of sub_18004DD00 @ 0x18004DD00
 * Callers:
 *     sub_180036F20 @ 0x180036F20 (sub_180036F20.c)
 *     sub_18004C7F8 @ 0x18004C7F8 (sub_18004C7F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004DD00(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // r8

  *(_QWORD *)(a2 + 16) = a2 ^ a1 ^ qword_180163540 ^ 0xA2E64EADA2E64EADuLL;
  result = a1 + 72;
  v3 = *(unsigned __int64 **)(a1 + 80);
  if ( *v3 != a1 + 72 )
    __fastfail(3u);
  *(_QWORD *)a2 = result;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  *(_QWORD *)(a1 + 80) = a2;
  ++*(_QWORD *)(a1 + 88);
  return result;
}
