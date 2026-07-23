/*
 * XREFs of ExpEnumerateCallback @ 0x1401386D0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpEnumerateCallback(__int64 a1, _QWORD *a2)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v5; // al
  __int64 **v6; // rcx
  KIRQL v7; // di
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 *v10; // rbx
  __int64 *i; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 8);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
  v6 = (__int64 **)(a1 + 16);
  v7 = v5;
  v8 = 0LL;
  v9 = *a2 & -(__int64)(*a2 != 0LL);
  if ( *a2 )
    v6 = (__int64 **)*a2;
  v10 = (__int64 *)(a1 + 16);
  for ( i = *v6; i != v10; i = (__int64 *)*i )
  {
    if ( !*((_BYTE *)i + 44) )
    {
      ++*((_DWORD *)i + 10);
      v8 = i[3];
      *a2 = i;
      break;
    }
  }
  if ( v9 )
  {
    --*(_DWORD *)(v9 + 40);
    if ( *(_BYTE *)(v9 + 44) )
    {
      if ( !*(_DWORD *)(v9 + 40) )
        KeSetEvent(&ExpCallbackEvent, 0, 0);
    }
  }
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v7);
  return v8;
}
