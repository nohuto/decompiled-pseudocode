/*
 * XREFs of _wil::MakeAndInitializeOrThrow_TitleBarController_wil::com_ptr_t_IWeakReference_wil::err_returncode_policy____::_1_::dtor$0 @ 0x180265C42
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VTitleBarController@@@WRL@Microsoft@@QEAA@XZ @ 0x1802669B8 (--1-$ComPtr@VTitleBarController@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_TitleBarController_wil::com_ptr_t_IWeakReference_wil::err_returncode_policy____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<TitleBarController>::~ComPtr<TitleBarController>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
