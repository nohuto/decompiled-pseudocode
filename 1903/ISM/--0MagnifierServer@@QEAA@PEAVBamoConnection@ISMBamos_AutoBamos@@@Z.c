/*
 * XREFs of ??0MagnifierServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180022E34
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180022A5C (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1800241E8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
MagnifierServer *__fastcall MagnifierServer::MagnifierServer(
        MagnifierServer *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  *(_QWORD *)this = &BamoMagnifierServerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoMagnifierServerPrincipal::`vftable'{for `IMagnifierServerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((MagnifierServer *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoMagnifierServerPrincipalImpl::`vftable';
  *(_QWORD *)this = &MagnifierServer::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoMagnifierServerPrincipal::`vftable'{for `IMagnifierServerPrincipal'};
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
