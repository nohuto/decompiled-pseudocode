/*
 * XREFs of CmpTransWriteLog @ 0x1406BB81C
 * Callers:
 *     CmLogTmRmAction @ 0x1406BB254 (CmLogTmRmAction.c)
 *     CmAddLogForAction @ 0x1406BB324 (CmAddLogForAction.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     CmpComputeLogFillLevel @ 0x1406BB8F8 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x1406BBA44 (CmpDoTransWriteLogRecord.c)
 *     CmpLogCheckpoint @ 0x1406BBEAC (CmpLogCheckpoint.c)
 *     CmpAddRemoveRMLogContainer @ 0x14083177C (CmpAddRemoveRMLogContainer.c)
 */

__int64 __fastcall CmpTransWriteLog(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, PCLFS_LSN plsnFinish)
{
  struct _KTHREAD *CurrentThread; // rax
  CLFS_LSN *v10; // rbp
  int v11; // edi
  __int64 v12; // rdx
  int v13; // esi
  __int64 v14; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  LODWORD(v18) = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
  v10 = plsnFinish;
  v11 = 0;
  while ( 1 )
  {
    v13 = CmpDoTransWriteLogRecord(a1, a2, a3, a4, v10);
    if ( v13 >= 0 )
      break;
    if ( v11 )
    {
      if ( v11 != 1 )
        goto LABEL_6;
LABEL_11:
      LODWORD(v18) = ++v11;
      if ( (int)CmpAddRemoveRMLogContainer(a1) < 0 )
        goto LABEL_6;
      LOBYTE(v17) = 1;
      CmpLogCheckpoint(a1, v16, v17);
    }
    else
    {
      v11 = 1;
      LODWORD(v18) = 1;
      LOBYTE(v14) = 1;
      if ( (int)CmpLogCheckpoint(a1, v12, v14) < 0 )
        goto LABEL_11;
    }
  }
  if ( (int)CmpComputeLogFillLevel(
              *(PLOG_FILE_OBJECT *)(a1 + 88),
              (PCLFS_LSN)(a1 + 120),
              v10,
              *(_DWORD *)(a1 + 72),
              *(_DWORD *)(a1 + 68),
              (__int64)&v18) >= 0
    && (unsigned int)v18 >= 0x50 )
  {
    CmpAddRemoveRMLogContainer(a1);
  }
LABEL_6:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v13;
}
