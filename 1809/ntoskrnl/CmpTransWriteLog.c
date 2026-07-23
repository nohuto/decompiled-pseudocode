/*
 * XREFs of CmpTransWriteLog @ 0x1406F9138
 * Callers:
 *     CmAddLogForAction @ 0x1406BE17C (CmAddLogForAction.c)
 *     CmLogTmRmAction @ 0x1406F9068 (CmLogTmRmAction.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpComputeLogFillLevel @ 0x1406F9220 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x1406F9360 (CmpDoTransWriteLogRecord.c)
 *     CmpLogCheckpoint @ 0x140703018 (CmpLogCheckpoint.c)
 *     CmpAddRemoveRMLogContainer @ 0x1407F9E38 (CmpAddRemoveRMLogContainer.c)
 */

__int64 __fastcall CmpTransWriteLog(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, PCLFS_LSN plsnFinish)
{
  struct _KTHREAD *CurrentThread; // rax
  CLFS_LSN *v9; // r15
  int v10; // edi
  int v11; // ebp
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r14d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h]

  v20 = a2;
  CurrentThread = KeGetCurrentThread();
  LODWORD(v19) = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
  v9 = plsnFinish;
  v10 = 0;
  v11 = v19;
  v12 = 0;
  while ( 1 )
  {
    v15 = CmpDoTransWriteLogRecord(a1, v20, a3, a4, v9);
    if ( v15 >= 0 )
      break;
    if ( v10 )
    {
      if ( v12 != 1 )
        goto LABEL_6;
LABEL_11:
      v10 = v11 + 1;
      v11 = v10;
      LODWORD(v19) = v10;
      if ( (int)CmpAddRemoveRMLogContainer(a1) < 0 )
        goto LABEL_6;
      LOBYTE(v18) = 1;
      CmpLogCheckpoint(a1, v17, v18);
      v12 = v10;
    }
    else
    {
      v10 = v11 + 1;
      LOBYTE(v14) = 1;
      LODWORD(v19) = v10;
      ++v11;
      v12 = v10;
      if ( (int)CmpLogCheckpoint(a1, v13, v14) < 0 )
        goto LABEL_11;
    }
  }
  if ( (int)CmpComputeLogFillLevel(
              *(PLOG_FILE_OBJECT *)(a1 + 88),
              (PCLFS_LSN)(a1 + 120),
              v9,
              *(_DWORD *)(a1 + 72),
              *(_DWORD *)(a1 + 68),
              (__int64)&v19) >= 0
    && (unsigned int)v19 >= 0x50 )
  {
    CmpAddRemoveRMLogContainer(a1);
  }
LABEL_6:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v15;
}
