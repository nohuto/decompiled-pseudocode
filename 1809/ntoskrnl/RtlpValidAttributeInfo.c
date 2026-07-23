/*
 * XREFs of RtlpValidAttributeInfo @ 0x1408946E0
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x140893C90 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlpValidAttribute @ 0x1408945C4 (RtlpValidAttribute.c)
 */

char __fastcall RtlpValidAttributeInfo(__int64 a1)
{
  __int64 v2; // rsi
  unsigned int v3; // edi

  if ( a1 && *(_WORD *)a1 == 1 && !*(_WORD *)(a1 + 2) && *(_DWORD *)(a1 + 4) )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = 0;
    while ( RtlpValidAttribute(v2) )
    {
      ++v3;
      v2 += 32LL;
      if ( v3 >= *(_DWORD *)(a1 + 4) )
        return 1;
    }
  }
  return 0;
}
