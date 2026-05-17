/*
 * XREFs of RtlLargeIntegerToChar @ 0x1800018C0
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x1800ED650 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlLargeIntegerToChar(unsigned __int64 *a1, unsigned __int64 a2, int a3, char *a4)
{
  int v6; // r9d
  int v7; // r10d
  char *v8; // r11
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  char *v11; // r15
  unsigned __int64 v12; // rtt
  int v13; // esp
  __int64 v14; // rsi
  bool v15; // cc
  int v17; // r8d
  size_t v18; // rbx
  char v19; // [rsp+61h] [rbp-37h] BYREF

  switch ( (_DWORD)a2 )
  {
    case 0:
      LODWORD(a2) = 10;
      goto LABEL_3;
    case 0xA:
LABEL_3:
      v6 = 0;
      v7 = 0;
      goto LABEL_4;
    case 2:
      v6 = 1;
      break;
    case 8:
      v6 = 3;
      break;
    case 0x10:
      v6 = 4;
      break;
    default:
      return 3221225485LL;
  }
  v7 = (1 << v6) - 1;
LABEL_4:
  v8 = &v19;
  v9 = *a1;
  if ( v6 )
  {
    do
    {
      v11 = v8;
      v17 = v9;
      v9 >>= v6;
      *--v8 = RtlpIntegerChars[v7 & v17];
    }
    while ( v9 );
  }
  else
  {
    v10 = (unsigned int)a2;
    do
    {
      v11 = v8;
      v12 = v9;
      v9 /= v10;
      a2 = v12 % v10;
      *--v8 = RtlpIntegerChars[(unsigned int)(v12 % v10)];
    }
    while ( v9 );
  }
  v14 = (unsigned int)(v13 + 97 - (_DWORD)v8);
  if ( a3 >= 0 )
    goto LABEL_8;
  a3 = -a3;
  v15 = (int)v14 <= a3;
  if ( (int)v14 < a3 )
  {
    v18 = (unsigned int)(a3 - v14);
    LOBYTE(a2) = 48;
    memset(a4, a2, v18);
    a3 = v14;
    a4 += v18;
LABEL_8:
    v15 = (int)v14 <= a3;
  }
  if ( !v15 )
    return 2147483653LL;
  memmove(a4, v11 - 1, (unsigned int)v14);
  if ( (int)v14 < a3 )
    a4[v14] = 0;
  return 0LL;
}
