/*
 * XREFs of ?SetMetadata@CSystemEffectWrapper@@UEAAJPEBUAMBISONICS_PARAMS@@@Z @ 0x140045CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x1400450B0 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z @ 0x1400454C8 (-CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::SetMetadata(CSystemEffectWrapper *this, const struct AMBISONICS_PARAMS *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct AMBISONICS_PARAMS *))(**((_QWORD **)this + 18) + 24LL))(
           *((_QWORD *)this + 18),
           a2);
}
