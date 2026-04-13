/*
 * XREFs of _lambda_2a53bdf349f1cabe85dc2bb8886a879d_::operator() @ 0x18007DB94
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_2a53bdf349f1cabe85dc2bb8886a879d__Windows::Internal::CBasicResult_unsigned_char_0___::Run @ 0x18007F7B0 (Windows--Internal--COperationLambdaVar_0__lambda_2a53bdf349f1cabe85dc2bb8886a879d__Windows--Inte.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004C224 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ??_9IStorageFileStatics@Storage@Windows@@$BDA@AA @ 0x18007BE60 (--_9IStorageFileStatics@Storage@Windows@@$BDA@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall lambda_2a53bdf349f1cabe85dc2bb8886a879d_::operator()(__int64 *a1, __int64 a2)
{
  int v4; // eax
  DWORD v5; // edx
  int v6; // r8d
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 =  Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}}(*a1);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x64B,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v4);
    goto LABEL_7;
  }
  v7 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(0LL, v5, v6);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_7:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x62B,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v7);
    __debugbreak();
    JUMPOUT(0x18007DC67LL);
  }
  *(_BYTE *)(a2 + 16) = 1;
  v9 = a1[1];
  a1[1] = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return 0LL;
}
