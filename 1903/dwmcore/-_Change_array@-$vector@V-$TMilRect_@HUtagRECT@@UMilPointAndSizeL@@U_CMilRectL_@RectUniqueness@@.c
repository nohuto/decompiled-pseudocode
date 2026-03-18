/*
 * XREFs of ?_Change_array@?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@AEAAXQEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@_K1@Z @ 0x18007ACB8
 * Callers:
 *     ??$_Emplace_reallocate@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAV2@$$QEAV2@@Z @ 0x18007ABB4 (--$_Emplace_reallocate@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>>::_Change_array(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    result = std::_Deallocate<16,0>(v6, (a1[2] - v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *a1 = a2;
  a1[2] = a2 + 16 * a4;
  a1[1] = a2 + 16 * a3;
  return result;
}
