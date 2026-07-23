/*
 * XREFs of CmpKeyFullNameLength @ 0x1405D8860
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 *     CmpConstructNameFromKeyNodes @ 0x1405D85E0 (CmpConstructNameFromKeyNodes.c)
 *     CmpDoWritethroughReparse @ 0x14063D100 (CmpDoWritethroughReparse.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1407F1E34 (CmpConstructNameFromKcbNameBlocks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyFullNameLength(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // rax
  bool v3; // zf
  int v4; // eax

  v1 = 0;
  while ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 176) & 0x40000) != 0 && *(_QWORD *)(a1 + 64) )
    {
      a1 = *(_QWORD *)(a1 + 64);
    }
    else
    {
      v2 = *(_QWORD *)(a1 + 72);
      v3 = (*(_DWORD *)v2 & 1) == 0;
      v4 = *(unsigned __int16 *)(v2 + 24);
      if ( !v3 )
        v4 *= 2;
      a1 = *(_QWORD *)(a1 + 64);
      v1 += v4 + 2;
    }
  }
  return v1;
}
