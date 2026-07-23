/*
 * XREFs of MiCheckSystemTrimEndCriteria @ 0x1402B2CDC
 * Callers:
 *     MiProcessWorkingSets @ 0x14006CEC0 (MiProcessWorkingSets.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiLogContinueTrim @ 0x1402B3370 (MiLogContinueTrim.c)
 */

__int64 __fastcall MiCheckSystemTrimEndCriteria(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // r10
  unsigned int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int8 v14; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r15
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  char v23; // cl
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdi

  v3 = a1[878];
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 2) - 2) <= 1u )
  {
    v25 = *(_QWORD *)(v3 + 2368);
    if ( *(_QWORD *)(a2 + 96) < v25 )
      v26 = v25 - *(_QWORD *)(a2 + 80);
    else
      v26 = 0LL;
    *(_QWORD *)(v3 + 2368) = v26;
    return 1LL;
  }
  if ( (*(_BYTE *)a2 & 0x7Fu) >= 4 )
    return 1LL;
  v7 = a1[912];
  if ( v7 >= *(_QWORD *)(a2 + 72) )
    return 1LL;
  if ( *(_QWORD *)(a2 + 96) >= *(_QWORD *)(a2 + 80) )
  {
    if ( v7 < 0x420 )
    {
      *(_QWORD *)(a2 + 96) = 0LL;
      goto LABEL_7;
    }
    return 1LL;
  }
LABEL_7:
  v8 = 0LL;
  v9 = (_QWORD *)(v3 + 2424);
  v10 = 0;
  v11 = a2 - v3;
  do
  {
    v12 = *(_QWORD *)((char *)v9 + v11 - 2416);
    *v9++ = v12;
    v13 = v12 + v8;
    if ( v10 < 6 )
      v13 = v8;
    ++v10;
    v8 = v13;
  }
  while ( v10 < 8 );
  *(_QWORD *)(v3 + 2416) = v13;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)a3);
  v14 = *(_BYTE *)(a3 + 16);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v14);
  if ( a1[960] < 0x420uLL )
  {
    ++*(_DWORD *)(v3 + 2576);
  }
  else
  {
    ++*(_DWORD *)(v3 + 2572);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  v16 = a1[912];
  v17 = *(_QWORD *)(a2 + 72);
  if ( v16 >= v17 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14043BF40, (PKLOCK_QUEUE_HANDLE)a3);
    return 1LL;
  }
  v18 = v17 - v16;
  v19 = 0LL;
  v20 = MiTrimPassToAge[*(_BYTE *)a2 & 0x7F];
  if ( (unsigned int)v20 < 8 )
  {
    v21 = (_QWORD *)(v3 + 2424 + 8 * v20);
    v22 = (unsigned int)(8 - v20);
    do
    {
      v19 += *v21++;
      --v22;
    }
    while ( v22 );
  }
  memset((void *)(a2 + 8), 0, 0x40uLL);
  if ( v19 < v18 + 256 || *(char *)a2 < 0 )
    v23 = *(_BYTE *)a2 ^ (*(_BYTE *)a2 ^ (*(_BYTE *)a2 + 1)) & 0x7F;
  else
    v23 = *(_BYTE *)a2 | 0x80;
  *(_BYTE *)a2 = v23;
  MiLogContinueTrim(a1, a2);
  KeAcquireInStackQueuedSpinLock(&qword_14043BF40, (PKLOCK_QUEUE_HANDLE)a3);
  return 0LL;
}
