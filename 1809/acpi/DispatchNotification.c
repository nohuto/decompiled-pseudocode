/*
 * XREFs of DispatchNotification @ 0x1C002E170
 * Callers:
 *     NotifyHandler @ 0x1C002E080 (NotifyHandler.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017BC4 (ACPIInitReferenceDeviceExtension.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001C1C4 (ExAllocateFromNPagedLookasideList.c)
 */

__int64 __fastcall DispatchNotification(__int64 a1, int a2)
{
  unsigned int v4; // edi
  KIRQL v5; // al
  __int64 v6; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  char v11; // bl

  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc(&NotifyHandlerLock);
  v6 = *(_QWORD *)(a1 + 344);
  KeReleaseSpinLock(&NotifyHandlerLock, v5);
  if ( v6 )
  {
    v8 = ExAllocateFromNPagedLookasideList(&NotificationContextLookAsideList);
    v9 = v8;
    if ( v8 )
    {
      v8[1] = v8;
      *v8 = v8;
      *((_DWORD *)v8 + 4) = a2;
      KeWaitForSingleObject((PVOID)(a1 + 856), Executive, 0, 0, 0LL);
      v10 = *(_QWORD **)(a1 + 824);
      if ( *v10 != a1 + 816 )
        __fastfail(3u);
      *v9 = a1 + 816;
      v9[1] = v10;
      *v10 = v9;
      *(_QWORD *)(a1 + 824) = v9;
      v11 = *(_BYTE *)(a1 + 888);
      if ( !v11 )
        *(_BYTE *)(a1 + 888) = 1;
      KeSetEvent((PRKEVENT)(a1 + 856), 0, 0);
      if ( !v11 )
      {
        ACPIInitReferenceDeviceExtension(a1);
        ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(a1 + 880), DelayedWorkQueue);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v4;
}
