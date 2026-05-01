/*
 * XREFs of ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180055138
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180054614 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180054B60 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ?GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x1800A2800 (-GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU-$IVec.c)
 *     ?GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x1800A2910 (-GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRI.c)
 *     ?IsAppActive@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x1800A3D20 (-IsAppActive@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@.c)
 *     ?StartUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x1800A4F50 (-StartUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ.c)
 *     ?StopUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x1800A5050 (-StopUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ.c)
 *     ?TerminateApplication@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@EW4AppLimitsTerminationType@2345@@Z @ 0x1800A5200 (-TerminateApplication@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHS.c)
 *     wil::details::RunFeatureDispatch__lambda_402144f3e77278201ba8e2dd3da35b8c__&_ @ 0x180162BF0 (wil--details--RunFeatureDispatch__lambda_402144f3e77278201ba8e2dd3da35b8c__-_.c)
 *     ??0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ @ 0x1803FF0C4 (--0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ.c)
 *     ??0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1803FFC20 (--0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1803FFE94 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::RunFunctor(
        wil::details *this,
        struct wil::details::IFunctor *a2,
        struct wil::details::IFunctorHost *a3)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( wil::details::g_pfnRunFunctorWithExceptionFilter )
    return wil::details::g_pfnRunFunctorWithExceptionFilter(this, a2, retaddr);
  else
    return (**(__int64 (__fastcall ***)(struct wil::details::IFunctor *, wil::details *, struct wil::details::IFunctorHost *))a2)(
             a2,
             this,
             a3);
}
