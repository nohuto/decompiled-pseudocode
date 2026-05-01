/*
 * XREFs of ?OnAppRequestedUncloak@ShellFeedsExperienceManagerNotification@@UEAAXXZ @ 0x180094070
 * Callers:
 *     <none>
 * Callees:
 *     ??$ShellFeedsExperienceManagerImpl_OnAppRequestedUncloak@AEA_N@ShellFeedsTelemetry@@SAXAEA_N@Z @ 0x1800920D4 (--$ShellFeedsExperienceManagerImpl_OnAppRequestedUncloak@AEA_N@ShellFeedsTelemetry@@SAXAEA_N@Z.c)
 *     ?_Uncloak@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800962AC (-_Uncloak@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 */

void __fastcall ShellFeedsExperienceManagerNotification::OnAppRequestedUncloak(
        ShellFeedsExperienceManagerNotification *this)
{
  ShellFeedsExperienceManagerImpl *v1; // rdi

  v1 = (ShellFeedsExperienceManagerImpl *)*((_QWORD *)this + 5);
  if ( v1 )
  {
    ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_OnAppRequestedUncloak<bool &>((__int64)v1 + 153);
    if ( *((_BYTE *)v1 + 153) )
      ShellFeedsExperienceManagerImpl::_Uncloak(v1);
  }
}
