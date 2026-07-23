/*
 * XREFs of MmQuerySessionWorkingSetInformation @ 0x1402B43D4
 * Callers:
 *     EtwpLogSessionWorkingSetInfo @ 0x1408B9884 (EtwpLogSessionWorkingSetInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmQuerySessionWorkingSetInformation(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // esi
  int v5; // ebx
  unsigned __int64 *v6; // rbp
  __int64 *v7; // r10
  unsigned __int64 *v8; // r11
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE v17[2]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = (unsigned __int64 *)(a1 + 40LL * (unsigned int)*a2);
  KeAcquireInStackQueuedSpinLock(&qword_14043BF40, v17);
  v7 = (__int64 *)qword_14043C000;
  if ( (__int64 *)qword_14043C000 != &qword_14043C000 )
  {
    v8 = (unsigned __int64 *)(a1 + 24);
    do
    {
      if ( v8 - 3 == v6 )
      {
        v4 = -1073741820;
      }
      else
      {
        *((_DWORD *)v8 - 6) = *((_DWORD *)v7 - 34);
        v9 = v7[374];
        v8[1] = v9;
        v10 = v7[373];
        *(v8 - 2) = v10;
        v11 = v7[11];
        *v8 = v11;
        v12 = *(v7 - 12);
        *(v8 - 1) = v12;
        v13 = v12;
        if ( v11 < v12 )
          v13 = v11;
        *v8 = v13;
        if ( v9 >= v10 )
          v9 = v10;
        if ( v9 < v12 )
          v12 = v9;
        v8[1] = v12;
        v8 += 5;
      }
      v7 = (__int64 *)*v7;
      ++v5;
    }
    while ( v7 != &qword_14043C000 );
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)v17);
  OldIrql = v17[0].OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17[0].OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  result = v4;
  *a2 = v5;
  return result;
}
