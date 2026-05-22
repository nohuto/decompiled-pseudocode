/*
 * XREFs of ??1?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180017740
 * Callers:
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected_::_1_::dtor$0 @ 0x18012E6F5 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--OnPeerConnected_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>(
        __int64 (__fastcall ****a1)(_QWORD))
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1);
  return result;
}
