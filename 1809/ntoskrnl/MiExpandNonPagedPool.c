/*
 * XREFs of MiExpandNonPagedPool @ 0x1401627E8
 * Callers:
 *     MiFindContiguousMemoryInPool @ 0x1401626D4 (MiFindContiguousMemoryInPool.c)
 *     MiFindNonPagedPoolVa @ 0x1401635BC (MiFindNonPagedPoolVa.c)
 * Callees:
 *     MiReturnPoolCharges @ 0x140023984 (MiReturnPoolCharges.c)
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MmAllocatePoolMemory @ 0x140099080 (MmAllocatePoolMemory.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiObtainPoolCharges @ 0x140109864 (MiObtainPoolCharges.c)
 *     MiIncreaseNonPagedPoolUsage @ 0x140163F48 (MiIncreaseNonPagedPoolUsage.c)
 *     MiReadyNonPagedPoolExpansionForUse @ 0x1401641D8 (MiReadyNonPagedPoolExpansionForUse.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402A9508 (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiExpandNonPagedPool(int a1, unsigned __int64 a2, unsigned int a3, int a4, _DWORD *a5)
{
  __int64 v6; // rbx
  int v8; // r15d
  _SLIST_HEADER *v9; // rdi
  int v10; // r12d
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 Region; // rdx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r10
  int v17; // r13d
  ULONG_PTR v18; // rbx
  int v19; // eax
  unsigned int v20; // r12d
  ULONG_PTR v21; // rbx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR v25; // [rsp+30h] [rbp-61h] BYREF
  ULONG_PTR v26; // [rsp+38h] [rbp-59h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-51h]
  ULONG_PTR v28; // [rsp+48h] [rbp-49h] BYREF
  ULONG_PTR v29; // [rsp+50h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int64 v31[14]; // [rsp+70h] [rbp-21h] BYREF
  unsigned int v33; // [rsp+F8h] [rbp+67h]
  unsigned int v34; // [rsp+100h] [rbp+6Fh]

  v6 = a3;
  memset(v31, 0, 0x28uLL);
  v8 = 0;
  *a5 = 3;
  v34 = 1;
  v9 = &qword_14043B118[25 * v6];
  v10 = a1 & 0x200;
  if ( (a1 & 0x200) != 0 )
  {
    v11 = *(_QWORD *)(qword_14043DA10 + 1984 * v6 + 1808) >> 9;
    if ( qword_14043F5D0 >= 0x100000 )
    {
      if ( qword_14043F5D0 < 0x400000 )
        v11 = ((v11 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64)
            + ((unsigned __int64)(v11 - ((v11 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64)) >> 1);
      v12 = v11 >> 4;
    }
    else
    {
      v12 = *(_QWORD *)(qword_14043DA10 + 1984 * v6 + 1808) >> 14;
    }
    if ( qword_14043F5D0 > 0x20000 )
    {
      v13 = -1LL;
      if ( qword_14043F5D0 < 0x80000 )
        v13 = 2LL;
    }
    else
    {
      v13 = 0LL;
    }
    if ( (a2 & 0x1FF) == 0
      || (Region = v9[17].Region, Region < v13) && (Region < v12 || v9[18].Alignment >= (Region << 12) / 0xA) )
    {
      v34 = 0;
      v8 = 1;
    }
  }
  v15 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  if ( v15 < a2 )
    return -1LL;
  v25 = 0LL;
  v27 = v15 >> 9;
  v26 = v15 >> 9 << 21;
  v33 = v6 + 1;
  if ( (int)MmAllocatePoolMemory(&v25, &v26, (v6 + 1) | 0x2000, 4, a1) < 0 )
    return -1LL;
  v16 = v25;
  v17 = 4096;
  v18 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * (v15 - 1);
  if ( v8 == 1 && MmProtectFreedNonPagedPool == 1 )
  {
    v8 = 0;
    v34 = 1;
  }
  v19 = a4;
  v20 = v10 != 0 ? 0xFFFFFFC4 : 0;
  while ( 1 )
  {
    if ( v8 )
    {
      v17 |= 0x20000000u;
    }
    else
    {
      v17 &= ~0x20000000u;
      if ( v19 == 1 )
        goto LABEL_51;
      v26 = a2 << 12;
    }
    if ( a2 >= 0x80000 )
    {
      if ( !(unsigned int)MiObtainPoolCharges(a2, 0) )
        goto LABEL_50;
      v31[3] = a2;
      v31[0] = a2;
      MiReturnPoolCharges(v31, 0);
      v16 = v25;
    }
    if ( !(unsigned int)MiReadyNonPagedPoolExpansionForUse(v9, v16, v27, v34) )
    {
LABEL_50:
      v16 = v25;
LABEL_51:
      if ( v16 )
        MiReturnSystemVa(v16, (__int64)((v18 << 25) + 0x10000000) >> 16, 5);
      return -1LL;
    }
    v29 = (v25 - v9[20].Alignment) >> 21;
    v28 = v25;
    if ( (int)MmAllocatePoolMemory(&v28, &v26, v17 | v33, v20 + 64, a1) >= 0 )
      break;
    if ( !v8 )
      goto LABEL_50;
    v19 = a4;
    if ( a4 )
      goto LABEL_50;
    v16 = v25;
    v8 = 0;
    v34 = 1;
  }
  if ( a2 != v15 )
    ++v9[17].Region;
  if ( v8 )
    *a5 = 1;
  v21 = (v25 - v9[20].Alignment) >> 12;
  KeAcquireInStackQueuedSpinLock(&v9[19].Alignment, &LockHandle);
  if ( v15 != a2 )
  {
    RtlClearBitsEx((__int64)&v9[23], v21 + a2, v15 - a2);
    _bittestandreset64((signed __int64 *)v9[v34 + 21].Region, v29 - 1 + v27);
    if ( v21 < *(&v9[24].Alignment + v34) )
      *(&v9[24].Alignment + v34) = v21 + a2;
  }
  MiIncreaseNonPagedPoolUsage(v9, v34, v21, a2);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && *a5 == 1 )
    MiLogPerfMemoryRangeEvent(v25, 0LL, 11LL, (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL);
  return v21;
}
