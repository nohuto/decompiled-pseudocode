/*
 * XREFs of MiLocateSessionProtosInSubsection @ 0x140138DAC
 * Callers:
 *     MiGetSharedProtosAtDpcLevel @ 0x14015CCD4 (MiGetSharedProtosAtDpcLevel.c)
 *     MiDereferenceSubsectionProtos @ 0x1406E9BB8 (MiDereferenceSubsectionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406E9C20 (MiCreatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiLocateSessionProtosInSubsection(__int64 a1, unsigned int a2)
{
  __int64 *result; // rax

  result = *(__int64 **)(a1 + 24);
  while ( result )
  {
    if ( a2 > *((_DWORD *)result + 16) )
    {
      result = (__int64 *)result[1];
    }
    else
    {
      if ( a2 >= *((_DWORD *)result + 16) )
        return result;
      result = (__int64 *)*result;
    }
  }
  return 0LL;
}
