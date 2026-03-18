/*
 * XREFs of ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x1800C3790
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180004798 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18006C430 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18007C35C (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180217E70 (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 */

__int64 __fastcall CWindowNode::ProcessSetDxClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETDXCLIP *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  CGeometry *Resource; // rsi
  CGeometry *v8; // rcx
  __int64 v10; // rcx
  bool v11; // r14
  signed int ShapeData; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  CShape *v18; // [rsp+30h] [rbp-50h] BYREF
  char v19; // [rsp+38h] [rbp-48h]
  CShape *v20; // [rsp+40h] [rbp-40h] BYREF
  char v21; // [rsp+48h] [rbp-38h]
  float v22[4]; // [rsp+50h] [rbp-30h] BYREF
  struct D2D_RECT_F v23; // [rsp+60h] [rbp-20h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 )
  {
    Resource = (CGeometry *)CResourceTable::GetResource((__int64)a2, v5, 0x3Eu);
    if ( !Resource )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x88980403, 0x481u, 0LL);
      return v4;
    }
  }
  v8 = (CGeometry *)*((_QWORD *)this + 110);
  if ( Resource != v8 )
  {
    v20 = 0LL;
    v18 = 0LL;
    v11 = 0;
    v21 = 0;
    v19 = 0;
    if ( Resource )
    {
      ShapeData = CGeometry::GetShapeData(
                    Resource,
                    (const struct D2D_SIZE_F *)((char *)this + 132),
                    (struct CShapePtr *)&v20);
      v4 = ShapeData;
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, ShapeData, 0x496u, 0LL);
LABEL_20:
        CShapePtr::Release((CShapePtr *)&v18);
        CShapePtr::Release((CShapePtr *)&v20);
        return v4;
      }
      v8 = (CGeometry *)*((_QWORD *)this + 110);
    }
    if ( v8
      && (v14 = CGeometry::GetShapeData(v8, (const struct D2D_SIZE_F *)((char *)this + 132), (struct CShapePtr *)&v18),
          v4 = v14,
          v14 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x49Bu, 0LL);
    }
    else
    {
      if ( CShapePtr::IsAxisAlignedRectangle(&v20) && CShapePtr::IsAxisAlignedRectangle(&v18) )
      {
        CWindowNode::GetGeometryBounds(this, Resource, &v23);
        CWindowNode::GetGeometryBounds(this, *((_QWORD *)this + 110), v22);
        v11 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(&v23, v22) != 0;
      }
      v16 = CResource::RegisterNotifier(this, Resource);
      v4 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x4ADu, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 110));
        *((_QWORD *)this + 110) = Resource;
        if ( !v11 )
        {
          *((_BYTE *)this + 936) = 0;
          CVisual::PropagateFlags((__int64)this, 5u, 0);
        }
      }
    }
    goto LABEL_20;
  }
  return v4;
}
