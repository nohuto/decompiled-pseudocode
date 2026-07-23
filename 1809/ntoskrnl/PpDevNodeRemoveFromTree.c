/*
 * XREFs of PpDevNodeRemoveFromTree @ 0x14015AFA4
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406EE9CC (PnpUnlinkDeviceRemovalRelations.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpOrphanNotification @ 0x1406EF4C0 (PnpOrphanNotification.c)
 */

char __fastcall PpDevNodeRemoveFromTree(_QWORD *a1)
{
  char v2; // bp
  KIRQL v3; // di
  __int64 v4; // rax
  _QWORD **v5; // rax
  _QWORD *i; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  char result; // al
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v25; // rcx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v4 = a1[2];
  if ( v4 )
  {
    v5 = (_QWORD **)(v4 + 8);
    for ( i = *v5; i != a1; i = (_QWORD *)*i )
      v5 = (_QWORD **)i;
    v7 = (_QWORD *)*a1;
    *v5 = (_QWORD *)*a1;
    v8 = a1[2];
    if ( *(_QWORD *)(v8 + 8) )
    {
      while ( v7 )
      {
        v5 = (_QWORD **)v7;
        v7 = (_QWORD *)*v7;
      }
    }
    else
    {
      v5 = 0LL;
    }
    *(_QWORD *)(v8 + 24) = v5;
    KxReleaseSpinLock(&PnpSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v3);
    v9 = a1[78];
    v10 = (_QWORD *)a1[79];
    if ( *(_QWORD **)(v9 + 8) != a1 + 78 || (_QWORD *)*v10 != a1 + 78 )
LABEL_28:
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    PnpOrphanNotification(a1);
    v2 = 1;
  }
  else
  {
    KxReleaseSpinLock(&PnpSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      v25 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v25);
    }
    __writecr8(v3);
  }
  v11 = (_QWORD *)a1[20];
  while ( v11 != a1 + 20 )
  {
    v14 = v11 - 3;
    v11 = (_QWORD *)*v11;
    v15 = *v14;
    v16 = (_QWORD *)v14[1];
    if ( *(_QWORD **)(*v14 + 8LL) != v14 )
      goto LABEL_28;
    if ( (_QWORD *)*v16 != v14 )
      goto LABEL_28;
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    v17 = v14[3];
    v18 = (_QWORD *)v14[4];
    if ( *(_QWORD **)(v17 + 8) != v14 + 3 || (_QWORD *)*v18 != v14 + 3 )
      goto LABEL_28;
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    ExFreePoolWithTag(v14, 0x72775044u);
  }
  v12 = (_QWORD *)a1[22];
  while ( v12 != a1 + 22 )
  {
    v19 = *v12;
    v20 = v12;
    v12 = (_QWORD *)v19;
    v21 = (_QWORD *)v20[1];
    if ( *(_QWORD **)(v19 + 8) != v20 )
      goto LABEL_28;
    if ( (_QWORD *)*v21 != v20 )
      goto LABEL_28;
    *v21 = v19;
    *(_QWORD *)(v19 + 8) = v21;
    v22 = v20[3];
    v23 = (_QWORD *)v20[4];
    if ( *(_QWORD **)(v22 + 8) != v20 + 3 || (_QWORD *)*v23 != v20 + 3 )
      goto LABEL_28;
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    ExFreePoolWithTag(v20, 0x72775044u);
  }
  a1[2] = 0LL;
  result = v2;
  a1[1] = 0LL;
  *a1 = 0LL;
  a1[3] = 0LL;
  return result;
}
