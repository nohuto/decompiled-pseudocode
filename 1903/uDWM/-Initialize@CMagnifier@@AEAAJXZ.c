/*
 * XREFs of ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800839E4
 * Callers:
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z @ 0x180083914 (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x180084128 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 * Callees:
 *     ??$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x180037AC4 (--$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ??$CreateProxy@VCMagnifierRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCMagnifierRenderTargetProxy@@@Z @ 0x1800B5DF8 (--$CreateProxy@VCMagnifierRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCMagnifierRenderTargetPro.c)
 *     ?SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z @ 0x1800B672C (-SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z.c)
 */

__int64 __fastcall CMagnifier::Initialize(CMagnifier *this)
{
  CMagnifierRenderTargetProxy **v1; // r14
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  _OWORD v11[3]; // [rsp+30h] [rbp-48h] BYREF

  v1 = (CMagnifierRenderTargetProxy **)((char *)this + 24);
  v3 = CCompositor::CreateProxy<CMagnifierRenderTargetProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         (char *)this + 24);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(CMagnifierRenderTargetProxy *, _QWORD))(*(_QWORD *)*v1 + 8LL))(
           *v1,
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
    v4 = v5;
    if ( v5 >= 0 )
    {
      v6 = *((_QWORD *)this + 4);
      if ( !v6 )
      {
        v7 = CCompositor::CreateProxy<CMatrixTransformProxy>(
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
               (__int64 *)this + 4);
        v4 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x80u);
          return v4;
        }
        v6 = *((_QWORD *)this + 4);
      }
      v11[0] = _xmm;
      v11[1] = _xmm;
      v11[2] = 0LL;
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *))(**(_QWORD **)(*(_QWORD *)(v6 + 16) + 16LL) + 1072LL))(
             *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL),
             *(unsigned int *)(*(_QWORD *)(v6 + 16) + 24LL),
             v11);
      v4 = v8;
      if ( v8 >= 0 )
      {
        v9 = CMagnifierRenderTargetProxy::SetTransform(*v1, *((const struct CMatrixTransformProxy **)this + 4));
        v4 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x8Fu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x8Du);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x7Cu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x7Au);
  }
  return v4;
}
