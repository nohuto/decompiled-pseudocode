/*
 * XREFs of _lambda_3eaa8416a18b3d4d2003ae87be4de258_::operator() @ 0x18008F4CC
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_3eaa8416a18b3d4d2003ae87be4de258___::operator() @ 0x18008F710 (CDelayIAMOperations--CDelayedOperation__lambda_3eaa8416a18b3d4d2003ae87be4de258___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0778bf33688fe19efef5fae2e4780c3f___ @ 0x18008EE48 (Windows--Internal--ComTaskPool--QueueTask__lambda_0778bf33688fe19efef5fae2e4780c3f___.c)
 *     _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_ @ 0x18008F348 (_lambda_73bca28b4d92a1291c49cf8f8a9be4e0_--__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801339D8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall lambda_3eaa8416a18b3d4d2003ae87be4de258_::operator()(__int64 *a1)
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
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_0778bf33688fe19efef5fae2e4780c3f___(v7, v6, Ptr, v8);
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
      (void *)0x1301,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v4,
      v8[0]);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, (unsigned int)v4);
  }
}
