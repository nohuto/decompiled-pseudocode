/*
 * XREFs of ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x18001E328
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800681F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801FAB4C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801FAC24 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CShapePtr::IsEmpty(CShapePtr *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *(_QWORD *)this;
  v2 = 0;
  if ( !v1 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1) )
    return 1;
  return v2;
}
