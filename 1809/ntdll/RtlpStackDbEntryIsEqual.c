/*
 * XREFs of RtlpStackDbEntryIsEqual @ 0x180116278
 * Callers:
 *     RtlpStackDbStackComparitor @ 0x180116C04 (RtlpStackDbStackComparitor.c)
 * Callees:
 *     memcmp @ 0x180093CC0 (memcmp.c)
 */

__int64 __fastcall RtlpStackDbEntryIsEqual(__int64 a1, __int64 a2)
{
  int v2; // esi
  unsigned int v3; // ebx
  char *v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned int v7; // esi

  v2 = *(unsigned __int8 *)(a1 + 19);
  v3 = 0;
  if ( v2 == *(_DWORD *)a2 )
  {
    v4 = *(char **)(a2 + 8);
    v5 = a1 + 24;
    v6 = (v2 & 0xFFFFFFF8) + a1 + 24;
    while ( v5 < v6 )
    {
      if ( memcmp((const void *)(*(_QWORD *)v5 + 24LL), v4, 0x40uLL) )
        return v3;
      v4 += 64;
      v5 += 8LL;
    }
    v7 = v2 & 7;
    if ( !v7 || !memcmp((const void *)(*(_QWORD *)v5 + 24LL), v4, 8LL * v7) )
      return 1;
  }
  return v3;
}
