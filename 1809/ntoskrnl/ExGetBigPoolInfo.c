/*
 * XREFs of ExGetBigPoolInfo @ 0x14031A744
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     EtwpPoolRunDown @ 0x1408C02F4 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1408CC5FC (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreeHeapPages @ 0x14015B374 (ExFreeHeapPages.c)
 *     ExAllocateHeapPages @ 0x14015C990 (ExAllocateHeapPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall ExGetBigPoolInfo(_DWORD *a1, unsigned int a2, int a3, unsigned int *a4)
{
  int v5; // edi
  char *HeapPages; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rcx
  KIRQL v12; // al
  KIRQL v13; // si
  const void *v14; // rdx
  unsigned __int64 v15; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  size_t v18; // rdi
  struct _KPRCB *v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // r8
  __int64 v22; // r8
  __int16 v23; // r9
  struct _KPRCB *v24; // rcx
  unsigned __int64 v25; // rdi
  unsigned int v26; // [rsp+20h] [rbp-88h]
  unsigned int v27; // [rsp+24h] [rbp-84h]
  char *v28; // [rsp+28h] [rbp-80h]
  _DWORD *v29; // [rsp+30h] [rbp-78h]
  _DWORD *v30; // [rsp+58h] [rbp-50h]

  v5 = a3;
  HeapPages = 0LL;
  v8 = 0LL;
  v27 = 0;
  v9 = 0LL;
  v10 = 16;
  v11 = 2LL;
  if ( a3 == 1 )
    v10 = 8;
  v26 = v10;
  if ( a3 != 1 )
    v11 = 4LL;
  v30 = &a1[v11];
  if ( a3 != 1 )
    a1 += 3;
  if ( a2 )
    *a1 = 0;
  v12 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
  while ( 1 )
  {
    v13 = v12;
    if ( v5 == 1 )
    {
      v14 = (const void *)PoolBigPageTable;
      v15 = PoolBigPageTableSize;
    }
    else
    {
      v14 = *(const void **)(qword_14043B080 + 8248);
      v15 = *(_QWORD *)(qword_14043B080 + 8256);
    }
    if ( !v14 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v13);
      if ( HeapPages )
        ExFreeHeapPages((ULONG_PTR)HeapPages, v8, 0x6C6F6F50u);
      *a4 = 0;
      return 0LL;
    }
    if ( HeapPages && v9 >= v15 )
      break;
    v9 = v15;
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
    {
      v24 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v24);
    }
    __writecr8(v13);
    v25 = 24 * v15;
    if ( HeapPages )
      ExFreeHeapPages((ULONG_PTR)HeapPages, v8, 0x6C6F6F50u);
    HeapPages = (char *)ExAllocateHeapPages(0x200u, v25, v22, v23);
    if ( !HeapPages )
      return 3221225626LL;
    v8 = v25;
    v12 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
    v5 = a3;
  }
  v18 = 24 * v15;
  memmove(HeapPages, v14, v18);
  ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
  {
    v19 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v19);
  }
  __writecr8(v13);
  v28 = HeapPages;
  v29 = v30;
  while ( 1 )
  {
    v20 = v26;
    if ( v28 >= &HeapPages[v18] )
      break;
    v21 = *(_QWORD *)v28;
    if ( (*(_QWORD *)v28 & 1) == 0 )
    {
      if ( a2 )
        ++*a1;
      v26 += 24;
      if ( v20 >= 0xFFFFFFE8 )
      {
        v27 = -1073741675;
        break;
      }
      if ( v26 <= a2 )
      {
        if ( a2 )
        {
          *(_QWORD *)v29 = v21;
          if ( a3 == 1 && (*((_DWORD *)v28 + 3) & 0x100) == 0 )
            *(_QWORD *)v29 = v21 | 1;
          v29[4] = *((_DWORD *)v28 + 2);
          *((_QWORD *)v29 + 1) = *((_QWORD *)v28 + 2);
          v29 += 6;
        }
      }
      else
      {
        v27 = -1073741820;
      }
    }
    v28 += 24;
  }
  ExFreeHeapPages((ULONG_PTR)HeapPages, v8, 0x6C6F6F50u);
  *a4 = v26;
  return v27;
}
