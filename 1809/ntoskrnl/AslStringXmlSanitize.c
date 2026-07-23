/*
 * XREFs of AslStringXmlSanitize @ 0x140720B9C
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x140720780 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1408EDB2C (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1408EE048 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x1408EE628 (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslStringXmlSanitize(_WORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 i; // rax
  unsigned __int16 v3; // r9
  unsigned __int64 v4; // r8

  if ( !a1 )
    return 3221225485LL;
  if ( *a1 )
  {
    v1 = -1LL;
    do
      ++v1;
    while ( a1[v1] );
    for ( i = 0LL; i < v1; ++i )
    {
      v3 = a1[i];
      v4 = 0LL;
      while ( v3 < *(_WORD *)((char *)&unk_140369F10 + v4) || v3 > *(_WORD *)((char *)&unk_140369F10 + v4 + 2) )
      {
        v4 += 4LL;
        if ( v4 >= 0x14 )
        {
          a1[i] = 64;
          break;
        }
      }
    }
  }
  return 0LL;
}
