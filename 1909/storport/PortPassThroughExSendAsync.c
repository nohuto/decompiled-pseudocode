/*
 * XREFs of PortPassThroughExSendAsync @ 0x1C00762B4
 * Callers:
 *     RaidAdapterPassThrough @ 0x1C0073E68 (RaidAdapterPassThrough.c)
 * Callees:
 *     PortPassThroughBuildIrpEx @ 0x1C00244B0 (PortPassThroughBuildIrpEx.c)
 *     PortPassThroughFreeIrpEx @ 0x1C00247E4 (PortPassThroughFreeIrpEx.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0038C10 (StorASyncScsiPassThroughCompletion.c)
 *     PortPassThroughExBasicValidation @ 0x1C0052484 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExFreeSrbEx @ 0x1C0052514 (PortPassThroughExFreeSrbEx.c)
 *     PortPassThroughExValidate @ 0x1C00527D0 (PortPassThroughExValidate.c)
 *     PortpEnableCancel @ 0x1C0052DEC (PortpEnableCancel.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0075F74 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExGetDataBuffers @ 0x1C007626C (PortPassThroughExGetDataBuffers.c)
 *     PortPassThroughSendAsync @ 0x1C0076920 (PortPassThroughSendAsync.c)
 */

__int64 __fastcall PortPassThroughExSendAsync(
        struct _DEVICE_OBJECT *a1,
        IRP *a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        void *a7,
        __int64 a8)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _BYTE *v12; // r15
  void *v13; // r14
  int v15; // ebx
  unsigned int *PoolWithTag; // rsi
  KPROCESSOR_MODE RequestorMode; // r11
  __int64 v18; // rbx
  ULONG v19; // r8d
  void *v20; // rdx
  PIRP v21; // rax
  struct _MDL *v22; // r12
  IRP *v23; // rbp
  _DWORD *v24; // rax
  _BYTE *v25; // rax
  __int64 v26; // rdx
  _IO_STACK_LOCATION *v27; // rax
  int AccessMode; // [rsp+20h] [rbp-78h]
  int v29; // [rsp+30h] [rbp-68h]
  __int64 v30; // [rsp+40h] [rbp-58h]
  PMDL MemoryDescriptorList; // [rsp+50h] [rbp-48h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a7 = 0LL;
  v33 = 0LL;
  MemoryDescriptorList = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( ((CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 315460) & 0xFFFFFFFB) != 0 )
    return PortPassThroughSendAsync((int)a1, a2, a5, a6, v29, a8);
  v15 = PortPassThroughExBasicValidation(a2);
  if ( v15 < 0 )
    goto LABEL_26;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                  NonPagedPoolNx,
                                  (unsigned int)(LODWORD(a2->AssociatedIrp.MasterIrp->MdlAddress) + 63),
                                  0x69506C50u);
  if ( !PoolWithTag )
  {
    v15 = -1073741670;
LABEL_26:
    a2->IoStatus.Status = v15;
    StorASyncScsiPassThroughCompletion(a2);
    return (unsigned int)v15;
  }
  v15 = PortPassThroughExValidate((__int64)a1, a2, a3, a5, a6, PoolWithTag);
  if ( v15 < 0 )
  {
LABEL_25:
    ExFreePoolWithTag(PoolWithTag, 0x69506C50u);
    goto LABEL_26;
  }
  PortPassThroughExGetDataBuffers((__int64)PoolWithTag, (__int64)a2, a3, &a7, &v33);
  if ( a3 )
    RequestorMode = a2->RequestorMode;
  else
    RequestorMode = 0;
  v18 = (__int64)a7;
  if ( a7 )
    v19 = PoolWithTag[8];
  else
    v19 = PoolWithTag[9];
  v20 = a7;
  if ( !a7 )
    v20 = (void *)v33;
  LODWORD(v30) = PoolWithTag[9];
  v21 = PortPassThroughBuildIrpEx(
          (__int64)a1,
          v20,
          v19,
          *((_BYTE *)PoolWithTag + 18) == 1,
          RequestorMode,
          a2,
          *((_BYTE *)PoolWithTag + 18) == 3,
          (void *)v33,
          v30,
          &MemoryDescriptorList);
  v22 = MemoryDescriptorList;
  v23 = v21;
  if ( !v21
    || (v24 = PortPassThroughExBuildSrbEx(a2, (__int64)PoolWithTag, v18, v33, AccessMode, (__int64)MemoryDescriptorList),
        (v12 = v24) == 0LL)
    || (*((_QWORD *)v24 + 10) = v23,
        v23->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v24,
        v25 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69506C50u),
        (v13 = v25) == 0LL) )
  {
    v15 = -1073741670;
LABEL_17:
    if ( v22 )
    {
      MmUnlockPages(v22);
      IoFreeMdl(v22);
    }
    if ( v23 )
      PortPassThroughFreeIrpEx(v23);
    if ( v12 )
      PortPassThroughExFreeSrbEx(v12);
    if ( v13 )
      ExFreePoolWithTag(v13, 0x69506C50u);
    goto LABEL_25;
  }
  *((_QWORD *)v25 + 3) = v12;
  *((_QWORD *)v25 + 1) = v23;
  v26 = (__int64)v25;
  *v25 = a3;
  *((_QWORD *)v25 + 2) = a2;
  *((_QWORD *)v25 + 4) = StorASyncScsiPassThroughCompletion;
  *((_QWORD *)v25 + 5) = a8;
  v27 = v23->Tail.Overlay.CurrentStackLocation;
  v27[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
  v27[-1].Context = v13;
  v27[-1].Control = -32;
  v15 = PortpEnableCancel((__int64)a2, v26);
  if ( v15 != 259 )
    goto LABEL_17;
  ExFreePoolWithTag(PoolWithTag, 0x69506C50u);
  IofCallDriver(a1, v23);
  return 259LL;
}
