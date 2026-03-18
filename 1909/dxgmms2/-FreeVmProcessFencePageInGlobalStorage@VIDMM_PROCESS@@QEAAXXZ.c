/*
 * XREFs of ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x1C00B6A58
 * Callers:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C006B43C (--1VIDMM_PROCESS@@QEAA@XZ.c)
 * Callees:
 *     ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x1C00807A0 (-FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PROCESS::FreeVmProcessFencePageInGlobalStorage(VIDMM_PROCESS *this, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *i; // rbx

  if ( (*(_BYTE *)(*((_QWORD *)this + 4) + 299LL) & 8) == 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 1384LL;
    WdLogEvent5_WdAssertion(v3);
  }
  for ( i = (_QWORD *)((char *)this + 48);
        (_QWORD *)*i != i;
        VIDMM_FENCE_STORAGE_PAGE::FreeVmMapping((VIDMM_FENCE_STORAGE_PAGE *)(*i - 16LL)) )
  {
    ;
  }
}
