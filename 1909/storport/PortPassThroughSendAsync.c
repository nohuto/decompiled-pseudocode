/*
 * XREFs of PortPassThroughSendAsync @ 0x1C0076920
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C00762B4 (PortPassThroughExSendAsync.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     PortPassThroughBuildIrpEx @ 0x1C00244B0 (PortPassThroughBuildIrpEx.c)
 *     PortPassThroughFreeIrpEx @ 0x1C00247E4 (PortPassThroughFreeIrpEx.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0038C10 (StorASyncScsiPassThroughCompletion.c)
 *     PortPassThroughFreeSrb @ 0x1C00528E0 (PortPassThroughFreeSrb.c)
 *     PortpEnableCancel @ 0x1C0052DEC (PortpEnableCancel.c)
 *     PortPassThroughBuildSrb @ 0x1C0075EC4 (PortPassThroughBuildSrb.c)
 *     PortPassThroughGetDataBuffer @ 0x1C00768FC (PortPassThroughGetDataBuffer.c)
 *     PortPassThroughValidate @ 0x1C0076CDC (PortPassThroughValidate.c)
 */

__int64 __fastcall PortPassThroughSendAsync(
        struct _DEVICE_OBJECT *a1,
        PIRP Irp,
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
  KPROCESSOR_MODE AccessMode; // cl
  PIRP v17; // rbp
  _QWORD *v18; // r14
  _BYTE *PoolWithTag; // rax
  __int64 v21; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v23; // [rsp+40h] [rbp-88h]
  int v24[14]; // [rsp+50h] [rbp-78h] BYREF

  memset(v24, 0, sizeof(v24));
  LOBYTE(v11) = a3;
  v12 = 0LL;
  v13 = PortPassThroughValidate((_DWORD)a1, (_DWORD)Irp, v11, a5, a6, (__int64)v24);
  if ( v13 < 0 )
    goto LABEL_13;
  DataBuffer = (void *)PortPassThroughGetDataBuffer((__int64)v24, (__int64)Irp, a3);
  v15 = (int)DataBuffer;
  if ( a3 )
    AccessMode = Irp->RequestorMode;
  else
    AccessMode = 0;
  LODWORD(v23) = 0;
  v17 = PortPassThroughBuildIrpEx(
          (__int64)a1,
          DataBuffer,
          v24[3],
          LOBYTE(v24[2]) != 0,
          AccessMode,
          Irp,
          0,
          0LL,
          v23,
          0LL);
  if ( !v17 )
  {
    v13 = -1073741670;
LABEL_13:
    Irp->IoStatus.Status = v13;
    StorASyncScsiPassThroughCompletion(Irp);
    return (unsigned int)v13;
  }
  v18 = PortPassThroughBuildSrb((__int64)v24, v15);
  if ( !v18
    || (v17->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v18,
        v18[6] = v17,
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69506C50u),
        (v12 = PoolWithTag) == 0LL) )
  {
    v13 = -1073741670;
LABEL_9:
    PortPassThroughFreeIrpEx(v17);
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
  *((_QWORD *)PoolWithTag + 2) = Irp;
  *((_QWORD *)PoolWithTag + 4) = StorASyncScsiPassThroughCompletion;
  *((_QWORD *)PoolWithTag + 5) = a8;
  CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
  CurrentStackLocation[-1].Context = v12;
  CurrentStackLocation[-1].Control = -32;
  v13 = PortpEnableCancel((__int64)Irp, v21);
  if ( v13 != 259 )
    goto LABEL_9;
  IofCallDriver(a1, v17);
  return 259LL;
}
