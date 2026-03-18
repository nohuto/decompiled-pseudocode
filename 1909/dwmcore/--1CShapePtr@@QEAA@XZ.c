/*
 * XREFs of ??1CShapePtr@@QEAA@XZ @ 0x180153430
 * Callers:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800047C4 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18006996C (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CShapePtr::~CShapePtr(CShapePtr *this)
{
  CShapePtr::Release(this);
}
