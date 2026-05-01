/*
 * XREFs of _lambda_613b54cc2e99550f8413255175a70a8b_::operator() @ 0x180089B74
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_613b54cc2e99550f8413255175a70a8b___::operator() @ 0x180089EC0 (CDelayIAMOperations--CDelayedOperation__lambda_613b54cc2e99550f8413255175a70a8b___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2aebaedc827852b96f950251c46b8204___ @ 0x180089708 (Windows--Internal--ComTaskPool--QueueTask__lambda_2aebaedc827852b96f950251c46b8204___.c)
 *     _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_ @ 0x180089AF4 (_lambda_73bca28b4d92a1291c49cf8f8a9be4e0_--__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800EFCD4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall lambda_613b54cc2e99550f8413255175a70a8b_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  PSRWLOCK v3; // rdi
  int v4; // ebx
  unsigned int Ptr; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *a1;
  v11 = *a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
  {
    *(RTL_SRWLOCK *)v8 = CApplicationManagerUtility::g_pIAMGlobals[14];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v8);
    Ptr = (unsigned int)v3[15].Ptr;
    v11 = 0LL;
    v9 = v2;
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_2aebaedc827852b96f950251c46b8204___(v7, v6, Ptr, v8);
    lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_((__int64 *)v8);
  }
  else
  {
    v4 = -2147023728;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x125E,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v4,
      v8[0]);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, (unsigned int)v4);
  }
}
