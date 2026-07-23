/*
 * XREFs of MiWritePageFileHash @ 0x1401515B8
 * Callers:
 *     MiMapPageFileHash @ 0x14014FDD8 (MiMapPageFileHash.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiComputePageHash @ 0x14015178C (MiComputePageHash.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiWritePageFileHash(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, unsigned int a5)
{
  unsigned int v9; // edi
  char *v10; // rdx
  unsigned int v11; // ebp
  _QWORD *v12; // r13
  char *v13; // r15
  BOOL v14; // r8d
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned int v17; // ecx
  BOOL v18; // eax
  _DWORD *v19; // rdx
  int *v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-A0h] BYREF
  _DWORD v26[16]; // [rsp+50h] [rbp-88h] BYREF

  v9 = 0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
      v10 = *(char **)(a2 + 24);
    else
      v10 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000010);
    if ( v10 )
      v10 += 4096 * (((__int64)a3 - a2 - 48) >> 3);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = 0;
  while ( 1 )
  {
    v12 = a3;
    v13 = v10;
    if ( v11 >= a5 )
      break;
    v26[v9] = 0;
    if ( a3 && *a3 != qword_14043BE88 )
    {
      v14 = 1;
      v15 = 48LL * *a3 - 0x58000000000LL;
      v16 = (*(_QWORD *)(v15 + 16) >> 5) & 0x1FLL;
      if ( (dword_140541180 & 1) != 0 || (_DWORD)v16 == 31 )
        goto LABEL_17;
      v17 = (unsigned int)v16 >> 3;
      if ( (unsigned int)v16 >> 3 == 3 )
        v14 = ((*(_QWORD *)(v15 + 16) >> 5) & 7) == 0;
      v18 = 0;
      if ( v17 != 1 )
        v18 = v14;
      if ( v18 )
LABEL_17:
        v26[v9] = MiComputePageHash(v15);
      else
        v26[v9] = 2;
    }
    if ( ++v9 == 16 )
      goto LABEL_24;
LABEL_19:
    ++v11;
    v10 = v13 + 4096;
    if ( !v13 )
      v10 = 0LL;
    ++a3;
    if ( !v12 )
      a3 = 0LL;
  }
  if ( v9 )
  {
LABEL_24:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
    v19 = (_DWORD *)(*(_QWORD *)(a1 + 216) + 4LL * a4);
    v20 = v26;
    v21 = v9;
    do
    {
      v22 = *v20++;
      *v19++ = v22;
      --v21;
    }
    while ( v21 );
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    a4 += v9;
    v9 = 0;
    goto LABEL_19;
  }
}
