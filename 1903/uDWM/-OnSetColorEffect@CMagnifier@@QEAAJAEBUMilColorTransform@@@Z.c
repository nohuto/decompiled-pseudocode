/*
 * XREFs of ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x180083F10
 * Callers:
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x180084128 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180084818 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcmp_0 @ 0x18004FD9E (memcmp_0.c)
 *     ??$CreateProxy@VCColorTransformResourceProxy@@@CCompositor@@IEAAJPEAPEAVCColorTransformResourceProxy@@@Z @ 0x1800B5920 (--$CreateProxy@VCColorTransformResourceProxy@@@CCompositor@@IEAAJPEAPEAVCColorTransformResourceP.c)
 *     ?Update@CColorTransformResourceProxy@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800B6634 (-Update@CColorTransformResourceProxy@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJI@Z @ 0x1800B6704 (-SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJI@Z.c)
 */

__int64 __fastcall CMagnifier::OnSetColorEffect(CMagnifier *this, const struct MilColorTransform *a2)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // eax
  char *v7; // r14
  CColorTransformResourceProxy *v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax

  v3 = 0;
  if ( !memcmp_0(&g_MilColorTransfIdentity, a2, 0x64uLL) )
  {
    v5 = CMagnifierRenderTargetProxy::SetColorTransform(*((CMagnifierRenderTargetProxy **)this + 3), 0);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xACu);
      return v3;
    }
    *(_OWORD *)((char *)this + 68) = g_MilColorTransfIdentity;
    *(_OWORD *)((char *)this + 84) = xmmword_1800CAE20;
    *(_OWORD *)((char *)this + 100) = xmmword_1800CAE30;
    *(_OWORD *)((char *)this + 116) = xmmword_1800CAE40;
    *(_OWORD *)((char *)this + 132) = xmmword_1800CAE50;
    *(_OWORD *)((char *)this + 148) = xmmword_1800CAE60;
    v6 = 1065353216;
    goto LABEL_16;
  }
  if ( memcmp_0((char *)this + 68, a2, 0x64uLL) )
  {
    v7 = (char *)this + 40;
    v8 = (CColorTransformResourceProxy *)*((_QWORD *)this + 5);
    if ( !v8 )
    {
      v9 = CCompositor::CreateProxy<CColorTransformResourceProxy>(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
             (char *)this + 40);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xB7u);
        return v3;
      }
      v8 = *(CColorTransformResourceProxy **)v7;
    }
    v10 = CColorTransformResourceProxy::Update(v8, a2);
    v3 = v10;
    if ( v10 >= 0 )
    {
      v11 = CMagnifierRenderTargetProxy::SetColorTransform(
              *((CMagnifierRenderTargetProxy **)this + 3),
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 16LL) + 24LL));
      v3 = v11;
      if ( v11 >= 0 )
      {
        *(_OWORD *)((char *)this + 68) = *(_OWORD *)a2;
        *(_OWORD *)((char *)this + 84) = *((_OWORD *)a2 + 1);
        *(_OWORD *)((char *)this + 100) = *((_OWORD *)a2 + 2);
        *(_OWORD *)((char *)this + 116) = *((_OWORD *)a2 + 3);
        *(_OWORD *)((char *)this + 132) = *((_OWORD *)a2 + 4);
        *(_OWORD *)((char *)this + 148) = *((_OWORD *)a2 + 5);
        v6 = *((_DWORD *)a2 + 24);
LABEL_16:
        *((_DWORD *)this + 41) = v6;
        return v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xBCu);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xBAu);
    }
  }
  return v3;
}
