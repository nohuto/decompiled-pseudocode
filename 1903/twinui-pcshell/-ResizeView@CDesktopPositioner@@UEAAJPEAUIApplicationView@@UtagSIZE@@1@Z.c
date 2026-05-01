/*
 * XREFs of ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1803A37F0
 * Callers:
 *     ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18005208C (-_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ResizeView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1800C07A0 (-ResizeView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?ResizeView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1800C07B0 (-ResizeView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x180055914 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18016AEDC (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D6F4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x1803A5C38 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::ResizeView(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  LONG cx; // edi
  volatile signed __int64 *v7; // rbx
  unsigned int LastError; // esi
  __int64 (__fastcall *v9)(struct IApplicationView *, GUID *, __int64 *); // rsi
  int fixed; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  char v13; // r15
  CDesktopPositioner *v14; // rcx
  int FullPositionSnapshot; // eax
  __int64 v16; // rdx
  const char *v17; // r9
  struct IOcclusionBasedApplicationViewPosition *v19; // [rsp+30h] [rbp-49h] BYREF
  __int64 v20; // [rsp+38h] [rbp-41h] BYREF
  int v21; // [rsp+40h] [rbp-39h] BYREF
  volatile signed __int64 *v22; // [rsp+48h] [rbp-31h] BYREF
  struct tagSIZE v23; // [rsp+50h] [rbp-29h]
  __int64 v24; // [rsp+58h] [rbp-21h]
  RECT rcSrc; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT rcDst; // [rsp+70h] [rbp-9h] BYREF
  int v27[4]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v24 = -2LL;
  cx = a3.cx;
  v23 = a3;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v22);
  v7 = v22;
  if ( v22 )
  {
    v20 = 0LL;
    v9 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    fixed = v9(a2, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v20);
    LastError = fixed;
    if ( fixed < 0 )
    {
      v11 = 253LL;
LABEL_27:
      v12 = (unsigned int)fixed;
      goto LABEL_28;
    }
    fixed = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 32LL))(v20, &v21);
    LastError = fixed;
    if ( fixed < 0 )
    {
      v11 = 257LL;
      goto LABEL_27;
    }
    if ( (unsigned int)(v21 - 2) > 1 )
    {
      LastError = -2147019873;
      v12 = 2147947423LL;
      v11 = 260LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)v12);
      goto LABEL_30;
    }
    v13 = 0;
    if ( v21 == 2 )
    {
      fixed = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v20 + 24LL))(v20, &rcSrc);
      LastError = fixed;
      if ( fixed < 0 )
      {
        v11 = 266LL;
        goto LABEL_27;
      }
      goto LABEL_19;
    }
    if ( v21 == 3 )
    {
      v13 = 1;
      v19 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
      FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v14, a2, &v19);
      LastError = FullPositionSnapshot;
      if ( FullPositionSnapshot < 0 )
      {
        v16 = 275LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)FullPositionSnapshot);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
        goto LABEL_30;
      }
      FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v19 + 56LL))(
                               v19,
                               &rcSrc);
      LastError = FullPositionSnapshot;
      if ( FullPositionSnapshot < 0 )
      {
        v16 = 276LL;
        goto LABEL_17;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    }
LABEL_19:
    if ( CopyRect(&rcDst, &rcSrc) )
    {
      rcSrc.right = cx + rcSrc.left;
      rcSrc.bottom = v23.cy + rcSrc.top;
      if ( v13 || !EqualRect(&rcDst, &rcSrc) )
      {
        fixed = CDesktopPositioner::_FixRectForWorkArea((__int64)this - 104, 3, &rcSrc.left, 0LL, (struct tagRECT *)v27);
        LastError = fixed;
        if ( fixed < 0 )
        {
          v11 = 291LL;
          goto LABEL_27;
        }
        *((_OWORD *)v7 + 6) = *(_OWORD *)v27;
        *((_BYTE *)v7 + 92) = 1;
        fixed = (*(__int64 (__fastcall **)(struct IApplicationView *, volatile signed __int64 *))(*(_QWORD *)a2 + 320LL))(
                  a2,
                  v7);
        LastError = fixed;
        if ( fixed < 0 )
        {
          v11 = 297LL;
          goto LABEL_27;
        }
      }
      LastError = 0;
      goto LABEL_30;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x11A,
                  (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                  v17);
LABEL_30:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    goto LABEL_31;
  }
  LastError = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF8,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)0x8007000ELL);
LABEL_31:
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v22);
  return LastError;
}
