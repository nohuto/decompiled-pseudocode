/*
 * XREFs of ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005844
 * Callers:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18002C430 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 * Callees:
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800058B4 (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 */

__int64 __fastcall HampActRequestStopForTerminate(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx

  if ( a2 == 1 )
  {
    v5 = (unsigned int)((*(_QWORD *)(*(_QWORD *)(a1 + 80) + 632LL) & 0x100000000000LL) != 0) + 1;
  }
  else
  {
    result = (unsigned int)(a2 - 2);
    if ( (unsigned int)result > 1 )
      return result;
    v5 = 3LL;
  }
  return HampActRequestStop(a1, v5, 4LL, a3, (*(_DWORD *)(a1 + 112) >> 8) & 0x200, a4);
}
