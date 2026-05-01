/*
 * XREFs of ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x1803726F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802EED50 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1802EEDD4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180301D98 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?GetSingleAppFromLayout@@YAJPEAUIAppLayout@@PEAPEAUIImmersiveApplication@@@Z @ 0x180371D5C (-GetSingleAppFromLayout@@YAJPEAUIAppLayout@@PEAPEAUIImmersiveApplication@@@Z.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x180371E18 (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 *     ?_SetText@CDragVisual@@AEAAXPEBG@Z @ 0x180374AA0 (-_SetText@CDragVisual@@AEAAXPEBG@Z.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180374C6C (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x180374F84 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1803AD030 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUtagSIZE@@PEAU5@@Z @ 0x1803BDED0 (-GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUta.c)
 */

__int64 __fastcall CDragVisual::SetAppLayout(CDragVisual *this, struct IAppLayout *a2, struct tagRECT *a3)
{
  __int64 v6; // rcx
  char v7; // r15
  __int64 v8; // rbx
  _DWORD *v9; // rdx
  _DWORD *v10; // rcx
  int v11; // eax
  struct IApplicationView **v12; // r8
  struct IApplicationView *v13; // rdx
  signed int SingleViewFromLayout; // ebx
  __int64 WindowForView; // rax
  unsigned int v16; // r14d
  __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // r8d
  int v20; // edx
  char v21; // cl
  bool v22; // zf
  enum DEVICE_SCALE_FACTOR v23; // r8d
  const struct Geometry::CRect *v24; // rdx
  __int64 v25; // rdi
  unsigned __int16 **v26; // r8
  int ViewTitle; // eax
  unsigned int v28; // edi
  char *v29; // rdi
  __int64 v30; // rcx
  float v31; // xmm0_4
  int v32; // eax
  struct tagSIZE *v34; // [rsp+28h] [rbp-71h]
  void *ppvOut; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v36[4]; // [rsp+58h] [rbp-41h] BYREF
  enum DEVICE_SCALE_FACTOR v37[3]; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v38[2]; // [rsp+68h] [rbp-31h] BYREF
  int v39; // [rsp+70h] [rbp-29h]
  ApplicationViewHelpers *v40; // [rsp+78h] [rbp-21h] BYREF
  __int64 v41[2]; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int16 *v42[2]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v43; // [rsp+A0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  ppvOut = (void *)*((_QWORD *)this + 6);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&ppvOut);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v41, (__int64 *)&ppvOut, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v6 = *((_QWORD *)this + 8);
  v7 = 1;
  if ( v6 )
  {
    if ( !*((_QWORD *)this + 18)
      || (*(unsigned int (__fastcall **)(__int64, struct IAppLayout *, __int64))(*(_QWORD *)v6 + 200LL))(v6, a2, 4LL) )
    {
      goto LABEL_12;
    }
    ppvOut = 0LL;
    v42[0] = 0LL;
    v42[1] = 0LL;
    v43 = 0LL;
    v37[0] = DEVICE_SCALE_FACTOR_INVALID;
    if ( !*((_QWORD *)this + 7) )
      goto LABEL_10;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    if ( (int)GetSingleAppFromLayout(a2, (struct IImmersiveApplication **)&ppvOut) >= 0
      && (v8 = *((_QWORD *)this + 7),
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v42),
          v42[1] = (unsigned __int16 *)-1LL,
          v43 = -1LL,
          (*(int (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v8 + 32LL))(v8, v42) >= 0)
      && (*(int (__fastcall **)(void *, unsigned __int16 *, enum DEVICE_SCALE_FACTOR *))(*(_QWORD *)ppvOut + 88LL))(
           ppvOut,
           v42[0],
           v37) >= 0
      && v37[0] )
    {
      v7 = 0;
    }
    else
    {
LABEL_10:
      DestroyWindow(*((HWND *)this + 18));
      *((_QWORD *)this + 18) = 0LL;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v42);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    if ( v7 )
    {
LABEL_12:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
      SetRectEmpty((LPRECT)((char *)this + 200));
      SetRectEmpty((LPRECT)((char *)this + 216));
    }
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 8, (__int64)a2);
  if ( !*((_DWORD *)this + 30) && *((_DWORD *)this + 77) == -1 )
  {
    if ( *((_BYTE *)this + 253) )
    {
      if ( Geometry::CRect::Contains((CDragVisual *)((char *)this + 232), (const struct tagPOINT *)this + 19) )
        v11 = MulDiv(100, *v9 - *v10, v10[2] - *v10);
      else
        v11 = 50;
      *((_DWORD *)this + 77) = v11;
    }
    else
    {
      *((_DWORD *)this + 77) = *((_BYTE *)this + 249) != 0 ? 20 : 80;
    }
  }
  *((_QWORD *)this + 17) = 0LL;
  v40 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
  SingleViewFromLayout = AppLayoutHelpers::GetSingleViewFromLayout(a2, (struct IAppLayout *)&v40, v12);
  if ( SingleViewFromLayout < 0 )
    goto LABEL_63;
  WindowForView = *((_QWORD *)this + 18);
  if ( !WindowForView || !v7 )
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v40,
                      v13);
  *((_QWORD *)this + 17) = WindowForView;
  if ( v7 )
  {
    v16 = 0;
    v17 = *((_QWORD *)this + 18);
    if ( *((_DWORD *)this + 31) == 6 || v17 )
      v16 = 0x4000000;
    if ( v17 )
    {
      v16 |= 0x800000u;
      if ( *((_QWORD *)this + 17) )
      {
        ppvOut = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        if ( IUnknown_QueryService(
               *((IUnknown **)this - 1),
               &IID_ISplashScreenIconicBitmap,
               &GUID_9cc99a99_3470_4985_8fed_1365cd80b8c4,
               &ppvOut) >= 0 )
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, *((_QWORD *)this + 17));
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      }
    }
    v18 = *((_DWORD *)this + 30) - 5;
    *(_OWORD *)v42 = 0LL;
    if ( v18 <= 1 )
    {
      SingleViewFromLayout = DwmpQueryWindowThumbnailSourceSize(*((_QWORD *)this + 17), 0LL, &ppvOut);
      v42[0] = 0LL;
      *(_QWORD *)v38 = 0LL;
      v42[1] = (unsigned __int16 *)ppvOut;
    }
    else
    {
      SingleViewFromLayout = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, unsigned __int16 **))(*(_QWORD *)v40 + 128LL))(
                               v40,
                               v42);
    }
    if ( SingleViewFromLayout < 0 )
      goto LABEL_63;
    v19 = (int)v42[0];
    v20 = (int)v42[1];
    if ( SLODWORD(v42[0]) >= SLODWORD(v42[1]) || (v21 = 0, SHIDWORD(v42[0]) >= SHIDWORD(v42[1])) )
      v21 = 1;
    SingleViewFromLayout = v21 != 0 ? 0x8007139F : 0;
    if ( !v21 )
    {
      LODWORD(ppvOut) = LODWORD(v42[1]) - LODWORD(v42[0]);
      v22 = *((_DWORD *)this + 31) == 4;
      HIDWORD(ppvOut) = HIDWORD(v42[1]) - HIDWORD(v42[0]);
      if ( !v22 && (v16 & 0x800000) == 0 )
      {
        v23 = *((_DWORD *)this + 80);
        v24 = (const struct Geometry::CRect *)*((unsigned int *)this + 65);
        v37[0] = LODWORD(v42[1]) - LODWORD(v42[0]);
        v37[1] = HIDWORD(v42[1]) - HIDWORD(v42[0]);
        AppLayoutHelpers::GetDragVisualScaledSize(
          (CDragVisual *)((char *)this + 168),
          v24,
          v23,
          (enum DEVICE_SCALE_FACTOR)v37,
          (const struct tagSIZE *)&ppvOut,
          v34);
        v20 = (int)v42[1];
        v19 = (int)v42[0];
      }
      v25 = *((_QWORD *)this + 6);
      v38[1] = HIDWORD(v42[1]) - HIDWORD(v42[0]);
      ppvOut = 0LL;
      v38[0] = v20 - v19;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
      SingleViewFromLayout = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int *, struct tagRECT *, GUID *, char *))(*(_QWORD *)v25 + 64LL))(
                               v25,
                               0LL,
                               *((_QWORD *)this + 17),
                               v16,
                               v38,
                               a3,
                               &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                               (char *)this + 80);
      if ( SingleViewFromLayout >= 0 )
      {
        if ( *((_QWORD *)this + 11) )
          (*(void (__fastcall **)(_QWORD, unsigned __int16 **, _QWORD, _QWORD))(**((_QWORD **)this + 10) + 24LL))(
            *((_QWORD *)this + 10),
            v42,
            0LL,
            0LL);
        else
          Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 11, (__int64 *)this + 10);
        *(_OWORD *)((char *)this + 200) = *(_OWORD *)v42;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
  }
  if ( SingleViewFromLayout < 0 )
  {
LABEL_63:
    v28 = SingleViewFromLayout;
    goto LABEL_64;
  }
  v42[0] = 0LL;
  v42[1] = 0LL;
  v43 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v42);
  v42[1] = (unsigned __int16 *)-1LL;
  v43 = -1LL;
  ViewTitle = ApplicationViewHelpers::GetViewTitle(v40, (struct IApplicationView *)v42, v26);
  v28 = ViewTitle;
  if ( ViewTitle >= 0 )
  {
    v29 = (char *)this - 24;
    CDragVisual::_SetText((CDragVisual *)((char *)this - 24), v42[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v42);
    if ( v7 )
    {
      if ( !v29[277] )
        CDragVisual::_UpdateThumbnailRect((char *)this - 24, *((unsigned int *)v29 + 37));
      if ( *((_BYTE *)this + 253) && *((_DWORD *)this + 31) == 4 )
        (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**((_QWORD **)this + 11) + 40LL))(
          *((_QWORD *)this + 11),
          (char *)this + 216,
          0LL,
          0LL);
      (*(void (__fastcall **)(_QWORD, enum DEVICE_SCALE_FACTOR *, void **, _BYTE *))(**((_QWORD **)this + 6) + 120LL))(
        *((_QWORD *)this + 6),
        v37,
        &ppvOut,
        v36);
      v30 = *((_QWORD *)this + 11);
      v42[0] = (unsigned __int16 *)__PAIR64__((unsigned int)ppvOut, v37[0]);
      v38[1] = 0;
      v38[0] = 0;
      v31 = (double)v36[0] / 255.0;
      *(float *)&v42[1] = v31;
      v39 = 0;
      v32 = (*(__int64 (__fastcall **)(__int64, int *, unsigned __int16 **))(*(_QWORD *)v30 + 216LL))(v30, v38, v42);
      if ( v32 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          734LL,
          (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
          (const char *)(unsigned int)v32);
      CDragVisual::_UpdateThumbnail((char *)this - 24, 0LL, 1LL);
    }
    goto LABEL_63;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2BF,
    (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
    (const char *)(unsigned int)ViewTitle);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v42);
LABEL_64:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v41);
  return v28;
}
