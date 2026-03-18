/*
 * XREFs of vConvertCodePageToCharSet @ 0x1C00A2658
 * Callers:
 *     InitializeGreCSRSS @ 0x1C00A2324 (InitializeGreCSRSS.c)
 * Callees:
 *     <none>
 */

char __fastcall vConvertCodePageToCharSet(unsigned __int16 a1)
{
  __int64 v1; // rax
  int v2; // edx
  _DWORD *v3; // rcx

  v1 = 0LL;
  v2 = a1;
  gjCurCharset = 0;
  v3 = &codepages;
  gfsCurSignature = 1;
  while ( *v3 != v2 )
  {
    v1 = (unsigned int)(v1 + 1);
    ++v3;
    if ( (unsigned int)v1 >= 0x11 )
      return v1;
  }
  gfsCurSignature = dword_1C01E0B70[v1];
  LOBYTE(v1) = charsets[4 * (unsigned int)v1];
  gjCurCharset = v1;
  return v1;
}
