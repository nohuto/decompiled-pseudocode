/*
 * XREFs of ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x18017C780
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18003E9AC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _lambda_93f12587be75daec396af0a75fadd596_::operator() @ 0x180178448 (_lambda_93f12587be75daec396af0a75fadd596_--operator().c)
 *     ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x18017BD54 (-AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z.c)
 *     ?GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z @ 0x18017C634 (-GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z.c)
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
  __int64 v12; // rbx
  volatile int *v13; // rdx
  LONG cy; // eax
  LONG cx; // ecx
  LONG v16; // edx
  LONG v17; // r8d
  int v18; // eax
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
  struct tagSIZE v33; // [rsp+30h] [rbp-40h] BYREF
  struct tagSIZE v34; // [rsp+38h] [rbp-38h] BYREF
  struct tagSIZE v35; // [rsp+40h] [rbp-30h] BYREF
  __int64 v36; // [rsp+48h] [rbp-28h] BYREF
  struct tagSIZE v37; // [rsp+50h] [rbp-20h] BYREF
  __int64 *v38[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct tagSIZE v40; // [rsp+A0h] [rbp+30h] BYREF

  v38[1] = (__int64 *)-2LL;
  v8 = (RTL_SRWLOCK *)((char *)this + 48);
  AcquireSRWLockShared((PSRWLOCK)this + 6);
  if ( *((_QWORD *)this + 29) )
    v9 = *((_QWORD *)this + 29);
  else
    v9 = *(_QWORD *)((char *)this + 220);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  v34 = 0LL;
  v40 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  SizeConstraintOverrides = CWinRTApplicationView::GetSizeConstraintOverrides(this, &v34, &v40, &v35, &v33);
  v11 = SizeConstraintOverrides;
  if ( SizeConstraintOverrides >= 0 )
  {
    v36 = 0LL;
    v38[0] = &v36;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v37);
    v12 = (__int64)v37;
    if ( v37 )
    {
      lambda_93f12587be75daec396af0a75fadd596_::operator()(v38, *(_QWORD *)&v37);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
        v12,
        v13);
    }
    if ( a3 )
    {
      cy = v40.cy;
      cx = v40.cx;
      v16 = v34.cy;
      v17 = v34.cx;
      if ( (v34.cx <= 0 || v34.cy <= 0) && (v40.cx <= 0 || v40.cy <= 0) )
      {
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v36 + 40LL))(
                v36,
                v9,
                a2,
                this,
                a3);
        v11 = v18;
        if ( v18 < 0 )
        {
          v19 = 477LL;
          goto LABEL_53;
        }
      }
      else
      {
        *a3 = 0LL;
        if ( v17 > 0 && v16 > 0 )
        {
          v37 = v34;
          v18 = CWinRTApplicationView::AdjustSizeForChrome(this, &v37, a2);
          v11 = v18;
          if ( v18 < 0 )
          {
            v19 = 462LL;
LABEL_53:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v19,
              (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
              (const char *)(unsigned int)v18);
LABEL_61:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
            return v11;
          }
          v20 = v37.cx;
          if ( a3->cx > v37.cx )
            v20 = a3->cx;
          a3->cx = v20;
          v21 = v37.cy;
          if ( a3->cy > v37.cy )
            v21 = a3->cy;
          a3->cy = v21;
          cy = v40.cy;
          cx = v40.cx;
        }
        if ( cx > 0 && cy > 0 )
        {
          v18 = (*(__int64 (__fastcall **)(__int64, struct tagSIZE, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v36 + 40LL))(
                  v36,
                  v40,
                  a2,
                  this,
                  &v37);
          v11 = v18;
          if ( v18 < 0 )
          {
            v19 = 470LL;
            goto LABEL_53;
          }
          v22 = v37.cx;
          if ( a3->cx > v37.cx )
            v22 = a3->cx;
          a3->cx = v22;
          v23 = v37.cy;
          if ( a3->cy > v37.cy )
            v23 = a3->cy;
          a3->cy = v23;
        }
      }
    }
    if ( a4 )
    {
      v24 = v33.cy;
      v25 = v33.cx;
      v26 = v35.cy;
      v27 = v35.cx;
      if ( (v35.cx <= 0 || v35.cy <= 0) && (v33.cx <= 0 || v33.cy <= 0) )
      {
        v37.cx = GetSystemMetrics(59);
        v37.cy = GetSystemMetrics(60);
        *a4 = v37;
      }
      else
      {
        v37 = (struct tagSIZE)0x7FFFFFFF7FFFFFFFLL;
        *a4 = (struct tagSIZE)0x7FFFFFFF7FFFFFFFLL;
        if ( v27 > 0 && v26 > 0 )
        {
          v37 = v35;
          v18 = CWinRTApplicationView::AdjustSizeForChrome(this, &v37, a2);
          v11 = v18;
          if ( v18 < 0 )
          {
            v19 = 490LL;
            goto LABEL_53;
          }
          v28 = v37.cx;
          if ( a4->cx < v37.cx )
            v28 = a4->cx;
          a4->cx = v28;
          v29 = v37.cy;
          if ( a4->cy < v37.cy )
            v29 = a4->cy;
          a4->cy = v29;
          v24 = v33.cy;
          v25 = v33.cx;
        }
        if ( v25 > 0 && v24 > 0 )
        {
          v18 = (*(__int64 (__fastcall **)(__int64, struct tagSIZE, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v36 + 40LL))(
                  v36,
                  v33,
                  a2,
                  this,
                  &v37);
          v11 = v18;
          if ( v18 < 0 )
          {
            v19 = 498LL;
            goto LABEL_53;
          }
          v30 = v37.cx;
          if ( a4->cx < v37.cx )
            v30 = a4->cx;
          a4->cx = v30;
          v31 = v37.cy;
          if ( a4->cy < v37.cy )
            v31 = a4->cy;
          a4->cy = v31;
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
