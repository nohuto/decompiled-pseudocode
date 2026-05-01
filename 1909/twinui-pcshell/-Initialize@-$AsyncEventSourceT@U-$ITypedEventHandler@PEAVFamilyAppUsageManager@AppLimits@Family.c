/*
 * XREFs of ?Initialize@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@AEAAJXZ @ 0x1800B22B8
 * Callers:
 *     _lambda_baf814ee9ae89b980ad734f70dac785d_::_lambda_invoker_cdecl_ @ 0x1800AE460 (_lambda_baf814ee9ae89b980ad734f70dac785d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIEventInvocationContext@details@wil@@@WRL@Microsoft@@@012@@Z @ 0x18021B948 (--$MakeAndInitialize@V-$EventInvocationContext@$00@details@wil@@UIEventInvocationCo_ea_18021B948.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_exception_policy>::Initialize(
        __int64 a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64); // rdi
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
        (__int64)"internal\\sdk\\inc\\wil\\wrlevent.h",
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
    v2 = Microsoft::WRL::Details::MakeAndInitialize<wil::details::EventInvocationContext<1>,wil::details::IEventInvocationContext,>(a1 + 48);
    if ( v2 < 0 )
    {
      v3 = 670LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
