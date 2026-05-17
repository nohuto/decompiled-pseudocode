/*
 * XREFs of sub_18010B09C @ 0x18010B09C
 * Callers:
 *     sub_18010A524 @ 0x18010A524 (sub_18010A524.c)
 * Callees:
 *     sub_18004CDC4 @ 0x18004CDC4 (sub_18004CDC4.c)
 *     sub_18010BA90 @ 0x18010BA90 (sub_18010BA90.c)
 */

__int64 __fastcall sub_18010B09C(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // ebx
  unsigned int v9; // r8d
  _DWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+28h] [rbp-20h]

  _BitScanForward(&v5, 0x20u);
  v6 = (a4 >> 20) + 1;
  *(_DWORD *)(a1 + 24) = v5;
  if ( (a4 & 0xFFFFF) == 0 )
    v6 = a4 >> 20;
  result = sub_18010BA90(a1 + 32, v6 << 8, a4 >> 20, 1LL);
  if ( (int)result >= 0 )
    result = 0LL;
  if ( (int)result >= 0 )
  {
    v10[0] = -1;
    v11 = 0LL;
    *(_DWORD *)a1 = 0;
    v8 = 0;
    *(_QWORD *)(a1 + 8) = 0LL;
    while ( 1 )
    {
      v10[1] = v8;
      v9 = 0x200000;
      if ( v8 == 3 )
        v9 = 0x40000000;
      result = sub_18004CDC4(a1, (__int64)v10, v9);
      if ( (int)result < 0 )
        break;
      if ( ++v8 >= 4 )
        return 0LL;
    }
  }
  return result;
}
