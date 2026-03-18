/*
 * XREFs of ?GetLightToCameraMatrix@CProjectedShadow@@AEBAJPEBVCDrawingContext@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x1801CAAF4
 * Callers:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAAJPEBVCDrawingContext@@PEA_N@Z @ 0x1801CB5B4 (-IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAAJPEBVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetLightPosition@CProjectedShadow@@CAJPEBVCDrawingContext@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1801CA864 (-GetLightPosition@CProjectedShadow@@CAJPEBVCDrawingContext@@PEBVCCompositionLight@@PEAVCVisual@@.c)
 *     ?make_float4x4_look_at@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@00@Z @ 0x1801CC87C (-make_float4x4_look_at@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@00@Z.c)
 */

__int64 __fastcall CProjectedShadow::GetLightToCameraMatrix(
        CProjectedShadow *this,
        const struct CDrawingContext *a2,
        const struct CCompositionLight *a3,
        const struct Windows::Foundation::Numerics::float3 *a4,
        struct CMILMatrix *a5)
{
  bool v8; // r14
  struct CVisual *v9; // rax
  int LightPosition; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  FLOAT v13; // xmm1_4
  FLOAT v14; // xmm2_4
  _OWORD *float4x4_look_at; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  struct D2D_VECTOR_3F v20; // [rsp+38h] [rbp-11h] BYREF
  struct D2D_VECTOR_3F v21; // [rsp+48h] [rbp-1h] BYREF
  _BYTE v22[64]; // [rsp+58h] [rbp+Fh] BYREF

  v8 = (*(unsigned int (__fastcall **)(const struct CCompositionLight *))(*(_QWORD *)a3 + 184LL))(a3) == 1;
  v9 = (struct CVisual *)(*(__int64 (__fastcall **)(const struct CCompositionLight *))(*(_QWORD *)a3 + 168LL))(a3);
  LightPosition = CProjectedShadow::GetLightPosition(a2, a3, v9, &v21);
  v12 = LightPosition;
  if ( LightPosition < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, LightPosition, 0x38Du);
  }
  else
  {
    v20 = v21;
    if ( v8 )
    {
      v13 = v21.y + *((float *)a4 + 1);
      v14 = v21.z + *((float *)a4 + 2);
      v20.x = v21.x + *(float *)a4;
      v20.y = v13;
      v20.z = v14;
    }
    v21.x = 0.0;
    v21.z = 0.0;
    v21.y = FLOAT_1_0;
    float4x4_look_at = (_OWORD *)Windows::Foundation::Numerics::make_float4x4_look_at(v22, &v20, a4, &v21);
    v16 = float4x4_look_at[1];
    v17 = float4x4_look_at[2];
    v18 = float4x4_look_at[3];
    *(_OWORD *)a5 = *float4x4_look_at;
    *((_OWORD *)a5 + 1) = v16;
    *((_OWORD *)a5 + 2) = v17;
    *((_OWORD *)a5 + 3) = v18;
    *((_DWORD *)a5 + 16) = 0;
  }
  return v12;
}
