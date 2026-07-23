/*
 * XREFs of ViCreateProcessCallbackInternal @ 0x140939564
 * Callers:
 *     ViCreateProcessCallback @ 0x140135380 (ViCreateProcessCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsLookupProcessByProcessId @ 0x140647C40 (PsLookupProcessByProcessId.c)
 *     RtlUpcaseUnicodeString @ 0x14064C260 (RtlUpcaseUnicodeString.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1406683B8 (PsGetAllocatedFullProcessImageName.c)
 *     ViFaultsGetBaseImageName @ 0x140939A4C (ViFaultsGetBaseImageName.c)
 *     ViFaultsIsAppTarget @ 0x140939CC8 (ViFaultsIsAppTarget.c)
 */

void __fastcall ViCreateProcessCallbackInternal(void *a1, char a2)
{
  volatile signed __int32 *p_Lock; // rbx
  KIRQL v3; // di
  struct _KPRCB *CurrentPrcb; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PEPROCESS Process; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 && PsLookupProcessByProcessId(a1, &Process) >= 0 )
  {
    p_Lock = &Process->Header.Lock;
    if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, &P) >= 0 )
    {
      ViFaultsGetBaseImageName(P, &DestinationString);
      RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
      v3 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
      if ( (unsigned int)ViFaultsIsAppTarget(&DestinationString) )
      {
        _InterlockedOr(p_Lock + 192, 0x10000u);
        p_Lock = &Process->Header.Lock;
      }
      KxReleaseSpinLock(&ViFaultInjectionLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        p_Lock = &Process->Header.Lock;
      }
      __writecr8(v3);
      ExFreePoolWithTag(P, 0);
    }
    ObfDereferenceObjectWithTag((PVOID)p_Lock, 0x746C6644u);
  }
}
