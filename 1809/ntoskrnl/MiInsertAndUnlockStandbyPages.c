/*
 * XREFs of MiInsertAndUnlockStandbyPages @ 0x140036060
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14003D440 (MiDecrementAndInsertStandbyPages.c)
 * Callees:
 *     MiInsertProtectedStandbyPage @ 0x140028F30 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiInsertAndUnlockStandbyPages(__int64 a1, __int64 *a2, __int64 a3, unsigned __int8 a4)
{
  __int64 result; // rax
  unsigned int v5; // ebp
  unsigned int v6; // r13d
  unsigned __int8 v7; // bl
  ULONG_PTR *v8; // r14
  __int64 v10; // r15
  int v11; // r12d
  unsigned int v12; // esi
  ULONG_PTR v13; // rdi
  char v14; // cl
  unsigned __int64 v15; // r8
  char v16; // al
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 *v20; // rbx
  __int64 v21; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v23; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-48h]

  result = 0LL;
  v5 = a3;
  v6 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v7 = a4;
  v25 = 0LL;
  v8 = (ULONG_PTR *)a2;
  v10 = 0LL;
  if ( !a1 )
  {
    v11 = 0xFFFFFF;
    v12 = 0;
    if ( !(_DWORD)a3 )
      goto LABEL_19;
    do
    {
      v13 = *v8;
      if ( (*(_QWORD *)(*v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
        || (v14 = *(_BYTE *)(v13 + 34), (v14 & 7) == 6)
        || (v14 & 0x10) != 0 )
      {
        KeBugCheckEx(
          0x4Eu,
          6uLL,
          (__int64)(*v8 + 0x58000000000LL) / 48,
          *(_QWORD *)(*v8 + 24) & 0x3FFFFFFFFFFFFFFFLL,
          *(unsigned int *)(v13 + 32));
      }
      v15 = *(_QWORD *)(v13 + 40);
      if ( (v15 & 0x10000000000000LL) != 0 || (v16 = *(_BYTE *)(v13 + 35), (v16 & 0x40) != 0) )
      {
        if ( v11 != 0xFFFFFF )
        {
          KxReleaseQueuedSpinLock(&v23);
          v11 = 0xFFFFFF;
        }
      }
      else
      {
        if ( (v16 & 8) != 0 )
          v17 = 5;
        else
          v17 = v16 & 7;
        if ( !v10 )
          v10 = *(_QWORD *)(qword_14043B808 + 8LL * ((HIDWORD(v15) >> 8) & 0x3FF));
        if ( v17 != v11 || v10 != *(_QWORD *)(qword_14043B808 + 8 * ((v15 >> 40) & 0x3FF)) )
        {
          if ( v11 != 0xFFFFFF )
          {
            KxReleaseQueuedSpinLock(&v23);
            v15 = *(_QWORD *)(v13 + 40);
          }
          v11 = v17;
          v10 = *(_QWORD *)(qword_14043B808 + 8 * ((v15 >> 40) & 0x3FF));
          v23 = 0LL;
          v24 = v10 + 40 * (v17 + 60LL);
          KxAcquireQueuedSpinLock(&v23);
        }
      }
      MiInsertPageInList(v13);
      ++v12;
      result = 0xFFFFFA8000000000uLL;
      ++v8;
    }
    while ( v12 < v5 );
    if ( v11 != 0xFFFFFF )
      result = KxReleaseQueuedSpinLock(&v23);
    v8 = (ULONG_PTR *)a2;
    goto LABEL_18;
  }
  if ( (_DWORD)a3 )
  {
    v20 = a2;
    v21 = (unsigned int)a3;
    do
    {
      result = MiInsertProtectedStandbyPage(a1, *v20++, a3);
      --v21;
    }
    while ( v21 );
LABEL_18:
    v7 = a4;
  }
LABEL_19:
  v18 = v5 - 1;
  if ( v7 == 17 )
    v18 = v5;
  if ( v18 )
  {
    result = (__int64)v8;
    v19 = v18;
    v6 = v18;
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)result + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      result += 8LL;
      --v19;
    }
    while ( v19 );
  }
  if ( v7 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8[v6] + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v7;
    __writecr8(v7);
  }
  return result;
}
