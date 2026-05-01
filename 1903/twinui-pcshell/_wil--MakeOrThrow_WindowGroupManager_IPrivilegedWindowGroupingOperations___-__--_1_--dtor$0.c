/*
 * XREFs of _wil::MakeOrThrow_WindowGroupManager_IPrivilegedWindowGroupingOperations___&__::_1_::dtor$0 @ 0x18025C3C7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x18010DF40 (--1-$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

volatile signed __int64 *__fastcall wil::MakeOrThrow_WindowGroupManager_IPrivilegedWindowGroupingOperations______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<ApplicationViewWrapper>::~ComPtr<ApplicationViewWrapper>(*(volatile signed __int64 ***)(a2 + 64));
  }
  return result;
}
