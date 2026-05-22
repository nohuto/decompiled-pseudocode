/*
 * XREFs of ??1?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006800
 * Callers:
 *     _Microsoft::BamoImpl::ConnectionIndirector::OnPeerConnected_::_1_::dtor$1 @ 0x18003A6F0 (_Microsoft--BamoImpl--ConnectionIndirector--OnPeerConnected_--_1_--dtor$1.c)
 * Callees:
 *     <none>
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
