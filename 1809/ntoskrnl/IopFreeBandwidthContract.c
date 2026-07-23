/*
 * XREFs of IopFreeBandwidthContract @ 0x140823AFC
 * Callers:
 *     IopCloseFile @ 0x14063AB30 (IopCloseFile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IopAllocateIrpMustSucceed @ 0x1400B91E0 (IopAllocateIrpMustSucceed.c)
 *     IopQueueThreadIrp @ 0x1400BC2C0 (IopQueueThreadIrp.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall IopFreeBandwidthContract(struct _FILE_OBJECT *Object, _QWORD *a2)
{
  __int64 result; // rax
  int v4; // esi
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v6; // rdx
  __int64 MustSucceed; // rax
  IRP *v8; // rdi
  struct _KEVENT *p_Event; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KEVENT *v13; // rcx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v17[2]; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+70h] [rbp-10h]

  result = 0LL;
  v15[0] = 0LL;
  v15[1] = 0LL;
  if ( (_QWORD *)*a2 != a2 )
  {
    v4 = Object->Flags & 2;
    while ( 1 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      if ( (Object->Flags & 0x4000000) == 0 )
        KeResetEvent(&Object->Event);
      v17[0] = 0LL;
      v17[1] = 0LL;
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
      *(_QWORD *)(MustSucceed + 72) = v15;
      v10 = *(_QWORD *)(MustSucceed + 184);
      v8->Overlay.AllocationSize.QuadPart = 0LL;
      *(_BYTE *)(v10 - 72) = 6;
      *(_QWORD *)(v10 - 24) = Object;
      *(_DWORD *)(v10 - 64) = 20;
      *(_DWORD *)(v10 - 56) = 44;
      v8->UserBuffer = 0LL;
      v8->MdlAddress = 0LL;
      v8->AssociatedIrp.MasterIrp = (struct _IRP *)v17;
      ObfReferenceObject(Object);
      IopQueueThreadIrp((__int64)v8, v11, v12);
      if ( IofCallDriver(RelatedDeviceObject, v8) == 259 )
      {
        v13 = &Object->Event;
        if ( !v4 )
          v13 = &Event;
        KeWaitForSingleObject(v13, Executive, 0, 0, 0LL);
      }
      result = v15[0];
      if ( LODWORD(v15[0]) != -1073741670 && LODWORD(v15[0]) != -1073741801 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  return result;
}
