/*
 * XREFs of RtlIntegerToUnicode @ 0x14065BA40
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x14065B870 (RtlConvertSidToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicode(ULONG Value, ULONG Base, ULONG Length, LPWSTR String)
{
  ULONG v6; // edi
  int v8; // ecx
  int v9; // r8d
  _WORD *v10; // r9
  ULONG v11; // edx
  __int64 v12; // rbx
  bool v13; // cc
  __int64 v15; // rdx
  LPWSTR v16; // rdi
  __int64 i; // rcx
  _BYTE v18[14]; // [rsp+62h] [rbp-36h] BYREF

  v6 = Base;
  switch ( Base )
  {
    case 0u:
      v6 = 10;
      goto LABEL_3;
    case 0xAu:
LABEL_3:
      v8 = 0;
      v9 = 0;
      goto LABEL_4;
    case 0x10u:
      v8 = 4;
      break;
    case 2u:
      v8 = 1;
      break;
    case 8u:
      v8 = 3;
      break;
    default:
      return -1073741811;
  }
  v9 = (1 << v8) - 1;
LABEL_4:
  v10 = v18;
  do
  {
    if ( v8 )
    {
      v11 = Value & v9;
      Value >>= v8;
    }
    else
    {
      v11 = Value % v6;
      Value /= v6;
    }
    *--v10 = RtlpIntegerWChars[v11];
  }
  while ( Value );
  v12 = (v18 - (_BYTE *)v10) >> 1;
  if ( (Length & 0x80000000) == 0 )
    goto LABEL_9;
  Length = -Length;
  v13 = (int)v12 <= (int)Length;
  if ( (int)v12 < (int)Length )
  {
    v15 = Length - (unsigned int)v12;
    v16 = String;
    for ( i = v15; i; --i )
      *v16++ = 48;
    Length = (v18 - (_BYTE *)v10) >> 1;
    String += v15;
LABEL_9:
    v13 = (int)v12 <= (int)Length;
  }
  if ( !v13 )
    return -2147483643;
  memmove(String, v10, 2LL * (unsigned int)v12);
  if ( (int)v12 < (int)Length )
    String[(unsigned int)v12] = 0;
  return 0;
}
