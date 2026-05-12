/*
 * XREFs of PortPassThroughSendAsync @ 0x1C007597C
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C0075388 (PortPassThroughExSendAsync.c)
 * Callees:
 *     PortPassThroughFreeIrp @ 0x1C00018D0 (PortPassThroughFreeIrp.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0037820 (StorASyncScsiPassThroughCompletion.c)
 *     PortPassThroughFreeSrb @ 0x1C0051760 (PortPassThroughFreeSrb.c)
 *     PortpEnableCancel @ 0x1C0051C6C (PortpEnableCancel.c)
 *     PortPassThroughBuildIrp @ 0x1C006A008 (PortPassThroughBuildIrp.c)
 *     PortPassThroughBuildSrb @ 0x1C0074FF4 (PortPassThroughBuildSrb.c)
 *     PortPassThroughGetDataBuffer @ 0x1C0075958 (PortPassThroughGetDataBuffer.c)
 *     PortPassThroughValidate @ 0x1C0075D10 (PortPassThroughValidate.c)
 */

__int64 __fastcall PortPassThroughSendAsync(
        PDEVICE_OBJECT DeviceObject,
        IRP *a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  int v11; // r8d
  void *v12; // rdi
  int v13; // ebx
  void *DataBuffer; // rax
  int v15; // ebx
  KPROCESSOR_MODE RequestorMode; // cl
  PIRP v17; // rsi
  _QWORD *v18; // rbp
  _BYTE *PoolWithTag; // rax
  __int64 v21; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ULONG v23[14]; // [rsp+30h] [rbp-78h] BYREF

  memset(v23, 0, sizeof(v23));
  LOBYTE(v11) = a3;
  v12 = 0LL;
  v13 = PortPassThroughValidate((_DWORD)DeviceObject, (_DWORD)a2, v11, a5, a6, (__int64)v23);
  if ( v13 < 0 )
    goto LABEL_13;
  DataBuffer = (void *)PortPassThroughGetDataBuffer((__int64)v23, (__int64)a2, a3);
  v15 = (int)DataBuffer;
  if ( a3 )
    RequestorMode = a2->RequestorMode;
  else
    RequestorMode = 0;
  v17 = PortPassThroughBuildIrp((__int64)DeviceObject, DataBuffer, v23[3], LOBYTE(v23[2]) != 0, RequestorMode);
  if ( !v17 )
  {
    v13 = -1073741670;
LABEL_13:
    a2->IoStatus.Status = v13;
    StorASyncScsiPassThroughCompletion(a2);
    return (unsigned int)v13;
  }
  v18 = PortPassThroughBuildSrb((__int64)v23, v15);
  if ( !v18
    || (v17->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v18,
        v18[6] = v17,
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69506C50u),
        (v12 = PoolWithTag) == 0LL) )
  {
    v13 = -1073741670;
LABEL_9:
    PortPassThroughFreeIrp(v17);
    if ( v18 )
      PortPassThroughFreeSrb(v18);
    if ( v12 )
      ExFreePoolWithTag(v12, 0x69506C50u);
    goto LABEL_13;
  }
  *((_QWORD *)PoolWithTag + 3) = v18;
  *((_QWORD *)PoolWithTag + 1) = v17;
  v21 = (__int64)PoolWithTag;
  *PoolWithTag = a3;
  *((_QWORD *)PoolWithTag + 2) = a2;
  *((_QWORD *)PoolWithTag + 4) = StorASyncScsiPassThroughCompletion;
  *((_QWORD *)PoolWithTag + 5) = a8;
  CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
  CurrentStackLocation[-1].Context = v12;
  CurrentStackLocation[-1].Control = -32;
  v13 = PortpEnableCancel((__int64)a2, v21);
  if ( v13 != 259 )
    goto LABEL_9;
  IofCallDriver(DeviceObject, v17);
  return 259LL;
}
