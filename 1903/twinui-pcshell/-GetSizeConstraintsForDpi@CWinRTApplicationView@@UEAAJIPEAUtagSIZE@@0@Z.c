/*
 * XREFs of ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x18015D4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     _lambda_93f12587be75daec396af0a75fadd596_::operator() @ 0x1801591C8 (_lambda_93f12587be75daec396af0a75fadd596_--operator().c)
 *     ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x18015CAA4 (-AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z.c)
 *     ?GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z @ 0x18015D384 (-GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetSizeConstraintsForDpi(
        CWinRTApplicationView *this,
        unsigned int a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  RTL_SRWLOCK *v8; // rbx
  __int64 v9; // rdi
  int SizeConstraintOverrides; // eax
  unsigned int v11; // ebx
  volatile signed __int32 *v12; // rbx
  LONG cy; // eax
  LONG cx; // ecx
  LONG v15; // edx
  LONG v16; // r8d
  int v17; // eax
  __int64 v18; // rdx
  LONG v19; // eax
  LONG v20; // eax
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // ecx
  LONG v24; // edx
  LONG v25; // r8d
  LONG v26; // r9d
  LONG v27; // eax
  LONG v28; // eax
  LONG v29; // eax
  LONG v30; // eax
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
  if ( *((_QWORD *)this + 29) )
    v9 = *((_QWORD *)this + 29);
  else
    v9 = *(_QWORD *)((char *)this + 220);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  v33 = 0LL;
  v39 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  SizeConstraintOverrides = CWinRTApplicationView::GetSizeConstraintOverrides(this, &v33, &v39, &v34, &v32);
  v11 = SizeConstraintOverrides;
  if ( SizeConstraintOverrides >= 0 )
  {
    v35 = 0LL;
    v37[0] = &v35;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v36);
    v12 = (volatile signed __int32 *)v36;
    if ( v36 )
    {
      lambda_93f12587be75daec396af0a75fadd596_::operator()(v37, *(_QWORD *)&v36);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v12);
    }
    if ( a3 )
    {
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
        v11 = v17;
        if ( v17 < 0 )
        {
          v18 = 477LL;
          goto LABEL_53;
        }
      }
      else
      {
        *a3 = 0LL;
        if ( v16 > 0 && v15 > 0 )
        {
          v36 = v33;
          v17 = CWinRTApplicationView::AdjustSizeForChrome(this, &v36, a2);
          v11 = v17;
          if ( v17 < 0 )
          {
            v18 = 462LL;
LABEL_53:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v18,
              (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
              (const char *)(unsigned int)v17);
LABEL_61:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
            return v11;
          }
          v19 = v36.cx;
          if ( a3->cx > v36.cx )
            v19 = a3->cx;
          a3->cx = v19;
          v20 = v36.cy;
          if ( a3->cy > v36.cy )
            v20 = a3->cy;
          a3->cy = v20;
          cy = v39.cy;
          cx = v39.cx;
        }
        if ( cx > 0 && cy > 0 )
        {
          v17 = (*(__int64 (__fastcall **)(__int64, struct tagSIZE, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v35 + 40LL))(
                  v35,
                  v39,
                  a2,
                  this,
                  &v36);
          v11 = v17;
          if ( v17 < 0 )
          {
            v18 = 470LL;
            goto LABEL_53;
          }
          v21 = v36.cx;
          if ( a3->cx > v36.cx )
            v21 = a3->cx;
          a3->cx = v21;
          v22 = v36.cy;
          if ( a3->cy > v36.cy )
            v22 = a3->cy;
          a3->cy = v22;
        }
      }
    }
    if ( a4 )
    {
      v23 = v32.cy;
      v24 = v32.cx;
      v25 = v34.cy;
      v26 = v34.cx;
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
        if ( v26 > 0 && v25 > 0 )
        {
          v36 = v34;
          v17 = CWinRTApplicationView::AdjustSizeForChrome(this, &v36, a2);
          v11 = v17;
          if ( v17 < 0 )
          {
            v18 = 490LL;
            goto LABEL_53;
          }
          v27 = v36.cx;
          if ( a4->cx < v36.cx )
            v27 = a4->cx;
          a4->cx = v27;
          v28 = v36.cy;
          if ( a4->cy < v36.cy )
            v28 = a4->cy;
          a4->cy = v28;
          v23 = v32.cy;
          v24 = v32.cx;
        }
        if ( v24 > 0 && v23 > 0 )
        {
          v17 = (*(__int64 (__fastcall **)(__int64, struct tagSIZE, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v35 + 40LL))(
                  v35,
                  v32,
                  a2,
                  this,
                  &v36);
          v11 = v17;
          if ( v17 < 0 )
          {
            v18 = 498LL;
            goto LABEL_53;
          }
          v29 = v36.cx;
          if ( a4->cx < v36.cx )
            v29 = a4->cx;
          a4->cx = v29;
          v30 = v36.cy;
          if ( a4->cy < v36.cy )
            v30 = a4->cy;
          a4->cy = v30;
        }
      }
    }
    v11 = 0;
    goto LABEL_61;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C1,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)SizeConstraintOverrides);
  return v11;
}
