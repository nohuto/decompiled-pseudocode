/*
 * XREFs of ??1?$out_param_ptr_t@PEAPEAXV?$com_ptr_t@UIDeviceTopology@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800DCF60
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$5 @ 0x1800727E0 (_BuildDeviceGraphForStream_--_1_--dtor$5.c)
 *     _ConnectorSupportsFormat_::_1_::dtor$10 @ 0x1800DDE97 (_ConnectorSupportsFormat_--_1_--dtor$10.c)
 *     _ConnectorSupportsFormat_::_1_::dtor$14 @ 0x1800DDEC7 (_ConnectorSupportsFormat_--_1_--dtor$14.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>(
        __int64 **a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = **a1;
    result = (__int64)a1[1];
    **a1 = result;
    if ( v1 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
