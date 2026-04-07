/*
 * XREFs of ?ReleaseResources@CText@@AEAAXXZ @ 0x1800240C4
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18002284C (-ValidateResources@CText@@AEAAJXZ.c)
 *     ??_GCText@@EEAAPEAXI@Z @ 0x180027720 (--_GCText@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800212F4 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
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
