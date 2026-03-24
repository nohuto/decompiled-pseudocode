/*
 * XREFs of PsLookupThreadByThreadId @ 0x1406487A0
 * Callers:
 *     PsOpenThread @ 0x140611DF0 (PsOpenThread.c)
 *     NtAlertThreadByThreadId @ 0x140649FA0 (NtAlertThreadByThreadId.c)
 *     PsLookupProcessThreadByCid @ 0x1406B2F90 (PsLookupProcessThreadByCid.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1406E22E4 (PfpServiceMainThreadBoostPrep.c)
 *     PspFindThreadForTeb @ 0x14088AC78 (PspFindThreadForTeb.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14088F14C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     PsIsProcessInSilo @ 0x1400CB108 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14012F300 (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x140646D10 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  struct _KTHREAD *CurrentThread; // rsi
  _BYTE *v4; // rbx
  __int64 CurrentServerSilo; // rdi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = PspReferenceCidTableEntry((__int64)ThreadId, 6);
  if ( v4 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( (*((_DWORD *)v4 + 436) & 2) == 0 )
    {
      _InterlockedOr(v7, 0);
      if ( (*((_QWORD *)v4 + 216) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)v4 + 216);
      if ( (*((_DWORD *)v4 + 436) & 2) == 0 )
        goto LABEL_7;
    }
    if ( !PsIsProcessInSilo(*((struct _KPROCESS **)v4 + 68), CurrentServerSilo) )
    {
LABEL_7:
      ObfDereferenceObject(v4);
      v4 = 0LL;
    }
  }
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( !v4 )
    return -1073741813;
  *Thread = (PETHREAD)v4;
  return 0;
}
