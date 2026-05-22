/*
 * XREFs of ??0SystemCursorController@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180022D48
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18002257C (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAX@2@XZ @ 0x180018FB8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@IV-$shared_ptr@VCustomCursorApplication@@@std@@.c)
 *     ?SetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAXM@Z @ 0x1800234A0 (-SetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAXM@Z.c)
 *     ??0BamoSystemCursorControllerPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180023B14 (--0BamoSystemCursorControllerPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
SystemCursorController *__fastcall SystemCursorController::SystemCursorController(
        SystemCursorController *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  BamoSystemCursorControllerPrincipal::BamoSystemCursorControllerPrincipal(this, a2);
  *(_QWORD *)this = &SystemCursorController::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &SystemCursorController::`vftable'{for `ISystemCursorControllerPrincipal'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::shared_ptr<CustomCursorApplication>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>,0>>::_Buyheadnode();
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  BamoSystemCursorControllerPrincipal::SetScaleOverride((SystemCursorController *)((char *)this + 8), 1.0);
  return this;
}
