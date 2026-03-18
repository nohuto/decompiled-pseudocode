/*
 * XREFs of ?FindFaceName@@YAPEAGK@Z @ 0x1C00EA76C
 * Callers:
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C0040A34 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall FindFaceName(int a1)
{
  unsigned int *i; // rdx

  for ( i = MAPPER::SignatureTable; ; ++i )
  {
    if ( i >= (unsigned int *)MAPPER::FaceNameTable )
      return (unsigned __int16 *)&pwsz;
    if ( (unsigned __int16)*i == a1 )
      break;
  }
  return &MAPPER::FaceNameTable[HIWORD(*i)];
}
