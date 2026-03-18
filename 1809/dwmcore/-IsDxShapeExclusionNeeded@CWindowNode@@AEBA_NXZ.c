/*
 * XREFs of ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x180079DD4
 * Callers:
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800B1144 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 * Callees:
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x180018BA0 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801B9788 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

bool __fastcall CWindowNode::IsDxShapeExclusionNeeded(CWindowNode *this)
{
  bool v1; // bl
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 113) && *((_BYTE *)this + 958) )
  {
    CWindowNode::GetDxClipShape(this, v3);
    if ( v3[0] )
      v1 = CShapePtr::IsEmpty((CShapePtr *)v3) == 0;
    CShapePtr::Release((CShapePtr *)v3);
  }
  return v1;
}
