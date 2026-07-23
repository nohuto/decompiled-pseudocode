/*
 * XREFs of SymCryptMarvin32ExpandSeed @ 0x1401AF2F8
 * Callers:
 *     HvInitializeHashLibrary @ 0x14073173C (HvInitializeHashLibrary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMarvin32ExpandSeed(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 != 8 )
    return 169869633LL;
  *a1 = *a2;
  a1[1] = a2[1];
  return result;
}
