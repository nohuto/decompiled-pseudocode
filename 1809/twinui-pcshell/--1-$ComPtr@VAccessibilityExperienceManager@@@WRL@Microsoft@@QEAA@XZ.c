/*
 * XREFs of ??1?$ComPtr@VAccessibilityExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D12C8
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_AccessibilityExperienceManager_AccessibilityExperienceManager__::_1_::dtor$2 @ 0x1802D0867 (_Microsoft--WRL--Details--MakeAndInitialize_AccessibilityExperienceManager_Accessib_ea_1802D0867.c)
 *     _AccessibilityExperienceManagerCF::CreateInstance_::_1_::dtor$0 @ 0x1802D197C (_AccessibilityExperienceManagerCF--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AccessibilityExperienceManager>::~ComPtr<AccessibilityExperienceManager>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<AccessibilityExperienceManager>::InternalRelease(a1);
}
