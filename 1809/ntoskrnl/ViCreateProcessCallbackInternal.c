/*
 * XREFs of ViCreateProcessCallbackInternal @ 0x140938564
 * Callers:
 *     ViCreateProcessCallback @ 0x1401352B0 (ViCreateProcessCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PsLookupProcessByProcessId @ 0x140646C20 (PsLookupProcessByProcessId.c)
 *     RtlUpcaseUnicodeString @ 0x14064B0A0 (RtlUpcaseUnicodeString.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1406671F8 (PsGetAllocatedFullProcessImageName.c)
 *     ViFaultsGetBaseImageName @ 0x140938A4C (ViFaultsGetBaseImageName.c)
 *     ViFaultsIsAppTarget @ 0x140938CC8 (ViFaultsIsAppTarget.c)
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
