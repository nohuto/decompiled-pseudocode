/*
 * XREFs of ViCreateProcessCallbackInternal @ 0x140979E7C
 * Callers:
 *     ViCreateProcessCallback @ 0x140137230 (ViCreateProcessCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsLookupProcessByProcessId @ 0x1405D05D0 (PsLookupProcessByProcessId.c)
 *     RtlUpcaseUnicodeString @ 0x140657A70 (RtlUpcaseUnicodeString.c)
 *     PsGetAllocatedFullProcessImageName @ 0x140658AD8 (PsGetAllocatedFullProcessImageName.c)
 *     ViFaultsGetBaseImageName @ 0x14097A36C (ViFaultsGetBaseImageName.c)
 *     ViFaultsIsAppTarget @ 0x14097A5E8 (ViFaultsIsAppTarget.c)
 */

void __fastcall ViCreateProcessCallbackInternal(void *a1, char a2)
{
  volatile signed __int32 *p_Lock; // rbx
  KIRQL v3; // di
  struct _KPRCB *CurrentPrcb; // rcx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-10h] BYREF
  PEPROCESS Process; // [rsp+50h] [rbp+20h] BYREF
  PVOID P; // [rsp+58h] [rbp+28h] BYREF

  if ( a2 )
  {
    *(_QWORD *)&SourceString.Length = 0LL;
    SourceString.Buffer = 0LL;
    if ( PsLookupProcessByProcessId(a1, &Process) >= 0 )
    {
      p_Lock = &Process->Header.Lock;
      if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, &P) >= 0 )
      {
        ViFaultsGetBaseImageName(P, &SourceString);
        RtlUpcaseUnicodeString(&SourceString, &SourceString, 0);
        v3 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
        if ( (unsigned int)ViFaultsIsAppTarget(&SourceString) )
        {
          _InterlockedOr(p_Lock + 194, 0x10000u);
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
}
