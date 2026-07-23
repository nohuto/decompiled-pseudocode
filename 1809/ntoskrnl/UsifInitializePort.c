/*
 * XREFs of UsifInitializePort @ 0x14032DD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall UsifInitializePort(__int64 a1, __int64 a2, char a3)
{
  char result; // al

  result = 0;
  if ( a3 )
  {
    *(_WORD *)(a2 + 12) = 0;
    return 1;
  }
  return result;
}
