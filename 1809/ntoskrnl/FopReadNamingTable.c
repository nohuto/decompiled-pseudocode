/*
 * XREFs of FopReadNamingTable @ 0x1409FC154
 * Callers:
 *     FopValidateFontNameTable @ 0x1409FBC8C (FopValidateFontNameTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 *     FioFwReadBytesAtOffset @ 0x14017BD48 (FioFwReadBytesAtOffset.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     FopReadNameRecord @ 0x1409FC278 (FopReadNameRecord.c)
 */

__int64 __fastcall FopReadNamingTable(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 Memory; // rbx
  signed int NameRecord; // edi
  __int16 v8; // si
  unsigned __int64 v9; // rcx
  unsigned int v10; // r14d
  unsigned int v11; // eax
  unsigned int v12; // ebp
  unsigned int v13; // esi
  int v15; // [rsp+20h] [rbp-58h] BYREF
  __int16 v16; // [rsp+24h] [rbp-54h]

  Memory = 0LL;
  NameRecord = FioFwReadBytesAtOffset(a1, a2, 6u, &v15);
  if ( NameRecord < 0 )
    return (unsigned int)NameRecord;
  LOWORD(v15) = __ROR2__(v15, 8);
  v8 = __ROR2__(v16, 8);
  HIWORD(v15) = __ROR2__(HIWORD(v15), 8);
  v9 = 18LL;
  v10 = HIWORD(v15);
  if ( HIWORD(v15) )
  {
    v9 = 0xFFFFFFFFLL;
    v11 = 12 * HIWORD(v15) + 18;
    if ( v11 >= 0x12 )
      v9 = v11;
    NameRecord = 12 * (unsigned int)HIWORD(v15) >= 0xFFFFFFEE ? 0xC0000095 : 0;
    if ( v11 < 0x12 )
      goto LABEL_11;
  }
  Memory = BgpFwAllocateMemory(v9);
  if ( !Memory )
    return (unsigned int)-1073741801;
  v12 = a2 + 6;
  *(_DWORD *)Memory = v15;
  *(_WORD *)(Memory + 4) = v8;
  v13 = 0;
  if ( !v10 )
  {
LABEL_10:
    *a3 = Memory;
LABEL_11:
    if ( NameRecord >= 0 )
      return (unsigned int)NameRecord;
    goto LABEL_14;
  }
  while ( 1 )
  {
    NameRecord = FopReadNameRecord(a1, v12, Memory + 12LL * v13 + 6);
    if ( NameRecord < 0 )
      break;
    ++v13;
    v12 += 12;
    if ( v13 >= v10 )
      goto LABEL_10;
  }
LABEL_14:
  if ( Memory )
    BgpFwFreeMemory(Memory);
  return (unsigned int)NameRecord;
}
