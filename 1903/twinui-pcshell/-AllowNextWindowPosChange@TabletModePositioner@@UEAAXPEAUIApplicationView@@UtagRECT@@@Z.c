/*
 * XREFs of ?AllowNextWindowPosChange@TabletModePositioner@@UEAAXPEAUIApplicationView@@UtagRECT@@@Z @ 0x1803A9B00
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180065588 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 */

void __fastcall TabletModePositioner::AllowNextWindowPosChange(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct tagRECT *a3)
{
  Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=(
    (__int64 *)this + 40,
    (__int64)a2);
  *((struct tagRECT *)this + 22) = *a3;
}
