/*
 * XREFs of IovpCancelRoutine @ 0x14096DCB0
 * Callers:
 *     IoCancelIrp @ 0x140128400 (IoCancelIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IovpCancelRoutine(__int64 a1, __int64 a2, __int64 (*a3)(void))
{
  if ( (MmVerifierData & 0x6A0000) != 0
    && a1
    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) + 64LL)
    && pXdvDRIVER_CANCEL )
  {
    return pXdvDRIVER_CANCEL();
  }
  else
  {
    return a3();
  }
}
