/*
 * XREFs of ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x1802196D0
 * Callers:
 *     ?GetPixelFormatInfo@CHwndBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x180216370 (-GetPixelFormatInfo@CHwndBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18000475C (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18005050C (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800880B4 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1802194D8 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

char __fastcall CWindowNode::IsClipSimpleRect(CWindowNode *this)
{
  char IsAxisAlignedRectangle; // di
  CShape *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  IsAxisAlignedRectangle = 1;
  if ( !*((_QWORD *)this + 93)
    || (int)CWindowNode::EnsureEffectiveSpriteClip(this) < 0
    || (IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(*((CShape **)this + 116))) != 0 )
  {
    if ( *((_QWORD *)this + 111) )
    {
      CWindowNode::GetDxClipShape((__int64)this, (struct CShapePtr *)v4);
      if ( v4[0] )
        IsAxisAlignedRectangle = CShapePtr::IsAxisAlignedRectangle(v4);
      CShapePtr::Release((CShapePtr *)v4);
    }
  }
  return IsAxisAlignedRectangle;
}
