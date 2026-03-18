/*
 * XREFs of EditionPostUpdateKeyStateEvent @ 0x1C0100030
 * Callers:
 *     <none>
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1C00C073C (PostUpdateKeyStateEvent.c)
 */

__int64 __fastcall EditionPostUpdateKeyStateEvent(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = *(unsigned int *)(a1 + 388);
    if ( (result & 1) != 0 )
      return PostUpdateKeyStateEvent(a1);
  }
  return result;
}
