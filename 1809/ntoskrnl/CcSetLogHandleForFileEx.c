/*
 * XREFs of CcSetLogHandleForFileEx @ 0x14007EFE0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall CcSetLogHandleForFileEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  __int64 v5; // rax
  __int64 v9; // rbx
  __int64 Partition; // rdi
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 **v13; // rdx
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v31[3]; // [rsp+38h] [rbp-91h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-79h] BYREF
  _OWORD v33[10]; // [rsp+68h] [rbp-61h] BYREF

  v5 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(v5 + 8);
  if ( !*(_DWORD *)(v9 + 4) )
    KeBugCheckEx(0x34u, 0x316uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  Partition = CcGetPartition(*(_QWORD *)(v5 + 8));
  if ( (*(_DWORD *)(v9 + 152) & 0x2000000) != 0 )
    KeBugCheckEx(0x34u, 0x325uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v31[0] = 0LL;
  v31[1] = Partition + 128;
  KxAcquireQueuedSpinLock(v31);
  if ( *(_QWORD *)(v9 + 240) )
  {
    v20 = *(_QWORD *)(v9 + 120);
    v21 = *(_QWORD **)(v9 + 128);
    if ( *(_QWORD *)(v20 + 8) != v9 + 120 || *v21 != v9 + 120 )
      goto FatalListEntryError_4;
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
  }
  if ( !a2 )
  {
    *(_QWORD *)(v9 + 240) = 0LL;
    *(_DWORD *)(v9 + 152) &= ~0x1000000u;
    goto LABEL_13;
  }
  v11 = (__int64 *)(v9 + 120);
  if ( *(_DWORD *)(v9 + 112) )
    v12 = Partition + 96;
  else
    v12 = Partition + 32;
  v13 = *(__int64 ***)(v12 + 8);
  if ( *v13 != (__int64 *)v12 )
FatalListEntryError_4:
    __fastfail(3u);
  *v11 = v12;
  *(_QWORD *)(v9 + 128) = v13;
  *v13 = v11;
  *(_QWORD *)(v12 + 8) = v11;
  v14 = *(_QWORD *)(v9 + 504);
  if ( !*(_QWORD *)(v14 + 40) )
  {
    memset(v33, 0, 0x98uLL);
    *((_QWORD *)&v33[8] + 1) = -1LL;
    *(_QWORD *)&v33[1] = a4;
    *((_QWORD *)&v33[0] + 1) = a3;
    *(_QWORD *)&v33[0] = a2;
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      v14 = *(_QWORD *)(v9 + 504);
      *((_QWORD *)&v33[7] + 1) = Object;
    }
    v22 = v33[1];
    *(_OWORD *)(v14 + 40) = v33[0];
    v23 = v33[2];
    *(_OWORD *)(v14 + 56) = v22;
    v24 = v33[3];
    *(_OWORD *)(v14 + 72) = v23;
    v25 = v33[4];
    *(_OWORD *)(v14 + 88) = v24;
    v26 = v33[5];
    *(_OWORD *)(v14 + 104) = v25;
    v27 = v33[6];
    *(_OWORD *)(v14 + 120) = v26;
    v28 = v33[8];
    *(_OWORD *)(v14 + 136) = v27;
    v29 = *(_QWORD *)&v33[9];
    *(_OWORD *)(v14 + 152) = v33[7];
    *(_OWORD *)(v14 + 168) = v28;
    *(_QWORD *)(v14 + 184) = v29;
  }
  v15 = *(_DWORD *)(v9 + 152);
  v16 = *(_QWORD *)(v9 + 504) + 40LL;
  *(_QWORD *)(v9 + 240) = v16;
  if ( (v15 & 0x1000000) == 0 )
  {
    v17 = *(unsigned int *)(v9 + 112);
    if ( (_DWORD)v17 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 24), v17);
      v15 = *(_DWORD *)(v9 + 152);
    }
  }
  *(_DWORD *)(v9 + 152) = v15 | 0x1000000;
LABEL_13:
  KxReleaseQueuedSpinLock(v31);
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
