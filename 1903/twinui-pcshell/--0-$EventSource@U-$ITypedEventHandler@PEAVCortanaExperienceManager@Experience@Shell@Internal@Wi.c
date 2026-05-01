/*
 * XREFs of ??0?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x180174678
 * Callers:
 *     ??0CActionCenterExperienceManager@@QEAA@XZ @ 0x1801747BC (--0CActionCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CControlCenterExperienceManager@@QEAA@XZ @ 0x1801795D0 (--0CControlCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CortanaSharedExperienceManager@@QEAA@XZ @ 0x18017CD50 (--0CortanaSharedExperienceManager@@QEAA@XZ.c)
 *     ??0CToastCenterExperienceManager@@QEAA@XZ @ 0x1801849E0 (--0CToastCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CStartExperienceManager@@QEAA@XZ @ 0x180196800 (--0CStartExperienceManager@@QEAA@XZ.c)
 *     ??0CStartExperienceManager@@QEAA@_N@Z @ 0x180196B24 (--0CStartExperienceManager@@QEAA@_N@Z.c)
 *     ??0CJumpViewExperienceManager@@QEAA@XZ @ 0x18019ADC8 (--0CJumpViewExperienceManager@@QEAA@XZ.c)
 *     ??0ViewWrapperBase@@QEAA@XZ @ 0x1802960D0 (--0ViewWrapperBase@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK *__fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>(
        RTL_SRWLOCK *a1)
{
  a1->Ptr = 0LL;
  InitializeSRWLock(a1 + 1);
  InitializeSRWLock(a1 + 2);
  return a1;
}
