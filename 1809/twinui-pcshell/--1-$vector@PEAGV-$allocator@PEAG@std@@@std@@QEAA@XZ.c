/*
 * XREFs of ??1?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@XZ @ 0x18013D640
 * Callers:
 *     _StartLayout::SelectionData::SelectionData_::_1_::dtor$0 @ 0x18013D4EF (_StartLayout--SelectionData--SelectionData_--_1_--dtor$0.c)
 *     _StartLayout::SelectionData::GetSelectionScore_::_1_::dtor$0 @ 0x18013DE79 (_StartLayout--SelectionData--GetSelectionScore_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<unsigned short *>::~vector<unsigned short *>(__int64 a1)
{
  return std::vector<void *>::_Tidy(a1);
}
