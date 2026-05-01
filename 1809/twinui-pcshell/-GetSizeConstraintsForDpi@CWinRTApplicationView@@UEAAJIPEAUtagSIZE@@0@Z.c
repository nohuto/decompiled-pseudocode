/*
 * XREFs of ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x180133B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A5E0 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002AA2C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _lambda_93f12587be75daec396af0a75fadd596_::operator() @ 0x18012F748 (_lambda_93f12587be75daec396af0a75fadd596_--operator().c)
 *     ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x180133054 (-AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z.c)
 *     ?GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z @ 0x180133994 (-GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetSizeConstraintsForDpi(
        CWinRTApplicationView *this,
        unsigned int a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  RTL_SRWLOCK *v8; // r14
  __int64 v9; // rbx
  int SizeConstraintOverrides; // eax
  unsigned int v11; // r14d
  LONG cy; // ecx
  LONG cx; // edx
  LONG v15; // r8d
  LONG v16; // r9d
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  LONG v20; // eax
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // eax
  LONG v24; // ecx
  LONG v25; // edx
  LONG v26; // r8d
  LONG v27; // r9d
  LONG v28; // eax
  LONG v29; // eax
  LONG v30; // eax
  LONG v31; // eax
  struct tagSIZE v32; // [rsp+30h] [rbp-40h] BYREF
  struct tagSIZE v33; // [rsp+38h] [rbp-38h] BYREF
  struct tagSIZE v34; // [rsp+40h] [rbp-30h] BYREF
  __int64 v35; // [rsp+48h] [rbp-28h] BYREF
  struct tagSIZE v36; // [rsp+50h] [rbp-20h] BYREF
  __int64 *v37[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct tagSIZE v39; // [rsp+A0h] [rbp+30h] BYREF

  v37[1] = (__int64 *)-2LL;
  v8 = (RTL_SRWLOCK *)((char *)this + 48);
  AcquireSRWLockShared((PSRWLOCK)this + 6);
  v9 = *(_QWORD *)((char *)this + 220);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  v33.cx = 0;
  v33.cy = 0;
  v39.cx = 0;
  v39.cy = 0;
  v34.cx = 0;
  v34.cy = 0;
  v32.cx = 0;
  v32.cy = 0;
  SizeConstraintOverrides = CWinRTApplicationView::GetSizeConstraintOverrides(this, &v33, &v39, &v34, &v32);
  v11 = SizeConstraintOverrides;
  if ( SizeConstraintOverrides < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AB,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)SizeConstraintOverrides);
    return v11;
  }
  v35 = 0LL;
  v37[0] = &v35;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v36);
  if ( v36 )
    lambda_93f12587be75daec396af0a75fadd596_::operator()(v37, *(_QWORD *)&v36);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((__int64 *)&v36);
  if ( !a3 )
    goto LABEL_30;
  cy = v39.cy;
  cx = v39.cx;
  v15 = v33.cy;
  v16 = v33.cx;
  if ( (v33.cx <= 0 || v33.cy <= 0) && (v39.cx <= 0 || v39.cy <= 0) )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v35 + 40LL))(
            v35,
            v9,
            a2,
            this,
            a3);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = 455LL;
      goto LABEL_50;
    }
    goto LABEL_30;
  }
  *a3 = 0LL;
  if ( v16 <= 0 || v15 <= 0 )
  {
LABEL_21:
    if ( cx > 0 && cy > 0 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, struct tagSIZE, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v35 + 40LL))(
              v35,
              v39,
              a2,
              this,
              &v36);
      v18 = v17;
      if ( v17 < 0 )
      {
        v19 = 448LL;
        goto LABEL_50;
      }
      v22 = v36.cx;
      if ( a3->cx > v36.cx )
        v22 = a3->cx;
      a3->cx = v22;
      v23 = v36.cy;
      if ( a3->cy > v36.cy )
        v23 = a3->cy;
      a3->cy = v23;
    }
LABEL_30:
    if ( a4 )
    {
      v24 = v32.cy;
      v25 = v32.cx;
      v26 = v34.cy;
      v27 = v34.cx;
      if ( (v34.cx <= 0 || v34.cy <= 0) && (v32.cx <= 0 || v32.cy <= 0) )
      {
        v36.cx = GetSystemMetrics(59);
        v36.cy = GetSystemMetrics(60);
        *a4 = v36;
      }
      else
      {
        v36 = (struct tagSIZE)0x7FFFFFFF7FFFFFFFLL;
        *a4 = (struct tagSIZE)0x7FFFFFFF7FFFFFFFLL;
        if ( v27 > 0 && v26 > 0 )
        {
          v36 = v34;
          v17 = CWinRTApplicationView::AdjustSizeForChrome(this, &v36, a2);
          v18 = v17;
          if ( v17 < 0 )
          {
            v19 = 468LL;
            goto LABEL_50;
          }
          v28 = v36.cx;
          if ( a4->cx < v36.cx )
            v28 = a4->cx;
          a4->cx = v28;
          v29 = v36.cy;
          if ( a4->cy < v36.cy )
            v29 = a4->cy;
          a4->cy = v29;
          v24 = v32.cy;
          v25 = v32.cx;
        }
        if ( v25 > 0 && v24 > 0 )
        {
          v17 = (*(__int64 (__fastcall **)(__int64, struct tagSIZE, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v35 + 40LL))(
                  v35,
                  v32,
                  a2,
                  this,
                  &v36);
          v18 = v17;
          if ( v17 < 0 )
          {
            v19 = 476LL;
            goto LABEL_50;
          }
          v30 = v36.cx;
          if ( a4->cx < v36.cx )
            v30 = a4->cx;
          a4->cx = v30;
          v31 = v36.cy;
          if ( a4->cy < v36.cy )
            v31 = a4->cy;
          a4->cy = v31;
        }
      }
    }
    v18 = 0;
    goto LABEL_58;
  }
  v36 = v33;
  v17 = CWinRTApplicationView::AdjustSizeForChrome(this, &v36, a2);
  v18 = v17;
  if ( v17 >= 0 )
  {
    v20 = v36.cx;
    if ( a3->cx > v36.cx )
      v20 = a3->cx;
    a3->cx = v20;
    v21 = v36.cy;
    if ( a3->cy > v36.cy )
      v21 = a3->cy;
    a3->cy = v21;
    cy = v39.cy;
    cx = v39.cx;
    goto LABEL_21;
  }
  v19 = 440LL;
LABEL_50:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v17);
LABEL_58:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
  return v18;
}
