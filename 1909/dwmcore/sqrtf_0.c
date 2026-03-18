/*
 * XREFs of sqrtf_0 @ 0x1800F01DB
 * Callers:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180009550 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     EncodeTBNFrameToQuaternion @ 0x180009850 (EncodeTBNFrameToQuaternion.c)
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x180009AF0 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18000A108 (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTra.c)
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x18000A350 (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU-.c)
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x18000A5E0 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x1800210A8 (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18003ECD0 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x1800502C4 (-Get2DScaleDimensions@Matrix3x3@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180087420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180097560 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?GenerateAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x1800B9D10 (-GenerateAntialiasBorder@Mesh@@AEBAX_NAEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800C0FB8 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1800C10AC (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x1800C21E4 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 *     ?NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z @ 0x1800E5CFC (-NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016CB64 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@PEAUD2D_POINT_2F@@@Z @ 0x1801B2770 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBU-$V.c)
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801B7A4C (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?CalculateWorldRenderingScale@CVisual@@IEAAMXZ @ 0x1801C1184 (-CalculateWorldRenderingScale@CVisual@@IEAAMXZ.c)
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1801C2370 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1801C59B8 (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801C5CB8 (-IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z.c)
 *     ?IntersectTwoLines@@YA_NULine3D@@0MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801C5E14 (-IntersectTwoLines@@YA_NULine3D@@0MPEAUfloat3@Numerics@Foundation@Windows@@@Z.c)
 *     ?CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z @ 0x1801D80C4 (-CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z.c)
 *     ?AnimateSingle@CParticleAttractor@@UEBAXAEAV?$span@M$0?0@gsl@@0@Z @ 0x1801E6EA0 (-AnimateSingle@CParticleAttractor@@UEBAXAEAV-$span@M$0-0@gsl@@0@Z.c)
 *     ??0CLineSpawner@EmitterShapes@@QEAA@Ufloat2@Numerics@Foundation@Windows@@0@Z @ 0x1801E9840 (--0CLineSpawner@EmitterShapes@@QEAA@Ufloat2@Numerics@Foundation@Windows@@0@Z.c)
 *     ?UpdateBounds@CParticleEmitterVisual@@IEAAXXZ @ 0x1801ED16C (-UpdateBounds@CParticleEmitterVisual@@IEAAXXZ.c)
 *     ?UpdateParticles@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801ED448 (-UpdateParticles@CParticleEmitterVisual@@IEAAXM@Z.c)
 *     ?Distance@CExpressionValueStack@@QEAAJXZ @ 0x1801FEEA4 (-Distance@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Length@CExpressionValueStack@@QEAAJXZ @ 0x1801FF808 (-Length@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Sqrt@CExpressionValueStack@@QEAAJXZ @ 0x180202B7C (-Sqrt@CExpressionValueStack@@QEAAJXZ.c)
 *     ?AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18020A6E0 (-AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?CalculateFigureLength@Figure@CPathEmitterEdge@EmitterShapes@@QEAAX_N@Z @ 0x18020AA3C (-CalculateFigureLength@Figure@CPathEmitterEdge@EmitterShapes@@QEAAX_N@Z.c)
 *     EmitterShapes::GetPointOnLine @ 0x18020AF84 (EmitterShapes--GetPointOnLine.c)
 *     ?GetRandomPoint@CEllipseSpawner@EmitterShapes@@UEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@M@Z @ 0x18020B060 (-GetRandomPoint@CEllipseSpawner@EmitterShapes@@UEBA-AUfloat2@Numerics@Foundation@Windows@@AEAV-$.c)
 *     ?GetRandomPoint@CPathEmitterArea@EmitterShapes@@QEAA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x18020B198 (-GetRandomPoint@CPathEmitterArea@EmitterShapes@@QEAA-AUfloat2@Numerics@Foundation@Windows@@AEAV-.c)
 *     ?D3DXQuaternionLerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x1802277C0 (-D3DXQuaternionLerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z.c)
 *     ?D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x180227B94 (-D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x180227D0C (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x1802282BC (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z @ 0x180228AF8 (-D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x180228C2C (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 *     ?FindControlPointAtDistance@CTrimPathOperation@@AEBA_NIPEAIPEAMPEAUBezierTrimPoint@1@@Z @ 0x18024AE4C (-FindControlPointAtDistance@CTrimPathOperation@@AEBA_NIPEAIPEAMPEAUBezierTrimPoint@1@@Z.c)
 *     ?SumPointDistances@CPathLengthOperation@@AEBAMI@Z @ 0x18024BA58 (-SumPointDistances@CPathLengthOperation@@AEBAMI@Z.c)
 *     ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z @ 0x18024C6F8 (-FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z.c)
 *     GetIndividualScales @ 0x18025D0D4 (GetIndividualScales.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl sqrtf_0(float X)
{
  return sqrtf(X);
}
