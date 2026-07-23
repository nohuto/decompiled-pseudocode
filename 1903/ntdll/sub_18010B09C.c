/*
 * XREFs of sub_18010B09C @ 0x18010B09C
 * Callers:
 *     sub_18010A524 @ 0x18010A524 (sub_18010A524.c)
 * Callees:
 *     sub_18004CDC4 @ 0x18004CDC4 (sub_18004CDC4.c)
 *     sub_18010BA90 @ 0x18010BA90 (sub_18010BA90.c)
 */

__int64 __fastcall sub_18010B09C(__int64 a1)
{
  unsigned int v2; // eax
  __int64 result; // rax
  int v4; // ebx
  unsigned int v5; // r8d
  _DWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]

  _BitScanForward(&v2, 0x20u);
  *(_DWORD *)(a1 + 24) = v2;
  result = sub_18010BA90((PVOID *)(a1 + 32));
  if ( (int)result >= 0 )
    result = 0LL;
  if ( (int)result >= 0 )
  {
    v6[0] = -1;
    v7 = 0LL;
    *(_DWORD *)a1 = 0;
    v4 = 0;
    *(_QWORD *)(a1 + 8) = 0LL;
    while ( 1 )
    {
      v6[1] = v4;
      v5 = 0x200000;
      if ( v4 == 3 )
        v5 = 0x40000000;
      result = sub_18004CDC4(a1, (__int64)v6, v5);
      if ( (int)result < 0 )
        break;
      if ( ++v4 >= 4 )
        return 0LL;
    }
  }
  return result;
}
