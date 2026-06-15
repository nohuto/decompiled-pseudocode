/*
 * XREFs of ??1?$out_param_t@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800F56CC
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$7 @ 0x180072820 (_BuildDeviceGraphForStream_--_1_--dtor$7.c)
 * Callees:
 *     ?attach@?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800DB3CC (-attach@-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSub.c)
 */

__int64 __fastcall wil::details::out_param_t<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>::attach(*(__int64 **)a1, *(_QWORD *)(a1 + 8));
  return result;
}
