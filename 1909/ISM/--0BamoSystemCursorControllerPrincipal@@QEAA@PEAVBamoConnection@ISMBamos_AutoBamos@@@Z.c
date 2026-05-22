/*
 * XREFs of ??0BamoSystemCursorControllerPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180023B14
 * Callers:
 *     ??0SystemCursorController@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180022D48 (--0SystemCursorController@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180023D08 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
BamoSystemCursorControllerPrincipal *__fastcall BamoSystemCursorControllerPrincipal::BamoSystemCursorControllerPrincipal(
        BamoSystemCursorControllerPrincipal *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  *(_QWORD *)this = &BamoSystemCursorControllerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &SystemCursorController::`vftable'{for `ISystemCursorControllerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl(
    (BamoSystemCursorControllerPrincipal *)((char *)this + 16),
    a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoSystemCursorControllerPrincipalImpl::`vftable';
  *((_DWORD *)this + 14) = 0;
  return this;
}
