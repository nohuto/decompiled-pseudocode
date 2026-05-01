/*
 * XREFs of ?remove_AppUsageStateChanged@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800A5800
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18008E0A8 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Int.c)
 */

__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::remove_AppUsageStateChanged(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this,
        struct EventRegistrationToken a2)
{
  int v2; // eax
  __int64 *v4; // rdx
  const char *v5; // r9
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  int v7[2]; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+8h]

  *(_QWORD *)v7 = -2LL;
  v2 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
         (char *)this + 64,
         (struct IUnknown *)a2.value);
  if ( v2 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5421LL,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v2);
      __debugbreak();
_Windows__Internal__FamilySafety__AppLimits__FamilyAppUsageManager__remove_AppUsageStateChanged____1___catch$0:
      *((_DWORD *)v4 + 16) = wil::details::in1diag3::Return_CaughtException(
                               (wil::details::in1diag3 *)v4[7],
                               (void *)0xCB,
                               (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                               v5);
      return v9;
    }
    catch ( ... )
    {
      v4 = &v6;
      goto _Windows__Internal__FamilySafety__AppLimits__FamilyAppUsageManager__remove_AppUsageStateChanged____1___catch$0;
    }
  }
  return 0LL;
}
