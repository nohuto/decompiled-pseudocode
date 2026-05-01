/*
 * XREFs of wistd::__function::__func__lambda_bb8fbd677a66ce2f78cf5c6141b3460b__long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager___Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs_____)_::__clone @ 0x1800B3DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wistd::__function::__func__lambda_bb8fbd677a66ce2f78cf5c6141b3460b__long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager___Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs_______::__clone(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = &off_18044FE60;
  a2[1] = *(_QWORD *)(a1 + 8);
  a2[2] = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<StateChangedEventArgsImpl>::InternalAddRef(a2 + 2);
}
