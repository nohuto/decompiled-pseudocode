/*
 * XREFs of sub_18010BA90 @ 0x18010BA90
 * Callers:
 *     sub_18010A524 @ 0x18010A524 (sub_18010A524.c)
 *     sub_18010B09C @ 0x18010B09C (sub_18010B09C.c)
 * Callees:
 *     sub_180047BA0 @ 0x180047BA0 (sub_180047BA0.c)
 */

__int64 __fastcall sub_18010BA90(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  bool v11; // cc
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  unsigned __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  *(_BYTE *)(a1 + 49) = 0;
  *(_BYTE *)(a1 + 50) = a4;
  *(_BYTE *)(a1 + 48) = a4 != 0;
  v5 = (((unsigned __int64)(a2 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v6 = ((((v5 >> 12) + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v7 = *(unsigned int *)(a1 + 52);
  v17 = v6;
  if ( ((v6 >> 12) + 7) >> 3 > v7 )
    return 2147483653LL;
  v16 = v6 + v5;
  result = sub_180047BA0(a1 + 8, (__int64)&v16, 0LL, 1056768, 4, v12, v14, 0LL);
  if ( (int)result >= 0 )
  {
    _BitScanForward64(&v9, v16);
    v10 = v5 + *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 51) = v9;
    v11 = v17 <= 0x1000;
    *(_QWORD *)a1 = v10;
    if ( v11 )
    {
      result = sub_180047BA0(a1, (__int64)&v17, 0LL, 1073745920, 4, v13, v15, 0LL);
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)(a1 + 56) = 1LL;
    }
    return 0LL;
  }
  return result;
}
