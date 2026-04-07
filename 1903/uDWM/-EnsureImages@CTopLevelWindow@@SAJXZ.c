/*
 * XREFs of ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800452E4
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180044E58 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18000E9B8 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x18002C9F0 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x180040CE0 (-CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180040EAC (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180045678 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z @ 0x1800464D4 (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x1800466A8 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 CTopLevelWindow::EnsureImages(void)
{
  unsigned int v0; // ebx
  void *Theme; // rdi
  void *v2; // rbp
  void *v3; // r14
  HINSTANCE v4; // rsi
  int NCAreaHelper; // eax
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int iPropId; // [rsp+20h] [rbp-48h]
  void *v15; // [rsp+28h] [rbp-40h]
  CBaseObject *v16; // [rsp+40h] [rbp-28h] BYREF
  MARGINS pMargins; // [rsp+48h] [rbp-20h] BYREF

  v0 = 0;
  if ( dword_1800DEBB8 )
    return v0;
  Theme = (void *)CDesktopManager::GetTheme(0);
  v2 = (void *)CDesktopManager::GetTheme(1);
  v3 = (void *)CDesktopManager::GetTheme(2);
  v4 = (HINSTANCE)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 77);
  NCAreaHelper = CTopLevelWindow::EnsureWindowFrames();
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 697;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NCAreaHelper, iPropId, v15);
    return v0;
  }
  NCAreaHelper = CBitmapSource::Create(v4, Theme, v6, &CTopLevelWindow::s_pbsNonClientAtlas);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 704;
    goto LABEL_21;
  }
  NCAreaHelper = CBitmapSource::Create(v4, v2, v7, &CTopLevelWindow::s_pbsTouchAtlas);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 711;
    goto LABEL_21;
  }
  NCAreaHelper = CBitmapSource::Create(v4, v3, v8, &CTopLevelWindow::s_pbsPenAtlas);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 718;
    goto LABEL_21;
  }
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_1800C2EF0,
                   &dword_1800C2E28,
                   *(struct CTopLevelWindow::WindowFrame **)CTopLevelWindow::s_rgpwfWindowFrames,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8));
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 765;
    goto LABEL_21;
  }
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_1800C2E90,
                   &dword_1800C2EE8,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 16),
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 24));
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 809;
    goto LABEL_21;
  }
  CTopLevelWindow::ReadSystemColors();
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_1800C2E30,
                   &dword_1800C2E28,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 32),
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 40));
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 850;
    goto LABEL_21;
  }
  NCAreaHelper = CTopLevelWindow::CreateGlyphsFromAtlas(Theme);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 853;
    goto LABEL_21;
  }
  NCAreaHelper = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(Theme, 45, 1u, &pMargins, &v16);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 859;
    goto LABEL_21;
  }
  NCAreaHelper = GetThemeMargins(Theme, 0LL, 45, 0, 3602, 0LL, &pMargins);
  v9 = 0LL;
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 864;
    goto LABEL_21;
  }
  v10 = (volatile signed __int32 *)v16;
  v11 = 6LL;
  *((MARGINS *)v16 + 3) = pMargins;
  do
  {
    v12 = *(_QWORD *)(v9 + CTopLevelWindow::s_rgpwfWindowFrames);
    if ( v12 )
    {
      *(_QWORD *)(v12 + 1856) = v10;
      _InterlockedIncrement(v10 + 2);
      *(_DWORD *)(*(_QWORD *)(v9 + CTopLevelWindow::s_rgpwfWindowFrames) + 1884LL) = 0;
      v10 = (volatile signed __int32 *)v16;
    }
    v9 += 8LL;
    --v11;
  }
  while ( v11 );
  CBaseObject::Release((CBaseObject *)v10);
  return v0;
}
