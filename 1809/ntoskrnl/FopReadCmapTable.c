/*
 * XREFs of FopReadCmapTable @ 0x1409FBE20
 * Callers:
 *     FopReadMappingTable @ 0x1409FBABC (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 *     FioFwReadBytesAtOffset @ 0x14017BD48 (FioFwReadBytesAtOffset.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall FopReadCmapTable(__int64 a1, unsigned int a2, _QWORD *a3)
{
  _DWORD *Memory; // rdi
  signed int BytesAtOffset; // ebx
  unsigned __int16 v7; // si
  unsigned __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  unsigned int v12; // ebp
  unsigned int *v13; // rsi
  int v16; // [rsp+28h] [rbp-50h] BYREF

  Memory = 0LL;
  BytesAtOffset = FioFwReadBytesAtOffset(a1, a2, 4u, &v16);
  if ( BytesAtOffset < 0 )
    return (unsigned int)BytesAtOffset;
  v7 = __ROR2__(HIWORD(v16), 8);
  LOWORD(v16) = __ROR2__(v16, 8);
  HIWORD(v16) = v7;
  if ( (_WORD)v16 )
    return (unsigned int)-1073741701;
  v8 = 12LL;
  if ( v7 )
  {
    v8 = 0xFFFFFFFFLL;
    v9 = 8 * v7 + 4;
    if ( v9 >= 0xC )
      v8 = v9;
    BytesAtOffset = v9 < 0xC ? 0xC0000095 : 0;
    if ( v9 < 0xC )
      goto LABEL_15;
  }
  Memory = (_DWORD *)BgpFwAllocateMemory(v8);
  if ( !Memory )
    return (unsigned int)-1073741801;
  v10 = a2 + 4;
  v11 = v7;
  v12 = 0;
  *Memory = v16;
  if ( !v7 )
  {
LABEL_14:
    *a3 = Memory;
LABEL_15:
    if ( BytesAtOffset >= 0 )
      return (unsigned int)BytesAtOffset;
    goto LABEL_19;
  }
  v13 = Memory + 2;
  while ( 1 )
  {
    BytesAtOffset = FioFwReadBytesAtOffset(a1, v10, 8u, v13 - 1);
    if ( BytesAtOffset >= 0 )
    {
      *((_WORD *)v13 - 2) = __ROR2__(*((_WORD *)v13 - 2), 8);
      *((_WORD *)v13 - 1) = __ROR2__(*((_WORD *)v13 - 1), 8);
      BytesAtOffset = 0;
      *v13 = _byteswap_ulong(*v13);
    }
    if ( BytesAtOffset < 0 )
      break;
    ++v12;
    v13 += 2;
    v10 += 8;
    if ( v12 >= v11 )
      goto LABEL_14;
  }
LABEL_19:
  if ( Memory )
    BgpFwFreeMemory((__int64)Memory);
  return (unsigned int)BytesAtOffset;
}
