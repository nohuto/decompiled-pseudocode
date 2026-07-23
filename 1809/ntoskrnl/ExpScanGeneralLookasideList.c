/*
 * XREFs of ExpScanGeneralLookasideList @ 0x140107160
 * Callers:
 *     KeBalanceSetManager @ 0x140183C10 (KeBalanceSetManager.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpScanGeneralLookasideList(_QWORD *a1, KSPIN_LOCK *a2)
{
  KIRQL v4; // al
  _QWORD *v5; // r8
  KIRQL v6; // si
  int v7; // edx
  unsigned int v8; // ecx
  unsigned __int16 v9; // r10
  int v10; // r9d
  int v11; // r9d
  __int64 result; // rax
  unsigned int v13; // eax
  unsigned int v14; // edx
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(a2);
  v5 = (_QWORD *)*a1;
  v6 = v4;
  if ( (_QWORD *)*a1 != a1 )
  {
    while ( 1 )
    {
      v7 = *((_DWORD *)v5 - 10) - *((_DWORD *)v5 + 5);
      *((_DWORD *)v5 + 5) = *((_DWORD *)v5 - 10);
      v8 = *((_DWORD *)v5 - 11) - *((_DWORD *)v5 + 4);
      v9 = *((_WORD *)v5 - 23);
      *((_DWORD *)v5 + 4) = *((_DWORD *)v5 - 11);
      if ( v9 != 0xFFFF )
        break;
LABEL_8:
      v5 = (_QWORD *)*v5;
      if ( v5 == a1 )
        goto LABEL_9;
    }
    v10 = *((unsigned __int16 *)v5 - 24);
    if ( v8 >= 0x4B )
    {
      v13 = 1000 * v7 / v8;
      if ( v13 >= 5 )
      {
        v14 = v13 * (v9 - v10) / 0x7D0 + 5;
        if ( v14 > 0x1E )
          v14 = 30;
        v11 = v14 + v10;
        if ( v11 > v9 )
          LOWORD(v11) = v9;
        goto LABEL_7;
      }
      v11 = v10 - 1;
    }
    else
    {
      v11 = v10 - 10;
    }
    if ( v11 < 4 )
      LOWORD(v11) = 4;
LABEL_7:
    *((_WORD *)v5 - 24) = v11;
    goto LABEL_8;
  }
LABEL_9:
  KxReleaseSpinLock(a2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v6;
  __writecr8(v6);
  return result;
}
