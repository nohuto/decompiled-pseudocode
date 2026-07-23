/*
 * XREFs of ImportTablepHashCanonicalLists @ 0x1800E1890
 * Callers:
 *     RtlComputeImportTableHash @ 0x1800E1A00 (RtlComputeImportTableHash.c)
 * Callees:
 *     MD5Final @ 0x18006AE30 (MD5Final.c)
 *     MD5Update @ 0x18006AF00 (MD5Update.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

__int64 __fastcall ImportTablepHashCanonicalLists(_QWORD *a1, _OWORD *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // r8
  _OWORD *v6; // rdx
  _OWORD *v7; // rdx
  __int64 v8; // r8
  __int64 result; // rax
  unsigned int v10[22]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v11; // [rsp+78h] [rbp-30h]

  v10[0] = 0;
  v10[1] = 0;
  v3 = a1;
  v10[2] = 1732584193;
  v10[3] = -271733879;
  v10[4] = -1732584194;
  for ( v10[5] = 271733878; v3; v3 = (_QWORD *)*v3 )
  {
    v4 = (_QWORD *)v3[2];
    v5 = -1LL;
    v6 = (_OWORD *)v3[1];
    do
      ++v5;
    while ( *((_BYTE *)v6 + v5) );
    MD5Update((__int64)v10, v6, v5);
    while ( v4 )
    {
      v7 = (_OWORD *)v4[1];
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v7 + v8) );
      MD5Update((__int64)v10, v7, v8);
      v4 = (_QWORD *)*v4;
    }
  }
  MD5Final(v10);
  result = 0LL;
  *a2 = v11;
  return result;
}
