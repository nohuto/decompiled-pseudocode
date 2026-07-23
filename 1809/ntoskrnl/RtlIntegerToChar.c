/*
 * XREFs of RtlIntegerToChar @ 0x1405A9CF0
 * Callers:
 *     CmLogMcUpdateStatus @ 0x14026C798 (CmLogMcUpdateStatus.c)
 *     RtlIntegerToUnicodeString @ 0x1405A9E00 (RtlIntegerToUnicodeString.c)
 *     CmpInitializeRegistryNode @ 0x1407333E8 (CmpInitializeRegistryNode.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

NTSTATUS __stdcall RtlIntegerToChar(ULONG Value, ULONG Base, ULONG Length, PCHAR String)
{
  ULONG v6; // r8d
  int v8; // ecx
  int v9; // r9d
  char *v10; // r15
  ULONG v11; // edx
  __int64 v12; // rax
  __int64 *v13; // rdx
  int v14; // esp
  __int64 v15; // rsi
  bool v16; // cc
  size_t v18; // rbx
  char v19; // [rsp+41h] [rbp-27h] BYREF

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
  v10 = &v19;
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
    --v10;
    v12 = v11;
    v13 = RtlpIntegerChars;
    *v10 = *((_BYTE *)RtlpIntegerChars + v12);
  }
  while ( Value );
  v15 = (unsigned int)(v14 + 65 - (_DWORD)v10);
  if ( (Length & 0x80000000) == 0 )
    goto LABEL_9;
  Length = -Length;
  v16 = (int)v15 <= (int)Length;
  if ( (int)v15 < (int)Length )
  {
    v18 = Length - (unsigned int)v15;
    LOBYTE(v13) = 48;
    memset(String, (int)v13, v18);
    Length = v15;
    String += v18;
LABEL_9:
    v16 = (int)v15 <= (int)Length;
  }
  if ( !v16 )
    return -2147483643;
  memmove(String, v10, (unsigned int)v15);
  if ( (int)v15 < (int)Length )
    String[v15] = 0;
  return 0;
}
