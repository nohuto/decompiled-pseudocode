/*
 * XREFs of ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000DF90
 * Callers:
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x18000D9EC (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000DA90 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E090 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18000E0B0 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18000E0DC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18004936C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall HampHostShouldTerminate(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v2; // rdx
  struct _HAM_ACTIVITY *i; // rax
  __int64 v4; // rdx
  struct _HAM_ACTIVITY *v5; // rcx
  char v7; // [rsp+30h] [rbp+8h] BYREF
  char v8; // [rsp+38h] [rbp+10h] BYREF

  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v7, (union _RM_OPTIMIZATION_STATE *)&v8);
  v2 = *((_QWORD *)a1 + 81);
  if ( ((v2 >> 16) & 3) == 0 )
    return 0LL;
  if ( ((v2 >> 16) & 3) == 1 )
  {
    if ( v7 < 0 && v8 >= 0 && (v2 & 0x40000000000LL) == 0 )
    {
      for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity(v5) )
      {
        v5 = i;
        if ( !i )
          break;
        if ( (*((_BYTE *)i + 544) & 0x28) == 0 )
        {
          LOBYTE(v4) = 5;
          if ( (unsigned int)HampActIsStartedOrReachedPendState(i, v4) )
          {
            if ( (*((_DWORD *)v5 + 28) & 0x2000) != 0 )
              return 0LL;
          }
        }
      }
      return 1LL;
    }
    return 0LL;
  }
  if ( ((v2 >> 16) & 3) != 2 )
    return ((v2 >> 16) & 3) == 3;
  return (v2 & 0x10000000000000LL) == 0;
}
