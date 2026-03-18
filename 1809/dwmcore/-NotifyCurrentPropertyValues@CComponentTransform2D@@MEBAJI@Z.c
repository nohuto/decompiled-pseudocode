/*
 * XREFs of ?NotifyCurrentPropertyValues@CComponentTransform2D@@MEBAJI@Z @ 0x18018E240
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x1800574C0 (-NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV-$span@QEBUAnimatedProperty@.c)
 */

__int64 __fastcall CComponentTransform2D::NotifyCurrentPropertyValues(CComponentTransform2D *this, int a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 6LL;
  v3[1] = &CComponentTransform2D::k_rgAnimDef;
  return CPropertyChangeResource::NotifyCurrentPropertyValuesImpl(this, a2, v3);
}
