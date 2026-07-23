/*
 * XREFs of RtlLargeIntegerToChar @ 0x1800018C0
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x1800ED650 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlLargeIntegerToChar(PLARGE_INTEGER Value, ULONG Base, LONG OutputLength, PSTR String)
{
  int v6; // r9d
  int v7; // r10d
  char *v8; // r11
  unsigned __int64 QuadPart; // rax
  unsigned __int64 v10; // r8
  char *v11; // r15
  unsigned __int64 v12; // rtt
  int v13; // esp
  __int64 v14; // rsi
  bool v15; // cc
  int v17; // r8d
  size_t v18; // rbx
  char v19; // [rsp+61h] [rbp-37h] BYREF

  switch ( Base )
  {
    case 0u:
      Base = 10;
      goto LABEL_3;
    case 0xAu:
LABEL_3:
      v6 = 0;
      v7 = 0;
      goto LABEL_4;
    case 2u:
      v6 = 1;
      break;
    case 8u:
      v6 = 3;
      break;
    case 0x10u:
      v6 = 4;
      break;
    default:
      return -1073741811;
  }
  v7 = (1 << v6) - 1;
LABEL_4:
  v8 = &v19;
  QuadPart = Value->QuadPart;
  if ( v6 )
  {
    do
    {
      v11 = v8;
      v17 = QuadPart;
      QuadPart >>= v6;
      *--v8 = RtlpIntegerChars[v7 & v17];
    }
    while ( QuadPart );
  }
  else
  {
    v10 = Base;
    do
    {
      v11 = v8;
      v12 = QuadPart;
      QuadPart /= v10;
      *(_QWORD *)&Base = v12 % v10;
      *--v8 = RtlpIntegerChars[(unsigned int)(v12 % v10)];
    }
    while ( QuadPart );
  }
  v14 = (unsigned int)(v13 + 97 - (_DWORD)v8);
  if ( OutputLength >= 0 )
    goto LABEL_8;
  OutputLength = -OutputLength;
  v15 = (int)v14 <= OutputLength;
  if ( (int)v14 < OutputLength )
  {
    v18 = (unsigned int)(OutputLength - v14);
    LOBYTE(Base) = 48;
    memset(String, Base, v18);
    OutputLength = v14;
    String += v18;
LABEL_8:
    v15 = (int)v14 <= OutputLength;
  }
  if ( !v15 )
    return -2147483643;
  memmove(String, v11 - 1, (unsigned int)v14);
  if ( (int)v14 < OutputLength )
    String[v14] = 0;
  return 0;
}
