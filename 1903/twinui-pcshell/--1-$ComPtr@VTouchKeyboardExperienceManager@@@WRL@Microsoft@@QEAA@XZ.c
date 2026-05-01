/*
 * XREFs of ??1?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18030D2F8
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_TouchKeyboardExperienceManager_TouchKeyboardExperienceManager__::_1_::dtor$2 @ 0x18030C46B (_Microsoft--WRL--Details--MakeAndInitialize_TouchKeyboardExperienceManager_TouchKey_ea_18030C46B.c)
 *     _TouchKeyboardExperienceManagerCF::CreateInstance_::_1_::dtor$0 @ 0x18030E468 (_TouchKeyboardExperienceManagerCF--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::~ComPtr<TouchKeyboardExperienceManager>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease(a1);
}
