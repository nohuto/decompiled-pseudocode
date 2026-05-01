/*
 * XREFs of ?GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z @ 0x18015D384
 * Callers:
 *     ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x18015D4D0 (-GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z.c)
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_45f761d2d247477984b20cf6ec7ae807_::operator() @ 0x18006780C (_lambda_45f761d2d247477984b20cf6ec7ae807_--operator().c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIApplicationManagerViewPosition@@@?$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationManagerViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x18015C604 (--$As@UIApplicationManagerViewPosition@@@-$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Micro.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWinRTApplicationView::GetSizeConstraintOverrides(
        CWinRTApplicationView *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4,
        struct tagSIZE *a5)
{
  struct tagSIZE *v9; // r15
  volatile signed __int32 *v10; // rbx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v16; // [rsp+98h] [rbp+48h] BYREF
  volatile signed __int32 *v17; // [rsp+A0h] [rbp+50h] BYREF
  struct tagSIZE **v18; // [rsp+A8h] [rbp+58h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  v9 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v18 = &a5;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v17);
  v10 = v17;
  if ( v17 )
  {
    lambda_45f761d2d247477984b20cf6ec7ae807_::operator()((__int64 **)&v18, (__int64)v17);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v10);
  }
  if ( a5 )
  {
    v16 = 0LL;
    v12 = Microsoft::WRL::ComPtr<IImmersiveApplicationPresentation>::As<IApplicationManagerViewPosition>(&a5, &v16);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct tagSIZE *, struct tagSIZE *, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)v16 + 40LL))(
              v16,
              *((_QWORD *)this + 26),
              a2,
              a3,
              a4,
              v9);
      v11 = v12;
      if ( v12 >= 0 )
      {
        v11 = 0;
        goto LABEL_11;
      }
      v13 = 214LL;
    }
    else
    {
      v13 = 213LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v12);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    goto LABEL_12;
  }
  v11 = -2147024884;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD2,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)0x8007000CLL);
LABEL_12:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
  return v11;
}
