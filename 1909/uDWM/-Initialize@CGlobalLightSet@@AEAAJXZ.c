/*
 * XREFs of ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18004A00C
 * Callers:
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x18003CE7C (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 * Callees:
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000B00C (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180038228 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180039BF8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ @ 0x180049D3C (-AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ.c)
 *     ?AttachHoverPointerSourceToVisual@CGlobalLightSet@@AEBAJPEAUIVisual@Composition@UI@Windows@@PEAPEAUIHoverPointerSourcePartner@345@@Z @ 0x180049EE0 (-AttachHoverPointerSourceToVisual@CGlobalLightSet@@AEBAJPEAUIVisual@Composition@UI@Windows@@PEAP.c)
 *     ?AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@AEBUVector3@Numerics@Foundation@4@@Z @ 0x18004A224 (-AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Comp.c)
 *     ?AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@PEAUIExpressionAnimation@634@@Z @ 0x18004A420 (-AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composi.c)
 *     ?CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePartner@Composition@UI@Windows@@W4LightType@45@PEAPEAUIExpressionAnimation@345@@Z @ 0x18004A800 (-CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePa.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x18004AB70 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlobalLightSet::Initialize(CGlobalLightSet *this)
{
  int CoordinateSpaceVisual; // ebx
  struct Windows::UI::Composition::IHoverPointerSourcePartner *v3; // rcx
  int v4; // eax
  CGlobalLightSet *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-40h]
  __int64 v21; // [rsp+30h] [rbp-30h] BYREF
  int v22; // [rsp+38h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v24[6]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct Windows::UI::Composition::IVisual *v26; // [rsp+88h] [rbp+28h] BYREF
  struct Windows::UI::Composition::IHoverPointerSourcePartner *v27; // [rsp+90h] [rbp+30h] BYREF
  __int64 v28; // [rsp+98h] [rbp+38h] BYREF

  v23 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  LODWORD(v21) = 0;
  v24[0] = 0;
  *((float *)&v21 + 1) = FLOAT_0_02;
  *(float *)&v24[1] = FLOAT_0_40000001;
  v22 = -1082130432;
  v24[2] = -1082130432;
  CoordinateSpaceVisual = CGlobalLightSet::CreateCoordinateSpaceVisual(this);
  if ( CoordinateSpaceVisual >= 0 )
  {
    v26 = 0LL;
    v3 = *(struct Windows::UI::Composition::IHoverPointerSourcePartner **)(*((_QWORD *)this + 12) + 24LL);
    v27 = v3;
    if ( v3 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::IHoverPointerSourcePartner *))(*(_QWORD *)v3 + 8LL))(v3);
    CoordinateSpaceVisual = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
                              &v27,
                              (__int64)&v26);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
    if ( CoordinateSpaceVisual < 0 )
    {
      v16 = (unsigned int)CoordinateSpaceVisual;
      v17 = 55LL;
    }
    else
    {
      v4 = CGlobalLightSet::AddNewSharedDistantLightWithType(this, 3LL, v26, &v21);
      CoordinateSpaceVisual = v4;
      if ( v4 < 0 )
      {
        v17 = 56LL;
      }
      else
      {
        v4 = CGlobalLightSet::AddNewSharedDistantLightWithType(this, 4LL, v26, v24);
        CoordinateSpaceVisual = v4;
        if ( v4 >= 0 )
        {
          v27 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
          v6 = CGlobalLightSet::AttachHoverPointerSourceToVisual(v5, v26, &v27);
          CoordinateSpaceVisual = v6;
          if ( v6 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3D,
              (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
              (const char *)(unsigned int)v6,
              v20);
            goto LABEL_17;
          }
          v21 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
          v8 = CGlobalLightSet::CreateExpressionAnimationFromHoverPointerSource(v7, v27, 1LL, &v21);
          CoordinateSpaceVisual = v8;
          if ( v8 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3F,
              (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
              (const char *)(unsigned int)v8,
              v20);
            goto LABEL_16;
          }
          v28 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
          v10 = CGlobalLightSet::CreateExpressionAnimationFromHoverPointerSource(v9, v27, 2LL, &v28);
          CoordinateSpaceVisual = v10;
          if ( v10 < 0 )
          {
            v18 = (unsigned int)v10;
            v19 = 65LL;
          }
          else
          {
            v11 = CGlobalLightSet::AddNewRevealSpotLightWithType(this, 1LL, v26, v21);
            CoordinateSpaceVisual = v11;
            if ( v11 < 0 )
            {
              v18 = (unsigned int)v11;
              v19 = 68LL;
            }
            else
            {
              v12 = CGlobalLightSet::AddNewRevealSpotLightWithType(this, 2LL, v26, v28);
              CoordinateSpaceVisual = v12;
              if ( v12 < 0 )
              {
                v18 = (unsigned int)v12;
                v19 = 69LL;
              }
              else
              {
                v13 = CGlobalLightSet::AddNewRevealAmbientLight(this);
                CoordinateSpaceVisual = v13;
                if ( v13 < 0 )
                {
                  v18 = (unsigned int)v13;
                  v19 = 70LL;
                }
                else
                {
                  v20 = 0;
                  v14 = RtlPublishWnfStateData(WNF_IMSN_GLOBALLIGHTSINVALIDATED, 0LL, 0LL, 0LL);
                  CoordinateSpaceVisual = v14 | 0x10000000;
                  if ( v14 >= 0 )
                  {
                    CoordinateSpaceVisual = 0;
LABEL_15:
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
LABEL_16:
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
LABEL_17:
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
LABEL_18:
                    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v26);
                    goto LABEL_19;
                  }
                  v18 = (unsigned int)CoordinateSpaceVisual;
                  v19 = 72LL;
                }
              }
            }
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
            (const char *)v18,
            v20);
          goto LABEL_15;
        }
        v17 = 57LL;
      }
      v16 = (unsigned int)v4;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)v16,
      v20);
    goto LABEL_18;
  }
LABEL_19:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return (unsigned int)CoordinateSpaceVisual;
}
