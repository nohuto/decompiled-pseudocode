/*
 * XREFs of ?CalcOutputFrames@CSystemEffectWrapper@@UEAAII@Z @ 0x140045420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x1400450B0 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?GetAPOExceptionCrashPolicy@@YAHXZ @ 0x140045544 (-GetAPOExceptionCrashPolicy@@YAHXZ.c)
 */

__int64 __fastcall CSystemEffectWrapper::CalcOutputFrames(CSystemEffectWrapper *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 40LL))(*((_QWORD *)this + 15));
}
