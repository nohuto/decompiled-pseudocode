/*
 * XREFs of ?HampAppTryChangeExecutionState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180013234
 * Callers:
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x1800131F0 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 * Callees:
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180013580 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180014A00 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 */

void __fastcall HampAppTryChangeExecutionState(__int64 a1, int a2)
{
  int v4; // edx
  int v5; // [rsp+38h] [rbp+10h] BYREF

  HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)a1);
  v4 = (*(_DWORD *)(a1 + 616) >> 5) & 7;
  if ( v4 != a2 && (v4 != 4 || !a2) )
  {
    if ( a2 )
    {
      if ( a2 == 1 || a2 == 2 )
      {
        if ( v4 == 3 )
          goto LABEL_5;
      }
      else if ( a2 != 3 )
      {
        goto LABEL_5;
      }
    }
    v5 = *(_DWORD *)(a1 + 616) ^ ((unsigned __int8)*(_DWORD *)(a1 + 616) ^ (unsigned __int8)(32 * a2)) & 0xE0;
    HampAppCommitStateSummary((struct _HAM_APPLICATION *)a1, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v5);
  }
LABEL_5:
  HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)a1);
}
