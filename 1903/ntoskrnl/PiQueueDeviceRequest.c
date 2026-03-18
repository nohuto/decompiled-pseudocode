/*
 * XREFs of PiQueueDeviceRequest @ 0x14087798C
 * Callers:
 *     PiCMDeleteDevice @ 0x140871BB4 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140872420 (PiCMDeviceAction.c)
 *     PiControlStartDevice @ 0x140877230 (PiControlStartDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     PnpRequestDeviceAction @ 0x14015D184 (PnpRequestDeviceAction.c)
 *     PnpDeleteDeviceActionRequest @ 0x14015DA84 (PnpDeleteDeviceActionRequest.c)
 *     PnpCancelDeviceActionRequest @ 0x14029FB24 (PnpCancelDeviceActionRequest.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14029FB7C (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A2B68 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 */

__int64 __fastcall PiQueueDeviceRequest(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  _QWORD *v7; // rax
  void *v8; // rbp
  unsigned int v9; // ebx
  int v10; // eax
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v13; // [rsp+40h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-20h] BYREF

  v13 = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( a5 )
    *(_DWORD *)a5 = 0;
  v7 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 0x43706E50u);
  v8 = v7;
  if ( v7 )
  {
    if ( *(_QWORD *)(v7[39] + 40LL) )
    {
      if ( a4 )
        KeInitializeEvent(&Event, NotificationEvent, 0);
      v10 = PnpRequestDeviceAction(
              v8,
              a2,
              0,
              0LL,
              (unsigned __int64)&Event & -(__int64)(a4 != 0),
              a5 & -(__int64)(a4 != 0),
              (_QWORD *)((unsigned __int64)&v13 & -(__int64)(a4 != 0)));
      v11 = v13;
      v9 = v10;
      if ( v10 >= 0 )
      {
        if ( a4 )
        {
          v9 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
          if ( v9 == 257 )
          {
            if ( (unsigned int)PnpRemoveDeviceActionRequestFromQueue(v11) )
            {
              v9 = -1073741536;
            }
            else
            {
              PnpCancelDeviceActionRequest((__int64)v11);
              v9 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            }
          }
        }
      }
      if ( v11 )
        PnpDeleteDeviceActionRequest(v11);
    }
    else
    {
      v9 = -1073741810;
    }
    ObfDereferenceObjectWithTag(v8, 0x43706E50u);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return v9;
}
