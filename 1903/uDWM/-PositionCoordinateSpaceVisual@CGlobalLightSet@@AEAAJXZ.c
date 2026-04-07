/*
 * XREFs of ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x18000CB08
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180014060 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180049510 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z @ 0x18000CA98 (-ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000CC8C (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z @ 0x18000F13C (-ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023D10 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800390F0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A568 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlobalLightSet::PositionCoordinateSpaceVisual(CGlobalLightSet *this)
{
  struct UdwmDcompVisual *v1; // rdx
  UdwmDcompVisual *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  struct tagPOINT v6; // rcx
  int v7; // r14d
  int v8; // esi
  int v9; // r15d
  int v10; // r12d
  __int64 (__fastcall *v11)(__int64, unsigned __int64 *); // rax
  int v12; // eax
  unsigned int v13; // eax
  __m128i v14; // xmm0
  int v15; // eax
  __m128 v16; // xmm0
  __int64 v17; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // [rsp+20h] [rbp-20h] BYREF
  int v22; // [rsp+28h] [rbp-18h]
  int v23; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  bool v25; // [rsp+80h] [rbp+40h] BYREF
  __int64 v26; // [rsp+88h] [rbp+48h] BYREF
  struct tagPOINT v27; // [rsp+90h] [rbp+50h] BYREF

  v1 = (struct UdwmDcompVisual *)*((_QWORD *)this + 12);
  if ( !v1 || !CGlobalLightSet::ValidateUdwmDCompVisual(this, v1) )
    return 0LL;
  v3 = (UdwmDcompVisual *)*((_QWORD *)this + 12);
  v25 = 0;
  v4 = UdwmDcompVisual::ValidateDevice(v3, &v25);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AF,
      (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v4,
      v21);
    return v5;
  }
  if ( !v25 )
  {
    v26 = 0LL;
    v6 = *(struct tagPOINT *)(*((_QWORD *)this + 12) + 24LL);
    v27 = v6;
    if ( v6 )
      (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v6 + 8LL))(v6);
    v5 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
           &v27,
           &v26);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
    if ( (v5 & 0x80000000) != 0 )
    {
      v20 = v5;
      v19 = 438LL;
    }
    else
    {
      v23 = 0;
      v7 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 111);
      v8 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 112);
      v9 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 113);
      v10 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 114);
      v22 = 0;
      v11 = *(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v26 + 168LL);
      v21 = _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v7), (__m128)COERCE_UNSIGNED_INT((float)v8)).m128_u64[0];
      v12 = v11(v26, &v21);
      v5 = v12;
      if ( v12 < 0 )
      {
        v19 = 444LL;
      }
      else
      {
        v13 = 0;
        if ( v9 >= 0 )
          v13 = v9;
        v14 = _mm_cvtsi32_si128(v13);
        v15 = 0;
        v16 = _mm_cvtepi32_ps(v14);
        if ( v10 >= 0 )
          v15 = v10;
        v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v26 + 288LL))(
                v26,
                _mm_unpacklo_ps(v16, (__m128)COERCE_UNSIGNED_INT((float)v15)).m128_u64[0]);
        v5 = v12;
        if ( v12 >= 0 )
        {
          v17 = *((_QWORD *)this + 12);
          v27.x = -v7;
          v27.y = -v8;
          CVisual::SetOffset(*(CVisual **)(v17 + 56), &v27);
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v26);
          return 0LL;
        }
        v19 = 446LL;
      }
      v20 = (unsigned int)v12;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)v20,
      v21);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v26);
    return v5;
  }
  return 2147947423LL;
}
