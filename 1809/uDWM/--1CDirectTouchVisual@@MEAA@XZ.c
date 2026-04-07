/*
 * XREFs of ??1CDirectTouchVisual@@MEAA@XZ @ 0x1800459F4
 * Callers:
 *     ??_GCDirectTouchVisual@@MEAAPEAXI@Z @ 0x1800459B0 (--_GCDirectTouchVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180018DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180045CB0 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 */

void __fastcall CDirectTouchVisual::~CDirectTouchVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *this = (CBaseObject *)&CDirectTouchVisual::`vftable';
  CDirectTouchVisual::StopTimer((CDirectTouchVisual *)this);
  CVisual::SetOpacity((CVisual *)this, 0.0);
  v2 = this[52];
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = this[51];
  if ( v3 )
    CBaseObject::Release(v3);
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
}
