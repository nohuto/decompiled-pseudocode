/*
 * XREFs of ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x18033CAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x18005692C (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1800572D0 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x1800574F8 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetMonitorFromPoint@CDesktopPositioner@@AEAAJPEBUtagPOINT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18005761C (-_GetMonitorFromPoint@CDesktopPositioner@@AEAAJPEBUtagPOINT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180122F48 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18013F77C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180141C8C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x180340D0C (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopPositioner::DragCompleted(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct tagPOINT a3)
{
  LONG y; // esi
  CDesktopPositioner *v7; // rcx
  int FullPositionSnapshot; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  HMONITOR v11; // rax
  int ScaleFactorForRect; // eax
  int v13; // r15d
  int v14; // edi
  int v15; // eax
  int MonitorFromPoint; // eax
  __int64 v17; // rdx
  int v18; // esi
  int v19; // ebx
  int v20; // eax
  int fixed; // eax
  struct tagPOINT v22; // rbx
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdi
  int v27; // eax
  int nNumerator; // [rsp+20h] [rbp-69h] BYREF
  __int64 v30; // [rsp+28h] [rbp-61h] BYREF
  void *v31; // [rsp+30h] [rbp-59h] BYREF
  struct IImmersiveMonitor *v32; // [rsp+38h] [rbp-51h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v33; // [rsp+40h] [rbp-49h] BYREF
  struct tagPOINT v34; // [rsp+48h] [rbp-41h] BYREF
  __int64 v35[2]; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT v37; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v38; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v39[4]; // [rsp+90h] [rbp+7h] BYREF
  int v40; // [rsp+94h] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v35[1] = -2LL;
  v34 = a3;
  y = a3.y;
  v33 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
  FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v7, a2, &v33);
  v9 = FullPositionSnapshot;
  if ( FullPositionSnapshot >= 0 )
  {
    FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, struct tagRECT *))(*(_QWORD *)v33 + 56LL))(
                             v33,
                             &v37);
    v9 = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      v10 = 1157LL;
      goto LABEL_7;
    }
    v11 = ::MonitorFromPoint(a3, 1u);
    FullPositionSnapshot = GetScaleFactorForMonitor(v11, &nNumerator);
    v9 = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      v10 = 1163LL;
      goto LABEL_7;
    }
    ScaleFactorForRect = GetScaleFactorForRect(&v37);
    v13 = ScaleFactorForRect;
    rc = v37;
    if ( ScaleFactorForRect != nNumerator )
    {
      v14 = MulDiv(v37.right - v37.left, nNumerator, ScaleFactorForRect);
      v15 = MulDiv(v37.bottom - v37.top, nNumerator, v13);
      rc.right = v14 + rc.left;
      rc.bottom = rc.top + v15;
    }
    OffsetRect(&rc, a3.x - v37.left, y - v37.top);
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    MonitorFromPoint = CDesktopPositioner::_GetMonitorFromPoint((CDesktopPositioner *)((char *)this - 112), &v34, &v32);
    v9 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v17 = 1191LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)MonitorFromPoint);
LABEL_40:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
      goto LABEL_41;
    }
    MonitorFromPoint = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveMonitor *, _BYTE *))(**((_QWORD **)this + 19)
                                                                                              + 64LL))(
                         *((_QWORD *)this + 19),
                         v32,
                         v39);
    v9 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v17 = 1194LL;
      goto LABEL_16;
    }
    v18 = v40 / -2;
    v19 = nNumerator * *((_DWORD *)this + 70) / -100;
    MonitorFromPoint = CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)((char *)this - 112), &rc, &v38);
    v9 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v17 = 1207LL;
      goto LABEL_16;
    }
    if ( v18 + rc.top < v38.top )
      v18 = v38.top - rc.top;
    if ( v19 + rc.left < v38.left )
      v19 = v38.left - rc.left;
    OffsetRect(&rc, v19, v18);
    v31 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
    v20 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            &v31,
            &rc);
    v9 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4CA,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v20);
LABEL_39:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
      goto LABEL_40;
    }
    v30 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    fixed = CDesktopPositioner::_FixPosition((__int64)this - 112, 4u, (__int64)v31, &v30);
    v9 = fixed;
    if ( fixed < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4CE,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
LABEL_38:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      goto LABEL_39;
    }
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v34);
    v22 = v34;
    if ( v34 )
    {
      v25 = *(_QWORD *)(*(_QWORD *)&v34 + 72LL);
      v26 = v30;
      if ( v25 != v30 )
      {
        if ( v30 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
          v25 = *(_QWORD *)(*(_QWORD *)&v22 + 72LL);
        }
        v35[0] = v25;
        *(_QWORD *)(*(_QWORD *)&v22 + 72LL) = v26;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v35);
      }
      v27 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct tagPOINT))(*(_QWORD *)a2 + 320LL))(a2, v22);
      v9 = v27;
      if ( v27 >= 0 )
      {
        v27 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2);
        v9 = v27;
        if ( v27 >= 0 )
        {
LABEL_37:
          Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v34);
          goto LABEL_38;
        }
        v24 = 1240LL;
      }
      else
      {
        v24 = 1237LL;
      }
      v23 = (unsigned int)v27;
    }
    else
    {
      v9 = -2147024882;
      v23 = 2147942414LL;
      v24 = 1234LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v23);
    goto LABEL_37;
  }
  v10 = 1154LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)FullPositionSnapshot);
LABEL_41:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
  return v9;
}
