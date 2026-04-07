/*
 * XREFs of ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x180040864
 * Callers:
 *     ??_GCAccentAcrylicBlurBehind@@EEAAPEAXI@Z @ 0x180040770 (--_GCAccentAcrylicBlurBehind@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180038228 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ @ 0x180040968 (-ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ.c)
 */

void __fastcall CAccentAcrylicBlurBehind::~CAccentAcrylicBlurBehind(CAccentAcrylicBlurBehind *this)
{
  char *v2; // rcx

  *(_QWORD *)this = &CAccentAcrylicBlurBehind::`vftable';
  CAccentAcrylicBlurBehind::ReleaseResources(this);
  v2 = (char *)*((_QWORD *)this + 43);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 40);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 39);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 38);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 37);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 36);
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
