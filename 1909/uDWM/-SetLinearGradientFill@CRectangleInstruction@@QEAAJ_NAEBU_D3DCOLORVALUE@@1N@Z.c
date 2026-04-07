/*
 * XREFs of ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x18003F4D4
 * Callers:
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003F310 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Update@CLinearGradientLegacyMilBrushProxy@@QEAAJNAEBUMilPoint2D@@0W4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x18003F5D4 (-Update@CLinearGradientLegacyMilBrushProxy@@QEAAJNAEBUMilPoint2D@@0W4Enum@MilColorInterpolationM.c)
 *     ??$CreateProxy@VCLinearGradientLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCLinearGradientLegacyMilBrushProxy@@@Z @ 0x1800400CC (--$CreateProxy@VCLinearGradientLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCLinearGradientLeg.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRectangleInstruction::SetLinearGradientFill(
        CRectangleInstruction *this,
        __int64 a2,
        const struct _D3DCOLORVALUE *a3,
        const struct _D3DCOLORVALUE *a4)
{
  CBaseObject *v5; // rcx
  char *v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  void *v12; // [rsp+28h] [rbp-90h]
  _QWORD v13[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v14; // [rsp+60h] [rbp-58h] BYREF
  __int64 v15; // [rsp+70h] [rbp-48h]
  __int128 v16; // [rsp+78h] [rbp-40h]
  double v17; // [rsp+88h] [rbp-30h]
  __int128 v18; // [rsp+90h] [rbp-28h]

  v5 = (CBaseObject *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (char *)this + 24;
  v7 = *((_QWORD *)this + 3);
  if ( !v7 )
  {
    v8 = CCompositor::CreateProxy<CLinearGradientLegacyMilBrushProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 5));
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x6Bu, v12);
      return v9;
    }
    v7 = *((_QWORD *)this + 3);
  }
  v13[0] = 0LL;
  v16 = xmmword_1800C4080;
  v13[1] = 0LL;
  v15 = 0LL;
  v17 = DOUBLE_1_0;
  v18 = xmmword_1800C4070;
  v14 = _xmm;
  v10 = CLinearGradientLegacyMilBrushProxy::Update(v7, v6, v13, &v14);
  v9 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x89u, v12);
  return v9;
}
