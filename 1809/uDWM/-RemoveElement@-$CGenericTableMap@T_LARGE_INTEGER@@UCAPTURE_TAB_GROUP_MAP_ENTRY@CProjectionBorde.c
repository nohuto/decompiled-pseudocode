/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAHPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@Z @ 0x1800799CC
 * Callers:
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180081D40 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006B6C (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        CBaseObject **Buffer)
{
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(Buffer + 3);
  return RtlDeleteElementGenericTable(Table, Buffer);
}
