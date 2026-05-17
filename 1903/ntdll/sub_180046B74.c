/*
 * XREFs of sub_180046B74 @ 0x180046B74
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 *     sub_18003F9C0 @ 0x18003F9C0 (sub_18003F9C0.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_18004580C @ 0x18004580C (sub_18004580C.c)
 *     sub_180046728 @ 0x180046728 (sub_180046728.c)
 *     sub_180048A40 @ 0x180048A40 (sub_180048A40.c)
 *     sub_180049014 @ 0x180049014 (sub_180049014.c)
 *     sub_180083A14 @ 0x180083A14 (sub_180083A14.c)
 *     RtlZeroHeap @ 0x1800F2950 (RtlZeroHeap.c)
 *     sub_180106954 @ 0x180106954 (sub_180106954.c)
 * Callees:
 *     sub_180046FB0 @ 0x180046FB0 (sub_180046FB0.c)
 */

__int64 __fastcall sub_180046B74(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r15
  unsigned int v9; // edi
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 result; // rax

  v6 = *(_QWORD *)(a2 + 48);
  ++*(_DWORD *)(a2 + 16);
  v7 = a4;
  v9 = a5 - *(_DWORD *)(a2 + 24);
  v10 = 2 * v9;
  if ( !*(_DWORD *)(a2 + 12) )
    v10 = v9;
  v11 = *(_QWORD *)(v6 + 8 * v10);
  if ( a5 == *(_DWORD *)(a2 + 8) - 1 )
    ++*(_DWORD *)(a2 + 20);
  if ( !v11 || (LOBYTE(a4) = a3, result = sub_180046FB0(a1, v11, a6, a4), (int)result <= 0) )
  {
    result = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(result + 8 * v10) = v7;
  }
  if ( !v11 )
  {
    result = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(result + 4 * ((unsigned __int64)v9 >> 5)) |= 1 << (v9 & 0x1F);
  }
  return result;
}
