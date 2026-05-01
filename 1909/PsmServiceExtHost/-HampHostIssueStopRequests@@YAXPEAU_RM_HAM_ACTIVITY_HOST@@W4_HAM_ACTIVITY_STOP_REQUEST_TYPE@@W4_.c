/*
 * XREFs of ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000D1C0
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800121A8 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180077798 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180077B8C (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x180079220 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 * Callees:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800029F4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E090 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18000E0B0 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18000E0DC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

struct _HAM_ACTIVITY *__fastcall HampHostIssueStopRequests(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        char a5,
        unsigned int a6,
        char a7,
        unsigned int (__fastcall *a8)(__int64, _QWORD),
        __int64 a9,
        __int64 a10)
{
  int v12; // esi
  struct _HAM_ACTIVITY *result; // rax
  __int64 v14; // rdx
  __int64 i; // rbx
  int v16; // eax

  if ( a3 == 4 )
    v12 = *(unsigned __int16 *)(a1 + 648);
  else
    v12 = 6912;
  result = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
  for ( i = (__int64)result; result; i = (__int64)result )
  {
    if ( (*(_BYTE *)(i + 544) & 8) == 0 )
    {
      LOBYTE(v14) = a5;
      if ( (unsigned int)HampActIsStartedOrReachedPendState(i, v14) )
      {
        v16 = *(_DWORD *)(i + 112);
        if ( ((a7 & 2) == 0 || (v16 & 0x2000) != 0)
          && ((a7 & 1) == 0 || (v16 & 0x400) != 0)
          && ((a7 & 4) == 0 || (*(_BYTE *)(i + 116) & 0x40) != 0)
          && ((*(_DWORD *)(i + 112) & 0x800) != 0 || (a7 & 8) == 0)
          && (!a8 || a8(i, 0LL)) )
        {
          HampActRequestStopEx(i, a2, a3, a4, v12, a6, a10);
        }
      }
    }
    result = HampHostGetNextActivity((struct _HAM_ACTIVITY *)i);
  }
  return result;
}
