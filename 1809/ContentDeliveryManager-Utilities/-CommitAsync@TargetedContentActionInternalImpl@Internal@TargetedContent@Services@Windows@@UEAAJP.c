/*
 * XREFs of ?CommitAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18004F130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?CommitOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x180051DA4 (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler_ea_180051DA4.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::CommitAsync(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        struct Windows::Foundation::IAsyncAction **a2)
{
  _QWORD *v4; // rax
  void (__fastcall ***v5)(_QWORD, __int64); // rdi
  signed int v6; // ebx
  void *v7; // rax
  __int64 v8; // rsi
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v10[2] = 0;
  v10[0] = 3;
  v10[1] = 130;
  v4 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = (void (__fastcall ***)(_QWORD, __int64))v4;
  if ( v4 )
  {
    *v4 = off_1800D9200;
    v4[1] = (char *)this - 48;
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = 0LL;
  v6 = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
  {
    v7 = operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = 0LL;
    if ( v7 )
      v8 = ((__int64 (__fastcall *)(void *, _DWORD *, const wchar_t *, __int64))Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::CommitOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::CommitOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>)(
             v7,
             v10,
             L"Windows.Foundation.IAsyncAction",
             1LL);
    v6 = v8 == 0 ? 0x8007000E : 0;
    if ( v8 )
    {
      *(_QWORD *)(v8 + 256) = v5;
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 104LL))(v8 + 8);
      v5 = 0LL;
    }
    if ( v6 >= 0 )
    {
      *a2 = (struct Windows::Foundation::IAsyncAction *)((v8 + 176) & -(__int64)(v8 != 0));
      v8 = 0LL;
    }
    if ( v5 )
      (**v5)(v5, 1LL);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 16LL))(v8 + 8);
  }
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCC,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
