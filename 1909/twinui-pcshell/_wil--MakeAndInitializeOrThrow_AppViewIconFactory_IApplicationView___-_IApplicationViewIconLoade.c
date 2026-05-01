/*
 * XREFs of _wil::MakeAndInitializeOrThrow_AppViewIconFactory_IApplicationView___&_IApplicationViewIconLoader___&__::_1_::dtor$0 @ 0x180320639
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180321A08 (--1-$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_AppViewIconFactory_IApplicationView_____IApplicationViewIconLoader______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<AppViewIconFactory>::~ComPtr<AppViewIconFactory>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
