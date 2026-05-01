/*
 * XREFs of ?AllowNextWindowPosChange@TabletModePositioner@@UEAAXPEAUIApplicationView@@UtagRECT@@@Z @ 0x1803C9010
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800677F8 (--4-$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEA.c)
 */

void __fastcall TabletModePositioner::AllowNextWindowPosChange(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct tagRECT *a3)
{
  Microsoft::WRL::ComPtr<TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification>::operator=(
    (__int64 *)this + 40,
    (__int64)a2);
  *((struct tagRECT *)this + 22) = *a3;
}
