/*
 * XREFs of ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18006DF60
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180062130 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z @ 0x180001448 (-RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x180070874 (-RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180072920 (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpEnforcerContextRundown(struct _RM_SERVICE_GLOBALS *a1)
{
  struct _RM_GPU_MONITOR *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct _RM_ACTIVITY_ENFORCEMENT_INFO *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 48);
  RmpAcquireGlobalLock();
  if ( (*((_BYTE *)v2 + 44) & 1) != 0 )
    RmpGpuMonitorDisable(v2);
  RmpReleaseGlobalLock();
  if ( *(_QWORD *)v2 )
  {
    TpSetTimer(*(_QWORD *)v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)v2, 1LL);
  }
  v3 = *((_QWORD *)a1 + 16);
  if ( v3 )
    TpWaitForTimer(v3, 1LL);
  v4 = *((_QWORD *)a1 + 20);
  if ( v4 )
    TpWaitForTimer(v4, 1LL);
  RmpAcquireGlobalLock();
  while ( 1 )
  {
    v5 = RmpQoSGetEarliestHostInfo((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 176));
    if ( !v5 )
      break;
    RmpQoSDisableForHostOnTimerExpiry(
      (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 176),
      (struct _RM_ACTIVITY_ENFORCEMENT_INFO *)((char *)v5 - 1168));
  }
  RmpReleaseGlobalLock();
  v6 = *((_QWORD *)a1 + 24);
  if ( v6 )
  {
    TpSetTimer(v6, 0LL, 0LL, 0LL);
    TpWaitForTimer(*((_QWORD *)a1 + 24), 1LL);
  }
  v7 = *((_QWORD *)a1 + 27);
  if ( v7 )
  {
    TpWaitForWork(v7, 0LL);
    TpReleaseWork(*((_QWORD *)a1 + 27));
  }
}
