/*
 * XREFs of ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000BB34
 * Callers:
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000ED94 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@PEAU_HAM_LOCAL_CALLBACKS@@2PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000F994 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@PEAU_HA.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180068FC0 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18006DB10 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000B9B0 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientRemove@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000BBBC (-HampClientRemove@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

void __fastcall HampClientDestroy(struct _HAM_CLIENT_CONTEXT *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  HampClientRundownObjects(a1);
  if ( *((_QWORD *)a1 + 1) )
    HampClientRemove(a1);
  v2 = (void *)*((_QWORD *)a1 + 18);
  if ( v2 )
    NtClose(v2);
  v3 = (void *)*((_QWORD *)a1 + 19);
  if ( v3 )
    NtClose(v3);
  if ( (*((_BYTE *)a1 + 128) & 2) == 0 && (*((_DWORD *)a1 + 26) || *((_DWORD *)a1 + 27)) )
    NtDeleteWnfStateName((char *)a1 + 104);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
