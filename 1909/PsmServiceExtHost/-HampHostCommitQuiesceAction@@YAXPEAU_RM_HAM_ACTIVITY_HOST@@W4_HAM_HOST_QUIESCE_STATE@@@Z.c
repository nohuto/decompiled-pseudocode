/*
 * XREFs of ?HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z @ 0x180037F80
 * Callers:
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180037A18 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18000D29C (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180077B8C (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

unsigned __int64 __fastcall HampHostCommitQuiesceAction(__int64 a1, char a2)
{
  unsigned __int64 result; // rax

  if ( a2 == 3 )
  {
    HampHostRevokeQuiesceExtension((struct _RM_HAM_ACTIVITY_HOST *)a1);
  }
  else if ( a2 == 4 && (*(_DWORD *)(a1 + 648) & 0xE0000000) != 0x80000000LL )
  {
    HampHostQueueTerminateEx(a1, 2u, 3584, 0LL, 3, 0);
  }
  *(_QWORD *)(a1 + 648) &= 0xFFFFFFFF1FFFFFFFuLL;
  result = (unsigned __int64)(a2 & 7) << 29;
  *(_QWORD *)(a1 + 648) |= result;
  return result;
}
