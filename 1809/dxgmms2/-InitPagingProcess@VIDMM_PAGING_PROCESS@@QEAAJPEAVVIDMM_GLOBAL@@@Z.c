/*
 * XREFs of ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C008D070
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C008C9C4 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C006AB5C (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C006D4E0 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C006E300 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00B475C (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_PAGING_PROCESS::InitPagingProcess(VIDMM_PAGING_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  VIDMM_PROCESS *v2; // rax
  VIDMM_DEVICE *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx

  v2 = g_pVidMmSystemProcess;
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = v2;
  v5 = (VIDMM_DEVICE *)operator new[](0x130uLL, 0x38306956u, PagedPool);
  if ( v5 )
    v5 = VIDMM_DEVICE::VIDMM_DEVICE(v5, a2, 0LL);
  *((_QWORD *)this + 1) = v5;
  if ( v5 )
  {
    LOBYTE(v6) = 1;
    if ( (int)VIDMM_DEVICE::Init(v5, v6, 0LL) < 0 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v14 + 24) = 7346LL;
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 40872LL) & 2) != 0 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 48LL)
                        + 8LL * *(unsigned int *)(*((_QWORD *)a2 + 3) + 208LL));
        if ( v15 )
          v15 = *(_QWORD *)(v15 + 16);
        v16 = 0LL;
        for ( *((_QWORD *)this + 3) = v15; (unsigned int)v16 < *((_DWORD *)a2 + 1748); v16 = (unsigned int)(v16 + 1) )
        {
          v17 = *((_QWORD *)this + v16 + 4);
          if ( v17 )
            *(_QWORD *)(v17 + 96) = *((_QWORD *)this + 1);
        }
      }
      if ( (*((_BYTE *)a2 + 40872) & 0x20) != 0 )
        return 0LL;
      if ( (int)VIDMM_PROCESS::OpenAdapter((struct _KTHREAD **)g_pVidMmSystemProcess, a2) >= 0 )
      {
        *((_BYTE *)a2 + 40872) |= 0x20u;
        return 0LL;
      }
      v14 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v14 + 24) = 7367LL;
    }
    WdLogEvent5_WdAssertion(v14);
  }
  else
  {
    _InterlockedIncrement(&dword_1C004D620);
    v13 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v13 + 24) = 7339LL;
    WdLogEvent5_WdLowResource(v13);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess(this);
  return 3221225473LL;
}
