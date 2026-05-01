/*
 * XREFs of ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016718
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001699C (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x1800376AC (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall RmpEnforcementInfoInitializeCommon(struct _RM_ACTIVITY_HOST *a1)
{
  NTSTATUS Event; // edi
  __int128 v3; // xmm1
  void *EventHandle[2]; // [rsp+30h] [rbp-28h] BYREF
  void *v6[2]; // [rsp+40h] [rbp-18h] BYREF

  memset_0(EventHandle, 0, 0x20uLL);
  Event = TpAllocWork(EventHandle, RmpEmptyWorkerCallback, a1, *((_QWORD *)a1 + 6) + 2472LL);
  if ( Event >= 0 )
  {
    Event = NtCreateEvent(&EventHandle[1], 0x1F0003u, 0LL, NotificationEvent, 0);
    if ( Event >= 0 )
    {
      Event = NtCreateEvent(v6, 0x1F0003u, 0LL, NotificationEvent, 0);
      if ( Event >= 0 )
        Event = 0;
    }
  }
  if ( Event < 0 )
  {
    RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)EventHandle);
  }
  else
  {
    Event = 0;
    memset_0((char *)a1 + 1200, 0, 0x80uLL);
    memset_0((char *)a1 + 1168, 0, 0x20uLL);
    *((_DWORD *)a1 + 298) = 1;
    RtlInitializeConditionVariable((char *)a1 + 1232);
    v3 = *(_OWORD *)v6;
    *((_OWORD *)a1 + 81) = *(_OWORD *)EventHandle;
    *((_OWORD *)a1 + 82) = v3;
  }
  return (unsigned int)Event;
}
