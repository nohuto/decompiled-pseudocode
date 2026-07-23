/*
 * XREFs of EtwpCoverageHighIrqlCPWorkItemCallback @ 0x14030F0A0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     TelemetryCoverageStringHashInternal @ 0x14012A838 (TelemetryCoverageStringHashInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpCoverageRecord @ 0x1406B547C (EtwpCoverageRecord.c)
 */

__int64 __fastcall EtwpCoverageHighIrqlCPWorkItemCallback(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 **v3; // r14
  KIRQL v4; // al
  __int64 *v5; // rbx
  KIRQL v6; // si
  __int64 v7; // rax
  int v8; // r15d
  unsigned __int64 v9; // r12
  _BYTE *v10; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v12; // rcx
  __int64 result; // rax
  _BYTE *v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+70h] [rbp+8h] BYREF

  v2 = *a1 + 24LL;
  v3 = (__int64 **)(*a1 + 40LL);
  while ( 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
    v5 = *v3;
    v6 = v4;
    if ( *v3 == (__int64 *)v3 )
      break;
    v7 = *v5;
    if ( (__int64 **)v5[1] != v3 || *(__int64 **)(v7 + 8) != v5 )
      __fastfail(3u);
    *v3 = (__int64 *)v7;
    v8 = 1;
    *(_QWORD *)(v7 + 8) = v3;
LABEL_8:
    v9 = v5[3];
    v10 = (_BYTE *)v5[4];
    v5[4] = v9;
    KxReleaseSpinLock((PKSPIN_LOCK)v2);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v6);
    while ( (unsigned __int64)v10 < v9 )
    {
      v14 = v10;
      v15 = 0LL;
      v16 = 0LL;
      LODWORD(v15) = TelemetryCoverageStringHashInternal(v10, &v17);
      EtwpCoverageRecord(a1, &v14);
      v10 += (unsigned int)(v17 + 1);
    }
    if ( v8 )
      ExFreePoolWithTag(v5, 0x56777445u);
  }
  v5 = *(__int64 **)(v2 + 8);
  if ( v5[4] < (unsigned __int64)v5[3] )
  {
    v8 = 0;
    goto LABEL_8;
  }
  v5[3] = (__int64)(v5 + 5);
  v5[4] = (__int64)(v5 + 5);
  *(_DWORD *)(v2 + 72) = 0;
  KxReleaseSpinLock((PKSPIN_LOCK)v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    v12 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v12);
  }
  result = v6;
  __writecr8(v6);
  return result;
}
