/*
 * XREFs of ?RoundToPow2@@YAII@Z @ 0x18015A5EC
 * Callers:
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x18001B944 (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoundToPow2(unsigned int a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = 0x80000000;
  if ( a1 <= 0x400 )
    v1 = 1024;
  while ( (v1 & a1) == 0 )
    v1 >>= 1;
  result = 2 * v1;
  if ( a1 == v1 )
    return v1;
  return result;
}
