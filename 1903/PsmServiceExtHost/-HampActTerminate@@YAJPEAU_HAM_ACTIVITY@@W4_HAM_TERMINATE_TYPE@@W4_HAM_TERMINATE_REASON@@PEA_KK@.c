/*
 * XREFs of ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@Z @ 0x180035740
 * Callers:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000CAC8 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@Z @ 0x1800354CC (-HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMIN.c)
 * Callees:
 *     ?HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180003418 (-HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18000D29C (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall HampActTerminate(__int64 a1, unsigned int a2, int a3, _QWORD *a4, int a5)
{
  __int64 v5; // rdi
  int v10; // ebp
  unsigned int v11; // ebx
  __int64 AppliedTaskCompletions; // rax
  bool v14; // zf

  v5 = *(_QWORD *)(a1 + 80);
  v10 = 0;
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v5, 0);
  if ( *(_BYTE *)(a1 + 548) == 4 )
  {
    v11 = -1073741275;
  }
  else if ( *(_QWORD *)(a1 + 512) )
  {
    if ( (*(_BYTE *)(a1 + 544) & 8) != 0 )
    {
      v11 = -1058275327;
    }
    else if ( !a4
           || (AppliedTaskCompletions = HampHostGetAppliedTaskCompletions((struct _RM_HAM_ACTIVITY_HOST *)v5),
               v14 = (AppliedTaskCompletions & *a4) == 0,
               *a4 &= AppliedTaskCompletions,
               v14) )
    {
      v10 = HampHostQueueTerminateEx(v5, a2, a3, *(_QWORD *)(a1 + 64), 1, a5);
      v11 = 0;
    }
    else
    {
      v11 = -1058275328;
    }
  }
  else
  {
    v11 = -1073741436;
  }
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v5);
  if ( v10 )
    HampDepGroupRunStateChangeWorker(*(struct _HAM_DEPENDENCY_GROUP **)(v5 + 688));
  return v11;
}
