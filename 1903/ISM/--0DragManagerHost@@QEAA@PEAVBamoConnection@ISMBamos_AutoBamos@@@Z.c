/*
 * XREFs of ??0DragManagerHost@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180022D40
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180022A5C (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1800241E8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
DragManagerHost *__fastcall DragManagerHost::DragManagerHost(
        DragManagerHost *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  *(_QWORD *)this = &BamoDragNDropContextualProcessorPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoDragNDropContextualProcessorPrincipal::`vftable'{for `IDragNDropContextualProcessorPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((DragManagerHost *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl::`vftable';
  *(_QWORD *)this = &DragManagerHost::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoDragNDropContextualProcessorPrincipal::`vftable'{for `IDragNDropContextualProcessorPrincipal'};
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
