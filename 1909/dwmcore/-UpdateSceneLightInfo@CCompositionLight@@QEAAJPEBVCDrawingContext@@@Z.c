/*
 * XREFs of ?UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z @ 0x1801C6380
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016CB64 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18017AC08 (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

__int64 __fastcall CCompositionLight::UpdateSceneLightInfo(CCompositionLight *this, const struct CDrawingContext *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(CCompositionLight *, const struct CDrawingContext *))(*(_QWORD *)this + 288LL))(
         this,
         a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( !*((_BYTE *)this + 244) )
    {
      CSceneResourceManager::RegisterSceneListener(
        *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 128LL),
        (CCompositionLight *)((char *)this + 72));
      *((_BYTE *)this + 244) = 1;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x229,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionlight.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
