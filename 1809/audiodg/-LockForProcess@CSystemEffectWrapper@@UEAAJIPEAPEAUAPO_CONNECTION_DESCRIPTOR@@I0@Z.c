/*
 * XREFs of ?LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z @ 0x140045A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x1400450B0 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z @ 0x1400454C8 (-CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::LockForProcess(
        CSystemEffectWrapper *this,
        __int64 a2,
        struct APO_CONNECTION_DESCRIPTOR **a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, __int64, struct APO_CONNECTION_DESCRIPTOR **))(**((_QWORD **)this + 17)
                                                                                           + 24LL))(
             *((_QWORD *)this + 17),
             a2,
             a3);
  if ( (int)result >= 0 )
    _InterlockedExchange((volatile __int32 *)this + 50, 1);
  return result;
}
