/*
 * XREFs of ?HampSlsBlockerEntryUpdateBlockType@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18006E600
 * Callers:
 *     ?HampSlsBlockerTreeWriteCallback@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18006E6B0 (-HampSlsBlockerTreeWriteCallback@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18006F088 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSlsBlockerEntryUpdateBlockType(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  RtlQueryUnbiasedInterruptTime(&v5);
  if ( *(_BYTE *)(a1 + 32) != 5 )
    *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a1 + 32) + 48) += v5 - *(_QWORD *)(a1 + 40);
  result = v5;
  *(_QWORD *)(a1 + 40) = v5;
  *(_BYTE *)(a1 + 32) = a2;
  return result;
}
