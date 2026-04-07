/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x18007EDC4
 * Callers:
 *     ??1CMagnifierControl@@EEAA@XZ @ 0x18007E36C (--1CMagnifierControl@@EEAA@XZ.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x18007EB80 (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1MagnifierTableElement@CMagnifierControl@@QEAA@XZ @ 0x18007E450 (--1MagnifierTableElement@CMagnifierControl@@QEAA@XZ.c)
 */

__int64 __fastcall CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        CMagnifierControl::MagnifierTableElement *this)
{
  CMagnifierControl::MagnifierTableElement::~MagnifierTableElement(this);
  return RtlDeleteElementGenericTable(Table, this);
}
