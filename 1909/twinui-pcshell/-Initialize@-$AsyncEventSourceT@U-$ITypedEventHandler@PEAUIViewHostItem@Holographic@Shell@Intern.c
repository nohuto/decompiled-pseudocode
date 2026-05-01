/*
 * XREFs of ?Initialize@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJXZ @ 0x1802201F4
 * Callers:
 *     _lambda_fbde14a9405218e607ae167596a7999b_::_lambda_invoker_cdecl_ @ 0x18021A780 (_lambda_fbde14a9405218e607ae167596a7999b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEventInvocationContext@details@wil@@@Z @ 0x18021B858 (--$MakeAndInitialize@V-$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::Initialize(
        __int64 a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64); // rdi
  _QWORD *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 32) )
  {
    v1 = *(_QWORD *)(a1 + 40);
    if ( !v1 )
    {
      v2 = -2147024882;
      v3 = 665LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (__int64)"internal\\sdk\\inc\\wil\\WrlEvent.h",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
    v5 = a1 + 48;
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 48));
    v2 = v6(v1, v5);
    if ( v2 < 0 )
    {
      v3 = 666LL;
      goto LABEL_4;
    }
  }
  else
  {
    v7 = (_QWORD *)(a1 + 48);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 48));
    v2 = Microsoft::WRL::Details::MakeAndInitialize<wil::details::EventInvocationContext<1>,wil::details::IEventInvocationContext,>(v7);
    if ( v2 < 0 )
    {
      v3 = 670LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
