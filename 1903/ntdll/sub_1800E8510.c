/*
 * XREFs of sub_1800E8510 @ 0x1800E8510
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x1800E7240 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     sub_1800E831C @ 0x1800E831C (sub_1800E831C.c)
 */

char __fastcall sub_1800E8510(__int64 a1)
{
  __int64 v2; // rsi
  unsigned int v3; // edi

  if ( a1 && *(_WORD *)a1 == 1 && !*(_WORD *)(a1 + 2) && *(_DWORD *)(a1 + 4) )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = 0;
    while ( sub_1800E831C(v2) )
    {
      ++v3;
      v2 += 32LL;
      if ( v3 >= *(_DWORD *)(a1 + 4) )
        return 1;
    }
  }
  return 0;
}
