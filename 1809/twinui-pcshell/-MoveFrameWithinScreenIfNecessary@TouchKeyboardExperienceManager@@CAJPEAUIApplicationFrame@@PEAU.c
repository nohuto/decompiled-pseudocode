/*
 * XREFs of ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x1802B7254
 * Callers:
 *     _lambda_9724884f6eff691596e03972589b8d56_::operator() @ 0x180093044 (_lambda_9724884f6eff691596e03972589b8d56_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180122F48 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
        struct IApplicationFrame *a1,
        struct IApplicationFrameWrapper *a2,
        char a3)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
  const char *v8; // r9
  LONG right; // edx
  LONG left; // eax
  LONG bottom; // edx
  LONG top; // eax
  HMONITOR v13; // rbx
  RECT *p_rcMonitor; // rax
  unsigned __int64 v15; // xmm0_8
  int v16; // r9d
  unsigned __int64 v17; // rax
  LONG v18; // edx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  LONG v21; // r8d
  char v22; // al
  int v23; // r10d
  int v24; // r9d
  LONG v25; // eax
  int v26; // edx
  int v27; // r8d
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rdx
  RECT v31; // [rsp+28h] [rbp-29h] BYREF
  void *v32; // [rsp+38h] [rbp-19h] BYREF
  HWND hWnd[3]; // [rsp+40h] [rbp-11h] BYREF
  RECT rc; // [rsp+58h] [rbp+7h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp+17h] BYREF
  struct tagMONITORINFO mi; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  hWnd[1] = (HWND)-2LL;
  if ( !a1 )
  {
    v5 = 1397LL;
LABEL_3:
    v6 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v6);
    return v6;
  }
  if ( !a2 )
  {
    v5 = 1398LL;
    goto LABEL_3;
  }
  hWnd[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a1 + 24LL))(a1, hWnd);
  if ( (v6 & 0x80000000) != 0 )
  {
    v5 = 1401LL;
    goto LABEL_4;
  }
  *(_QWORD *)&Rect.left = 0LL;
  *(_QWORD *)&Rect.right = 0LL;
  if ( !GetWindowRect(hWnd[0], &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x57B,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v8);
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  right = Rect.right;
  left = Rect.right;
  if ( Rect.left < Rect.right )
    left = Rect.left;
  rc.left = left;
  if ( Rect.left > Rect.right )
    right = Rect.left;
  rc.right = right;
  bottom = Rect.bottom;
  top = Rect.bottom;
  if ( Rect.top < Rect.bottom )
    top = Rect.top;
  rc.top = top;
  if ( Rect.top > Rect.bottom )
    bottom = Rect.top;
  rc.bottom = bottom;
  v13 = MonitorFromRect(&rc, 2u);
  if ( !v13 )
  {
    v6 = -2147418113;
    v5 = 1413LL;
    goto LABEL_4;
  }
  memset_0(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v13, &mi) )
  {
    v6 = -2147467259;
    v5 = 1416LL;
    goto LABEL_4;
  }
  p_rcMonitor = &mi.rcMonitor;
  if ( a3 )
    p_rcMonitor = &mi.rcWork;
  v15 = _mm_srli_si128(*(__m128i *)p_rcMonitor, 8).m128i_u64[0];
  v16 = v15;
  v17 = *(_QWORD *)&p_rcMonitor->left;
  if ( (int)v17 < (int)v15 )
    v16 = v17;
  v18 = v15;
  if ( (int)v17 > (int)v15 )
    v18 = v17;
  v19 = HIDWORD(v17);
  v20 = HIDWORD(v15);
  v21 = HIDWORD(v15);
  if ( (int)v19 < SHIDWORD(v15) )
    v21 = v19;
  if ( (int)v19 > SHIDWORD(v15) )
    LODWORD(v20) = v19;
  v22 = 0;
  v31 = rc;
  v23 = _mm_cvtsi128_si32((__m128i)rc);
  if ( v23 >= v16 )
  {
    if ( v18 >= rc.right )
      goto LABEL_40;
    v26 = v18 - rc.right;
    v25 = v26 + v23;
    v31.right += v26;
  }
  else
  {
    if ( v18 < rc.right )
      goto LABEL_40;
    v24 = v16 - v23;
    v25 = v24 + v23;
    v31.right += v24;
  }
  v31.left = v25;
  v22 = 1;
LABEL_40:
  if ( rc.top >= v21 )
  {
    if ( (int)v20 >= rc.bottom )
      goto LABEL_47;
    v28 = v20 - rc.bottom;
    v31.top += v28;
    v31.bottom += v28;
    goto LABEL_46;
  }
  if ( (int)v20 >= rc.bottom && a3 )
  {
    v27 = v21 - rc.top;
    v31.top += v27;
    v31.bottom += v27;
LABEL_46:
    v22 = 1;
  }
LABEL_47:
  if ( v22 )
  {
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    v29 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            &v32,
            &v31);
    v6 = v29;
    if ( v29 < 0 )
    {
      v30 = 1474LL;
LABEL_52:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v30,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v29);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
      return v6;
    }
    v29 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, void *))(*(_QWORD *)a1 + 32LL))(a1, v32);
    v6 = v29;
    if ( v29 < 0 )
    {
      v30 = 1475LL;
      goto LABEL_52;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
  }
  return 0LL;
}
