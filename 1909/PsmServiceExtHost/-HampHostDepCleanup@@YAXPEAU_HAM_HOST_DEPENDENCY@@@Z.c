/*
 * XREFs of ?HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000B068
 * Callers:
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000B024 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 * Callees:
 *     ?HampHostDynamicDepCleanup@@YAXPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x180007BF0 (-HampHostDynamicDepCleanup@@YAXPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z.c)
 *     ?HampHostProcessDepCleanup@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x180007C50 (-HampHostProcessDepCleanup@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z.c)
 *     CempListEntryIsNull @ 0x18000C754 (CempListEntryIsNull.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostDepCleanup(struct _HAM_HOST_DEPENDENCY *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rbx

  if ( !(unsigned int)CempListEntryIsNull((char *)a1 + 16) )
  {
    v3 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
    v2[1] = 0LL;
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
      v6 = (*(_QWORD *)(v5 + 592))-- == 1LL;
      if ( v6 )
        RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v5 - 64));
      RmpReleaseGlobalLock();
      v7 = *((_QWORD *)a1 + 7);
      RmpAcquireGlobalLock();
      v6 = (*(_QWORD *)(v7 + 592))-- == 1LL;
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
