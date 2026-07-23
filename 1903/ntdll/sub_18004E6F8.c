/*
 * XREFs of sub_18004E6F8 @ 0x18004E6F8
 * Callers:
 *     sub_18004E460 @ 0x18004E460 (sub_18004E460.c)
 *     sub_18004E624 @ 0x18004E624 (sub_18004E624.c)
 * Callees:
 *     sub_180007424 @ 0x180007424 (sub_180007424.c)
 *     sub_180047BA0 @ 0x180047BA0 (sub_180047BA0.c)
 *     sub_18004E6DC @ 0x18004E6DC (sub_18004E6DC.c)
 *     sub_18004E7DC @ 0x18004E7DC (sub_18004E7DC.c)
 */

__int64 __fastcall sub_18004E6F8(__int64 a1, unsigned __int64 a2, __int64 a3, _OWORD *a4)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rsi
  NTSTATUS v9; // edi
  int v11; // [rsp+28h] [rbp-48h]
  int v12; // [rsp+30h] [rbp-40h]
  PVOID BaseAddress; // [rsp+50h] [rbp-20h] BYREF
  __int128 v14; // [rsp+58h] [rbp-18h]
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp+30h] BYREF
  unsigned __int64 v16; // [rsp+A8h] [rbp+38h] BYREF

  v16 = a2;
  v5 = a2 >> 15;
  v7 = a2;
  if ( !_bittest64((const signed __int64 *)(a1 + 56), a2 >> 15) )
  {
    RegionSize = 4096LL;
    BaseAddress = (PVOID)(*(_QWORD *)a1 + (v5 << 12));
    v9 = sub_180047BA0(&BaseAddress, &RegionSize, 0LL, 1073745920, 4u, v11, v12, 0LL);
    if ( v9 < 0 )
      return (unsigned int)v9;
    _interlockedbittestandset64((volatile signed __int32 *)(a1 + 56), v5);
    v7 = v16;
  }
  v14 = 0uLL;
  *a4 = 0uLL;
  while ( 1 )
  {
    sub_18004E7DC(a1, 0LL, a3);
    if ( *(_QWORD *)(a1 + 32) != v7 )
      break;
    sub_18004E6DC(a3);
    sub_180007424((_QWORD *)(a1 + 32), &v16, 8LL, 0LL, dword_180163B6C);
  }
  if ( !_bittest64(*(const signed __int64 **)a1, v7) )
  {
    RegionSize = 4096LL;
    BaseAddress = (PVOID)(*(_QWORD *)(a1 + 8) + (v7 << 12));
    v9 = sub_180047BA0(&BaseAddress, &RegionSize, 0LL, 1073745920, 4u, v11, v12, 0LL);
    if ( v9 < 0 )
    {
      sub_18004E6DC(a3);
      return (unsigned int)v9;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)a1, v7);
  }
  return 0;
}
