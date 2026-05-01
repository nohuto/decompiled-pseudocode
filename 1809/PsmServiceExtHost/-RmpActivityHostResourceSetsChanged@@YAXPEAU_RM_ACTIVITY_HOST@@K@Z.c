/*
 * XREFs of ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180017F54
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18000AF10 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18001F260 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002BDDC (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A530 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180062480 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 * Callees:
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180017FCC (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001B140 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B450 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180020460 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall RmpActivityHostResourceSetsChanged(struct _RM_ACTIVITY_HOST *a1, unsigned int a2)
{
  __int64 v4; // rcx

  RmpActivityHostUpdateDigests(a1, a2);
  RmpActivityHostUpdateImportance(a1, a2);
  QueryUnbiasedInterruptTime((PULONGLONG)a1 + 175);
  if ( RmpActivityHostIsRevocable(a1) )
    SetEvent(*(HANDLE *)(*((_QWORD *)a1 + 7) + 88LL));
  if ( (a2 & 2) != 0 )
  {
    v4 = *((_QWORD *)a1 + 6);
    *((_QWORD *)a1 + 144) = 0LL;
    ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*(ExecutionModel::ResourceManager **)(v4 + 2688));
  }
}
