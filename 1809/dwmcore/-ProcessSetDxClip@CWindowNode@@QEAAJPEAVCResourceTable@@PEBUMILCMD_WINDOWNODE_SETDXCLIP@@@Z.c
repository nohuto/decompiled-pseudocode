/*
 * XREFs of ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x180068040
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AB5C8 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180165870 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B9810 (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 */

__int64 __fastcall CWindowNode::ProcessSetDxClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETDXCLIP *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  CGeometry *Resource; // rsi
  CGeometry *v8; // rcx
  unsigned int v10; // ecx
  bool v11; // r14
  int ShapeData; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // [rsp+30h] [rbp-50h] BYREF
  char v19; // [rsp+38h] [rbp-48h]
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  char v21; // [rsp+48h] [rbp-38h]
  _BYTE v22[16]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v23[16]; // [rsp+60h] [rbp-20h] BYREF

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( (_DWORD)v5 )
  {
    Resource = (CGeometry *)CResourceTable::GetResource(a2, v5, 59LL);
    if ( !Resource )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0x491u);
      return v4;
    }
  }
  v8 = (CGeometry *)*((_QWORD *)this + 112);
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
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, ShapeData, 0x4A6u);
LABEL_20:
        CShapePtr::Release((CShapePtr *)&v18);
        CShapePtr::Release((CShapePtr *)&v20);
        return v4;
      }
      v8 = (CGeometry *)*((_QWORD *)this + 112);
    }
    if ( v8
      && (v14 = CGeometry::GetShapeData(v8, (const struct D2D_SIZE_F *)((char *)this + 132), (struct CShapePtr *)&v18),
          v4 = v14,
          v14 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x4ABu);
    }
    else
    {
      if ( CShapePtr::IsAxisAlignedRectangle((CShapePtr *)&v20) && CShapePtr::IsAxisAlignedRectangle((CShapePtr *)&v18) )
      {
        CWindowNode::GetGeometryBounds(this, Resource, v23);
        CWindowNode::GetGeometryBounds(this, *((_QWORD *)this + 112), v22);
        v11 = (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(v23, v22) != 0;
      }
      v16 = CResource::RegisterNotifier(this, Resource);
      v4 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x4BDu);
      }
      else
      {
        CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 112));
        *((_QWORD *)this + 112) = Resource;
        if ( !v11 )
        {
          *((_BYTE *)this + 952) = 0;
          CVisual::PropagateFlags(this, 5LL);
        }
      }
    }
    goto LABEL_20;
  }
  return v4;
}
