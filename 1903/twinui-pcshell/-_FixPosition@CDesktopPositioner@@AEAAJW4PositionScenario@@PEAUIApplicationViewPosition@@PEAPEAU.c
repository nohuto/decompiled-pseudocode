/*
 * XREFs of ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x18005515C
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180054B60 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800554E0 (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x1803A1A70 (-DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1803A5F60 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x180053808 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRA.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x180054A9C (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ?_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x180055874 (-_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x180055914 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x180055B6C (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x180056A44 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18014C674 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::_FixPosition(
        __int64 a1,
        unsigned int a2,
        int (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        _QWORD *a4)
{
  unsigned int v8; // edi
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int DefaultRect; // eax
  int v13; // ebx
  CDesktopPositioner *v14; // rcx
  CDesktopPositioner *v15; // rcx
  __int64 v17; // rdx
  int v18; // eax
  int fixed; // eax
  __int64 v20; // rdx
  CDesktopPositioner *v21; // rcx
  void *v22; // rax
  struct tagRECT *v23; // [rsp+20h] [rbp-E0h]
  __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  void *v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  int (__fastcall ***v29)(_QWORD, _QWORD, _QWORD); // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v30[44]; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  struct tagRECT v32; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v33; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v34; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v35; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+D8h] [rbp-28h]
  struct tagRECT v38; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v39[16]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v40; // [rsp+100h] [rbp+0h] BYREF
  __int64 v41; // [rsp+110h] [rbp+10h]
  __m128i v42; // [rsp+118h] [rbp+18h]
  int v43; // [rsp+128h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v31 = -2LL;
  v8 = 0;
  v25 = 0LL;
  *a4 = 0LL;
  v29 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a3;
  if ( a3 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a3)[1])(a3);
  v24 = 0LL;
  v9 = **a3;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  if ( v9(a3, &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1, &v24) < 0 )
  {
    if ( !*(_DWORD *)(a1 + 400) )
    {
      v13 = 0;
      goto LABEL_18;
    }
    fixed = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _BYTE *))(*a3)[3])(a3, v39);
    v13 = fixed;
    if ( fixed < 0 )
    {
      v20 = 2052LL;
LABEL_54:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed,
        (int)v23);
      goto LABEL_18;
    }
    v23 = (struct tagRECT *)&v43;
    fixed = CDesktopPositioner::_FixRectForWorkArea(a1, a2, v39, 0LL);
    v13 = fixed;
    if ( fixed < 0 )
    {
      if ( fixed != -2147024809 )
      {
        v20 = 2083LL;
        goto LABEL_54;
      }
      fixed = CDesktopPositioner::_GetDefaultRect(a1, v39, 0LL, &v32);
      v13 = fixed;
      if ( fixed < 0 )
      {
        v20 = 2065LL;
        goto LABEL_54;
      }
      if ( a2 == 4 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
        fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v25);
        v13 = fixed;
        if ( fixed < 0 )
        {
          v20 = 2071LL;
          goto LABEL_54;
        }
      }
      else
      {
        fixed = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v21, &v32, &v33);
        v13 = fixed;
        if ( fixed < 0 )
        {
          v20 = 2077LL;
          goto LABEL_54;
        }
        v26 = 3;
        fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
                  (__int64)&v25,
                  (__int64)&v26,
                  (__int64)&v33);
        v13 = fixed;
        if ( fixed < 0 )
        {
          v20 = 2078LL;
          goto LABEL_54;
        }
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v25);
      v13 = fixed;
      if ( fixed < 0 )
      {
        v20 = 2058LL;
        goto LABEL_54;
      }
    }
    v22 = v25;
    v25 = 0LL;
    *a4 = v22;
    goto LABEL_19;
  }
  v10 = v24;
  v11 = v24;
  v28 = v24;
  if ( v24 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    v10 = v24;
  }
  if ( a2 )
    goto LABEL_16;
  DefaultRect = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 32LL))(v10, &v27);
  v13 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v17 = 1988LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DefaultRect,
      (int)v23);
    goto LABEL_17;
  }
  DefaultRect = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v24 + 72LL))(v24, &v40);
  v13 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v17 = 1993LL;
    goto LABEL_34;
  }
  *(_DWORD *)v30 = 44;
  *(_OWORD *)&v30[4] = v40;
  *(_QWORD *)&v30[20] = v41;
  *(__m128i *)&v30[28] = v42;
  v34 = *(_OWORD *)v30;
  v35 = *(struct tagRECT *)&v30[16];
  v36 = *(__int64 *)((char *)v42.m128i_i64 + 4);
  v37 = _mm_cvtsi128_si32(_mm_srli_si128(v42, 12));
  if ( v27 != 1 )
    goto LABEL_10;
  DefaultRect = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 64LL))(v24, &v26);
  v13 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v17 = 2001LL;
    goto LABEL_34;
  }
  DWORD2(v34) = (v26 != 1) + 3;
LABEL_10:
  DefaultRect = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v24 + 56LL))(v24, &v38);
  v13 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v17 = 2009LL;
    goto LABEL_34;
  }
  DefaultRect = CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v14, &v38, &v33);
  v13 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v17 = 2013LL;
    goto LABEL_34;
  }
  v23 = &v32;
  if ( (unsigned int)CDesktopPositioner::_FixRectForWorkArea(a1, 0LL, &v33, 0LL) != -2147024809 )
    goto LABEL_13;
  DefaultRect = CDesktopPositioner::_GetDefaultRect(a1, &v38, 0LL, &v32);
  v13 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v17 = 2021LL;
    goto LABEL_34;
  }
  v18 = DWORD2(v34);
  if ( v27 == 2 )
    v18 = 3;
  DWORD2(v34) = v18;
LABEL_13:
  DefaultRect = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v15, &v32, (struct tagRECT *)&v35.bottom);
  v13 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v17 = 2031LL;
    goto LABEL_34;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
  DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
                  &v28,
                  &v34);
  v13 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v17 = 2033LL;
    goto LABEL_34;
  }
  v11 = v28;
LABEL_16:
  v28 = 0LL;
  *a4 = v11;
  v13 = 0;
LABEL_17:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
LABEL_18:
  v8 = v13;
LABEL_19:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  return v8;
}
