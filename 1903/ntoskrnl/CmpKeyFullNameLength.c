/*
 * XREFs of CmpKeyFullNameLength @ 0x140655B50
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1406545D0 (CmpCreateKeyControlBlock.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406558D0 (CmpConstructNameFromKeyNodes.c)
 *     CmpDoWritethroughReparse @ 0x1406BB0C0 (CmpDoWritethroughReparse.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140728500 (CmpConstructNameFromKcbNameBlocks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyFullNameLength(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rax
  int v3; // edx

  v1 = 0;
  while ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40000) != 0 && *(_QWORD *)(a1 + 72) )
    {
      a1 = *(_QWORD *)(a1 + 72);
    }
    else
    {
      v2 = *(_QWORD *)(a1 + 80);
      v3 = *(unsigned __int16 *)(v2 + 24);
      if ( (*(_DWORD *)v2 & 1) != 0 )
        v3 *= 2;
      a1 = *(_QWORD *)(a1 + 72);
      v1 += v3 + 2;
    }
  }
  return v1;
}
