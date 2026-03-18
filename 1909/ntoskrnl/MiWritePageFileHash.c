/*
 * XREFs of MiWritePageFileHash @ 0x140164F08
 * Callers:
 *     MiMapPageFileHash @ 0x14014D76C (MiMapPageFileHash.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FE40 (MmMapLockedPagesSpecifyCache.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiComputePageHash @ 0x1401650EC (MiComputePageHash.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWritePageFileHash(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4, unsigned int a5)
{
  __int64 result; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // ebp
  __int64 *v13; // r13
  __int64 v14; // r15
  BOOL v15; // r8d
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned int v18; // ecx
  _DWORD *v19; // rdx
  int *v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-90h]
  _DWORD v27[16]; // [rsp+50h] [rbp-88h] BYREF

  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v10 = 0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
    {
      v11 = *(_QWORD *)(a2 + 24);
    }
    else
    {
      result = (__int64)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000010);
      v11 = result;
    }
    if ( v11 )
      v11 += ((__int64)a3 - a2 - 48) >> 3 << 12;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = 0;
  while ( 1 )
  {
    v13 = a3;
    v14 = v11;
    if ( v12 >= a5 )
      break;
    v27[v10] = 0;
    if ( a3 )
    {
      result = *a3;
      if ( *a3 != qword_140466548 )
      {
        v15 = 1;
        v16 = 48 * result - 0x58000000000LL;
        v26 = *(_QWORD *)(v16 + 16);
        v17 = (v26 >> 5) & 0x1F;
        if ( (dword_140571190 & 1) != 0 || (_DWORD)v17 == 31 )
          goto LABEL_17;
        v18 = (unsigned int)v17 >> 3;
        if ( (unsigned int)v17 >> 3 == 3 )
          v15 = ((v26 >> 5) & 7) == 0;
        result = 0LL;
        if ( v18 != 1 )
          result = v15;
        if ( (_DWORD)result == 1 )
        {
LABEL_17:
          result = MiComputePageHash(v16, v11);
          v27[v10] = result;
        }
        else
        {
          v27[v10] = 2;
        }
      }
    }
    if ( ++v10 == 16 )
      goto LABEL_25;
LABEL_19:
    ++v12;
    v11 = v14 + 4096;
    if ( !v14 )
      v11 = 0LL;
    ++a3;
    if ( !v13 )
      a3 = 0LL;
  }
  if ( v10 )
  {
LABEL_25:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
    v19 = (_DWORD *)(*(_QWORD *)(a1 + 216) + 4LL * a4);
    v20 = v27;
    v21 = v10;
    do
    {
      v22 = *v20++;
      *v19++ = v22;
      --v21;
    }
    while ( v21 );
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = OldIrql;
    __writecr8(OldIrql);
    a4 += v10;
    v10 = 0;
    goto LABEL_19;
  }
  return result;
}
