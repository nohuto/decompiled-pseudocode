/*
 * XREFs of ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000B2A8
 * Callers:
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000B13C (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003076C (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180076A90 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18007B838 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     ?HampClientRemove@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000B334 (-HampClientRemove@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     CempListEntryIsNull @ 0x18000C754 (CempListEntryIsNull.c)
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000CAC8 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

void __fastcall HampClientDestroy(struct _HAM_CLIENT_CONTEXT *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  HampClientRundownObjects(a1);
  if ( !(unsigned int)CempListEntryIsNull((char *)a1 + 8) )
    HampClientRemove(a1);
  v2 = (void *)*((_QWORD *)a1 + 20);
  if ( v2 )
    NtClose(v2);
  v3 = (void *)*((_QWORD *)a1 + 21);
  if ( v3 )
    NtClose(v3);
  if ( (*((_BYTE *)a1 + 128) & 2) == 0 && (*((_DWORD *)a1 + 26) || *((_DWORD *)a1 + 27)) )
    NtDeleteWnfStateName((char *)a1 + 104);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
