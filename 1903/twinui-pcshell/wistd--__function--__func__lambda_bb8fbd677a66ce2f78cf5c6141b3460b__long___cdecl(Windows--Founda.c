/*
 * XREFs of wistd::__function::__func__lambda_bb8fbd677a66ce2f78cf5c6141b3460b__long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager___Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs_____)_::__func__lambda_bb8fbd677a66ce2f78cf5c6141b3460b__long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager___Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs_____)_ @ 0x1800A1340
 * Callers:
 *     wistd::function_long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager___Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs_____)_::operator___lambda_bb8fbd677a66ce2f78cf5c6141b3460b__void_ @ 0x18009FBAC (wistd--function_long___cdecl(Windows--Foundation--ITypedEventHandler_Windows--Internal--FamilySa.c)
 *     wistd::__function::__func__lambda_bb8fbd677a66ce2f78cf5c6141b3460b__long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager___Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs_____)_::__move @ 0x1800A54A0 (wistd--__function--__func__lambda_bb8fbd677a66ce2f78cf5c6141b3460b__long___cdecl(Wi_ea_1800A54A0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_bb8fbd677a66ce2f78cf5c6141b3460b__long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager___Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs_______::__func__lambda_bb8fbd677a66ce2f78cf5c6141b3460b__long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager___Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs_______(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx

  *a1 = &off_180430748;
  v2 = *a2;
  v3 = a2 + 1;
  a1[1] = v2;
  a1[2] = 0LL;
  if ( a1 + 2 != v3 )
  {
    a1[2] = *v3;
    *v3 = 0LL;
  }
  return a1;
}
