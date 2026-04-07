/*
 * XREFs of ?UpdateTransform@CVisual@@AEAAJXZ @ 0x18008E4E4
 * Callers:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18000E300 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B120 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800216A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180023980 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180012590 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ??$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x180024B04 (--$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ?SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z @ 0x18003B1E4 (-SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x18003D2F4 (-Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisual::UpdateTransform(CVisual *this)
{
  struct CBaseTransformProxy **v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  char CurrentTransform; // al
  float v7; // xmm0_4
  float v8; // xmm1_4
  CMatrixTransformProxy *v9; // rcx
  int v10; // eax
  struct _MilMatrix3x2D v12; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v13[16]; // [rsp+68h] [rbp+7h] BYREF

  v1 = (struct CBaseTransformProxy **)((char *)this + 104);
  if ( !*((_QWORD *)this + 13) )
  {
    v3 = CCompositor::CreateProxy<CMatrixTransformProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           (__int64 *)this + 13);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x293u);
      return v4;
    }
    v5 = CVisualProxy::SetTransform(*((CVisualProxy **)this + 2), *v1);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x294u);
      return v4;
    }
  }
  CurrentTransform = CVisual::GetCurrentTransform(this, (struct D2DMatrix *)v13);
  v7 = *(float *)v13;
  v8 = *(float *)&v13[1];
  *((_BYTE *)this + 84) &= ~2u;
  v9 = *v1;
  *((_BYTE *)this + 84) |= 2 * CurrentTransform;
  v12.S_11 = v7;
  v12.S_12 = v8;
  v12.S_21 = *(float *)&v13[4];
  v12.S_22 = *(float *)&v13[5];
  v12.DX = *(float *)&v13[12];
  v12.DY = *(float *)&v13[13];
  v10 = CMatrixTransformProxy::Update(v9, &v12);
  v4 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x2A2u);
  return v4;
}
