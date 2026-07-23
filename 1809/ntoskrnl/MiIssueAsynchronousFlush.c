/*
 * XREFs of MiIssueAsynchronousFlush @ 0x1402B4CC8
 * Callers:
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     IoAsynchronousPageWrite @ 0x1401350E4 (IoAsynchronousPageWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushComplete @ 0x1402B4B40 (MiFlushComplete.c)
 */

unsigned __int64 __fastcall MiIssueAsynchronousFlush(
        struct _FILE_OBJECT *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        LARGE_INTEGER a5,
        char a6,
        int a7,
        __int64 a8)
{
  unsigned __int64 v10; // rbx
  struct _MDL *v11; // r15
  NTSTATUS v12; // r12d
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  int v16; // ebp
  unsigned __int8 v17; // si
  struct _KPRCB *v18; // rcx
  struct _KPRCB *v19; // rcx

  *(_BYTE *)(a2 + 50) = 6;
  *(_WORD *)(a2 + 48) = 0;
  *(_DWORD *)(a2 + 52) = 0;
  v10 = a2;
  *(_QWORD *)(a2 + 64) = a2 + 56;
  *(_QWORD *)(a2 + 56) = a2 + 56;
  v11 = *(struct _MDL **)(a2 + 72);
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = (char *)v11 + 8 * ((unsigned __int64)v11->ByteCount >> 12) + 48;
  if ( a4 )
    _InterlockedAdd((volatile signed __int32 *)(a4 + 16), 1u);
  v12 = IoAsynchronousPageWrite(
          a1,
          v11,
          &a5,
          (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiFlushComplete,
          (void *)a2,
          a7,
          0,
          a6,
          a8,
          (struct _IO_STATUS_BLOCK *)a2,
          (IRP **)(a2 + 24));
  if ( (v12 & 0xC0000000) == 0xC0000000 )
  {
    *(_DWORD *)v10 = v12;
    *(_QWORD *)(v10 + 8) = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiFlushComplete(v10, v10);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    if ( a4 )
      *(_DWORD *)(a4 + 20) = v12;
    v11->ByteCount = 0;
  }
  else
  {
    v16 = 0;
    v17 = KeGetCurrentIrql();
    __writecr8(1uLL);
    do
    {
LABEL_14:
      v10 += 264LL;
      if ( v10 >= a3 + 2112 )
        v10 = a3;
      if ( !*(_QWORD *)(v10 + 16) || *(_DWORD *)(v10 + 52) == 1 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
        {
          v19 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v19);
        }
        __writecr8(v17);
        return v10;
      }
      ++v16;
    }
    while ( v16 != 8 );
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
    {
      v18 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v18);
    }
    __writecr8(v17);
    KeWaitForMultipleObjects(8u, (PVOID *)(a3 + 2112), WaitAny, WrPageOut, 0, 0, 0LL, (PKWAIT_BLOCK)(a3 + 2176));
    v10 = a3;
    while ( *(int *)v10 >= 0 )
    {
      v10 += 264LL;
      if ( !--v16 )
      {
        v17 = KeGetCurrentIrql();
        __writecr8(1uLL);
        goto LABEL_14;
      }
    }
    *(_DWORD *)(*(_QWORD *)(v10 + 72) + 40LL) = 0;
  }
  return 0LL;
}
