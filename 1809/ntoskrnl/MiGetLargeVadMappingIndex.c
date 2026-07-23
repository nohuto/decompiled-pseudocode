/*
 * XREFs of MiGetLargeVadMappingIndex @ 0x1402BC328
 * Callers:
 *     MiInPagePageTable @ 0x140098720 (MiInPagePageTable.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiGetLargeVadMappingIndex(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rbp
  __int64 ProtoPteAddress; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2 >> 12;
  v4 = v2 & 0xFFFFFFFFC0000LL;
  v5 = 1;
  if ( (v2 & 0xFFFFFFFFC0000uLL) >= (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
    && v4 + 0x3FFFF <= (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    MiGetProtoPteAddress(a1, v2, 4, &v9);
    v6 = v9;
    if ( (*(_DWORD *)(v9 + 48) & 0xC0000000) == 0x80000000 )
    {
      ProtoPteAddress = MiGetProtoPteAddress(a1, v4, 4, &v9);
      if ( v9 == v6 && ProtoPteAddress == *(_QWORD *)(v9 + 8) )
        return 2;
    }
  }
  return v5;
}
