/*
 * XREFs of ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800B0A9C
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180020C10 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x1800B0508 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 * Callees:
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180027090 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003852C (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::PositionProjectedShadowReceiverVisual(CProjectedShadowScene *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __m128i v4; // xmm1
  __m128i v5; // xmm2
  int v6; // edi
  int v7; // esi
  __int64 (__fastcall *v8)(__int64, unsigned __int64 *); // rax
  unsigned int v9; // eax
  __m128i v10; // xmm0
  int v11; // eax
  __m128 v12; // xmm0
  unsigned __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  int v15; // [rsp+28h] [rbp-18h]
  int v16; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v18; // [rsp+50h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 8) )
  {
    v18 = 0LL;
    v1 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
           (_QWORD *)this + 5,
           (__int64)&v18);
    v2 = v1;
    if ( v1 < 0 )
    {
      v3 = 137LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (__int64)"windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v1);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v18);
      return v2;
    }
    v16 = 0;
    v4 = _mm_cvtsi32_si128(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 111));
    v5 = _mm_cvtsi32_si128(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 112));
    v6 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 113);
    v7 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 114);
    v15 = 0;
    v8 = *(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v18 + 168LL);
    v14 = _mm_unpacklo_ps(_mm_cvtepi32_ps(v4), _mm_cvtepi32_ps(v5)).m128_u64[0];
    v1 = v8(v18, &v14);
    v2 = v1;
    if ( v1 < 0 )
    {
      v3 = 143LL;
      goto LABEL_12;
    }
    v9 = 0;
    if ( v6 >= 0 )
      v9 = v6;
    v10 = _mm_cvtsi32_si128(v9);
    v11 = 0;
    v12 = _mm_cvtepi32_ps(v10);
    if ( v7 >= 0 )
      v11 = v7;
    v1 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v18 + 288LL))(
           v18,
           _mm_unpacklo_ps(v12, (__m128)COERCE_UNSIGNED_INT((float)v11)).m128_u64[0]);
    v2 = v1;
    if ( v1 < 0 )
    {
      v3 = 145LL;
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v18);
  }
  return 0LL;
}
