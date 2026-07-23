/*
 * XREFs of FsRtlQueryCachedVdl @ 0x1406CBB10
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400DDD10 (IoBuildDeviceIoControlRequest.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall FsRtlQueryCachedVdl(PFILE_OBJECT FileObject, _QWORD *a2)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rsi
  PIRP v5; // rax
  IRP *v6; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Status; // edx
  int *v9; // rcx
  __int64 v10; // r8
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-88h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-78h] BYREF
  __m128i si128; // [rsp+80h] [rbp-58h] BYREF
  int v15; // [rsp+90h] [rbp-48h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v5 = IoBuildDeviceIoControlRequest(0x90284u, RelatedDeviceObject, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  v6 = v5;
  if ( !v5 )
    return 3221225626LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v15 = 1;
  v5->AssociatedIrp.MasterIrp = (struct _IRP *)&si128;
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].MajorFunction = 13;
  CurrentStackLocation[-1].Parameters.Create.Options = 24;
  CurrentStackLocation[-1].Parameters.Read.Length = 64;
  Status = IofCallDriver(RelatedDeviceObject, v6);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( (Status & 0xC0000000) != 0xC0000000 )
  {
    *a2 = 0LL;
    if ( si128.m128i_i32[2] )
    {
      v9 = &v15;
      v10 = si128.m128i_u32[2];
      do
      {
        if ( (v9[4] & 1) != 0 )
          *a2 = *(_QWORD *)v9 + *((_QWORD *)v9 + 1);
        v9 += 6;
        --v10;
      }
      while ( v10 );
    }
  }
  return Status;
}
