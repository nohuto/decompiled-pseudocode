/*
 * XREFs of PortPassThroughExSendAsync @ 0x1C006F178
 * Callers:
 *     RaidAdapterPassThrough @ 0x1C006F078 (RaidAdapterPassThrough.c)
 * Callees:
 *     PortpEnableCancel @ 0x1C0021F8C (PortpEnableCancel.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0025D70 (StorASyncScsiPassThroughCompletion.c)
 *     PortPassThroughBuildIrpEx @ 0x1C002BAE0 (PortPassThroughBuildIrpEx.c)
 *     PortPassThroughFreeIrpEx @ 0x1C002BE04 (PortPassThroughFreeIrpEx.c)
 *     PortPassThroughExBasicValidation @ 0x1C00528D4 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExFreeSrbEx @ 0x1C0052980 (PortPassThroughExFreeSrbEx.c)
 *     PortPassThroughExGetBasicStructureSize @ 0x1C00529EC (PortPassThroughExGetBasicStructureSize.c)
 *     PortPassThroughExValidate @ 0x1C0052CAC (PortPassThroughExValidate.c)
 *     PortPassThroughSendAsync @ 0x1C006F55C (PortPassThroughSendAsync.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0075DB4 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExGetDataBuffers @ 0x1C0076128 (PortPassThroughExGetDataBuffers.c)
 */

__int64 __fastcall PortPassThroughExSendAsync(
        struct _DEVICE_OBJECT *a1,
        IRP *a2,
        char a3,
        int a4,
        int a5,
        int a6,
        void *a7,
        __int64 a8)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _BYTE *v12; // r13
  int v13; // r9d
  void *v14; // r14
  int BasicStructureSize; // ebx
  unsigned int *PoolWithTag; // rsi
  int v18; // r8d
  KPROCESSOR_MODE RequestorMode; // r11
  int v20; // ebx
  ULONG v21; // r8d
  void *v22; // rdx
  PIRP v23; // rax
  struct _MDL *v24; // r12
  IRP *v25; // r15
  __int64 v26; // rax
  _BYTE *v27; // rax
  __int64 v28; // rdx
  _IO_STACK_LOCATION *v29; // rax
  ULONG AccessMode; // [rsp+20h] [rbp-48h]
  int v31; // [rsp+30h] [rbp-38h]
  __int64 v32; // [rsp+40h] [rbp-28h]
  PMDL MemoryDescriptorList; // [rsp+50h] [rbp-18h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+50h] BYREF
  char v36; // [rsp+C0h] [rbp+58h]
  SIZE_T NumberOfBytes; // [rsp+C8h] [rbp+60h] BYREF

  LODWORD(NumberOfBytes) = a4;
  v36 = a3;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a7 = 0LL;
  v35 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v12 = 0LL;
  v13 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 315460;
  MemoryDescriptorList = 0LL;
  v14 = 0LL;
  if ( (v13 & 0xFFFFFFFB) != 0 )
    return PortPassThroughSendAsync((int)a1, a2, a5, a6, v31, a8);
  BasicStructureSize = PortPassThroughExBasicValidation(a2);
  if ( BasicStructureSize < 0 )
    goto LABEL_27;
  BasicStructureSize = PortPassThroughExGetBasicStructureSize((__int64)a2, (ULONG *)&NumberOfBytes);
  if ( BasicStructureSize < 0 )
    goto LABEL_27;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x69506C50u);
  if ( !PoolWithTag )
  {
    BasicStructureSize = -1073741670;
LABEL_27:
    a2->IoStatus.Status = BasicStructureSize;
    StorASyncScsiPassThroughCompletion(a2);
    return (unsigned int)BasicStructureSize;
  }
  BasicStructureSize = PortPassThroughExValidate((__int64)a1, a2, a3, a5, a6, PoolWithTag);
  if ( BasicStructureSize < 0 )
  {
LABEL_26:
    ExFreePoolWithTag(PoolWithTag, 0x69506C50u);
    goto LABEL_27;
  }
  LOBYTE(v18) = a3;
  PortPassThroughExGetDataBuffers((_DWORD)PoolWithTag, (_DWORD)a2, v18, (unsigned int)&a7, (__int64)&v35);
  if ( a3 )
    RequestorMode = a2->RequestorMode;
  else
    RequestorMode = 0;
  v20 = (int)a7;
  if ( a7 )
    v21 = PoolWithTag[8];
  else
    v21 = PoolWithTag[9];
  v22 = a7;
  if ( !a7 )
    v22 = (void *)v35;
  LODWORD(v32) = PoolWithTag[9];
  v23 = PortPassThroughBuildIrpEx(
          (__int64)a1,
          v22,
          v21,
          *((_BYTE *)PoolWithTag + 18) == 1,
          RequestorMode,
          a2,
          *((_BYTE *)PoolWithTag + 18) == 3,
          (void *)v35,
          v32,
          &MemoryDescriptorList);
  v24 = MemoryDescriptorList;
  v25 = v23;
  if ( !v23
    || (v26 = PortPassThroughExBuildSrbEx(
                (int)a2,
                (int)PoolWithTag,
                v20,
                v35,
                AccessMode,
                (__int64)MemoryDescriptorList),
        (v12 = (_BYTE *)v26) == 0LL)
    || (*(_QWORD *)(v26 + 80) = v25,
        v25->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = v26,
        v27 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69506C50u),
        (v14 = v27) == 0LL) )
  {
    BasicStructureSize = -1073741670;
LABEL_18:
    if ( v24 )
    {
      MmUnlockPages(v24);
      IoFreeMdl(v24);
    }
    if ( v25 )
      PortPassThroughFreeIrpEx(v25);
    if ( v12 )
      PortPassThroughExFreeSrbEx(v12);
    if ( v14 )
      ExFreePoolWithTag(v14, 0x69506C50u);
    goto LABEL_26;
  }
  *((_QWORD *)v27 + 3) = v12;
  *((_QWORD *)v27 + 1) = v25;
  v28 = (__int64)v27;
  *v27 = v36;
  *((_QWORD *)v27 + 4) = StorASyncScsiPassThroughCompletion;
  *((_QWORD *)v27 + 5) = a8;
  *((_QWORD *)v27 + 2) = a2;
  v29 = v25->Tail.Overlay.CurrentStackLocation;
  v29[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
  v29[-1].Context = v14;
  v29[-1].Control = -32;
  BasicStructureSize = PortpEnableCancel((__int64)a2, v28);
  if ( BasicStructureSize != 259 )
    goto LABEL_18;
  ExFreePoolWithTag(PoolWithTag, 0x69506C50u);
  IofCallDriver(a1, v25);
  return 259LL;
}
