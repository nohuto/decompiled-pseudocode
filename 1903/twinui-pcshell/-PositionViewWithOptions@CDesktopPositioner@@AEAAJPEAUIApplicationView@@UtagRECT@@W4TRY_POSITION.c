/*
 * XREFs of ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1803A2F50
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x18009F4A4 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1803A349C (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W_ea_1803A349C.c)
 *     ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1803A3580 (-PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18003D3A4 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x180055914 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x1803A5C38 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDesktopPositioner::PositionViewWithOptions(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int *a3,
        int a4,
        __int64 *a5,
        int a6,
        __int64 a7)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(struct IApplicationView *, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 (__fastcall *v13)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  char v17; // r12
  CDesktopPositioner *v18; // rcx
  int FullPositionSnapshot; // eax
  __int64 v20; // rdx
  int (__fastcall *v21)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, struct IOcclusionBasedApplicationViewPosition **); // rdi
  int v24; // eax
  __int64 v25; // rdx
  int (__fastcall *v26)(__int64 *, struct IApplicationViewTitlebarConfiguration **); // rbx
  CDesktopPositioner *v27; // rcx
  int fixed; // eax
  __int64 v29; // rdx
  int v30; // ebx
  unsigned int v31; // r11d
  int v32; // r9d
  unsigned int v33; // edx
  int v34; // edi
  int v35; // ecx
  int v36; // r8d
  char v37; // al
  unsigned int v38; // edx
  int v39; // r8d
  unsigned int v40; // r9d
  int v41; // r10d
  unsigned int v42; // r8d
  __int64 v43; // rax
  __int64 v45; // [rsp+48h] [rbp-99h] BYREF
  struct IApplicationViewTitlebarConfiguration *v46; // [rsp+50h] [rbp-91h] BYREF
  unsigned int v47; // [rsp+58h] [rbp-89h] BYREF
  int v48; // [rsp+5Ch] [rbp-85h]
  __int64 v49; // [rsp+60h] [rbp-81h] BYREF
  __int64 v50; // [rsp+68h] [rbp-79h] BYREF
  int v51; // [rsp+70h] [rbp-71h] BYREF
  RECT v52; // [rsp+78h] [rbp-69h] BYREF
  __int64 v53; // [rsp+88h] [rbp-59h]
  struct IOcclusionBasedApplicationViewPosition *v54[2]; // [rsp+98h] [rbp-49h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-31h]
  RECT rc1; // [rsp+B8h] [rbp-29h] BYREF
  RECT rc2; // [rsp+C8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+3Fh]

  v53 = -2LL;
  v48 = a4;
  v9 = a1;
  *(_QWORD *)&v52.left = a1;
  v45 = a7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v45);
  if ( v45
    || (v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a2 + 80LL),
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v45),
        v11 = v10(a2, &v45),
        v12 = v11,
        v11 >= 0) )
  {
    v49 = 0LL;
    v13 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v49);
    v14 = v13(a2, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v49);
    v12 = v14;
    if ( v14 < 0 )
    {
      v15 = 2626LL;
LABEL_13:
      v16 = (unsigned int)v14;
      goto LABEL_14;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v49 + 32LL))(v49, &v51);
    v12 = v14;
    if ( v14 < 0 )
    {
      v15 = 2629LL;
      goto LABEL_13;
    }
    if ( (unsigned int)(v51 - 2) > 1 )
    {
      v12 = -2147019873;
      v16 = 2147947423LL;
      v15 = 2632LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)v16);
LABEL_57:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v49);
      goto LABEL_58;
    }
    v17 = 0;
    if ( v51 == 2 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v49 + 24LL))(v49, &rc1);
      v12 = v14;
      if ( v14 < 0 )
      {
        v15 = 2638LL;
        goto LABEL_13;
      }
LABEL_22:
      v47 = 0;
      v50 = 0LL;
      v21 = **(int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v50);
      if ( v21(a2, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, &v50) >= 0 )
      {
        v54[0] = 0LL;
        v22 = v50;
        v23 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v50 + 24LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v54);
        v24 = v23(v22, v54);
        v12 = v24;
        if ( v24 < 0 )
        {
          v25 = 2656LL;
LABEL_27:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v25,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v24);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v54);
LABEL_56:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v50);
          goto LABEL_57;
        }
        v24 = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, unsigned int *))(*(_QWORD *)v54[0] + 368LL))(
                v54[0],
                &v47);
        v12 = v24;
        if ( v24 < 0 )
        {
          v25 = 2657LL;
          goto LABEL_27;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v54);
        v9 = *(_QWORD *)&v52.left;
      }
      v46 = 0LL;
      if ( a5
        && (v26 = *(int (__fastcall **)(_QWORD, _QWORD))(*a5 + 184),
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46),
            v26(a5, &v46) < 0)
        && (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46),
            fixed = CDesktopPositioner::_CreateTitlebarConfiguration(v27, a2, &v46),
            v12 = fixed,
            fixed < 0) )
      {
        v29 = 2663LL;
      }
      else
      {
        v55 = 0LL;
        v56 = 0LL;
        fixed = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, struct IApplicationViewTitlebarConfiguration *, __int64 *))(**(_QWORD **)(v9 + 264) + 72LL))(
                  *(_QWORD *)(v9 + 264),
                  v45,
                  v47,
                  1LL,
                  1,
                  v46,
                  &v55);
        v12 = fixed;
        if ( fixed >= 0 )
        {
          v30 = v55;
          v31 = *a3 - v55;
          *a3 = v31;
          v32 = v56;
          v33 = v56 + a3[2];
          a3[2] = v33;
          v34 = HIDWORD(v55);
          v35 = a3[1] - HIDWORD(v55);
          a3[1] = v35;
          v36 = HIDWORD(v56) + a3[3];
          *(RECT *)v54 = rc1;
          v37 = v48;
          if ( (v48 & 4) != 0 )
          {
            v38 = v33 - v31;
            v39 = v36 - v35;
            if ( (v48 & 8) != 0 )
            {
              v38 -= v32 + v30;
              v39 -= HIDWORD(v56) + v34;
            }
            v40 = v38 + rc1.left;
            LODWORD(v54[1]) = v38 + rc1.left;
            v41 = v39 + rc1.top;
            HIDWORD(v54[1]) = v39 + rc1.top;
            v37 = v48;
          }
          else
          {
            v41 = HIDWORD(v54[1]);
            v40 = (unsigned int)v54[1];
          }
          if ( (v37 & 1) != 0 )
          {
            if ( (v37 & 2) != 0 )
            {
              v42 = v30 + v31;
              v35 += v34;
            }
            else
            {
              v42 = v31;
            }
            v54[0] = (struct IOcclusionBasedApplicationViewPosition *)__PAIR64__(v35, v42);
            LODWORD(v54[1]) = v42 - rc1.left + v40;
            HIDWORD(v54[1]) = v35 - rc1.top + v41;
          }
          fixed = CDesktopPositioner::_FixRectForWorkArea(*(__int64 *)&v52.left, a6, (LONG *)v54, v45, &rc2);
          v12 = fixed;
          if ( fixed >= 0 )
          {
            if ( v17 || !EqualRect(&rc1, &rc2) )
            {
              v43 = *a5;
              v52 = rc2;
              fixed = (*(__int64 (__fastcall **)(__int64 *, RECT *))(v43 + 56))(a5, &v52);
              v12 = fixed;
              if ( fixed < 0 )
              {
                v29 = 2737LL;
                goto LABEL_53;
              }
              fixed = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 320LL))(a2, a5);
              v12 = fixed;
              if ( fixed < 0 )
              {
                v29 = 2740LL;
                goto LABEL_53;
              }
            }
            v12 = 0;
            goto LABEL_55;
          }
          v29 = 2719LL;
        }
        else
        {
          v29 = 2673LL;
        }
      }
LABEL_53:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v29,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
LABEL_55:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
      goto LABEL_56;
    }
    if ( v51 != 3 )
      goto LABEL_22;
    v17 = 1;
    v54[0] = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v54);
    FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v18, a2, v54);
    v12 = FullPositionSnapshot;
    if ( FullPositionSnapshot >= 0 )
    {
      FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v54[0] + 56LL))(
                               v54[0],
                               &rc1);
      v12 = FullPositionSnapshot;
      if ( FullPositionSnapshot >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v54);
        goto LABEL_22;
      }
      v20 = 2648LL;
    }
    else
    {
      v20 = 2647LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)FullPositionSnapshot);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v54);
    goto LABEL_57;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA3C,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v11);
LABEL_58:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v45);
  return v12;
}
