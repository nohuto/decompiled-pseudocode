/*
 * XREFs of IopFreeBandwidthContract @ 0x14085CBD4
 * Callers:
 *     IopCloseFile @ 0x1405D8630 (IopCloseFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IopAllocateIrpMustSucceed @ 0x140037030 (IopAllocateIrpMustSucceed.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     IopQueueThreadIrp @ 0x14003BA80 (IopQueueThreadIrp.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

__int64 __fastcall IopFreeBandwidthContract(struct _FILE_OBJECT *Object, _QWORD *a2)
{
  __int64 result; // rax
  int v4; // esi
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v6; // rdx
  __int64 MustSucceed; // rax
  IRP *v8; // rbx
  struct _KEVENT *p_Event; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  struct _KEVENT *v12; // rcx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp-20h] BYREF
  __int64 v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+70h] [rbp-10h]

  result = 0LL;
  memset(&Event, 0, sizeof(Event));
  v14[0] = 0LL;
  v14[1] = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  if ( (_QWORD *)*a2 != a2 )
  {
    v4 = Object->Flags & 2;
    while ( 1 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      if ( (Object->Flags & 0x4000000) == 0 )
        KeResetEvent(&Object->Event);
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0;
      RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
      LOBYTE(v6) = RelatedDeviceObject->StackSize;
      MustSucceed = IopAllocateIrpMustSucceed((__int64)RelatedDeviceObject, v6);
      v8 = (IRP *)MustSucceed;
      *(_QWORD *)(MustSucceed + 192) = Object;
      *(_QWORD *)(MustSucceed + 152) = KeGetCurrentThread();
      *(_BYTE *)(MustSucceed + 64) = 0;
      if ( v4 )
      {
        p_Event = 0LL;
      }
      else
      {
        *(_DWORD *)(MustSucceed + 16) = 4;
        p_Event = &Event;
      }
      *(_QWORD *)(MustSucceed + 80) = p_Event;
      *(_QWORD *)(MustSucceed + 72) = v14;
      v10 = *(_QWORD *)(MustSucceed + 184);
      v8->Overlay.AllocationSize.QuadPart = 0LL;
      *(_BYTE *)(v10 - 72) = 6;
      *(_QWORD *)(v10 - 24) = Object;
      *(_DWORD *)(v10 - 64) = 20;
      *(_DWORD *)(v10 - 56) = 44;
      v8->UserBuffer = 0LL;
      v8->MdlAddress = 0LL;
      v8->AssociatedIrp.MasterIrp = (struct _IRP *)&v16;
      ObfReferenceObject(Object);
      IopQueueThreadIrp((__int64)v8, v11);
      if ( IofCallDriver(RelatedDeviceObject, v8) == 259 )
      {
        v12 = &Object->Event;
        if ( !v4 )
          v12 = &Event;
        KeWaitForSingleObject(v12, Executive, 0, 0, 0LL);
      }
      result = v14[0];
      if ( LODWORD(v14[0]) != -1073741670 && LODWORD(v14[0]) != -1073741801 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  return result;
}
