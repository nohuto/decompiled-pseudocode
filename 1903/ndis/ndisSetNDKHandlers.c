/*
 * XREFs of ndisSetNDKHandlers @ 0x1C011A230
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C002DCC0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSetNDKHandlers(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *(_BYTE *)a1 == 2 )
  {
    if ( *(_BYTE *)(a2 + 1) != 1 || *(_WORD *)(a2 + 2) < 0x18u || *(_DWORD *)(a2 + 4) )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      *(_QWORD *)(a1 + 816) = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a1 + 824) = *(_QWORD *)(a2 + 16);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
