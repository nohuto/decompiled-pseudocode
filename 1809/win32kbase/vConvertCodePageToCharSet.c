/*
 * XREFs of vConvertCodePageToCharSet @ 0x1C0061814
 * Callers:
 *     InitializeGreCSRSS @ 0x1C00614F8 (InitializeGreCSRSS.c)
 * Callees:
 *     <none>
 */

char __fastcall vConvertCodePageToCharSet(unsigned __int16 a1)
{
  __int64 v1; // rax
  int v2; // r8d
  _DWORD *i; // rcx

  v1 = 0LL;
  gjCurCharset = 0;
  gfsCurSignature = 1;
  if ( nCharsets )
  {
    v2 = a1;
    for ( i = &codepages; *i != v2; ++i )
    {
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= nCharsets )
        return v1;
    }
    gfsCurSignature = dword_1C019CD40[v1];
    LOBYTE(v1) = charsets[4 * (unsigned int)v1];
    gjCurCharset = v1;
  }
  return v1;
}
