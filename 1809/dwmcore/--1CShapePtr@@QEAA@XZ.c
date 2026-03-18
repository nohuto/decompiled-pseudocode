/*
 * XREFs of ??1CShapePtr@@QEAA@XZ @ 0x180142CE0
 * Callers:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800140C0 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800B1144 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CShapePtr::~CShapePtr(CShapePtr *this)
{
  CShapePtr::Release(this);
}
