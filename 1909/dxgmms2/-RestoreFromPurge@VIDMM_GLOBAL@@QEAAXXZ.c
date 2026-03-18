/*
 * XREFs of ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AEFF4
 * Callers:
 *     VidMmRestoreFromPurge @ 0x1C0024C30 (VidMmRestoreFromPurge.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00824E8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     VidSchCreateSchedulingLogs @ 0x1C0091730 (VidSchCreateSchedulingLogs.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C009179C (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AD510 (-MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::RestoreFromPurge(VIDMM_GLOBAL *this, __int64 a2)
{
  bool v2; // zf
  __int64 v4; // rax
  unsigned int i; // edi
  __int64 v6; // rsi
  int inited; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  _QWORD *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _DWORD v19[24]; // [rsp+20h] [rbp-68h] BYREF

  v2 = *((_DWORD *)this + 10032) == 0;
  *((_BYTE *)this + 7072) = 0;
  if ( !v2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 9148LL;
LABEL_13:
    WdLogEvent5_WdAssertion(v4);
    return;
  }
  VIDMM_GLOBAL::MapAllPagingBuffers(this);
  for ( i = 0; i < *((_DWORD *)this + 1748); ++i )
  {
    v6 = *((_QWORD *)this + 5023) + 1560LL * i;
    if ( (*(_BYTE *)(v6 + 436) & 0x20) != 0 )
    {
      inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, i, 0LL);
      v10 = inited;
      if ( inited < 0 )
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
        v11[3] = 270LL;
        v11[4] = 23LL;
        v11[5] = this;
        v11[6] = i;
        v11[7] = v10;
        WdLogEvent5_WdCriticalError(v11);
      }
      *(_BYTE *)(v6 + 436) &= ~0x20u;
    }
  }
  memset(&v19[2], 0, 0x50uLL);
  v19[1] = -1;
  v19[0] = 101;
  v12 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v19, 1);
  v15 = v12;
  if ( v12 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13);
    v16[3] = 270LL;
    v16[4] = 23LL;
    v16[5] = v15;
    v16[6] = 0LL;
    v16[7] = 0LL;
    WdLogEvent5_WdCriticalError(v16);
  }
  if ( (int)VidSchCreateSchedulingLogs(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL)) < 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v4 + 24) = 9200LL;
    goto LABEL_13;
  }
}
