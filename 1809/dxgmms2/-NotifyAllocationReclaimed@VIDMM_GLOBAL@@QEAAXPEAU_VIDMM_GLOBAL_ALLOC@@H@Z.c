/*
 * XREFs of ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00AAA68
 * Callers:
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C0075E3C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A8628 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationReclaimed@@YAXPEAX@Z @ 0x1C00AAA40 (-NotifyAllocationReclaimed@@YAXPEAX@Z.c)
 *     ?ReclaimAllocationForVPRCallback@@YAEPEAX0@Z @ 0x1C00BE738 (-ReclaimAllocationForVPRCallback@@YAEPEAX0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyAllocationReclaimed(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned int a3)
{
  char *v6; // rdx
  __int64 v7; // rax
  char *v8; // rax
  char **v9; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD))(**((_QWORD **)a2 + 17) + 32LL))(
    *((_QWORD *)a2 + 17),
    a2,
    a3);
  v6 = (char *)a2 + 328;
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 32LL) = 0LL;
  v7 = *((_QWORD *)a2 + 17);
  *((_QWORD *)a2 + 19) = 0LL;
  *((_DWORD *)a2 + 32) = 0;
  if ( (*(_DWORD *)(v7 + 80) & 0x1001) != 0 )
    v8 = (char *)this + 3736;
  else
    v8 = (char *)this + 3752;
  v9 = (char **)*((_QWORD *)v8 + 1);
  if ( *v9 != v8 )
    __fastfail(3u);
  *(_QWORD *)v6 = v8;
  *((_QWORD *)a2 + 42) = v9;
  *v9 = v6;
  *((_QWORD *)v8 + 1) = v6;
}
