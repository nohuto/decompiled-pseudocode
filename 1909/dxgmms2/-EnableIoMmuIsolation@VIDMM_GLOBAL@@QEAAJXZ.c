/*
 * XREFs of ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00AB3A0
 * Callers:
 *     ?VidMmEnableIoMmuIsolation@@YAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0024400 (-VidMmEnableIoMmuIsolation@@YAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B600 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C00015EC (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D000 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C006301C (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?FlushAllTemporaryAllocation@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00ABC54 (-FlushAllTemporaryAllocation@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?MapAllocationsToIoMmu@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00BFFA0 (-MapAllocationsToIoMmu@VIDMM_SEGMENT@@QEAAJXZ.c)
 */

int __fastcall VIDMM_GLOBAL::EnableIoMmuIsolation(VIDMM_GLOBAL **this)
{
  __int64 i; // rsi
  __int64 v4; // r9
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int j; // edi
  VIDMM_GLOBAL *k; // rsi
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-78h] BYREF
  char v21; // [rsp+38h] [rbp-70h]
  _DWORD v22[24]; // [rsp+40h] [rbp-68h] BYREF

  if ( KeGetCurrentThread() != *((struct _KTHREAD **)*this + 1) )
  {
    memset(&v22[1], 0, 0x54uLL);
    v22[0] = 130;
    return VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait((VIDMM_GLOBAL *)this, (struct _VIDMM_SYSTEM_COMMAND *)v22);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 926); i = (unsigned int)(i + 1) )
  {
    v4 = *((_QWORD *)this[464] + i);
    v5 = *(_DWORD *)(v4 + 80);
    if ( (v5 & 0x1001) != 0 )
    {
      v6 = VIDMM_SEGMENT::MapAllocationsToIoMmu(*((VIDMM_SEGMENT **)this[464] + i));
    }
    else
    {
      if ( (v5 & 0x40) == 0 )
        continue;
      v6 = DpiMapIommuContiguous(
             *((_QWORD *)this[3] + 24),
             *(_QWORD *)(v4 + 32) / 4096LL,
             *(_QWORD *)(v4 + 64),
             5LL,
             *((_QWORD *)this[464] + i));
    }
    v9 = v6;
    if ( v6 < 0 )
    {
      v12 = WdLogNewEntry5_WdWarning(v8, v7);
      *(_QWORD *)(v12 + 24) = v9;
      WdLogEvent5_WdWarning(v12);
      return v9;
    }
  }
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)this, 0xFFFFFFFF);
  for ( j = 0; j < *((_DWORD *)this + 1748); ++j )
    VIDMM_GLOBAL::FlushAllTemporaryAllocation((VIDMM_GLOBAL *)this, j);
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v20,
    (struct DXGPUSHLOCKFAST *)(this + 477));
  for ( k = this[475]; ; k = *(VIDMM_GLOBAL **)k )
  {
    if ( k == (VIDMM_GLOBAL *)(this + 475) )
    {
      v16 = v21 == 0;
      *((_BYTE *)this + 40140) = 1;
      if ( !v16 )
      {
        v17 = v20;
        *(_QWORD *)(v20 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v17, 0LL);
        KeLeaveCriticalRegion();
      }
      *((_BYTE *)this + 40139) = 1;
      return 0;
    }
    v13 = DpiMapIommuIdentityRange(*((_QWORD *)this[3] + 24), *((_QWORD *)k + 5), 0LL, 3LL, (char *)k - 16);
    v9 = v13;
    if ( v13 < 0 )
      break;
  }
  v18 = WdLogNewEntry5_WdWarning(v15, v14);
  *(_QWORD *)(v18 + 24) = v9;
  WdLogEvent5_WdWarning(v18);
  if ( v21 )
  {
    v19 = v20;
    *(_QWORD *)(v20 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v19, 0LL);
    KeLeaveCriticalRegion();
  }
  return v9;
}
