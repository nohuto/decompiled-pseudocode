/*
 * XREFs of ?FindFaceName@@YAPEAGK@Z @ 0x1C00FCED4
 * Callers:
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C00FCD5C (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall FindFaceName(int a1)
{
  unsigned int *i; // rdx

  for ( i = MAPPER::SignatureTable; i < (unsigned int *)MAPPER::FaceNameTable; ++i )
  {
    if ( (unsigned __int16)*i == a1 )
      return &MAPPER::FaceNameTable[HIWORD(*i)];
  }
  return (unsigned __int16 *)&pwsz;
}
