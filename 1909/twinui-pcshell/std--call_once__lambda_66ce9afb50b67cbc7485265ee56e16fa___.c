/*
 * XREFs of std::call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa___ @ 0x1802D34AC
 * Callers:
 *     ?get@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplorerHost@@UE$AAAPE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@XZ @ 0x1802D57B0 (-get@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSourc_ea_1802D57B0.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1801E3920 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1801ECF34 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall std::call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa___(struct std::once_flag *a1, __int64 a2)
{
  std::exception_ptr *v4; // rcx
  _BYTE v5[16]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v7[32]; // [rsp+48h] [rbp-20h] BYREF

  __ExceptionPtrCreate(v5);
  v6[0] = v5;
  v6[1] = a2;
  if ( !std::_Execute_once(
          a1,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_66ce9afb50b67cbc7485265ee56e16fa_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v6) )
  {
    if ( __ExceptionPtrToBool(v5) )
    {
      v4 = std::exception_ptr::exception_ptr((std::exception_ptr *)v7, (const struct std::exception_ptr *)v5);
      std::rethrow_exception(v4);
    }
    std::_XGetLastError();
    JUMPOUT(0x1802D353FLL);
  }
  __ExceptionPtrDestroy(v5);
}
