/*
 * XREFs of ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800049C4
 * Callers:
 *     _MsixvcUpdatePolicyInternal_::_1_::dtor$0 @ 0x1800067B5 (_MsixvcUpdatePolicyInternal_--_1_--dtor$0.c)
 *     _MsixvcUpdatePolicyInternal_::_1_::dtor$1 @ 0x1800067C7 (_MsixvcUpdatePolicyInternal_--_1_--dtor$1.c)
 *     _MsixvcUpdatePolicyInternal_::_1_::dtor$4 @ 0x1800067EB (_MsixvcUpdatePolicyInternal_--_1_--dtor$4.c)
 *     _MsixvcUpdatePolicyInternal_::_1_::dtor$5 @ 0x1800067FD (_MsixvcUpdatePolicyInternal_--_1_--dtor$5.c)
 *     _MsixvcRemediateMutablePackagesForVolumeAsync_::_1_::dtor$0 @ 0x18000680F (_MsixvcRemediateMutablePackagesForVolumeAsync_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006730 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
