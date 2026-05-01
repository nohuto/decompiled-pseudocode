/*
 * XREFs of wistd::__function::__func__lambda_bb8fbd677a66ce2f78cf5c6141b3460b__long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager___Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs_____)_::destroy @ 0x1800A55C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A4540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewTabEventArgs.c)
 */

volatile signed __int64 *__fastcall wistd::__function::__func__lambda_bb8fbd677a66ce2f78cf5c6141b3460b__long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager___Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs_______::destroy(
        __int64 a1)
{
  volatile signed __int64 *result; // rax

  result = *(volatile signed __int64 **)(a1 + 16);
  if ( result )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
