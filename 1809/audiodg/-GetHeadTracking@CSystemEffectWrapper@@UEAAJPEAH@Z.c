/*
 * XREFs of ?GetHeadTracking@CSystemEffectWrapper@@UEAAJPEAH@Z @ 0x140045640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x1400450B0 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z @ 0x1400454C8 (-CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetHeadTracking(CSystemEffectWrapper *this, int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 18) + 40LL))(*((_QWORD *)this + 18), a2);
}
