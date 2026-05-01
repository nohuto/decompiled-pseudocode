/*
 * XREFs of _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$19 @ 0x18011EBF1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x18010DF40 (--1-$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

volatile signed __int64 *__fastcall CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor_19(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)(*(_DWORD *)(a2 + 408) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 408) &= ~1u;
    return Microsoft::WRL::ComPtr<ApplicationViewWrapper>::~ComPtr<ApplicationViewWrapper>((volatile signed __int64 **)(a2 + 176));
  }
  return result;
}
