/*
 * XREFs of ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x180025104
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180024E10 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001D720 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetGlowImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800251F8 (-SetGlowImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z @ 0x18002522C (-SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800252B0 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::DrawStateW(__int64 a1, __int64 a2, unsigned int a3)
{
  struct CBitmapSource *v3; // rdi
  unsigned int v6; // esi
  struct CBitmapSource *v7; // r15
  __int64 v8; // r14
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // al
  int v14; // eax
  __int64 v15; // rcx

  v3 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  if ( a3 != 4 && *(_DWORD *)(a1 + 328) >= 4u )
  {
    v9 = (*(_BYTE *)(a1 + 280) & 0x10) == 0;
    v10 = 1LL;
    if ( v9 )
      v10 = a3;
    v7 = *(struct CBitmapSource **)(*(_QWORD *)(a1 + 304) + 8 * v10);
    if ( *(_DWORD *)(a1 + 360) >= 4u )
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 336) + 8 * v10);
  }
  if ( a3 - 1 <= 1 && *(_QWORD *)(a1 + 368) && *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17) )
  {
    v14 = CVisual::MoveToFront((CVisual *)a1, 0);
    v6 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x18Fu);
      return v6;
    }
    v3 = *(struct CBitmapSource **)(a1 + 368);
  }
  CAtlasedImage::SetBitmapSource((CAtlasedImage *)a2, v7);
  CAtlasButton::SetGlyphImage(
    a2,
    v8,
    v11,
    (unsigned int)(int)((double)*(int *)(a1 + 408) * *((double *)CDesktopManager::s_pDesktopManagerInstance + 60)));
  CAtlasButton::SetGlowImage((CAtlasButton *)a2, v3);
  v12 = (*(_BYTE *)(a1 + 280) & 0x20) != 0;
  if ( *(_BYTE *)(a2 + 160) != v12 )
  {
    v15 = *(_QWORD *)(a2 + 80);
    *(_BYTE *)(a2 + 160) = v12;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 24LL))(v15, 0x2000LL);
  }
  return v6;
}
