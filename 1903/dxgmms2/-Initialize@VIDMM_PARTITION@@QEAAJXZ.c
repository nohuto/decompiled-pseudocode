/*
 * XREFs of ?Initialize@VIDMM_PARTITION@@QEAAJXZ @ 0x1C0017F64
 * Callers:
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0001FBC (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0001BA8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 */

__int64 __fastcall VIDMM_PARTITION::Initialize(VIDMM_PARTITION *this)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  bool v5; // cf
  SIZE_T v6; // rax
  char *v7; // rax
  void *v8; // rbx
  __int64 v10; // rax

  v2 = ((__int64 (*)(void))DxgCoreInterface[3])();
  v3 = ((unsigned int (__fastcall *)(__int64))DxgCoreInterface[5])(v2);
  v4 = 368 * v3;
  if ( !is_mul_ok(v3, 0x170uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (char *)operator new[](v6, 0x63356956u, PagedPool);
  if ( v7 )
  {
    v8 = v7 + 8;
    *(_QWORD *)v7 = v3;
    `vector constructor iterator'(
      v7 + 8,
      368LL,
      (unsigned int)v3,
      (void (__fastcall *)(char *))VIDMM_PARTITION_ADAPTER_INFO::VIDMM_PARTITION_ADAPTER_INFO);
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 5) = v8;
  if ( v8 )
  {
    memset(v8, 0, 368 * v3);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1C004E6D4);
    v10 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v10 + 24) = 418LL;
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
}
