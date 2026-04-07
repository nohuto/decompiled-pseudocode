/*
 * XREFs of ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180027504
 * Callers:
 *     ??_GCTopLevelWindow3D@@MEAAPEAXI@Z @ 0x180027550 (--_GCTopLevelWindow3D@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180020FF0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180021284 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 */

void __fastcall CTopLevelWindow3D::~CTopLevelWindow3D(CTopLevelWindow3D *this)
{
  *(_QWORD *)this = &CTopLevelWindow3D::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 35) = &CTopLevelWindow3D::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  CTopLevelWindow3D::ReleaseSceneObjects(this);
  CTopLevelWindow3D::StopAnimation((__int64)this);
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
