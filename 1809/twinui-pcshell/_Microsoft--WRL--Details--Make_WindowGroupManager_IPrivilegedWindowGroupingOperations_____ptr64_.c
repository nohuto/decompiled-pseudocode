/*
 * XREFs of _Microsoft::WRL::Details::Make_WindowGroupManager_IPrivilegedWindowGroupingOperations_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x180203A73
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EB1C8 (--1-$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_WindowGroupManager_IPrivilegedWindowGroupingOperations_____ptr64_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<ApplicationViewWrapper>::~ComPtr<ApplicationViewWrapper>(*(__int64 **)(a2 + 80));
  }
  return result;
}
