/*
 * XREFs of ??1CAccent@@MEAA@XZ @ 0x180029854
 * Callers:
 *     ??_GCAccent@@MEAAPEAXI@Z @ 0x180029810 (--_GCAccent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x1800299B8 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180038228 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CAccent::~CAccent(CAccent *this)
{
  *(_QWORD *)this = &CAccent::`vftable';
  CAccent::_CleanupNonStaticsResources(this);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 360);
  *(_QWORD *)this = &CCanvasVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
