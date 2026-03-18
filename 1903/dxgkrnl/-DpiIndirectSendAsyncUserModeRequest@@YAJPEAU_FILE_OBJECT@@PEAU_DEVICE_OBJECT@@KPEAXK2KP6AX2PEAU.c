/*
 * XREFs of ?DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU_IO_STATUS_BLOCK@@@Z2PEA_NPEAPEAU_IRP@@@Z @ 0x1C02AB618
 * Callers:
 *     DpiIndirectCbSendMessage @ 0x1C02ABD20 (DpiIndirectCbSendMessage.c)
 * Callees:
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C004BA54 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 */

__int64 __fastcall DpiIndirectSendAsyncUserModeRequest(
        struct _FILE_OBJECT *Object,
        PDEVICE_OBJECT DeviceObject,
        __int64 a3,
        void *a4,
        size_t Size,
        void *a6,
        unsigned int a7,
        void (*a8)(void *, struct _IO_STATUS_BLOCK *),
        void *a9,
        bool *a10)
{
  __int64 v13; // rax
  NTSTATUS v14; // ebx
  size_t v15; // rdi
  unsigned int v16; // esi
  unsigned int v17; // eax
  unsigned int v18; // eax
  _QWORD *PoolWithTag; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  void (*v25)(void *, struct _IO_STATUS_BLOCK *); // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  PIRP Irp; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  IRP *v35; // rbx
  __int64 v36; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  void *v38; // rax
  struct _IO_STACK_LOCATION *v39; // rax
  void *v41; // [rsp+50h] [rbp+8h] BYREF

  v41 = 0LL;
  if ( !Object )
  {
    v13 = WdLogNewEntry5_WdWarning(0LL, DeviceObject, a3);
    *(_QWORD *)(v13 + 24) = DeviceObject;
    WdLogEvent5_WdWarning(v13);
    v14 = -1073741130;
    goto LABEL_21;
  }
  v15 = (unsigned int)Size;
  v16 = a7;
  v17 = Size;
  if ( (unsigned int)Size <= a7 )
    v17 = a7;
  v18 = v17 + 56;
  if ( v18 < 0x38 )
  {
    v29 = WdLogNewEntry5_WdError(Object, DeviceObject, a3);
    v14 = -1073741675;
    *(_QWORD *)(v29 + 24) = -1073741675LL;
    goto LABEL_20;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v18, 0x74727044u);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v41);
  v41 = PoolWithTag;
  a10 = 0LL;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&a10);
  if ( !PoolWithTag )
  {
    v24 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
    v14 = -1073741801;
    *(_QWORD *)(v24 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v24);
    goto LABEL_21;
  }
  v25 = a8;
  *PoolWithTag = Object;
  PoolWithTag[3] = v25;
  PoolWithTag[4] = a9;
  *((_DWORD *)PoolWithTag + 12) = 1;
  v14 = ObReferenceObjectByPointer(Object, 0x10000000u, (POBJECT_TYPE)IoFileObjectType, 0);
  if ( v14 < 0 )
  {
    v29 = WdLogNewEntry5_WdError(v27, v26, v28);
LABEL_20:
    WdLogEvent5_WdError(v29);
    goto LABEL_21;
  }
  Irp = IoAllocateIrp(DeviceObject->StackSize, 0);
  v35 = Irp;
  if ( Irp )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v38 = a6;
    if ( !v16 )
      v38 = 0LL;
    CurrentStackLocation[-1].MajorFunction = 14;
    CurrentStackLocation[-1].Parameters.Read.Length = v16;
    CurrentStackLocation[-1].Parameters.Create.Options = v15;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2296832;
    v35->UserBuffer = v38;
    PoolWithTag[5] = v38;
    if ( (_DWORD)v15 || v16 )
    {
      v35->AssociatedIrp.MasterIrp = (struct _IRP *)(PoolWithTag + 7);
      if ( (_DWORD)v15 )
        memmove(PoolWithTag + 7, a4, v15);
    }
    CurrentStackLocation[-1].FileObject = Object;
    v39 = v35->Tail.Overlay.CurrentStackLocation;
    v41 = 0LL;
    v39[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiIndirectIoCompleteRoutine;
    v39[-1].Context = PoolWithTag;
    v39[-1].Control = -32;
    v14 = IofCallDriver(DeviceObject, v35);
  }
  else
  {
    v36 = WdLogNewEntry5_WdLowResource(v32, v31, v33, v34);
    v14 = -1073741801;
    *(_QWORD *)(v36 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v36);
    ObfDereferenceObject(Object);
  }
LABEL_21:
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v41);
  return (unsigned int)v14;
}
