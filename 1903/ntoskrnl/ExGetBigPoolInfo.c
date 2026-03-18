/*
 * XREFs of ExGetBigPoolInfo @ 0x140339300
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     EtwpPoolRunDown @ 0x1408FBDFC (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140908CDC (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x140003214 (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x14000331C (ExGetHeapFromVA.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     ExAllocateHeapPages @ 0x140116424 (ExAllocateHeapPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 */

__int64 __fastcall ExGetBigPoolInfo(_DWORD *a1, unsigned int a2, int a3, unsigned int *a4)
{
  int v4; // esi
  _WORD *HeapPages; // rdi
  unsigned __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rcx
  KIRQL v11; // al
  KIRQL v12; // r14
  const void *v13; // rdx
  unsigned __int64 v14; // rsi
  size_t v15; // rsi
  struct _KPRCB *v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // r8
  __int128 *v19; // rax
  struct _KPRCB *v21; // rcx
  __int128 *v22; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int128 *HeapFromVA; // rax
  unsigned int v25; // [rsp+30h] [rbp-68h]
  unsigned int v26; // [rsp+34h] [rbp-64h]
  _WORD *v27; // [rsp+38h] [rbp-60h]
  _DWORD *v28; // [rsp+40h] [rbp-58h]
  _DWORD *v29; // [rsp+60h] [rbp-38h]

  v4 = a3;
  HeapPages = 0LL;
  v26 = 0;
  v8 = 0LL;
  v9 = 16;
  v10 = 2LL;
  if ( a3 == 1 )
    v9 = 8;
  v25 = v9;
  if ( a3 != 1 )
    v10 = 4LL;
  v29 = &a1[v10];
  if ( a3 != 1 )
    a1 += 3;
  if ( a2 )
    *a1 = 0;
  v11 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
  while ( 1 )
  {
    v12 = v11;
    if ( v4 == 1 )
    {
      v13 = (const void *)PoolBigPageTable;
      v14 = PoolBigPageTableSize;
    }
    else
    {
      v13 = *(const void **)(qword_1404659D8 + 1272);
      v14 = *(_QWORD *)(qword_1404659D8 + 1280);
    }
    if ( !v13 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v12);
      if ( HeapPages )
      {
        HeapFromVA = (__int128 *)ExGetHeapFromVA((ULONG_PTR)HeapPages);
        RtlpHpFreeHeap(HeapFromVA, (__int64)HeapPages, 0);
      }
      *a4 = 0;
      return 0LL;
    }
    if ( HeapPages && v8 >= v14 )
      break;
    v8 = v14;
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      v21 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v21);
    }
    __writecr8(v12);
    if ( HeapPages )
    {
      v22 = (__int128 *)ExGetHeapFromVA((ULONG_PTR)HeapPages);
      RtlpHpFreeHeap(v22, (__int64)HeapPages, 0);
    }
    HeapPages = ExAllocateHeapPages();
    if ( !HeapPages )
      return 3221225626LL;
    v11 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
    v4 = a3;
  }
  v15 = 12 * v14;
  memmove(HeapPages, v13, v15 * 2);
  ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
  {
    v16 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v16);
  }
  __writecr8(v12);
  v27 = HeapPages;
  v28 = v29;
  while ( 1 )
  {
    v17 = v25;
    if ( v27 >= &HeapPages[v15] )
      break;
    v18 = *(_QWORD *)v27;
    if ( (*(_QWORD *)v27 & 1) == 0 )
    {
      if ( a2 )
        ++*a1;
      v25 += 24;
      if ( v17 >= 0xFFFFFFE8 )
      {
        v26 = -1073741675;
        break;
      }
      if ( v25 <= a2 )
      {
        if ( a2 )
        {
          *(_QWORD *)v28 = v18;
          if ( a3 == 1 && (*((_DWORD *)v27 + 3) & 0x100) == 0 )
            *(_QWORD *)v28 = v18 | 1;
          v28[4] = *((_DWORD *)v27 + 2);
          *((_QWORD *)v28 + 1) = *((_QWORD *)v27 + 2);
          v28 += 6;
        }
      }
      else
      {
        v26 = -1073741820;
      }
    }
    v27 += 12;
  }
  v19 = (__int128 *)ExGetHeapFromVA((ULONG_PTR)HeapPages);
  RtlpHpFreeHeap(v19, (__int64)HeapPages, 0);
  *a4 = v25;
  return v26;
}
