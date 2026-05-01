/*
 * XREFs of ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x1800109AC
 * Callers:
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180010680 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180067184 (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18006A3CC (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180010A58 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180012790 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180023AE0 (CempLockTrackerMarkReleased.c)
 */

__int64 __fastcall HampHostQueryIsDebugEnabled(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned int *a2)
{
  __int64 v4; // rbx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a1 + 94) + 88LL);
  HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v4);
  v5 = *(_DWORD *)(v4 + 340) >> 1;
  CempLockTrackerMarkReleased(v7, v6, 6LL);
  RtlReleaseSRWLockShared(v4 + 304);
  if ( (v5 & 1) != 0 )
  {
    *a2 = 1;
  }
  else
  {
    v9 = 0;
    result = RmHamHostActOnProcesses(
               (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64),
               0x400u,
               0,
               HampHostQueryProcessDebuggedCallback,
               &v9);
    if ( (int)result < 0 )
      return result;
    *a2 = v9;
  }
  return 0LL;
}
