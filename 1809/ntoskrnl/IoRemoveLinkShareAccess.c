/*
 * XREFs of IoRemoveLinkShareAccess @ 0x140690A30
 * Callers:
 *     RawCleanup @ 0x14069094C (RawCleanup.c)
 *     IoRemoveShareAccess @ 0x140690A10 (IoRemoveShareAccess.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall IoRemoveLinkShareAccess(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int *result; // rax

  result = *(unsigned int **)(a1 + 208);
  if ( !result || (result = (unsigned int *)*result, ((unsigned __int8)result & 1) == 0) )
  {
    if ( *(_BYTE *)(a1 + 74) || *(_BYTE *)(a1 + 75) || *(_BYTE *)(a1 + 76) )
    {
      --*a2;
      if ( *(_BYTE *)(a1 + 74) )
        --a2[1];
      if ( *(_BYTE *)(a1 + 75) )
        --a2[2];
      if ( *(_BYTE *)(a1 + 77) )
        --a2[4];
      if ( *(_BYTE *)(a1 + 78) )
        --a2[5];
      if ( a3 )
      {
        --*a3;
        if ( *(_BYTE *)(a1 + 76) )
          --a3[1];
        if ( *(_BYTE *)(a1 + 79) )
          --a3[2];
      }
      else
      {
        if ( *(_BYTE *)(a1 + 76) )
          --a2[3];
        if ( *(_BYTE *)(a1 + 79) )
          --a2[6];
      }
    }
  }
  return result;
}
