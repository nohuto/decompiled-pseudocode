/*
 * XREFs of HvlQueryActiveProcessors @ 0x140271630
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryActiveProcessors(unsigned int *a1, int *a2)
{
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // r10d
  int *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax

  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v5 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( a2 )
  {
    v6 = *a1;
    v7 = v6;
    if ( HvlpActiveProcessorCount < v6 )
      v7 = HvlpActiveProcessorCount;
    if ( v7 )
    {
      v8 = &dword_140549744;
      v9 = v7;
      do
      {
        v10 = *v8;
        v8 += 30;
        *a2++ = v10;
        --v9;
      }
      while ( v9 );
      v6 = *a1;
    }
    v5 = v6 < HvlpActiveProcessorCount ? 0xC0000023 : 0;
  }
  result = v5;
  *a1 = HvlpActiveProcessorCount;
  return result;
}
