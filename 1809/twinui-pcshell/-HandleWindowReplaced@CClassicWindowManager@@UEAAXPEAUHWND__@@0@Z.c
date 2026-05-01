/*
 * XREFs of ?HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z @ 0x180103B50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b88b1fef1c8f048fc62b8eb3823c7c67___ @ 0x180102EAC (Windows--Internal--ComTaskPool--QueueTask__lambda_b88b1fef1c8f048fc62b8eb3823c7c67___.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CClassicWindowManager::HandleWindowReplaced(CClassicWindowManager *this, HWND a2, HWND a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // r14d
  bool v8; // bl
  PSRWLOCK v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // [rsp+28h] [rbp-28h]
  PVOID Ptr; // [rsp+38h] [rbp-18h] BYREF
  __int128 v14; // [rsp+40h] [rbp-10h]
  IUnknown *punk; // [rsp+88h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+90h] [rbp+40h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 48) & -(__int64)(this != (CClassicWindowManager *)88));
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  if ( (unsigned int)IsShellFrameWindow(a2) )
  {
    ppvOut = 0LL;
    punk = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 7) + 32LL))(
      (char *)this - 56,
      &GUID_00000000_0000_0000_c000_000000000046,
      &punk);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
    v8 = IUnknown_QueryService(
           punk,
           &IID_IImmersiveApplicationManager,
           &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
           &ppvOut) >= 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    if ( v8 )
      (*(void (__fastcall **)(void *, HWND))(*(_QWORD *)ppvOut + 160LL))(ppvOut, a2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
  }
  *(_QWORD *)&v12 = a2;
  *((_QWORD *)&v12 + 1) = a3;
  v9 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
  {
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
    v14 = v12;
    Windows::Internal::ComTaskPool::QueueTask__lambda_b88b1fef1c8f048fc62b8eb3823c7c67___(
      v11,
      v10,
      (unsigned int)v9[15].Ptr,
      (char *)&Ptr);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Ptr);
  }
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
}
