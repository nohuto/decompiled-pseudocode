/*
 * XREFs of ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180061F58
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180041E70 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180044904 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x18006A7B8 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x18006D4BC (-RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?HampManagerCleanup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800766B0 (-HampManagerCleanup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall RmpCleanupAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 v2; // rcx
  void *v3; // r8
  void *v4; // r8
  _QWORD *i; // rsi
  void *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  void *v14; // r8
  __int64 v15; // rcx

  v2 = *((_QWORD *)a1 + 328);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)a1 + 328) = 0LL;
  }
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16));
  if ( *((_QWORD *)a1 + 308) )
    TpReleasePool();
  v3 = (void *)*((_QWORD *)a1 + 305);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  v4 = (void *)*((_QWORD *)a1 + 307);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  RmpAcquireGlobalLock();
  for ( i = (_QWORD *)((char *)a1 + 688);
        (_QWORD *)*i != i;
        RmpCpuSetManagerReleaseClientContext((struct _RM_CPU_SET_CLIENT_CONTEXT *)(*i - 8LL)) )
  {
    ;
  }
  RmpCpuSetManagerApplyAllPolicyChanges((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 680));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 704));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 728));
  v6 = (void *)*((_QWORD *)a1 + 95);
  if ( v6 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  RmpReleaseGlobalLock();
  v7 = *((_QWORD *)a1 + 5);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)a1 + 6);
  if ( v8 )
    TpReleaseTimer(v8);
  v9 = *((_QWORD *)a1 + 16);
  if ( v9 )
    TpReleaseTimer(v9);
  v10 = *((_QWORD *)a1 + 20);
  if ( v10 )
    TpReleaseTimer(v10);
  v11 = *((_QWORD *)a1 + 24);
  if ( v11 )
    TpReleaseTimer(v11);
  v12 = *((_QWORD *)a1 + 190);
  if ( v12 )
    TpReleaseWork(v12);
  v13 = (void *)*((_QWORD *)a1 + 45);
  if ( v13 )
    NtClose(v13);
  v14 = (void *)*((_QWORD *)a1 + 47);
  if ( v14 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
  HampManagerCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 1608));
  v15 = *((_QWORD *)a1 + 70);
  if ( v15 )
    TpReleaseTimer(v15);
  *((_DWORD *)a1 + 168) &= ~1u;
}
