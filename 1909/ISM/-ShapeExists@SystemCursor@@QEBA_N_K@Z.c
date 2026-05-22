/*
 * XREFs of ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x1800CA928
 * Callers:
 *     ?DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x1800C9C90 (-DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K.c)
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x1800CBBE8 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x1800CBE00 (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 *     ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x1800CC3F0 (-CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x1800CC6AC (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 *     ?GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ @ 0x1800CD1AC (-GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ.c)
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x1800CD9AC (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 *     ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x1800CDB20 (-SetShape@SystemCursor@@QEAAJ_K@Z.c)
 *     ?SetVisible@SystemCursor@@QEAAJ_N@Z @ 0x1800CDC9C (-SetVisible@SystemCursor@@QEAAJ_N@Z.c)
 * Callees:
 *     ?find@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800CB0F4 (-find@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$allocato.c)
 */

bool __fastcall SystemCursor::ShapeExists(SystemCursor *this, __int64 a2)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  return *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::find(
                      (char *)this + 32,
                      &v3,
                      &v4) != *((_QWORD *)this + 4);
}
