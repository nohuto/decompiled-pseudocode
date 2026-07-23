/*
 * XREFs of mbstowcs @ 0x1401961D0
 * Callers:
 *     <none>
 * Callees:
 *     _mbstrlen @ 0x14019994C (_mbstrlen.c)
 *     RtlMultiByteToUnicodeN @ 0x1405ABE90 (RtlMultiByteToUnicodeN.c)
 */

size_t __cdecl mbstowcs(wchar_t *Dest, const char *Source, size_t MaxCount)
{
  int v3; // edi
  int v7; // edx
  unsigned __int64 v8; // r8
  size_t v9; // rdx
  ULONG BytesInUnicodeString; // [rsp+40h] [rbp+8h] BYREF

  v3 = MaxCount;
  if ( Dest && !MaxCount )
    return 0LL;
  if ( MaxCount > 0x7FFFFFFF )
    return -1LL;
  if ( Dest )
  {
    BytesInUnicodeString = mbstrlen(Source);
    if ( RtlMultiByteToUnicodeN(Dest, 2 * v3, &BytesInUnicodeString, Source, BytesInUnicodeString + 1) >= 0 )
    {
      v8 = (unsigned __int64)(int)BytesInUnicodeString >> 1;
      BytesInUnicodeString = v8;
      v7 = v8;
      if ( !Dest[(int)v8 - 1] )
        return (int)v8 - 1;
    }
    else
    {
      gbl_errno = 42;
      v7 = -1;
      *Dest = 0;
    }
    return v7;
  }
  else
  {
    v9 = -1LL;
    do
      ++v9;
    while ( Source[v9] );
    return v9;
  }
}
