/*
 * XREFs of ??$emplace_back@$$V@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAAAEAUSuperWetStroke@CWetInkManager@@XZ @ 0x1802503BC
 * Callers:
 *     ?TryRegisterSuperWetForDraw@CWetInkManager@@QEAAJPEAVISuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180250860 (-TryRegisterSuperWetForDraw@CWetInkManager@@QEAAJPEAVISuperWetSource@@PEAVCDrawingContext@@_NPEA.c)
 * Callees:
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAAPEAUSuperWetStroke@CWetInkManager@@QEAU23@@Z @ 0x18025015C (--$_Emplace_reallocate@$$V@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke.c)
 */

__int64 __fastcall std::vector<CWetInkManager::SuperWetStroke>::emplace_back<>(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = a1[1];
  if ( a1[2] == v1 )
    return std::vector<CWetInkManager::SuperWetStroke>::_Emplace_reallocate<>(a1, (_QWORD *)a1[1]);
  *(_DWORD *)(v1 + 73) = 0;
  *(_WORD *)(v1 + 77) = 0;
  *(_BYTE *)(v1 + 79) = 0;
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  memset_0((void *)(v1 + 16), 0, 0x38uLL);
  *(_BYTE *)(v1 + 72) = 0;
  result = a1[1];
  a1[1] = result + 80;
  return result;
}
