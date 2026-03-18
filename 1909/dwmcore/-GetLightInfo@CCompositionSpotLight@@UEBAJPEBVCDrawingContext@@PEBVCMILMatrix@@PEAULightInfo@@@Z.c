/*
 * XREFs of ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180021170
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x180020FAC (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x1800210A8 (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 *     ?TransformAttenuation@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@AEBUfloat2@345@PEAULightInfo@@@Z @ 0x1800212E0 (-TransformAttenuation@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@AEBUfloat2.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     cosf_0 @ 0x1800F0193 (cosf_0.c)
 */

__int64 __fastcall CCompositionSpotLight::GetLightInfo(
        CCompositionSpotLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  __int64 v5; // rcx
  float *v6; // rax
  __int64 v9; // r9
  float *v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // esi
  CCompositionLight *v15; // rcx
  float v16; // xmm4_4
  float v17; // xmm6_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  _BYTE v21[16]; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)a4 = 3;
  v5 = this - a4;
  v6 = (float *)((char *)a4 + 4);
  v9 = 4LL;
  do
  {
    *v6 = *(float *)((char *)v6 + v5 + 300) * *((float *)this + 97);
    ++v6;
    --v9;
  }
  while ( v9 );
  v10 = (float *)((char *)a4 + 20);
  v11 = 4LL;
  do
  {
    *v10 = *(float *)((char *)v10 + v5 + 300) * *((float *)this + 98);
    ++v10;
    --v11;
  }
  while ( v11 );
  v12 = CCompositionLight::CalcLocalToDeviceMatrix(
          (struct LightInfo *)((char *)a4 + 104),
          a2,
          a3,
          *((struct CVisual **)this + 31),
          (struct LightInfo *)((char *)a4 + 104),
          (struct LightInfo *)((char *)a4 + 172));
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x68u, 0LL);
  }
  else
  {
    *((_OWORD *)a4 + 5) = *(_OWORD *)CCompositionLight::CalcEyePointOrVector(v13, (__int64)v21, *((_QWORD *)this + 31));
    *(_QWORD *)((char *)a4 + 36) = *(_QWORD *)((char *)this + 348);
    *((_DWORD *)a4 + 11) = *((_DWORD *)this + 89);
    *((_QWORD *)a4 + 6) = *((_QWORD *)this + 45);
    *((_DWORD *)a4 + 14) = *((_DWORD *)this + 92);
    CCompositionLight::TransformAttenuation(
      v15,
      (CCompositionSpotLight *)((char *)this + 336),
      (CCompositionSpotLight *)((char *)this + 380),
      a4);
    v16 = *((float *)this + 93);
    v17 = 0.0;
    if ( v16 < 0.0 )
      v18 = 0.0;
    else
      v18 = fminf(1.5707964, v16);
    *((float *)a4 + 18) = cosf_0(v18);
    v19 = *((float *)this + 94);
    if ( v19 >= 0.0 )
      v17 = fminf(1.5707964, v19);
    *((float *)a4 + 19) = cosf_0(v17);
  }
  return v14;
}
