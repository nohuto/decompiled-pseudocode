/*
 * XREFs of ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x180045AD8
 * Callers:
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180045DB8 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18011B064 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x180121E08 (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 * Callees:
 *     ?EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1800434EC (-EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180043818 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180045B9C (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18011E92C (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct ITaskWindow *a2)
{
  int v4; // esi
  __int64 v5; // rax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(this);
  if ( v4 < 0 )
  {
    v7 = 7377LL;
    goto LABEL_11;
  }
  if ( a2 )
  {
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 72LL))(a2);
    v4 = (*(__int64 (__fastcall **)(_QWORD, struct ITaskWindow *))(**((_QWORD **)this + 19) + 32LL))(
           *((_QWORD *)this + 19),
           a2);
    if ( v4 >= 0 )
    {
      CImmersiveApp::CImmersiveWindowCollection::EnsurePositionOffsetAsync(this);
      CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation(this);
      v5 = *((_QWORD *)this + 20);
      if ( v5 && *(_DWORD *)(v5 + 880) )
      {
        v9 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
        if ( (*(int (__fastcall **)(struct ITaskWindow *, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL))(
               a2,
               &GUID_d6ecd9bf_13b0_4264_955c_6e96d28a37ae,
               &v9) >= 0 )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 656LL))(
            v9,
            *(unsigned int *)(*((_QWORD *)this + 20) + 880LL),
            *(unsigned int *)(*((_QWORD *)this + 20) + 884LL));
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
      }
      goto LABEL_6;
    }
    v7 = 7395LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v4,
      -2);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 40LL))(*((_QWORD *)this + 19));
  if ( v4 < 0 )
  {
    v7 = 7418LL;
    goto LABEL_11;
  }
LABEL_6:
  if ( *((_QWORD *)this + 22) >= 2uLL || !a2 )
    CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation(this);
  return 0LL;
}
