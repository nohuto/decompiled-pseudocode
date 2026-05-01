/*
 * XREFs of ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x18005692C
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18005609C (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18005767C (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x18033CAC0 (-DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180341020 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x180056F88 (-_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x180057028 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180122F48 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x18033A674 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_18033A674.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x18033A6B4 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18034017C (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x180340894 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::_FixPosition(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v8; // edi
  void *v9; // rcx
  void *v10; // rbx
  int v11; // ebx
  int DefaultRect; // eax
  __int64 v14; // rdx
  CDesktopPositioner *v15; // rcx
  CDesktopPositioner *v16; // rcx
  int v17; // eax
  int fixed; // eax
  __int64 v19; // rdx
  CDesktopPositioner *v20; // rcx
  void *v21; // rax
  void *v22; // [rsp+38h] [rbp-D0h] BYREF
  void *v23; // [rsp+40h] [rbp-C8h] BYREF
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  void *v26; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v28[44]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+90h] [rbp-78h]
  struct tagRECT v30; // [rsp+98h] [rbp-70h] BYREF
  struct tagRECT v31; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v32; // [rsp+B8h] [rbp-50h]
  struct tagRECT v33; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-30h]
  int v35; // [rsp+E0h] [rbp-28h]
  struct tagRECT v36; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v37[16]; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v38[2]; // [rsp+108h] [rbp+0h] BYREF
  __int128 v39; // [rsp+110h] [rbp+8h]
  __m128i v40; // [rsp+120h] [rbp+18h]
  int v41[4]; // [rsp+130h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v29 = -2LL;
  v8 = 0;
  v23 = 0LL;
  *a4 = 0LL;
  v27 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  if ( (**(int (__fastcall ***)(__int64, GUID *, void **))a3)(a3, &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1, &v22) < 0 )
  {
    if ( !*(_DWORD *)(a1 + 400) )
    {
      v11 = 0;
      goto LABEL_9;
    }
    fixed = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 24LL))(a3, v37);
    v11 = fixed;
    if ( fixed < 0 )
    {
      v19 = 2065LL;
LABEL_54:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
      goto LABEL_9;
    }
    fixed = CDesktopPositioner::_FixRectForWorkArea(a1, a2, v37, 0LL, v41);
    v11 = fixed;
    if ( fixed < 0 )
    {
      if ( fixed != -2147024809 )
      {
        v19 = 2096LL;
        goto LABEL_54;
      }
      fixed = CDesktopPositioner::_GetDefaultRect(a1, v37, 0LL, &v30);
      v11 = fixed;
      if ( fixed < 0 )
      {
        v19 = 2078LL;
        goto LABEL_54;
      }
      if ( a2 == 4 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v23);
        v11 = fixed;
        if ( fixed < 0 )
        {
          v19 = 2084LL;
          goto LABEL_54;
        }
      }
      else
      {
        fixed = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v20, &v30, &v31);
        v11 = fixed;
        if ( fixed < 0 )
        {
          v19 = 2090LL;
          goto LABEL_54;
        }
        v24 = 3;
        fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(&v23);
        v11 = fixed;
        if ( fixed < 0 )
        {
          v19 = 2091LL;
          goto LABEL_54;
        }
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v23);
      v11 = fixed;
      if ( fixed < 0 )
      {
        v19 = 2071LL;
        goto LABEL_54;
      }
    }
    v21 = v23;
    v23 = 0LL;
    *a4 = v21;
    goto LABEL_10;
  }
  v9 = v22;
  v10 = v22;
  v26 = v22;
  if ( v22 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 8LL))(v22);
    v9 = v22;
  }
  if ( a2 )
    goto LABEL_7;
  DefaultRect = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)v9 + 32LL))(v9, &v25);
  v11 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v14 = 2001LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DefaultRect);
    goto LABEL_8;
  }
  DefaultRect = (*(__int64 (__fastcall **)(void *, _DWORD *))(*(_QWORD *)v22 + 72LL))(v22, v38);
  v11 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v14 = 2006LL;
    goto LABEL_33;
  }
  memset_0(v28, 0, sizeof(v28));
  *(_DWORD *)v28 = 44;
  *(_DWORD *)&v28[4] = v38[0];
  *(_DWORD *)&v28[8] = v38[1];
  *(_OWORD *)&v28[12] = v39;
  *(__m128i *)&v28[28] = v40;
  v32 = *(_OWORD *)v28;
  v33 = *(struct tagRECT *)&v28[16];
  v34 = *(__int64 *)((char *)v40.m128i_i64 + 4);
  v35 = _mm_cvtsi128_si32(_mm_srli_si128(v40, 12));
  if ( v25 == 1 )
  {
    DefaultRect = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)v22 + 64LL))(v22, &v24);
    v11 = DefaultRect;
    if ( DefaultRect < 0 )
    {
      v14 = 2014LL;
      goto LABEL_33;
    }
    DWORD2(v32) = (v24 != 1) + 3;
  }
  DefaultRect = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)v22 + 56LL))(v22, &v36);
  v11 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v14 = 2022LL;
    goto LABEL_33;
  }
  DefaultRect = CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v15, &v36, &v31);
  v11 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v14 = 2026LL;
    goto LABEL_33;
  }
  if ( (unsigned int)CDesktopPositioner::_FixRectForWorkArea(a1, 0LL, &v31, 0LL, &v30) == -2147024809 )
  {
    DefaultRect = CDesktopPositioner::_GetDefaultRect(a1, &v36, 0LL, &v30);
    v11 = DefaultRect;
    if ( DefaultRect < 0 )
    {
      v14 = 2034LL;
      goto LABEL_33;
    }
    v17 = DWORD2(v32);
    if ( v25 == 2 )
      v17 = 3;
    DWORD2(v32) = v17;
  }
  DefaultRect = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v16, &v30, (struct tagRECT *)&v33.bottom);
  v11 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v14 = 2044LL;
    goto LABEL_33;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(&v26);
  v11 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v14 = 2046LL;
    goto LABEL_33;
  }
  v10 = v26;
LABEL_7:
  v26 = 0LL;
  *a4 = v10;
  v11 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
LABEL_9:
  v8 = v11;
LABEL_10:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  return v8;
}
