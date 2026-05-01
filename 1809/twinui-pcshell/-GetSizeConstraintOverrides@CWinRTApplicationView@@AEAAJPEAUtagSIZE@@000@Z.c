/*
 * XREFs of ?GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z @ 0x180133994
 * Callers:
 *     ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x180133B10 (-GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A970 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002AA2C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIApplicationManagerViewPosition@@@?$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationManagerViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x180132BF4 (--$As@UIApplicationManagerViewPosition@@@-$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Micro.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWinRTApplicationView::GetSizeConstraintOverrides(
        CWinRTApplicationView *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4,
        struct tagSIZE *a5)
{
  struct tagSIZE *v9; // r12
  __int64 v10; // rbx
  struct tagSIZE v11; // rax
  struct tagSIZE *v12; // rdi
  volatile int *v13; // rdx
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v19; // [rsp+98h] [rbp+48h] BYREF
  struct tagSIZE *v20; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+58h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  v9 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v20);
  v10 = (__int64)v20;
  if ( v20 )
  {
    v11 = v20[6];
    v12 = *(struct tagSIZE **)(*(_QWORD *)&v11 + 720LL);
    if ( v12 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*(_QWORD *)(*(_QWORD *)&v11 + 720LL));
    v21 = 0LL;
    v20 = a5;
    a5 = v12;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
      v10,
      v13);
  }
  if ( a5 )
  {
    v19 = 0LL;
    v15 = Microsoft::WRL::ComPtr<IImmersiveApplicationPresentation>::As<IApplicationManagerViewPosition>(&a5, &v19);
    v14 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct tagSIZE *, struct tagSIZE *, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)v19 + 40LL))(
              v19,
              *((_QWORD *)this + 26),
              a2,
              a3,
              a4,
              v9);
      v14 = v15;
      if ( v15 >= 0 )
      {
        v14 = 0;
        goto LABEL_13;
      }
      v16 = 214LL;
    }
    else
    {
      v16 = 213LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v15);
LABEL_13:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    goto LABEL_14;
  }
  v14 = -2147024884;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD2,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)0x8007000CLL);
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
  return v14;
}
