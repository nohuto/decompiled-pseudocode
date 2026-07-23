/*
 * XREFs of VfIrpDatabaseEntryReleaseLock @ 0x14093F3A4
 * Callers:
 *     IovAllocateIrp @ 0x140924810 (IovAllocateIrp.c)
 *     IovCancelIrp @ 0x140924F90 (IovCancelIrp.c)
 *     IovpLocalCompletionRoutine @ 0x1409256E0 (IovpLocalCompletionRoutine.c)
 *     IovpCallDriver1 @ 0x14092FC8C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1409301BC (IovpCallDriver2.c)
 *     IovpCheckIrpForCriticalTracking @ 0x140930484 (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x1409304F4 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x140930620 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest3 @ 0x1409309A8 (IovpCompleteRequest3.c)
 *     IovpCompleteRequest4 @ 0x140930A30 (IovpCompleteRequest4.c)
 *     VfIoAllocateIrp2 @ 0x1409311F8 (VfIoAllocateIrp2.c)
 *     VfIoFreeIrp @ 0x14093127C (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x140931428 (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x1409316B4 (VfIrpWatermark.c)
 *     VfSetIoBuildRequest @ 0x1409316F0 (VfSetIoBuildRequest.c)
 *     VfPendingMoreProcessingRequired @ 0x140934880 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140934B18 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14093F224 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14030B7D8 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x14030B820 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x14092706C (VfUtilAddressRangeRemoveCheckEmpty.c)
 */

__int64 __fastcall VfIrpDatabaseEntryReleaseLock(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  unsigned __int8 v7; // di
  unsigned __int64 *v8; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  KIRQL v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_DWORD *)a1 + 6) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v11);
    v2 = *a1;
    if ( *a1 )
    {
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64, __int64))a1[6])(a1, *a1, 1LL);
      *a1 = 0LL;
      VfUtilAddressRangeRemoveCheckEmpty(
        (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v2 >> 12))),
        v2);
    }
    ViIrpDatabaseReleaseLockExclusive(v11);
  }
  if ( !*((_DWORD *)a1 + 5) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v11);
    if ( !*((_DWORD *)a1 + 5) )
    {
      v3 = a1 + 4;
      v4 = (_QWORD *)a1[4];
      v5 = (_QWORD *)a1[5];
      if ( (unsigned __int64 *)v4[1] != a1 + 4 || (_QWORD *)*v5 != v3 )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = v5;
      a1[5] = (unsigned __int64)(a1 + 4);
      *v3 = v3;
      if ( (_QWORD *)*v4 == v4 )
      {
        v6 = (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned int)(((__int64)v4 - ViIrpDatabase) >> 4));
        *v6 = 0LL;
        v6[1] = 0LL;
      }
    }
    ViIrpDatabaseReleaseLockExclusive(v11);
  }
  v7 = *((_BYTE *)a1 + 16);
  v8 = (unsigned __int64 *)a1[4];
  KxReleaseSpinLock(a1 + 1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v7;
  __writecr8(v7);
  if ( v8 == a1 + 4 )
  {
    *((_DWORD *)a1 + 7) |= 0x80000000;
    return ((__int64 (__fastcall *)(unsigned __int64 *, unsigned __int64, __int64))a1[6])(a1, *a1, 2LL);
  }
  return result;
}
