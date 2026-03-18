/*
 * XREFs of xxxToUnicodeEx @ 0x1C005B7D0
 * Callers:
 *     NtUserToUnicodeEx @ 0x1C005B5F0 (NtUserToUnicodeEx.c)
 * Callees:
 *     xxxInternalToUnicode @ 0x1C005B8F0 (xxxInternalToUnicode.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall xxxToUnicodeEx(unsigned int a1, unsigned int a2, char *a3, __int64 a4, int a5, int a6, __int64 a7)
{
  int v11; // r9d
  unsigned __int8 v12; // al
  char v13; // r10
  _BYTE *v14; // rdx
  int v15; // ecx
  char v16; // cl
  int v17; // eax
  int v18; // eax
  _BYTE v20[16]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v21[64]; // [rsp+50h] [rbp-78h] BYREF

  memset(v21, 0, sizeof(v21));
  v11 = 0;
  v12 = 0;
  do
  {
    v13 = *a3;
    v14 = &v21[(unsigned __int64)v12 >> 2];
    if ( *a3 < 0 )
      v15 = (unsigned __int8)*v14 | (1 << (2 * (v12 & 3)));
    else
      v15 = (unsigned __int8)*v14 & ~(1 << (2 * (v12 & 3)));
    *v14 = v15;
    v16 = 2 * (v12 & 3) + 1;
    v17 = (unsigned __int8)*v14;
    if ( (v13 & 1) != 0 )
      v18 = v17 | (1 << v16);
    else
      v18 = v17 & ~(1 << v16);
    ++v11;
    *v14 = v18;
    ++a3;
    v12 = v11;
  }
  while ( v11 < 256 );
  return xxxInternalToUnicode(a1, a2, v21, a4, a5, a6, v20, a7);
}
