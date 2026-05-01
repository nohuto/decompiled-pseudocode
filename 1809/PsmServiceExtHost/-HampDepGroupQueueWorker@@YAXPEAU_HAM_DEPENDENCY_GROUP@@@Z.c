/*
 * XREFs of ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002F5C4
 * Callers:
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800223C0 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18002C430 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002E16C (-HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002E708 (-HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18002F914 (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampDepGroupQueueWorker(struct _HAM_DEPENDENCY_GROUP *a1)
{
  int v1; // eax

  ++*((_QWORD *)a1 + 14);
  if ( !*((_DWORD *)a1 + 32) )
  {
    v1 = *((_DWORD *)a1 + 33);
    if ( (v1 & 1) == 0 )
    {
      *((_DWORD *)a1 + 33) = v1 | 1;
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 12) <= 1 )
        __fastfail(0xEu);
      TpPostWork(*((_QWORD *)a1 + 15));
    }
  }
}
