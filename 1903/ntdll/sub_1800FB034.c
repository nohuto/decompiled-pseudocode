/*
 * XREFs of sub_1800FB034 @ 0x1800FB034
 * Callers:
 *     sub_1800FB2B8 @ 0x1800FB2B8 (sub_1800FB2B8.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     sub_1800FB36C @ 0x1800FB36C (sub_1800FB36C.c)
 *     sub_1800FB38C @ 0x1800FB38C (sub_1800FB38C.c)
 */

__int64 __fastcall sub_1800FB034(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v9; // [rsp+50h] [rbp+8h]
  unsigned __int64 v10; // [rsp+60h] [rbp+18h]

  v4 = 0LL;
  sub_1800FB36C(a1);
  v5 = *(_QWORD *)(a1 + 160);
  v6 = *(_QWORD *)(a1 + 144);
  v9 = v6;
  v7 = v5 + a2;
  if ( !*(_BYTE *)(a1 + 128) )
  {
    if ( v7 > v6 )
    {
      v10 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v6 + v10 >= *(_QWORD *)(a1 + 152) || (int)ZwAllocateVirtualMemory() < 0 )
        goto LABEL_9;
      *(_QWORD *)(a1 + 144) = v10 + v9;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 192);
    v4 = v5;
    *(_QWORD *)(a1 + 160) = v7;
    goto LABEL_9;
  }
  if ( v7 <= *(_QWORD *)(a1 + 168) )
    goto LABEL_8;
LABEL_9:
  sub_1800FB38C(a1);
  return v4;
}
