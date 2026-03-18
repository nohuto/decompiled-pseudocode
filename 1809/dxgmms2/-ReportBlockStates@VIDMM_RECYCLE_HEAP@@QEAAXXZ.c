/*
 * XREFs of ?ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ @ 0x1C00B8268
 * Callers:
 *     ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C00B8314 (-ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pxqqt @ 0x1C00281E8 (McTemplateK0pxqqt.c)
 *     ?ReportStates@VIDMM_RECYCLE_BLOCK@@QEAAXXZ @ 0x1C00B8428 (-ReportStates@VIDMM_RECYCLE_BLOCK@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::ReportBlockStates(VIDMM_RECYCLE_HEAP *this)
{
  char *v1; // rsi
  char *i; // rbx
  __int64 v4; // rcx
  __int64 v5; // r9
  const GUID *v6; // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  v1 = (char *)this + 32;
  for ( i = (char *)*((_QWORD *)this + 4); i != v1; i = *(char **)i )
  {
    if ( bTracingEnabled )
    {
      v4 = *(unsigned int *)this;
      if ( (unsigned int)(v4 - 3) > 3 )
        v5 = *((_QWORD *)i + 3);
      else
        v5 = *((_QWORD *)i + 5);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      {
        LODWORD(v9) = 1;
        LODWORD(v8) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL);
        LODWORD(v7) = *(_DWORD *)this;
        v6 = (const GUID *)(*((_QWORD *)i + 4) - *((_QWORD *)i + 3));
        McTemplateK0pxqqt(v4, &EventCreateProcessAllocation, v6, v5, v6, v7, v8, v9);
      }
    }
    VIDMM_RECYCLE_BLOCK::ReportStates((VIDMM_RECYCLE_BLOCK *)(i - 16));
  }
}
