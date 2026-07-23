/*
 * XREFs of MD5Final @ 0x18006AE30
 * Callers:
 *     ImportTablepHashCanonicalLists @ 0x1800E1890 (ImportTablepHashCanonicalLists.c)
 * Callees:
 *     MD5Update @ 0x18006AF00 (MD5Update.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall MD5Final(unsigned int *a1)
{
  unsigned int v1; // edx
  _DWORD *v2; // rbx
  unsigned int v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 result; // rax
  _BYTE v9[80]; // [rsp+20h] [rbp-68h] BYREF

  v1 = *a1;
  v2 = a1 + 22;
  a1[23] = a1[1];
  a1[22] = v1;
  v4 = (v1 >> 3) & 0x3F;
  v5 = 56 - v4;
  if ( v4 >= 0x38 )
    v5 = 120 - v4;
  v6 = v5;
  memset(v9, 0, v5);
  v9[0] = 0x80;
  MD5Update(a1, v9, v6);
  MD5Update(a1, v2, 8LL);
  v7 = 4LL;
  do
  {
    *v2 = *(v2 - 20);
    ++v2;
    --v7;
  }
  while ( v7 );
  result = 0LL;
  memset(a1 + 6, 0, 0x40uLL);
  return result;
}
