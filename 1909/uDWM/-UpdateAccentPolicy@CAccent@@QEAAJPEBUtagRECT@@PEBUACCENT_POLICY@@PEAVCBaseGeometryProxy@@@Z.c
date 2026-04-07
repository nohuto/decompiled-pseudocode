/*
 * XREFs of ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180026AD0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B120 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800286E8 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18002D0B0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18007ADBC (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800A2CF0 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 * Callees:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180002158 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800023B0 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180002EAC (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180004684 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ @ 0x18000B1CC (-ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024918 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180036620 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180036AD8 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180038228 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180039BF8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x18003A87C (-SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x18003D0CC (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x1800407B4 (-Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CAccentBlurBehind@@SAJPEAPEAV1@@Z @ 0x18008B2B4 (-Create@CAccentBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     ?CreateSolidColorBrush@CAccent@@KAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x18008B3EC (-CreateSolidColorBrush@CAccent@@KAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBru.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x18008C2FC (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18008C350 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x1800AE40C (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CAccent::UpdateAccentPolicy(
        CAccent *this,
        const struct tagRECT *a2,
        __m128i *a3,
        struct CBaseGeometryProxy *a4)
{
  __m128i v8; // xmm6
  int v9; // ebx
  char v10; // al
  bool v11; // zf
  unsigned int v12; // edx
  int v13; // eax
  struct CVisual *v14; // rdx
  int v15; // edi
  int v16; // eax
  int started; // eax
  CBaseObject *v19; // rdx
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rdx
  CBaseObject *v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // eax
  CAccentTransition *v29; // rcx
  CBaseObject *v30; // rcx
  CBaseObject *v31; // rcx
  int v32; // eax
  int v33; // eax
  AcrylicHostBackdrop *v34; // rcx
  __int64 v35; // rax
  struct IDCompositionDesktopDevicePartner *v36; // r14
  int v37; // eax
  struct IDCompositionDesktopDevicePartner *v38; // rbx
  int SolidColorBrush; // eax
  __int64 v40; // rax
  __int64 (__fastcall ***v41)(_QWORD, GUID *, __int64 *); // rdi
  int v42; // eax
  __int64 v43; // rdx
  CBaseObject *v44; // rcx
  CBaseObject *v45; // rcx
  CBaseObject *v46; // rcx
  CBaseObject *v47; // rcx
  __int64 v48; // rcx
  int v49; // eax
  unsigned __int64 v50; // r9
  __int64 v51; // rdx
  CBaseObject *v52; // rcx
  CBaseObject *v53; // rcx
  __int64 v54; // rcx
  unsigned int v55; // eax
  int v56; // edx
  int v57; // ecx
  __m128i v58; // xmm0
  int v59; // eax
  float v60; // xmm0_4
  int v61; // xmm0_4
  _DWORD *v62; // rcx
  int updated; // eax
  int v64; // eax
  __int64 v65; // rdx
  CBaseObject *v66; // rcx
  CBaseObject *v67; // rcx
  int v68; // [rsp+20h] [rbp-50h]
  __int64 v69; // [rsp+30h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v70; // [rsp+38h] [rbp-38h] BYREF
  struct _MARGINS v71; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v70 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *(_QWORD *)&v71.cxLeftWidth = 0LL;
  *(_QWORD *)&v71.cyTopHeight = 0LL;
  CVisual::SetInsetFromParent((struct _MARGINS *)this, &v71);
  *(struct tagRECT *)((char *)this + 616) = *a2;
  if ( (a3->m128i_i8[4] & 4) != 0 )
  {
    v26 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 114);
    v27 = 0;
    if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 113) >= 0 )
      v27 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 113);
    *((_DWORD *)this + 156) = *((_DWORD *)this + 154) + v27;
    v28 = 0;
    if ( v26 >= 0 )
      v28 = v26;
    *((_DWORD *)this + 157) = *((_DWORD *)this + 155) + v28;
    CDesktopManager::SetBackStop(this);
  }
  v8 = *a3;
  v9 = _mm_cvtsi128_si32(*a3);
  v71 = (struct _MARGINS)*a3;
  if ( v9 == 5 || (unsigned int)(v9 - 2) <= 1 )
  {
    if ( v9 != 4 )
    {
LABEL_4:
      v10 = 1;
LABEL_5:
      if ( (*((_BYTE *)this + 284) & 2) != 0 && v10 )
      {
        VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
        v44 = (CBaseObject *)*((_QWORD *)this + 40);
        if ( v44 )
        {
          CBaseObject::Release(v44);
          *((_QWORD *)this + 40) = 0LL;
        }
        v45 = (CBaseObject *)*((_QWORD *)this + 41);
        if ( v45 )
        {
          CBaseObject::Release(v45);
          *((_QWORD *)this + 41) = 0LL;
        }
        v46 = (CBaseObject *)*((_QWORD *)this + 42);
        if ( v46 )
        {
          CBaseObject::Release(v46);
          *((_QWORD *)this + 42) = 0LL;
        }
        v47 = (CBaseObject *)*((_QWORD *)this + 43);
        if ( v47 )
        {
          CBaseObject::Release(v47);
          *((_QWORD *)this + 43) = 0LL;
        }
        v48 = *((_QWORD *)this + 44);
        if ( v48 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
          *((_QWORD *)this + 44) = 0LL;
        }
      }
      *(__m128i *)((char *)this + 280) = v8;
      v11 = (*((_BYTE *)this + 284) & 1) == 0;
      v12 = *((_DWORD *)this + 72);
      *((_DWORD *)this + 94) = v12;
      if ( !v11 )
        CAccent::_UpdateAccentBackground(this, v12);
      v13 = *((_DWORD *)this + 70);
      switch ( v13 )
      {
        case 3:
          if ( !*((_QWORD *)this + 42) )
          {
            v49 = CAccentBlurBehind::Create((struct CAccentBlurBehind **)this + 42);
            v15 = v49;
            if ( v49 < 0 )
            {
              v50 = (unsigned int)v49;
              v51 = 1225LL;
              goto LABEL_131;
            }
          }
          CAccent::_UpdateAccentBlurBehind(this);
          goto LABEL_12;
        case 4:
          if ( !*((_QWORD *)this + 43) )
          {
            v25 = CAccentAcrylicBlurBehind::Create((struct CAccentAcrylicBlurBehind **)this + 43);
            v15 = v25;
            if ( v25 < 0 )
            {
              v50 = (unsigned int)v25;
              v51 = 1233LL;
LABEL_131:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v51,
                (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
                (const char *)v50,
                v68);
              goto LABEL_20;
            }
          }
          break;
        case 5:
          break;
        default:
          v52 = (CBaseObject *)*((_QWORD *)this + 42);
          if ( v52 )
          {
            CBaseObject::Release(v52);
            *((_QWORD *)this + 42) = 0LL;
          }
          v53 = (CBaseObject *)*((_QWORD *)this + 43);
          if ( v53 )
          {
            CBaseObject::Release(v53);
            *((_QWORD *)this + 43) = 0LL;
          }
          v54 = *((_QWORD *)this + 44);
          if ( v54 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
            *((_QWORD *)this + 44) = 0LL;
          }
          VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
          v55 = 0;
          v56 = *((_DWORD *)this + 157) - *((_DWORD *)this + 155);
          v57 = *((_DWORD *)this + 156) - *((_DWORD *)this + 154);
          *(_QWORD *)&v71.cxLeftWidth = 0LL;
          if ( v57 >= 0 )
            v55 = v57;
          v58 = _mm_cvtsi32_si128(v55);
          v59 = 0;
          LODWORD(v60) = _mm_cvtepi32_ps(v58).m128_u32[0];
          if ( v56 >= 0 )
            v59 = v56;
          *(float *)&v71.cyTopHeight = v60 + 0.0;
          *(float *)&v71.cyBottomHeight = (float)v59 + 0.0;
          *(float *)&v61 = CAccent::_GetSolidFillOpacity(this);
          updated = CAccent::_UpdateSolidFill(v62, this, *((_DWORD *)this + 94), (const __m128i *)&v71, v61);
          v15 = updated;
          if ( updated < 0 )
          {
            v50 = (unsigned int)updated;
            v51 = 1256LL;
            goto LABEL_131;
          }
          goto LABEL_12;
      }
      (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
LABEL_12:
      (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 0x4000LL);
      goto LABEL_13;
    }
LABEL_43:
    v10 = 0;
    if ( *((_DWORD *)this + 70) == v9 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( v9 == 4 )
    goto LABEL_43;
  if ( *((_BYTE *)this + 312) )
  {
    v29 = (CAccentTransition *)*((_QWORD *)this + 48);
    if ( v29 )
      CAccentTransition::StopAnimation(v29);
    v71.cyBottomHeight = 0;
    v8 = (__m128i)v71;
  }
  if ( v9 != *((_DWORD *)this + 70)
    || _mm_cvtsi128_si32(_mm_srli_si128(v8, 4)) != *((_DWORD *)this + 71)
    || _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) != *((_DWORD *)this + 72) )
  {
    *((_BYTE *)this + 312) = 1;
    *(__m128i *)((char *)this + 296) = v8;
    started = CAccent::StartTransition(this);
    v15 = started;
    if ( started < 0 )
    {
      v50 = (unsigned int)started;
      v51 = 1144LL;
      goto LABEL_131;
    }
  }
  (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  if ( (*((_BYTE *)this + 284) & 2) != 0 )
  {
    VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
    v30 = (CBaseObject *)*((_QWORD *)this + 40);
    if ( v30 )
    {
      CBaseObject::Release(v30);
      *((_QWORD *)this + 40) = 0LL;
    }
    v31 = (CBaseObject *)*((_QWORD *)this + 41);
    if ( v31 )
    {
      CBaseObject::Release(v31);
      *((_QWORD *)this + 41) = 0LL;
    }
  }
  v19 = (CBaseObject *)*((_QWORD *)this + 42);
  v20 = v19;
  if ( v19 && *((_QWORD *)v19 + 3) )
  {
    v32 = VisualCollection::Remove((CAccent *)((char *)this + 32), v19);
    v15 = v32;
    if ( v32 < 0 )
    {
      v50 = (unsigned int)v32;
      v51 = 1159LL;
      goto LABEL_131;
    }
    v20 = (CBaseObject *)*((_QWORD *)this + 42);
  }
  if ( v20 )
  {
    CBaseObject::Release(v20);
    *((_QWORD *)this + 42) = 0LL;
  }
  v21 = (CBaseObject *)*((_QWORD *)this + 43);
  v22 = v21;
  if ( v21 && *((_QWORD *)v21 + 3) )
  {
    v33 = VisualCollection::Remove((CAccent *)((char *)this + 32), v21);
    v15 = v33;
    if ( v33 < 0 )
    {
      v50 = (unsigned int)v33;
      v51 = 1165LL;
      goto LABEL_131;
    }
    v22 = (CBaseObject *)*((_QWORD *)this + 43);
  }
  if ( v22 )
  {
    CBaseObject::Release(v22);
    *((_QWORD *)this + 43) = 0LL;
  }
  if ( *((_DWORD *)this + 70) == 5 )
  {
    v34 = (AcrylicHostBackdrop *)*((_QWORD *)this + 46);
    if ( v34 )
    {
      v35 = *((_QWORD *)v34 + 2);
      if ( *(_QWORD *)(v35 + 24) )
      {
        v36 = *(struct IDCompositionDesktopDevicePartner **)(v35 + 96);
        v37 = AcrylicHostBackdrop::ValidateDevice(v34);
        v15 = v37;
        if ( v37 < 0 )
        {
          v50 = (unsigned int)v37;
          v51 = 1176LL;
          goto LABEL_131;
        }
        v38 = *(struct IDCompositionDesktopDevicePartner **)(*(_QWORD *)(*((_QWORD *)this + 46) + 16LL) + 96LL);
        *(_QWORD *)&v71.cxLeftWidth = v38;
        if ( v38 )
          (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)v38 + 8LL))(v38);
        if ( v36 != v38 )
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 360);
        if ( v38 )
        {
          if ( !*((_QWORD *)this + 45) )
          {
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 360);
            SolidColorBrush = CAccent::CreateSolidColorBrush(
                                v38,
                                (struct Windows::UI::Composition::ICompositionBrush **)this + 45);
            v15 = SolidColorBrush;
            if ( SolidColorBrush < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x4A2,
                (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
                (const char *)(unsigned int)SolidColorBrush,
                v68);
LABEL_91:
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v71);
              goto LABEL_20;
            }
          }
          v40 = *((_QWORD *)this + 46);
          v69 = 0LL;
          v41 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(v40 + 16) + 24LL);
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v69);
          v42 = (**v41)(v41, &GUID_bbed8da5_977f_42cb_9b28_f0ceebced3a7, &v69);
          v15 = v42;
          if ( v42 < 0 )
          {
            v43 = 1189LL;
LABEL_90:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v43,
              (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
              (const char *)(unsigned int)v42,
              v68);
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v69);
            goto LABEL_91;
          }
          v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v69 + 48LL))(v69, *((_QWORD *)this + 45));
          v15 = v42;
          if ( v42 < 0 )
          {
            v43 = 1190LL;
            goto LABEL_90;
          }
          v42 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)v38 + 24LL))(v38);
          v15 = v42;
          if ( v42 < 0 )
          {
            v43 = 1191LL;
            goto LABEL_90;
          }
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v69);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v71);
      }
    }
  }
  v23 = *((_QWORD *)this + 44);
  if ( v23 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    *((_QWORD *)this + 44) = 0LL;
  }
LABEL_13:
  if ( (*((_BYTE *)this + 284) & 0xE0) != 0 )
  {
    v24 = CAccent::_EnsureBorderShadowAtlas(this);
    v15 = v24;
    if ( v24 < 0 )
    {
      v50 = (unsigned int)v24;
      v51 = 1264LL;
      goto LABEL_131;
    }
    (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 2LL);
    goto LABEL_17;
  }
  v14 = (struct CVisual *)*((_QWORD *)this + 53);
  if ( !v14 )
    goto LABEL_15;
  v64 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 54) + 32LL), v14);
  v15 = v64;
  if ( v64 >= 0 )
  {
    v64 = VisualCollection::Remove((CAccent *)((char *)this + 32), *((struct CVisual **)this + 54));
    v15 = v64;
    if ( v64 >= 0 )
    {
      v66 = (CBaseObject *)*((_QWORD *)this + 54);
      if ( v66 )
      {
        CBaseObject::Release(v66);
        *((_QWORD *)this + 54) = 0LL;
      }
      v67 = (CBaseObject *)*((_QWORD *)this + 53);
      if ( v67 )
      {
        CBaseObject::Release(v67);
        *((_QWORD *)this + 53) = 0LL;
      }
LABEL_15:
      v15 = 0;
      goto LABEL_16;
    }
    v65 = 1088LL;
  }
  else
  {
    v65 = 1087LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v65,
    (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v64,
    v68);
LABEL_16:
  if ( v15 < 0 )
  {
    v50 = (unsigned int)v15;
    v51 = 1269LL;
    goto LABEL_131;
  }
LABEL_17:
  v16 = *((_DWORD *)this + 71);
  if ( (v16 & 0x10) != 0 )
  {
    CAccent::SetClipRegion(this, a4);
  }
  else if ( (v16 & 0x200) != 0 && *((_QWORD *)this + 52) )
  {
    (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 0x8000LL);
  }
  v15 = 0;
LABEL_20:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v70);
  return (unsigned int)v15;
}
