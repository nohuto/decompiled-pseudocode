/*
 * XREFs of ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N3W4D2D1_EXTEND_MODE@@@Z @ 0x180004B70 (-Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GR.c)
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180011A20 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180012220 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x1800122D4 (-EnsureD2DGeometry@CRegionShape@@AEBAJXZ.c)
 *     ?IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometry@@_N@Z @ 0x1800167D0 (-IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometr.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180016B40 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800D6748 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180162558 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180195760 (-GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x1801A3C08 (-ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SE.c)
 *     ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801A50F0 (-GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1801AAB48 (-ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PATHGEOMETRY_SETPATH@@@Z.c)
 *     ?EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ @ 0x1801B35A0 (-EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801B36DC (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ @ 0x18021D448 (-EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18021D7E0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@@Z @ 0x18021FB00 (-CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@.c)
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180220200 (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x1802203C8 (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x18007AC64 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x18007B778 (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::HandleGetD2DFactoryNoRef(CD3DDeviceManager *this, struct CD2DFactory **a2)
{
  enum D2D1_FACTORY_TYPE v3; // ecx
  struct CD2DFactory *v4; // rax
  int v5; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  v4 = qword_180308A88;
  v5 = 0;
  if ( qword_180308A88 )
    goto LABEL_2;
  v7 = CD2DFactory::Create(v3, 0, &qword_180308A88);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x10Eu);
    goto LABEL_11;
  }
  v9 = CMesh2DEffect::Register(qword_180308A88);
  v5 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x13Fu);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v5, 0x110u);
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v5, 0x3DDu);
    goto LABEL_3;
  }
  v4 = qword_180308A88;
LABEL_2:
  *a2 = v4;
LABEL_3:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return (unsigned int)v5;
}
