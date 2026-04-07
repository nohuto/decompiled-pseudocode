/*
 * XREFs of ?ReleaseResources@CText@@AEAAXXZ @ 0x180024704
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18002246C (-ValidateResources@CText@@AEAAJXZ.c)
 *     ??_GCText@@EEAAPEAXI@Z @ 0x1800373E0 (--_GCText@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002204C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 */

void __fastcall CText::ReleaseResources(CBaseObject **this)
{
  CBaseObject *v2; // rcx

  CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v2 = this[49];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[49] = 0LL;
  }
}
