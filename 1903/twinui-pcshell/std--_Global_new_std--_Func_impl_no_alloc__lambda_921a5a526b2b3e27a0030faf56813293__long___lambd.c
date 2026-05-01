/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__long___lambda_921a5a526b2b3e27a0030faf56813293__const_&_ @ 0x1801C3E6C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__long_::_Copy @ 0x1801CCC20 (std--_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__long_--_Copy.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801C4384 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRef_ea_1801C4384.c)
 */

_QWORD *std::_Global_new_std::_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__long___lambda_921a5a526b2b3e27a0030faf56813293__const___()
{
  _QWORD *v1; // [rsp+48h] [rbp+10h]

  v1 = operator new(0x140uLL);
  *v1 = off_18042DBB8;
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(v1 + 1));
  v1[1] = &CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::`vftable';
  return v1;
}
