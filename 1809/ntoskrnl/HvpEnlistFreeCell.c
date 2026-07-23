/*
 * XREFs of HvpEnlistFreeCell @ 0x1405FBF0C
 * Callers:
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     HvpEnlistFreeCells @ 0x1405FA800 (HvpEnlistFreeCells.c)
 *     HvpDoAllocateCell @ 0x1405FC690 (HvpDoAllocateCell.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvpAddFreeCellHint @ 0x1405FAD2C (HvpAddFreeCellHint.c)
 *     HvpGetCellMap @ 0x1405FC04C (HvpGetCellMap.c)
 */

__int64 *__fastcall HvpEnlistFreeCell(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r15
  __int64 v6; // r14
  __int64 v8; // rdi
  int v9; // r12d
  unsigned int v10; // ebp
  unsigned int v11; // ebx
  __int64 *result; // rax
  unsigned int v13; // ebx
  __int64 v14; // r10
  __int64 *CellMap; // rax
  __int64 v16; // rcx

  v4 = a4;
  v6 = (unsigned int)a2;
  v8 = ((unsigned int)a2 & 0xFFFFF000) - *(_DWORD *)HvpGetCellMap(BugCheckParameter2, a2);
  v9 = *(_DWORD *)(HvpGetCellMap(BugCheckParameter2, v8) + 16);
  v10 = v9 + v8;
  if ( (_DWORD)v8
    && v6 == (unsigned int)v8 + 32LL
    && (_DWORD)v6 + a3 == v10
    && (v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(24LL, 0LL, 540495171LL)) != 0 )
  {
    *(_QWORD *)v14 = 0LL;
    *(_QWORD *)(v14 + 8) = 0LL;
    *(_QWORD *)(v14 + 16) = 0LL;
    *(_DWORD *)(v14 + 16) = v9;
    *(_DWORD *)(v14 + 20) = v8 & 0x7FFFFFFF;
    while ( (unsigned int)v8 < v10 )
    {
      CellMap = (__int64 *)HvpGetCellMap(BugCheckParameter2, (unsigned int)v8);
      CellMap[1] |= 2uLL;
      LODWORD(v8) = v8 + 4096;
      *CellMap = v14;
    }
    result = (__int64 *)(632 * v4 + BugCheckParameter2 + 880);
    v16 = *result;
    if ( *(__int64 **)(*result + 8) != result )
      __fastfail(3u);
    *(_QWORD *)v14 = v16;
    *(_QWORD *)(v14 + 8) = result;
    *(_QWORD *)(v16 + 8) = v14;
    *result = v14;
  }
  else
  {
    v11 = (a3 >> 3) - 1;
    if ( v11 >= 0x10 )
    {
      v13 = v11 >> 4;
      if ( v13 > 0xFF )
      {
        v11 = 23;
      }
      else
      {
        _BitScanReverse(&v13, v13);
        v11 = v13 + 16;
      }
    }
    return (__int64 *)HvpAddFreeCellHint(BugCheckParameter2, (unsigned int)v6, v11);
  }
  return result;
}
