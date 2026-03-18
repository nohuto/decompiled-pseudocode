/*
 * XREFs of ?GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1801CF060
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x180020FAC (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x1800210A8 (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCompositionDistantLight::GetLightInfo(
        CCompositionDistantLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  __int64 v5; // rcx
  float *v6; // rax
  __int64 v8; // r9
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)a4 = 1;
  v5 = this - a4;
  v6 = (float *)((char *)a4 + 4);
  v8 = 4LL;
  do
  {
    *v6 = *(float *)((char *)v6 + v5 + 252) * *((float *)this + 71);
    ++v6;
    --v8;
  }
  while ( v8 );
  v9 = CCompositionLight::CalcLocalToDeviceMatrix(
         (struct LightInfo *)((char *)a4 + 104),
         a2,
         a3,
         *((struct CVisual **)this + 31),
         (struct LightInfo *)((char *)a4 + 104),
         (struct LightInfo *)((char *)a4 + 172));
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x5Bu, 0LL);
  }
  else
  {
    *((_OWORD *)a4 + 5) = *(_OWORD *)CCompositionLight::CalcEyePointOrVector(v10, (__int64)v13, *((_QWORD *)this + 31));
    *((_QWORD *)a4 + 6) = *((_QWORD *)this + 34);
    *((_DWORD *)a4 + 14) = *((_DWORD *)this + 70);
  }
  return v11;
}
