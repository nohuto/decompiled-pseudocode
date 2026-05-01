/*
 * XREFs of ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002C878
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000FDD0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x18002C7DC (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 * Callees:
 *     ?HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x1800037C4 (-HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F34 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002BBCC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18002C308 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180049ACC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

_BOOL8 __fastcall HampHostShouldTerminate(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v2; // rdx
  struct _HAM_ACTIVITY *i; // rax
  __int64 v5; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v6, (union _RM_OPTIMIZATION_STATE *)&v7);
  v2 = *((_QWORD *)a1 + 79);
  if ( ((v2 >> 16) & 3) == 0 )
    return 0LL;
  switch ( (*((_QWORD *)a1 + 79) >> 16) & 3LL )
  {
    case 1LL:
      if ( v6 >= 0 || v7 < 0 || (v2 & 0x40000000000LL) != 0 )
        return 0LL;
      for ( i = HampHostGetFirstActivity(a1); i; i = HampHostGetNextActivity((struct _HAM_ACTIVITY *)v5) )
      {
        if ( !HampActIsIgnored(i) && HampActIsStartedOrReachedPendState(v5, 4u) && (*(_DWORD *)(v5 + 112) & 0x2000) != 0 )
          return 0LL;
      }
      break;
    case 2LL:
      return (v2 & 0x10000000000000LL) == 0;
    case 3LL:
      break;
    default:
      return 0LL;
  }
  return 1LL;
}
