/*
 * XREFs of ulCharsetToCodePage @ 0x1C00DB130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ulCharsetToCodePage(int a1)
{
  int v1; // edx
  char *v2; // rax

  if ( a1 == 255 )
    return 1LL;
  v1 = 0;
  v2 = &charsets;
  while ( *(_DWORD *)v2 != a1 )
  {
    ++v1;
    v2 += 4;
    if ( (__int64)v2 >= (__int64)&codepages )
      return gbDBCSCodePage != 0 ? 0x4E4 : 0;
  }
  return *((unsigned int *)&codepages + v1);
}
