/*
 * XREFs of ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180026F08
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180020C10 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180043E68 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?ValidateDevice@UdwmDcompVisual@@QEAAJXZ @ 0x180023B34 (-ValidateDevice@UdwmDcompVisual@@QEAAJXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180027090 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z @ 0x1800270D4 (-ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B57C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037508 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003852C (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlobalLightSet::PositionCoordinateSpaceVisual(CGlobalLightSet *this)
{
  struct UdwmDcompVisual *v1; // rdx
  int v3; // eax
  int v4; // ebx
  struct tagPOINT v5; // rcx
  int v6; // r14d
  int v7; // esi
  int v8; // r15d
  int v9; // r12d
  __int64 (__fastcall *v10)(__int64, unsigned __int64 *); // rax
  int v11; // eax
  unsigned int v12; // eax
  __m128i v13; // xmm0
  int v14; // eax
  __m128 v15; // xmm0
  __int64 v16; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // [rsp+20h] [rbp-20h] BYREF
  int v21; // [rsp+28h] [rbp-18h]
  int v22; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v24; // [rsp+70h] [rbp+30h] BYREF
  struct tagPOINT v25; // [rsp+78h] [rbp+38h] BYREF

  v1 = (struct UdwmDcompVisual *)*((_QWORD *)this + 12);
  if ( !v1 || !CGlobalLightSet::ValidateUdwmDCompVisual(this, v1) )
    return 0LL;
  v3 = UdwmDcompVisual::ValidateDevice(*((UdwmDcompVisual **)this + 12));
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AF,
      (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v3,
      v20);
  }
  else
  {
    v24 = 0LL;
    v5 = *(struct tagPOINT *)(*((_QWORD *)this + 12) + 24LL);
    v25 = v5;
    if ( v5 )
      (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v5 + 8LL))(v5);
    v4 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
           &v25,
           &v24);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
    if ( v4 < 0 )
    {
      v19 = (unsigned int)v4;
      v18 = 434LL;
    }
    else
    {
      v22 = 0;
      v6 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 111);
      v7 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 112);
      v8 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 113);
      v9 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 114);
      v21 = 0;
      v10 = *(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v24 + 168LL);
      v20 = _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v6), (__m128)COERCE_UNSIGNED_INT((float)v7)).m128_u64[0];
      v11 = v10(v24, &v20);
      v4 = v11;
      if ( v11 < 0 )
      {
        v18 = 440LL;
      }
      else
      {
        v12 = 0;
        if ( v8 >= 0 )
          v12 = v8;
        v13 = _mm_cvtsi32_si128(v12);
        v14 = 0;
        v15 = _mm_cvtepi32_ps(v13);
        if ( v9 >= 0 )
          v14 = v9;
        v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v24 + 288LL))(
                v24,
                _mm_unpacklo_ps(v15, (__m128)COERCE_UNSIGNED_INT((float)v14)).m128_u64[0]);
        v4 = v11;
        if ( v11 >= 0 )
        {
          v16 = *((_QWORD *)this + 12);
          v25.x = -v6;
          v25.y = -v7;
          CVisual::SetOffset(*(CVisual **)(v16 + 56), &v25);
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
          return 0LL;
        }
        v18 = 442LL;
      }
      v19 = (unsigned int)v11;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)v19,
      v20);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
  }
  return (unsigned int)v4;
}
