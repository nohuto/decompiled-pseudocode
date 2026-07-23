/*
 * XREFs of ExpRemoveTagForBigPages @ 0x14013E560
 * Callers:
 *     ExpSizeHeapPool @ 0x1401B7B34 (ExpSizeHeapPool.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpRemoveTagForBigPages(
        ULONG_PTR BugCheckParameter2,
        int a2,
        int a3,
        _DWORD *a4,
        int *a5,
        _QWORD *a6,
        _WORD *a7,
        _BYTE *a8)
{
  ULONG_PTR v10; // rbx
  KIRQL v11; // r14
  __int64 v12; // r9
  volatile signed __int32 *v13; // r10
  unsigned __int64 v14; // r8
  int v15; // edi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  int v18; // r11d
  unsigned int v19; // r8d
  bool v20; // zf
  unsigned int v21; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v10 = a2;
  v11 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  if ( (v10 & 0x20) != 0 )
  {
    v12 = *(_QWORD *)(qword_14043B080 + 8248);
    v13 = (volatile signed __int32 *)(qword_14043B080 + 8120);
    v14 = *(_QWORD *)(qword_14043B080 + 8256);
  }
  else
  {
    v12 = PoolBigPageTable;
    v13 = &ExpPoolBigEntriesInUse;
    v14 = PoolBigPageTableSize;
  }
LABEL_4:
  v15 = 1;
  v16 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32) ^ (40543
                                                                                       * (unsigned int)(BugCheckParameter2 >> 12))) & (unsigned int)(v14 - 1);
  while ( *(_QWORD *)(v12 + 24 * v16) != BugCheckParameter2 )
  {
    v16 = (unsigned int)(v16 + 1);
    if ( (unsigned int)v16 >= v14 )
    {
      if ( !v15 )
      {
LABEL_13:
        if ( (v10 & 0x21) != 0
          || v12 != PoolBigPageTable
          || (unsigned int)MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) == -1
          || (v12 = *(_QWORD *)(qword_14043B080 + 8248),
              v13 = (volatile signed __int32 *)(qword_14043B080 + 8120),
              v14 = *(_QWORD *)(qword_14043B080 + 8256),
              !v12)
          || !v14 )
        {
          KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v10, 0LL);
        }
        goto LABEL_4;
      }
      v16 = 0LL;
      v15 = 0;
    }
  }
  v17 = v12 + 24 * v16;
  if ( !v17 )
    goto LABEL_13;
  v18 = *(_DWORD *)(v17 + 8);
  v19 = *(_DWORD *)(v17 + 12);
  *a4 = v18;
  v20 = v12 == PoolBigPageTable;
  *a5 = (v19 >> 8) & 0xFFF;
  *a6 = *(_QWORD *)(v17 + 16);
  if ( !v20 || v18 == 1819242320 )
  {
    LOWORD(v21) = 0;
    LOBYTE(v19) = 0;
  }
  else
  {
    v21 = v19 >> 20;
  }
  *a8 = v19;
  *a7 = v21;
  if ( a3 )
  {
    _InterlockedDecrement(v13);
    _InterlockedIncrement64((volatile signed __int64 *)v17);
  }
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v11;
  __writecr8(v11);
  return result;
}
