/*
 * XREFs of HvpShrinkMap @ 0x140807200
 * Callers:
 *     HvpAddBin @ 0x1405A49BC (HvpAddBin.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvpGetCellMap @ 0x1405FC04C (HvpGetCellMap.c)
 *     HvpFreeMap @ 0x1406C9CC8 (HvpFreeMap.c)
 */

__int64 __fastcall HvpShrinkMap(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rsi
  unsigned int v5; // r10d
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned int v10; // edi
  _QWORD *CellMap; // rax
  unsigned int v12; // r10d
  unsigned int v13; // ebx

  v4 = a2;
  v5 = a4;
  v7 = a1;
  if ( !a4 )
  {
    v8 = *(_QWORD *)(632LL * a2 + a1 + 288);
    if ( v8 == *(_QWORD *)(632LL * a2 + v7 + 280) )
      return (*(__int64 (__fastcall **)(__int64, __int64))(v7 + 32))(v8, 12288LL);
  }
  v10 = (a2 << 31) + a4;
  while ( v10 < ((_DWORD)v4 << 31) + a3 )
  {
    CellMap = (_QWORD *)HvpGetCellMap(v7, v10);
    v10 += 4096;
    *CellMap = 0LL;
    CellMap[1] = 0LL;
    CellMap[2] = 0LL;
  }
  result = 511LL;
  v12 = ((v5 >> 12) + 511) >> 9;
  v13 = ((a3 >> 12) + 511) >> 9;
  if ( v12 < v13 )
    return (__int64)HvpFreeMap(v7, *(_QWORD *)(632 * v4 + v7 + 280), v12, v13 - 1);
  return result;
}
