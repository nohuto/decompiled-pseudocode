/*
 * XREFs of ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x180021DE8
 * Callers:
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000C540 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800236DC (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?OnEventQueued@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801566C0 (-OnEventQueued@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 *     ?OnEventQueued@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180157620 (-OnEventQueued@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 *     ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180163500 (-OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRI.c)
 *     ?OnEventQueued@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180166020 (-OnEventQueued@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHST.c)
 *     ?OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18016E100 (-OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@P.c)
 *     ?OnEventQueued@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801734A0 (-OnEventQueued@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?OnEventQueued@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180180040 (-OnEventQueued@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::Wrappers::operator==(HSTRING *a1, __int64 a2)
{
  HSTRING v2; // rdx
  HSTRING v3; // rcx
  HRESULT v4; // eax
  INT32 result; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(HSTRING *)(a2 + 24);
  v3 = *a1;
  result = 0;
  v4 = WindowsCompareStringOrdinal(v3, v2, &result);
  if ( v4 < 0 )
  {
    RaiseException(v4, 1u, 0, 0LL);
    JUMPOUT(0x1800B9E2ELL);
  }
  return result == 0;
}
