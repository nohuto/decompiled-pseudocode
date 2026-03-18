/*
 * XREFs of RtlLargeIntegerToChar @ 0x14063FD80
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x14063FAA0 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __stdcall RtlLargeIntegerToChar(PLARGE_INTEGER Value, ULONG Base, ULONG Length, PCHAR String)
{
  int v6; // r8d
  int v7; // r9d
  char *v8; // r14
  unsigned __int64 QuadPart; // rdx
  unsigned int v10; // eax
  int v11; // esp
  __int64 v12; // rsi
  bool v13; // cc
  unsigned __int64 v15; // rax
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
  if ( v6 )
  {
    QuadPart = Value->QuadPart;
    do
    {
      v10 = QuadPart;
      QuadPart >>= v6;
      *--v8 = *((_BYTE *)RtlpIntegerChars + (v7 & v10));
    }
    while ( QuadPart );
  }
  else
  {
    v15 = Value->QuadPart;
    v16 = Base;
    do
    {
      v17 = v15;
      v15 /= v16;
      QuadPart = v17 % v16;
      *--v8 = *((_BYTE *)RtlpIntegerChars + (unsigned int)(v17 % v16));
    }
    while ( v15 );
  }
  v12 = (unsigned int)(v11 + 97 - (_DWORD)v8);
  if ( (Length & 0x80000000) == 0 )
    goto LABEL_9;
  Length = -Length;
  v13 = (int)v12 <= (int)Length;
  if ( (int)v12 < (int)Length )
  {
    v18 = Length - (unsigned int)v12;
    LOBYTE(QuadPart) = 48;
    memset(String, QuadPart, v18);
    Length = v12;
    String += v18;
LABEL_9:
    v13 = (int)v12 <= (int)Length;
  }
  if ( !v13 )
    return -2147483643;
  memmove(String, v8, (unsigned int)v12);
  if ( (int)v12 < (int)Length )
    String[v12] = 0;
  return 0;
}
