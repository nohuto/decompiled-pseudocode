/*
 * XREFs of ?AcceptInput@CSystemEffectWrapper@@UEAAXIPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x1400451E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x1400450B0 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?GetAPOExceptionCrashPolicy@@YAHXZ @ 0x140045544 (-GetAPOExceptionCrashPolicy@@YAHXZ.c)
 */

void __fastcall CSystemEffectWrapper::AcceptInput(
        CSystemEffectWrapper *this,
        __int64 a2,
        const struct APO_CONNECTION_PROPERTY *a3)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 42, 2, 1) == 1 )
    (*(void (__fastcall **)(_QWORD, __int64, const struct APO_CONNECTION_PROPERTY *))(**((_QWORD **)this + 18) + 24LL))(
      *((_QWORD *)this + 18),
      a2,
      a3);
  _InterlockedCompareExchange((volatile signed __int32 *)this + 42, 1, 2);
}
