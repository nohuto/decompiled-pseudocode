/*
 * XREFs of ??0BamoInputSystemPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18002414C
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180022A5C (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1800241E8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
BamoInputSystemPrincipal *__fastcall BamoInputSystemPrincipal::BamoInputSystemPrincipal(
        BamoInputSystemPrincipal *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  *(_QWORD *)this = &InputSystem::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoInputSystemPrincipal::`vftable'{for `IInputSystemPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((BamoInputSystemPrincipal *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoInputSystemPrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  return this;
}
