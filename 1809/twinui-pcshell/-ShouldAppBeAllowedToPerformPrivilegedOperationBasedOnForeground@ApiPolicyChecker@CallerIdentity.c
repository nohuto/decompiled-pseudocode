/*
 * XREFs of ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x1803A21CC
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180027110 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 * Callees:
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x1803A178C (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_aa196f3dd7e8ba47a7385d927b222f3d___ @ 0x1803A19F0 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationByAppID__lambda_aa196f3dd7e8ba47a7385d927b2.c)
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1803A1D1C (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 *     ?GetLaunchRequirementForActiveBand@ApiPolicyChecker@CallerIdentity@@YA?AW4LaunchRequirement@12@W4ZBID@@@Z @ 0x1803A1E3C (-GetLaunchRequirementForActiveBand@ApiPolicyChecker@CallerIdentity@@YA-AW4LaunchRequirement@12@W.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground(
        struct IUnknown *this,
        const unsigned __int16 *a2)
{
  HWND ForegroundWindow; // rax
  int *v4; // rdi
  int LaunchRequirementForActiveBand; // ebx
  const unsigned __int16 *v6; // rdx
  bool DoesAppMeetLaunchRequirement; // al
  char v9; // [rsp+48h] [rbp+10h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF
  char *v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0;
  ForegroundWindow = GetForegroundWindow();
  v4 = (int *)ForegroundWindow;
  if ( ForegroundWindow )
    GetWindowBand(ForegroundWindow, &v10);
  LaunchRequirementForActiveBand = CallerIdentity::ApiPolicyChecker::GetLaunchRequirementForActiveBand(v10);
  if ( CallerIdentity::IsShellExperienceAppId((LPCWCH)this, v6) )
    LaunchRequirementForActiveBand = 1;
  DoesAppMeetLaunchRequirement = CallerIdentity::ApiPolicyChecker::DoesAppMeetLaunchRequirement(
                                   LaunchRequirementForActiveBand,
                                   (CallerIdentity::ApiPolicyChecker *)this,
                                   v4);
  if ( DoesAppMeetLaunchRequirement )
  {
    v9 = 0;
    v11 = &v9;
    CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_aa196f3dd7e8ba47a7385d927b222f3d___(
      this,
      (__int64)&v11);
    DoesAppMeetLaunchRequirement = v9 == 0;
  }
  return !DoesAppMeetLaunchRequirement ? 0x80070005 : 0;
}
