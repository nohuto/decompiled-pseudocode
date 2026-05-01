/*
 * XREFs of std::call_once__lambda_e13c9660f56a8071ad8948355737f92d___ @ 0x18025BD4C
 * Callers:
 *     ?get@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplorerHost@@UE$AAAPE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@XZ @ 0x18025D750 (-get@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSourc_ea_18025D750.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18025C010 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18025DB90 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall std::call_once__lambda_e13c9660f56a8071ad8948355737f92d___(struct std::once_flag *a1, __int64 a2)
{
  __int64 v4; // rcx
  _BYTE v5[16]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v7[32]; // [rsp+48h] [rbp-20h] BYREF

  __ExceptionPtrCreate(v5);
  v6[0] = v5;
  v6[1] = a2;
  if ( !std::_Execute_once(
          a1,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_e13c9660f56a8071ad8948355737f92d_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v6) )
  {
    if ( __ExceptionPtrToBool(v5) )
    {
      v4 = std::exception_ptr::exception_ptr((std::exception_ptr *)v7, (const struct std::exception_ptr *)v5);
      std::rethrow_exception(v4);
    }
    std::_XGetLastError();
    JUMPOUT(0x18025BDDFLL);
  }
  __ExceptionPtrDestroy(v5);
}
