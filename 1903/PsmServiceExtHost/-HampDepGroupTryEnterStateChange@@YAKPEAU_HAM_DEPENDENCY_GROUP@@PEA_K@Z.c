/*
 * XREFs of ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x18003057C
 * Callers:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18000D29C (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002EA90 (-HampDepGroupStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18003538C (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003CAE8 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampDepGroupTryEnterStateChange(struct _HAM_DEPENDENCY_GROUP *a1, unsigned __int64 *a2)
{
  int v2; // esi
  __int64 v3; // rax
  unsigned int v5; // ebx

  v2 = 0;
  v3 = *((_QWORD *)a1 + 14) + 1LL;
  *((_QWORD *)a1 + 14) = v3;
  if ( a2 )
    *a2 = v3;
  if ( *((_DWORD *)a1 + 32) )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 12) <= 1 )
      __fastfail(0xEu);
    *((_DWORD *)a1 + 32) = GetCurrentThreadId();
  }
  LOBYTE(v2) = *((_DWORD *)a1 + 32) == GetCurrentThreadId();
  if ( v5 != v2 )
    __int2c();
  return v5;
}
