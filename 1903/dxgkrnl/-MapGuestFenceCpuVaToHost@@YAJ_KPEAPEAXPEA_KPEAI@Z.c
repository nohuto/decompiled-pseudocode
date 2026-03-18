/*
 * XREFs of ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C0219574
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00F4FA4 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C011F9F4 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C022560C (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C0248130 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapGuestFenceCpuVaToHost(unsigned __int64 a1, void **a2, unsigned __int64 *a3, unsigned int *a4)
{
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _MDL *Mdl; // rdi
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // r8d
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  ULONG_PTR RegionSize; // [rsp+68h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp+40h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  *a4 = 0;
  BaseAddress = 0LL;
  RegionSize = 4096LL;
  v8 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x801000u, 4u);
  v12 = v8;
  if ( v8 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v12;
  }
  Mdl = IoAllocateMdl(0LL, RegionSize, 0, 0, 0LL);
  if ( !Mdl )
  {
    v18 = WdLogNewEntry5_WdError(v15, v14, v17);
    LODWORD(v12) = -1073741801;
    *(_QWORD *)(v18 + 24) = -1073741801LL;
    *(_QWORD *)(v18 + 32) = 9788LL;
    WdLogEvent5_WdError(v18);
LABEL_12:
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return (unsigned int)v12;
  }
  v19 = 0;
  v20 = a1 >> 12;
  if ( (RegionSize & 0xFFFFFFFFFFFFF000uLL) != 0 )
  {
    v21 = 0LL;
    do
    {
      *((_QWORD *)&Mdl[1].Next + v21) = v20;
      ++v19;
      ++v20;
      v21 = v19;
    }
    while ( v19 < RegionSize >> 12 );
  }
  v22 = MmRotatePhysicalView(BaseAddress, &RegionSize, Mdl, MmToFrameBufferNoCopy, 0LL, 0LL);
  v12 = v22;
  if ( v22 >= 0 )
  {
    *a2 = BaseAddress;
    *a3 = a1;
    *a4 = 0;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v24, v23, v25);
    *(_QWORD *)(v26 + 24) = v12;
    *(_QWORD *)(v26 + 32) = 9803LL;
    WdLogEvent5_WdError(v26);
  }
  IoFreeMdl(Mdl);
  if ( (int)v12 < 0 )
    goto LABEL_12;
  return (unsigned int)v12;
}
