/*
 * XREFs of ?HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18003B30C
 * Callers:
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18003B2C8 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostProcessDepCleanup@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x18003B3C4 (-HampHostProcessDepCleanup@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z.c)
 *     ?HampHostDynamicDepCleanup@@YAXPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x18003B460 (-HampHostDynamicDepCleanup@@YAXPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z.c)
 */

void __fastcall HampHostDepCleanup(struct _HAM_HOST_DEPENDENCY *a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rbx

  v1 = (_QWORD *)((char *)a1 + 16);
  v3 = *((_QWORD *)a1 + 2);
  if ( v3 )
  {
    if ( *(_QWORD **)(v3 + 8) != v1 || (v4 = (_QWORD *)v1[1], (_QWORD *)*v4 != v1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v1 = 0LL;
    v1[1] = 0LL;
  }
  if ( *((_BYTE *)a1 + 40) )
  {
    if ( *((_BYTE *)a1 + 40) == 1 )
    {
      HampHostDynamicDepCleanup(a1);
    }
    else if ( (unsigned int)*((unsigned __int8 *)a1 + 40) - 3 <= 1 )
    {
      v5 = *((_QWORD *)a1 + 6);
      RmpAcquireGlobalLock();
      v6 = (*(_QWORD *)(v5 + 576))-- == 1LL;
      if ( v6 )
        RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v5 - 64));
      RmpReleaseGlobalLock();
      v7 = *((_QWORD *)a1 + 7);
      RmpAcquireGlobalLock();
      v6 = (*(_QWORD *)(v7 + 576))-- == 1LL;
      if ( v6 )
        RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v7 - 64));
      RmpReleaseGlobalLock();
    }
  }
  else
  {
    HampHostProcessDepCleanup(a1);
  }
}
