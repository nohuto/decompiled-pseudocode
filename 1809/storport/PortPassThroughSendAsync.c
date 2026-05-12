/*
 * XREFs of PortPassThroughSendAsync @ 0x1C006F55C
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C006F178 (PortPassThroughExSendAsync.c)
 * Callees:
 *     PortpEnableCancel @ 0x1C0021F8C (PortpEnableCancel.c)
 *     PortPassThroughFreeSrb @ 0x1C00220F0 (PortPassThroughFreeSrb.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0025D70 (StorASyncScsiPassThroughCompletion.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     PortPassThroughBuildIrpEx @ 0x1C002BAE0 (PortPassThroughBuildIrpEx.c)
 *     PortPassThroughFreeIrpEx @ 0x1C002BE04 (PortPassThroughFreeIrpEx.c)
 *     PortPassThroughBuildSrb @ 0x1C006F75C (PortPassThroughBuildSrb.c)
 *     PortPassThroughValidate @ 0x1C006F8CC (PortPassThroughValidate.c)
 *     PortPassThroughGetDataBuffer @ 0x1C006F9BC (PortPassThroughGetDataBuffer.c)
 */

__int64 __fastcall PortPassThroughSendAsync(
        struct _DEVICE_OBJECT *a1,
        PIRP Irp,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  char v8; // r15
  void *v11; // rdi
  int v12; // ebx
  __int64 v13; // r8
  void *DataBuffer; // rax
  void *v15; // rbx
  KPROCESSOR_MODE AccessMode; // cl
  PIRP v17; // rbp
  _QWORD *v18; // r14
  _BYTE *PoolWithTag; // rax
  __int64 v21; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v23; // [rsp+40h] [rbp-88h]
  _BYTE v24[12]; // [rsp+50h] [rbp-78h] BYREF
  int v25; // [rsp+5Ch] [rbp-6Ch]

  v8 = a3;
  v11 = 0LL;
  v12 = PortPassThroughValidate((_DWORD)a1, (_DWORD)Irp, a3, a5, a6, (__int64)v24);
  if ( v12 < 0 )
    goto LABEL_13;
  LOBYTE(v13) = v8;
  DataBuffer = (void *)PortPassThroughGetDataBuffer(v24, Irp, v13);
  v15 = DataBuffer;
  if ( v8 )
    AccessMode = Irp->RequestorMode;
  else
    AccessMode = 0;
  LODWORD(v23) = 0;
  v17 = PortPassThroughBuildIrpEx((__int64)a1, DataBuffer, v25, v24[8] != 0, AccessMode, Irp, 0, 0LL, v23, 0LL);
  if ( !v17 )
  {
    v12 = -1073741670;
LABEL_13:
    Irp->IoStatus.Status = v12;
    StorASyncScsiPassThroughCompletion(Irp);
    return (unsigned int)v12;
  }
  v18 = (_QWORD *)PortPassThroughBuildSrb(v24, v15);
  if ( !v18
    || (v17->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v18,
        v18[6] = v17,
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69506C50u),
        (v11 = PoolWithTag) == 0LL) )
  {
    v12 = -1073741670;
LABEL_9:
    PortPassThroughFreeIrpEx(v17);
    if ( v18 )
      PortPassThroughFreeSrb(v18);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x69506C50u);
    goto LABEL_13;
  }
  *((_QWORD *)PoolWithTag + 3) = v18;
  *((_QWORD *)PoolWithTag + 1) = v17;
  v21 = (__int64)PoolWithTag;
  *PoolWithTag = v8;
  *((_QWORD *)PoolWithTag + 2) = Irp;
  *((_QWORD *)PoolWithTag + 4) = StorASyncScsiPassThroughCompletion;
  *((_QWORD *)PoolWithTag + 5) = a8;
  CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
  CurrentStackLocation[-1].Context = v11;
  CurrentStackLocation[-1].Control = -32;
  v12 = PortpEnableCancel((__int64)Irp, v21);
  if ( v12 != 259 )
    goto LABEL_9;
  IofCallDriver(a1, v17);
  return 259LL;
}
