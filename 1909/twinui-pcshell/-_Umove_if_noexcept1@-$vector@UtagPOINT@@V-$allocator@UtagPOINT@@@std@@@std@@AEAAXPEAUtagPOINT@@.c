/*
 * XREFs of ?_Umove_if_noexcept1@?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@AEAAXPEAUtagPOINT@@00U?$integral_constant@_N$00@2@@Z @ 0x1802A19FC
 * Callers:
 *     ??$_Emplace_reallocate@AEBUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@?$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@std@@@std@@QEAAPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@QEAU23456@AEBU23456@@Z @ 0x180297EC4 (--$_Emplace_reallocate@AEBUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$_Emplace_reallocate@AEBUtagPOINT@@@?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@QEAAPEAUtagPOINT@@QEAU2@AEBU2@@Z @ 0x1803C68B0 (--$_Emplace_reallocate@AEBUtagPOINT@@@-$vector@UtagPOINT@@V-$allocator@UtagPOINT@@@std@@@std@@QE.c)
 *     ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x1803C6A04 (--$_Emplace_reallocate@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAP.c)
 * Callees:
 *     ??$_Ptr_move_cat@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@U12345@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@0@Z @ 0x1800BFA04 (--$_Ptr_move_cat@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@U12345.c)
 *     memmove_0 @ 0x1800D3F03 (memmove_0.c)
 */

void *std::vector<tagPOINT>::_Umove_if_noexcept1(__int64 a1, const void *a2, __int64 a3, void *a4, ...)
{
  va_list va; // [rsp+50h] [rbp+28h] BYREF

  va_start(va, a4);
  std::_Ptr_move_cat<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>(va);
  return memmove_0(a4, a2, a3 - (_QWORD)a2);
}
