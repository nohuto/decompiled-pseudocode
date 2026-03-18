/*
 * XREFs of ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00AAFC0
 * Callers:
 *     VidMmPurgeAllSegments @ 0x1C0025390 (VidMmPurgeAllSegments.c)
 * Callees:
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C007EA1C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00B8088 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgeAllSegments(VIDMM_GLOBAL *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  _QWORD *v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD v12[12]; // [rsp+20h] [rbp-68h] BYREF

  v4 = (unsigned int)a2;
  if ( *((_DWORD *)a1 + 10032) )
  {
    memset(v12, 0, 0x58uLL);
    v12[0] = -4294967194LL;
    LODWORD(v12[5]) = v4;
    v12[6] = a3;
    v7 = VIDMM_GLOBAL::QueueSystemCommandAndWait(a1, (struct _VIDMM_SYSTEM_COMMAND *)v12, 1);
    v10 = v7;
    if ( v7 < 0 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
      v11[3] = 270LL;
      v11[4] = 23LL;
      v11[5] = v10;
      v11[6] = 0LL;
      v11[7] = 0LL;
      WdLogEvent5_WdCriticalError(v11);
    }
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(0);
  }
  else
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2);
    v6[3] = a1;
    v6[4] = v4;
    v6[5] = a3;
    WdLogEvent5_WdWarning(v6);
  }
}
