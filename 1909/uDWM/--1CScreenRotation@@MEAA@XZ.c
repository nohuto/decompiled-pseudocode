/*
 * XREFs of ??1CScreenRotation@@MEAA@XZ @ 0x1800A4D0C
 * Callers:
 *     ??_ECScreenRotation@@MEAAPEAXI@Z @ 0x18008ED90 (--_ECScreenRotation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800A5CCC (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

void __fastcall CScreenRotation::~CScreenRotation(CScreenRotation *this)
{
  *(_QWORD *)this = &CScreenRotation::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 35) = &CScreenRotation::`vftable'{for `IAnimationListener'};
  CScreenRotation::Stop(this, 0);
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
