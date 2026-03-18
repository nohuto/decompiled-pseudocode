/*
 * XREFs of ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C00ABE78
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0077D20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C0025AA4 (McTemplateK0p.c)
 */

void __fastcall VIDMM_GLOBAL::EvictFromFaultedList(VIDMM_GLOBAL *this, struct VIDMM_DEVICE *a2, const GUID *a3)
{
  char *v3; // rdi
  __int64 i; // rbx
  __int64 v5; // rsi
  int v6; // [rsp+20h] [rbp-28h]

  v3 = (char *)a2 + 128;
  for ( i = *((_QWORD *)a2 + 17); (char *)i != v3; i = *(_QWORD *)(i + 8) )
  {
    v5 = **(_QWORD **)(i - 56);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = i - 56;
    if ( *(_DWORD *)(v5 + 128) == 1 )
    {
      LOBYTE(a3) = 1;
      LOBYTE(v6) = 0;
      (*(void (__fastcall **)(_QWORD, __int64, const GUID *, _QWORD, int, _QWORD))(**(_QWORD **)(v5 + 136) + 48LL))(
        *(_QWORD *)(v5 + 136),
        v5,
        a3,
        0LL,
        v6,
        0LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0p((__int64)this, &EventEvictAllocation, a3, v5);
      }
    }
  }
}
