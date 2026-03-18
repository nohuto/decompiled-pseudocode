/*
 * XREFs of ??0narrowing_error@gsl@@QEAA@XZ @ 0x180181FC0
 * Callers:
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x1800917D0 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 * Callees:
 *     <none>
 */

gsl::narrowing_error *__fastcall gsl::narrowing_error::narrowing_error(gsl::narrowing_error *this)
{
  *((_QWORD *)this + 1) = "unknown";
  *(_QWORD *)this = &gsl::narrowing_error::`vftable';
  return this;
}
