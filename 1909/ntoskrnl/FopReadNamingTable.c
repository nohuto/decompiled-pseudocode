/*
 * XREFs of FopReadNamingTable @ 0x140A40B98
 * Callers:
 *     FopValidateFontNameTable @ 0x140A406C4 (FopValidateFontNameTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140178B9C (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x1401793D0 (BgpFwAllocateMemory.c)
 *     FioFwReadBytesAtOffset @ 0x140184DB0 (FioFwReadBytesAtOffset.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     FopReadNameRecord @ 0x140A40CC0 (FopReadNameRecord.c)
 */

__int64 __fastcall FopReadNamingTable(__int64 a1, unsigned int a2, __int64 *a3)
{
  int BytesAtOffset; // ebx
  __int16 v7; // bp
  unsigned __int64 v8; // rcx
  unsigned int v9; // esi
  unsigned int v10; // eax
  __int64 Memory; // rdi
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  _QWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v16; // [rsp+30h] [rbp-48h]

  v15[0] = 0LL;
  v15[1] = 0LL;
  v16 = 0;
  BytesAtOffset = FioFwReadBytesAtOffset(a1, a2, 6u, v15);
  if ( BytesAtOffset >= 0 )
  {
    LOWORD(v15[0]) = __ROR2__(v15[0], 8);
    v7 = __ROR2__(WORD2(v15[0]), 8);
    WORD1(v15[0]) = __ROR2__(WORD1(v15[0]), 8);
    v8 = 18LL;
    v9 = WORD1(v15[0]);
    if ( WORD1(v15[0]) )
    {
      v10 = 12 * WORD1(v15[0]) + 18;
      if ( v10 < 0x12 )
        return (unsigned int)-1073741675;
      v8 = v10;
      BytesAtOffset = 0;
    }
    Memory = BgpFwAllocateMemory(v8);
    if ( Memory )
    {
      v12 = a2 + 6;
      *(_DWORD *)Memory = v15[0];
      *(_WORD *)(Memory + 4) = v7;
      v13 = 0;
      if ( v9 )
      {
        while ( 1 )
        {
          BytesAtOffset = FopReadNameRecord(a1, v12, Memory + 12LL * v13 + 6);
          if ( BytesAtOffset < 0 )
            break;
          ++v13;
          v12 += 12;
          if ( v13 >= v9 )
            goto LABEL_9;
        }
        BgpFwFreeMemory(Memory);
      }
      else
      {
LABEL_9:
        *a3 = Memory;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)BytesAtOffset;
}
