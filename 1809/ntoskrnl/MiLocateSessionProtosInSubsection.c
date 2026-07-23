/*
 * XREFs of MiLocateSessionProtosInSubsection @ 0x140136FBC
 * Callers:
 *     MiGetSharedProtosAtDpcLevel @ 0x1401772DC (MiGetSharedProtosAtDpcLevel.c)
 *     MiDereferenceSubsectionProtos @ 0x1406CA300 (MiDereferenceSubsectionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406CA368 (MiCreatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiLocateSessionProtosInSubsection(__int64 a1, unsigned int a2)
{
  __int64 *result; // rax
  unsigned int v3; // ecx

  result = *(__int64 **)(a1 + 24);
  while ( result )
  {
    v3 = *((_DWORD *)result + 16);
    if ( a2 < v3 )
    {
      result = (__int64 *)*result;
    }
    else
    {
      if ( a2 <= v3 )
        return result;
      result = (__int64 *)result[1];
    }
  }
  return 0LL;
}
