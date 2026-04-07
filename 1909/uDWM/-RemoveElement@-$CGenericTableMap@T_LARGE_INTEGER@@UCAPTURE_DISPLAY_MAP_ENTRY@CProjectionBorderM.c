/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAHPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@Z @ 0x18007FE0C
 * Callers:
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800883F0 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180088570 (-StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

__int64 __fastcall CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        _QWORD *Buffer)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(Buffer + 3);
  return RtlDeleteElementGenericTable(Table, Buffer);
}
