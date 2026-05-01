/*
 * XREFs of _lambda_9e85f7730accfb574b1a6ae66a739164_::operator() @ 0x180256944
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9e85f7730accfb574b1a6ae66a739164___::Run @ 0x180258D40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9e85f7730accfb574b1a6ae66a739164___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ??$query@UITabDragHandler@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabDragHandler@@Uerr_exception_policy@wil@@@1@XZ @ 0x180099D40 (--$query@UITabDragHandler@@@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA-A.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x180256DAC (-AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z.c)
 *     ?ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025A37C (-ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_9e85f7730accfb574b1a6ae66a739164_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // r14
  PVOID Ptr; // rdi
  __int64 (__fastcall *v4)(PVOID, __int128 *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  void *v12; // [rsp+78h] [rbp+38h] BYREF
  RTL_SRWLOCK *v13; // [rsp+80h] [rbp+40h]

  v2 = *a1 + 6;
  AcquireSRWLockExclusive(v2);
  v13 = v2;
  v9 = *((_OWORD *)a1 + 1);
  TabTransferManager::ValidateTabId(*a1, &v9);
  v11 = 0LL;
  Ptr = (*a1)[9].Ptr;
  v4 = *(__int64 (__fastcall **)(PVOID, __int128 *, __int64 *))(*(_QWORD *)Ptr + 96LL);
  v9 = *(_OWORD *)&(*a1)[24].Ptr;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v11);
  v5 = v4(Ptr, &v9, &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<ITabDragHandler>(
      (struct IWeakReference **)&(*a1)[8],
      &v12);
    v7 = (*(__int64 (__fastcall **)(void *, __int64, PVOID))(*(_QWORD *)v12 + 24LL))(v12, v11, (*a1)[33].Ptr);
    v6 = v7;
    if ( v7 >= 0 )
    {
      TabTransferManager::AdvanceTransfer(*a1, 512LL);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x138,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v7);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v5);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v6;
}
