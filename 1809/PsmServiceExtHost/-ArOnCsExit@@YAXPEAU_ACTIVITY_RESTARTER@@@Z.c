/*
 * XREFs of ?ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006FA58
 * Callers:
 *     ?ArCsStateChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18006F530 (-ArCsStateChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     CemRcTableGetNext @ 0x18000858C (CemRcTableGetNext.c)
 *     CemRcTableGetFirst @ 0x18000BA38 (CemRcTableGetFirst.c)
 *     ?ArActClearChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x18006FC8C (-ArActClearChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActRestart@@YAJPEAU_AR_ACTIVITY@@W4_AR_STATE_CHANGE_EVENT@@@Z @ 0x18006FE28 (-ArActRestart@@YAJPEAU_AR_ACTIVITY@@W4_AR_STATE_CHANGE_EVENT@@@Z.c)
 *     ?ArActWaitNoChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x18006FE90 (-ArActWaitNoChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 */

void __fastcall ArOnCsExit(struct _ACTIVITY_RESTARTER *a1)
{
  struct _AR_ACTIVITY *i; // rax
  struct _AR_ACTIVITY *v3; // rbx

  RtlAcquireSRWLockExclusive((char *)a1 + 48);
  *((_DWORD *)a1 + 14) = GetCurrentThreadId();
  *((_BYTE *)a1 + 64) &= ~1u;
  *((_DWORD *)a1 + 14) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 48);
  for ( i = (struct _AR_ACTIVITY *)CemRcTableGetFirst((__int64)a1); ; i = (struct _AR_ACTIVITY *)CemRcTableGetNext(v3) )
  {
    v3 = i;
    if ( !i )
      break;
    ArActWaitNoChangeInProgress(i);
    ArActRestart(v3);
    ArActClearChangeInProgress(v3);
  }
}
