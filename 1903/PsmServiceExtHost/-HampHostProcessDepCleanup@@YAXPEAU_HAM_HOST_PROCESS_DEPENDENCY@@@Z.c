/*
 * XREFs of ?HampHostProcessDepCleanup@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x180007C50
 * Callers:
 *     ?HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000B068 (-HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostProcessDepCleanup(struct _HAM_HOST_PROCESS_DEPENDENCY *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rdi
  bool v5; // zf
  __int64 v6; // rbx

  if ( *((_QWORD *)a1 + 10) )
    TpReleaseWait();
  if ( *((_QWORD *)a1 + 11) )
    TpReleaseWait();
  v2 = (void *)*((_QWORD *)a1 + 8);
  if ( v2 )
    NtClose(v2);
  v3 = (void *)*((_QWORD *)a1 + 9);
  if ( v3 )
    NtClose(v3);
  v4 = *((_QWORD *)a1 + 6);
  if ( v4 )
  {
    RmpAcquireGlobalLock();
    v5 = (*(_QWORD *)(v4 + 592))-- == 1LL;
    if ( v5 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v4 - 64));
    RmpReleaseGlobalLock();
  }
  v6 = *((_QWORD *)a1 + 7);
  if ( v6 )
  {
    RmpAcquireGlobalLock();
    v5 = (*(_QWORD *)(v6 + 592))-- == 1LL;
    if ( v5 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v6 - 64));
    RmpReleaseGlobalLock();
  }
}
