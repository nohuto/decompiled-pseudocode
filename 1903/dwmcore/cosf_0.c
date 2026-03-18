/*
 * XREFs of cosf_0 @ 0x1800EC4D3
 * Callers:
 *     ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180023380 (-GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 *     ?Cos@CExpressionValueStack@@QEAAJXZ @ 0x1800851CC (-Cos@CExpressionValueStack@@QEAAJXZ.c)
 *     ?CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x1801EC600 (-CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z.c)
 *     ?GetRandomUnitDir@@YA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@AEBU1234@1_N@Z @ 0x1801FF178 (-GetRandomUnitDir@@YA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenne_twister_engine@I$0CA@.c)
 *     ?GetRandomPoint@CEllipseSpawner@EmitterShapes@@UEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@M@Z @ 0x18020C750 (-GetRandomPoint@CEllipseSpawner@EmitterShapes@@UEBA-AUfloat2@Numerics@Foundation@Windows@@AEAV-$.c)
 *     ?make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@M@Z @ 0x18021D3B4 (-make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@M@Z.c)
 *     ?make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@MAEBUfloat3@123@@Z @ 0x18021D6B8 (-make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@MAEBUfloat3@123@@Z.c)
 *     ?D2DMatrixRotationNormalizedAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x1802285B8 (-D2DMatrixRotationNormalizedAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x180228850 (-D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x1802288D0 (-D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x180228998 (-D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x180228A1C (-D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x180228AE8 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x180228B68 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x1802290E0 (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x180229160 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl cosf_0(float X)
{
  return cosf(X);
}
