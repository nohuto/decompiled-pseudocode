/*
 * XREFs of ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18002631C
 * Callers:
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180005D20 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180016B10 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800369B4 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x1800747EC (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x18009E890 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 * Callees:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18000491C (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180004C18 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180006E24 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x18000ADA4 (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ @ 0x180024B34 (-ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002665C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800358A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037508 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003852C (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CAccentAcrylicBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180043634 (-Create@CAccentAcrylicBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x18004BB60 (-SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800849A4 (-Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CreateSolidColorBrush@CAccent@@KAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x180084AC4 (-CreateSolidColorBrush@CAccent@@KAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBru.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180085BA0 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x180085CF0 (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180085DFC (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x1800AA3DC (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CAccent::UpdateAccentPolicy(
        CAccent *this,
        const struct tagRECT *a2,
        __m128i *a3,
        struct CResource *a4)
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
  int v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  CBaseObject *v23; // rdx
  CBaseObject *v24; // rcx
  CBaseObject *v25; // rdx
  CBaseObject *v26; // rcx
  __int64 v27; // rcx
  CAccentTransition *v28; // rcx
  CBaseObject *v29; // rcx
  CBaseObject *v30; // rcx
  int v31; // eax
  int v32; // eax
  AcrylicHostBackdrop *v33; // rcx
  __int64 v34; // rax
  struct IDCompositionDesktopDevicePartner *v35; // r14
  int v36; // eax
  struct IDCompositionDesktopDevicePartner *v37; // rbx
  int SolidColorBrush; // eax
  __int64 v39; // rax
  __int64 (__fastcall ***v40)(_QWORD, GUID *, __int64 *); // rdi
  int v41; // eax
  __int64 v42; // rdx
  CBaseObject *v43; // rcx
  CBaseObject *v44; // rcx
  CBaseObject *v45; // rcx
  CBaseObject *v46; // rcx
  __int64 v47; // rcx
  int v48; // eax
  unsigned __int64 v49; // r9
  __int64 v50; // rdx
  CBaseObject *v51; // rcx
  CBaseObject *v52; // rcx
  __int64 v53; // rcx
  unsigned int v54; // eax
  int v55; // edx
  int v56; // ecx
  __m128i v57; // xmm0
  int v58; // eax
  float v59; // xmm0_4
  int v60; // xmm0_4
  _DWORD *v61; // rcx
  int updated; // eax
  int v63; // eax
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
  CVisual::SetInsetFromParent(this, &v71);
  *(struct tagRECT *)((char *)this + 616) = *a2;
  if ( (a3->m128i_i8[4] & 4) != 0 )
  {
    v19 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 114);
    v20 = 0;
    if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 113) >= 0 )
      v20 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 113);
    *((_DWORD *)this + 156) = *((_DWORD *)this + 154) + v20;
    v21 = 0;
    if ( v19 >= 0 )
      v21 = v19;
    *((_DWORD *)this + 157) = *((_DWORD *)this + 155) + v21;
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
        v43 = (CBaseObject *)*((_QWORD *)this + 40);
        if ( v43 )
        {
          CBaseObject::Release(v43);
          *((_QWORD *)this + 40) = 0LL;
        }
        v44 = (CBaseObject *)*((_QWORD *)this + 41);
        if ( v44 )
        {
          CBaseObject::Release(v44);
          *((_QWORD *)this + 41) = 0LL;
        }
        v45 = (CBaseObject *)*((_QWORD *)this + 42);
        if ( v45 )
        {
          CBaseObject::Release(v45);
          *((_QWORD *)this + 42) = 0LL;
        }
        v46 = (CBaseObject *)*((_QWORD *)this + 43);
        if ( v46 )
        {
          CBaseObject::Release(v46);
          *((_QWORD *)this + 43) = 0LL;
        }
        v47 = *((_QWORD *)this + 44);
        if ( v47 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
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
            v48 = CAccentBlurBehind::Create(
                    *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                    (struct CAccentBlurBehind **)this + 42);
            v15 = v48;
            if ( v48 < 0 )
            {
              v49 = (unsigned int)v48;
              v50 = 1219LL;
              goto LABEL_129;
            }
          }
          CAccent::_UpdateAccentBlurBehind(this);
          goto LABEL_12;
        case 4:
          if ( !*((_QWORD *)this + 43) )
          {
            v22 = CAccentAcrylicBlurBehind::Create(
                    *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                    (struct CAccentAcrylicBlurBehind **)this + 43);
            v15 = v22;
            if ( v22 < 0 )
            {
              v49 = (unsigned int)v22;
              v50 = 1227LL;
LABEL_129:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v50,
                (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
                (const char *)v49,
                v68);
              goto LABEL_20;
            }
          }
          break;
        case 5:
          break;
        default:
          v51 = (CBaseObject *)*((_QWORD *)this + 42);
          if ( v51 )
          {
            CBaseObject::Release(v51);
            *((_QWORD *)this + 42) = 0LL;
          }
          v52 = (CBaseObject *)*((_QWORD *)this + 43);
          if ( v52 )
          {
            CBaseObject::Release(v52);
            *((_QWORD *)this + 43) = 0LL;
          }
          v53 = *((_QWORD *)this + 44);
          if ( v53 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
            *((_QWORD *)this + 44) = 0LL;
          }
          VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
          v54 = 0;
          v55 = *((_DWORD *)this + 157) - *((_DWORD *)this + 155);
          v56 = *((_DWORD *)this + 156) - *((_DWORD *)this + 154);
          *(_QWORD *)&v71.cxLeftWidth = 0LL;
          if ( v56 >= 0 )
            v54 = v56;
          v57 = _mm_cvtsi32_si128(v54);
          v58 = 0;
          LODWORD(v59) = _mm_cvtepi32_ps(v57).m128_u32[0];
          if ( v55 >= 0 )
            v58 = v55;
          *(float *)&v71.cyTopHeight = v59 + 0.0;
          *(float *)&v71.cyBottomHeight = (float)v58 + 0.0;
          *(float *)&v60 = CAccent::_GetSolidFillOpacity(this);
          updated = CAccent::_UpdateSolidFill(v61, this, *((_DWORD *)this + 94), (const __m128i *)&v71, v60);
          v15 = updated;
          if ( updated < 0 )
          {
            v49 = (unsigned int)updated;
            v50 = 1250LL;
            goto LABEL_129;
          }
          goto LABEL_12;
      }
      (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
LABEL_12:
      (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 0x4000LL);
      goto LABEL_13;
    }
LABEL_33:
    v10 = 0;
    if ( *((_DWORD *)this + 70) == v9 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( v9 == 4 )
    goto LABEL_33;
  if ( *((_BYTE *)this + 312) )
  {
    v28 = (CAccentTransition *)*((_QWORD *)this + 48);
    if ( v28 )
      CAccentTransition::StopAnimation(v28);
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
      v49 = (unsigned int)started;
      v50 = 1138LL;
      goto LABEL_129;
    }
  }
  (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  if ( (*((_BYTE *)this + 284) & 2) != 0 )
  {
    VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
    v29 = (CBaseObject *)*((_QWORD *)this + 40);
    if ( v29 )
    {
      CBaseObject::Release(v29);
      *((_QWORD *)this + 40) = 0LL;
    }
    v30 = (CBaseObject *)*((_QWORD *)this + 41);
    if ( v30 )
    {
      CBaseObject::Release(v30);
      *((_QWORD *)this + 41) = 0LL;
    }
  }
  v23 = (CBaseObject *)*((_QWORD *)this + 42);
  v24 = v23;
  if ( v23 && *((_QWORD *)v23 + 3) )
  {
    v31 = VisualCollection::Remove((CAccent *)((char *)this + 32), v23);
    v15 = v31;
    if ( v31 < 0 )
    {
      v49 = (unsigned int)v31;
      v50 = 1153LL;
      goto LABEL_129;
    }
    v24 = (CBaseObject *)*((_QWORD *)this + 42);
  }
  if ( v24 )
  {
    CBaseObject::Release(v24);
    *((_QWORD *)this + 42) = 0LL;
  }
  v25 = (CBaseObject *)*((_QWORD *)this + 43);
  v26 = v25;
  if ( v25 && *((_QWORD *)v25 + 3) )
  {
    v32 = VisualCollection::Remove((CAccent *)((char *)this + 32), v25);
    v15 = v32;
    if ( v32 < 0 )
    {
      v49 = (unsigned int)v32;
      v50 = 1159LL;
      goto LABEL_129;
    }
    v26 = (CBaseObject *)*((_QWORD *)this + 43);
  }
  if ( v26 )
  {
    CBaseObject::Release(v26);
    *((_QWORD *)this + 43) = 0LL;
  }
  if ( *((_DWORD *)this + 70) == 5 )
  {
    v33 = (AcrylicHostBackdrop *)*((_QWORD *)this + 46);
    if ( v33 )
    {
      v34 = *((_QWORD *)v33 + 2);
      if ( *(_QWORD *)(v34 + 24) )
      {
        v35 = *(struct IDCompositionDesktopDevicePartner **)(v34 + 96);
        v36 = AcrylicHostBackdrop::ValidateDevice(v33);
        v15 = v36;
        if ( v36 < 0 )
        {
          v49 = (unsigned int)v36;
          v50 = 1170LL;
          goto LABEL_129;
        }
        v37 = *(struct IDCompositionDesktopDevicePartner **)(*(_QWORD *)(*((_QWORD *)this + 46) + 16LL) + 96LL);
        *(_QWORD *)&v71.cxLeftWidth = v37;
        if ( v37 )
          (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)v37 + 8LL))(v37);
        if ( v35 != v37 )
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 360);
        if ( v37 )
        {
          if ( !*((_QWORD *)this + 45) )
          {
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 360);
            SolidColorBrush = CAccent::CreateSolidColorBrush(
                                v37,
                                (struct Windows::UI::Composition::ICompositionBrush **)this + 45);
            v15 = SolidColorBrush;
            if ( SolidColorBrush < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x49C,
                (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
                (const char *)(unsigned int)SolidColorBrush,
                v68);
LABEL_87:
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v71);
              goto LABEL_20;
            }
          }
          v39 = *((_QWORD *)this + 46);
          v69 = 0LL;
          v40 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(v39 + 16) + 24LL);
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v69);
          v41 = (**v40)(v40, &GUID_bbed8da5_977f_42cb_9b28_f0ceebced3a7, &v69);
          v15 = v41;
          if ( v41 < 0 )
          {
            v42 = 1183LL;
LABEL_86:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v42,
              (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
              (const char *)(unsigned int)v41,
              v68);
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v69);
            goto LABEL_87;
          }
          v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v69 + 48LL))(v69, *((_QWORD *)this + 45));
          v15 = v41;
          if ( v41 < 0 )
          {
            v42 = 1184LL;
            goto LABEL_86;
          }
          v41 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)v37 + 24LL))(v37);
          v15 = v41;
          if ( v41 < 0 )
          {
            v42 = 1185LL;
            goto LABEL_86;
          }
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v69);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v71);
      }
    }
  }
  v27 = *((_QWORD *)this + 44);
  if ( v27 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    *((_QWORD *)this + 44) = 0LL;
  }
LABEL_13:
  if ( (*((_BYTE *)this + 284) & 0xE0) != 0 )
  {
    v63 = CAccent::_EnsureBorderShadowAtlas(this);
    v15 = v63;
    if ( v63 < 0 )
    {
      v49 = (unsigned int)v63;
      v50 = 1258LL;
      goto LABEL_129;
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
    v65 = 1082LL;
  }
  else
  {
    v65 = 1081LL;
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
    v49 = (unsigned int)v15;
    v50 = 1263LL;
    goto LABEL_129;
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
