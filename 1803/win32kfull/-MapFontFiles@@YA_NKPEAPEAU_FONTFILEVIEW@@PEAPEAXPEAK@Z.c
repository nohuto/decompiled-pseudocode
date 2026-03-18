/*
 * XREFs of ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00BF4A4
 * Callers:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0081670 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00870C4 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     _lambda_89bfae273395b2af9988bd05c6831f4c_::operator() @ 0x1C00BECD0 (_lambda_89bfae273395b2af9988bd05c6831f4c_--operator().c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00BF524 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 */

char __fastcall MapFontFiles(unsigned int a1, struct _FONTFILEVIEW **a2, void **a3, unsigned int *a4)
{
  __int64 v4; // rbx
  struct _FILEVIEW **i; // r15
  signed __int64 v11; // r14

  v4 = 0LL;
  if ( !a1 )
    return 1;
  for ( i = a2; (unsigned int)EngMapFontFileFDInternal(*i); ++i )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= a1 )
      return 1;
  }
  if ( (_DWORD)v4 )
  {
    v11 = (char *)a2 - (char *)a3;
    do
    {
      EngUnmapFontFileFD(*(ULONG_PTR *)((char *)a3 + v11));
      *a3++ = 0LL;
      *a4++ = 0;
      --v4;
    }
    while ( v4 );
  }
  return 0;
}
