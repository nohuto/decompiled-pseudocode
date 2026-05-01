/*
 * XREFs of ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x18033E8D0
 * Callers:
 *     ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800557DC (-_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ResizeView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1800A9880 (-ResizeView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?ResizeView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1800A9890 (-ResizeView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18013F77C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180141C8C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x180340894 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x180340D0C (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::ResizeView(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  LONG cx; // edi
  __int64 v7; // rbx
  unsigned int LastError; // esi
  int fixed; // eax
  __int64 v10; // rdx
  __int64 v11; // r9
  char v12; // r15
  CDesktopPositioner *v13; // rcx
  int FullPositionSnapshot; // eax
  __int64 v15; // rdx
  const char *v16; // r9
  struct IOcclusionBasedApplicationViewPosition *v18; // [rsp+30h] [rbp-49h] BYREF
  __int64 v19; // [rsp+38h] [rbp-41h] BYREF
  int v20; // [rsp+40h] [rbp-39h] BYREF
  __int64 v21; // [rsp+48h] [rbp-31h] BYREF
  struct tagSIZE v22; // [rsp+50h] [rbp-29h]
  __int64 v23; // [rsp+58h] [rbp-21h]
  RECT rcSrc; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT rcDst; // [rsp+70h] [rbp-9h] BYREF
  int v26[4]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v23 = -2LL;
  cx = a3.cx;
  v22 = a3;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v21);
  v7 = v21;
  if ( v21 )
  {
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    fixed = (*(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL))(
              a2,
              &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
              &v19);
    LastError = fixed;
    if ( fixed < 0 )
    {
      v10 = 239LL;
LABEL_27:
      v11 = (unsigned int)fixed;
      goto LABEL_28;
    }
    fixed = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 32LL))(v19, &v20);
    LastError = fixed;
    if ( fixed < 0 )
    {
      v10 = 243LL;
      goto LABEL_27;
    }
    if ( (unsigned int)(v20 - 2) > 1 )
    {
      LastError = -2147019873;
      v11 = 2147947423LL;
      v10 = 246LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)v11);
      goto LABEL_30;
    }
    v12 = 0;
    if ( v20 == 2 )
    {
      fixed = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v19 + 24LL))(v19, &rcSrc);
      LastError = fixed;
      if ( fixed < 0 )
      {
        v10 = 252LL;
        goto LABEL_27;
      }
      goto LABEL_19;
    }
    if ( v20 == 3 )
    {
      v12 = 1;
      v18 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
      FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v13, a2, &v18);
      LastError = FullPositionSnapshot;
      if ( FullPositionSnapshot < 0 )
      {
        v15 = 261LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)FullPositionSnapshot);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
        goto LABEL_30;
      }
      FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v18 + 56LL))(
                               v18,
                               &rcSrc);
      LastError = FullPositionSnapshot;
      if ( FullPositionSnapshot < 0 )
      {
        v15 = 262LL;
        goto LABEL_17;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
    }
LABEL_19:
    if ( CopyRect(&rcDst, &rcSrc) )
    {
      rcSrc.right = cx + rcSrc.left;
      rcSrc.bottom = v22.cy + rcSrc.top;
      if ( v12 || !EqualRect(&rcDst, &rcSrc) )
      {
        fixed = CDesktopPositioner::_FixRectForWorkArea((char *)this - 104, 3LL, &rcSrc, 0LL, v26);
        LastError = fixed;
        if ( fixed < 0 )
        {
          v10 = 277LL;
          goto LABEL_27;
        }
        *(_OWORD *)(v7 + 96) = *(_OWORD *)v26;
        *(_BYTE *)(v7 + 92) = 1;
        fixed = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v7);
        LastError = fixed;
        if ( fixed < 0 )
        {
          v10 = 283LL;
          goto LABEL_27;
        }
      }
      LastError = 0;
      goto LABEL_30;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x10C,
                  (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                  v16);
LABEL_30:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    goto LABEL_31;
  }
  LastError = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEA,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)0x8007000ELL);
LABEL_31:
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v21);
  return LastError;
}
