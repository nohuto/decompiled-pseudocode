/*
 * XREFs of RtlLargeIntegerToChar @ 0x1405ABF90
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x1405ABD00 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlLargeIntegerToChar(PLARGE_INTEGER Value, ULONG Base, ULONG Length, PCHAR String)
{
  int v6; // r9d
  int v7; // r10d
  char *v8; // r11
  unsigned __int64 QuadPart; // rax
  char *v10; // r15
  unsigned int v11; // r8d
  int v12; // esp
  __int64 v13; // rsi
  bool v14; // cc
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rtt
  size_t v18; // rbx
  char v19; // [rsp+61h] [rbp-37h] BYREF

  if ( Base )
  {
    if ( Base == 16 )
    {
      v6 = 4;
LABEL_4:
      v7 = (1 << v6) - 1;
      goto LABEL_5;
    }
    if ( Base != 10 )
    {
      if ( Base == 2 )
      {
        v6 = 1;
      }
      else
      {
        if ( Base != 8 )
          return -1073741811;
        v6 = 3;
      }
      goto LABEL_4;
    }
  }
  else
  {
    Base = 10;
  }
  v6 = 0;
  v7 = 0;
LABEL_5:
  v8 = &v19;
  QuadPart = Value->QuadPart;
  if ( v6 )
  {
    do
    {
      v10 = v8;
      v11 = QuadPart;
      QuadPart >>= v6;
      *--v8 = *((_BYTE *)RtlpIntegerChars + (v7 & v11));
    }
    while ( QuadPart );
  }
  else
  {
    v16 = Base;
    do
    {
      v10 = v8;
      v17 = QuadPart;
      QuadPart /= v16;
      *(_QWORD *)&Base = v17 % v16;
      *--v8 = *((_BYTE *)RtlpIntegerChars + (unsigned int)(v17 % v16));
    }
    while ( QuadPart );
  }
  v13 = (unsigned int)(v12 + 97 - (_DWORD)v8);
  if ( (Length & 0x80000000) == 0 )
    goto LABEL_8;
  Length = -Length;
  v14 = (int)v13 <= (int)Length;
  if ( (int)v13 < (int)Length )
  {
    v18 = Length - (unsigned int)v13;
    LOBYTE(Base) = 48;
    memset(String, Base, v18);
    Length = v13;
    String += v18;
LABEL_8:
    v14 = (int)v13 <= (int)Length;
  }
  if ( !v14 )
    return -2147483643;
  memmove(String, v10 - 1, (unsigned int)v13);
  if ( (int)v13 < (int)Length )
    String[v13] = 0;
  return 0;
}
