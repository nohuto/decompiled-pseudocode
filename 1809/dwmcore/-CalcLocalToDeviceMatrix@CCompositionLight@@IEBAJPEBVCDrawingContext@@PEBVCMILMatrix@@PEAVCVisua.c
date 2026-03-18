/*
 * XREFs of ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x18018F8F0
 * Callers:
 *     ?GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18018EF00 (-GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@.c)
 *     ?GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1801900E0 (-GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@.c)
 *     ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180191940 (-GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18002CB70 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800D95D4 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 */

__int64 __fastcall CCompositionLight::CalcLocalToDeviceMatrix(
        CCompositionLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct _LIST_ENTRY *a4,
        struct CMILMatrix *a5,
        struct CMILMatrix *a6)
{
  __int64 v6; // rdx
  int WorldTransform; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // r10d
  __int128 v13; // [rsp+30h] [rbp-59h] BYREF
  __int128 v14; // [rsp+40h] [rbp-49h]
  __int128 v15; // [rsp+50h] [rbp-39h]
  __int128 v16; // [rsp+60h] [rbp-29h]
  int v17; // [rsp+70h] [rbp-19h]
  __int128 v18; // [rsp+80h] [rbp-9h] BYREF
  __int128 v19; // [rsp+90h] [rbp+7h]
  __int128 v20; // [rsp+A0h] [rbp+17h]
  __int128 v21; // [rsp+B0h] [rbp+27h]
  int v22; // [rsp+C0h] [rbp+37h]

  v6 = *((_QWORD *)a2 + 757);
  v22 = 0;
  WorldTransform = CVisual::GetWorldTransform(a4, v6, 3, (__int64)&v18, 0LL, 0LL);
  v10 = WorldTransform;
  if ( WorldTransform < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, WorldTransform, 0xABu);
  }
  else
  {
    v13 = v18;
    v17 = v22;
    v14 = v19;
    v15 = v20;
    v16 = v21;
    CMILMatrix::Multiply((CMILMatrix *)&v13, a3);
    v18 = v13;
    v22 = v17;
    v19 = v14;
    v20 = v15;
    v21 = v16;
    CMILMatrix::SetToInverse((__m128 *)a5, (const struct CMILMatrix *)&v18);
    *(_OWORD *)a6 = v13;
    *((_OWORD *)a6 + 1) = v14;
    *((_OWORD *)a6 + 2) = v15;
    *((_OWORD *)a6 + 3) = v16;
    *((_DWORD *)a6 + 16) = v11;
  }
  return v10;
}
