/*
 * XREFs of SmpTreeLookupControlBlock @ 0x140004380
 * Callers:
 *     SmpLookupControlBlock @ 0x14000433C (SmpLookupControlBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpTreeLookupControlBlock(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  unsigned int v3; // eax
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  while ( a1 )
  {
    v2 = a1 - 104;
    v3 = *(_DWORD *)(a1 - 104 + 8);
    if ( v3 == a2 )
    {
      v4 = *(_DWORD *)(v2 + 4);
      while ( v4 )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 4), v4 + 1, v4);
        if ( v5 == v4 )
          return a1 - 104;
      }
      return 0LL;
    }
    if ( v3 > a2 )
      a1 = *(_QWORD *)(a1 + 8);
    else
      a1 = *(_QWORD *)(a1 + 16);
  }
  return 0LL;
}
