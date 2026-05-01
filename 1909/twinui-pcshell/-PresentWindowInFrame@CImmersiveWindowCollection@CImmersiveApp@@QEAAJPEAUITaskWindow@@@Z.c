/*
 * XREFs of ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18000F464
 * Callers:
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18000EE50 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x180162544 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x18016A7F0 (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 * Callees:
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18000F528 (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1800350F4 (-EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18003C528 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180166F58 (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct ITaskWindow *a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v7; // rdx
  int (__fastcall *v8)(struct ITaskWindow *, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(this);
  if ( v4 < 0 )
  {
    v7 = 7425LL;
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
      if ( v5 && *(_DWORD *)(v5 + 912) )
      {
        v10 = 0LL;
        v8 = *(int (__fastcall **)(struct ITaskWindow *, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        if ( v8(a2, &GUID_f4a53d68_890b_4931_bdbf_71158377eece, &v10) >= 0 )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 656LL))(
            v10,
            *(unsigned int *)(*((_QWORD *)this + 20) + 912LL),
            *(unsigned int *)(*((_QWORD *)this + 20) + 916LL));
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
      }
      goto LABEL_6;
    }
    v7 = 7443LL;
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
    v7 = 7466LL;
    goto LABEL_11;
  }
LABEL_6:
  if ( *((_QWORD *)this + 22) >= 2uLL || !a2 )
    CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation(this);
  return 0LL;
}
