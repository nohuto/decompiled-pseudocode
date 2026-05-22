/*
 * XREFs of ??1?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18003E94C
 * Callers:
 *     _MPCManager::OnPeerConnected_::_1_::dtor$0 @ 0x18012FA0A (_MPCManager--OnPeerConnected_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>::~com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
    (**v2)(v2);
  }
}
