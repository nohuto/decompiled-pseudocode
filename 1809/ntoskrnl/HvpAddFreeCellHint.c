/*
 * XREFs of HvpAddFreeCellHint @ 0x1405FAD2C
 * Callers:
 *     HvpEnlistFreeCell @ 0x1405FBF0C (HvpEnlistFreeCell.c)
 * Callees:
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x1405FC04C (HvpGetCellMap.c)
 */

__int64 __fastcall HvpAddFreeCellHint(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 CellMap; // rax
  ULONG_PTR v6; // r10
  __int64 v7; // r11
  __int64 v8; // rsi
  ULONG v9; // edi
  __int64 result; // rax

  v4 = a3;
  CellMap = HvpGetCellMap(BugCheckParameter2, a2);
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v6, 0x2B9uLL);
  v8 = 632 * v7;
  v9 = *(_DWORD *)((*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 4) >> 12;
  RtlSetBits(
    (PRTL_BITMAP)(BugCheckParameter2 + 632 * v7 + 24 * (v4 + 13)),
    v9,
    *(_DWORD *)((*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8) >> 12);
  *(_DWORD *)(v8 + 24 * v4 + BugCheckParameter2 + 308) = v9;
  result = (unsigned int)(1 << v4);
  *(_DWORD *)(v8 + BugCheckParameter2 + 896) |= result;
  return result;
}
