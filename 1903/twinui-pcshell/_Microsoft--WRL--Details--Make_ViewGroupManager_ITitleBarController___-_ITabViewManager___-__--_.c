/*
 * XREFs of _Microsoft::WRL::Details::Make_ViewGroupManager_ITitleBarController___&_ITabViewManager___&__::_1_::dtor$0 @ 0x18024C742
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCControlCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180179734 (--1-$ComPtr@VCControlCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_ViewGroupManager_ITitleBarController_____ITabViewManager______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CControlCenterExperienceManager>::~ComPtr<CControlCenterExperienceManager>(*(__int64 **)(a2 + 80));
  }
  return result;
}
