/*
 * XREFs of ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x180043AC8
 * Callers:
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x180043A28 (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180027090 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037508 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003852C (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180043BF8 (-AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Comp.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180043E68 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlobalLightSet::Initialize(CGlobalLightSet *this)
{
  int CoordinateSpaceVisual; // eax
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  int v11; // [rsp+20h] [rbp-30h]
  _DWORD v12[4]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v13[4]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v15; // [rsp+78h] [rbp+28h] BYREF
  __int64 v16; // [rsp+80h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+88h] [rbp+38h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12[0] = 0;
  v13[0] = 0;
  *(float *)&v12[1] = FLOAT_0_075000003;
  *(float *)&v13[1] = FLOAT_0_40000001;
  v12[2] = -1082130432;
  v13[2] = -1082130432;
  CoordinateSpaceVisual = CGlobalLightSet::CreateCoordinateSpaceVisual(this);
  v3 = CoordinateSpaceVisual;
  if ( CoordinateSpaceVisual < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)CoordinateSpaceVisual,
      v11);
    goto LABEL_10;
  }
  v15 = 0LL;
  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 24LL);
  v16 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v3 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
         &v16,
         (__int64)&v15);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  if ( v3 < 0 )
  {
    v9 = 55LL;
LABEL_16:
    v10 = (unsigned int)v3;
    goto LABEL_17;
  }
  v5 = CGlobalLightSet::AddNewSharedDistantLightWithType(this, 3LL, v15, v12);
  v3 = v5;
  if ( v5 < 0 )
  {
    v10 = (unsigned int)v5;
    v9 = 56LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)v10,
      v11);
    goto LABEL_9;
  }
  v6 = CGlobalLightSet::AddNewSharedDistantLightWithType(this, 4LL, v15, v13);
  v3 = v6;
  if ( v6 < 0 )
  {
    v10 = (unsigned int)v6;
    v9 = 57LL;
    goto LABEL_17;
  }
  v11 = 0;
  v7 = RtlPublishWnfStateData(WNF_IMSN_GLOBALLIGHTSINVALIDATED, 0LL, 0LL, 0LL);
  v3 = v7 | 0x10000000;
  if ( v7 < 0 )
  {
    v9 = 73LL;
    goto LABEL_16;
  }
  v3 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v15);
LABEL_10:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return (unsigned int)v3;
}
