/*
 * XREFs of ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C01E9C44
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00AD028 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00E7998 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01F55F8 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C02145E4 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapGuestFenceCpuVaToHost(unsigned __int64 a1, void **a2, unsigned __int64 *a3, unsigned int *a4)
{
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct _MDL *Mdl; // rdi
  __int64 v14; // rax
  unsigned int v15; // r8d
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  ULONG_PTR RegionSize; // [rsp+68h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp+40h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  *a4 = 0;
  BaseAddress = 0LL;
  RegionSize = 4096LL;
  v8 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x801000u, 4u);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdError(v11);
    return (unsigned int)v10;
  }
  Mdl = IoAllocateMdl(0LL, RegionSize, 0, 0, 0LL);
  if ( !Mdl )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    LODWORD(v10) = -1073741801;
    *(_QWORD *)(v14 + 24) = -1073741801LL;
    *(_QWORD *)(v14 + 32) = 9822LL;
    WdLogEvent5_WdError(v14);
LABEL_12:
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return (unsigned int)v10;
  }
  v15 = 0;
  v16 = a1 >> 12;
  if ( (RegionSize & 0xFFFFFFFFFFFFF000uLL) != 0 )
  {
    v17 = 0LL;
    do
    {
      *((_QWORD *)&Mdl[1].Next + v17) = v16;
      ++v15;
      ++v16;
      v17 = v15;
    }
    while ( v15 < RegionSize >> 12 );
  }
  v18 = MmRotatePhysicalView(BaseAddress, &RegionSize, Mdl, MmToFrameBufferNoCopy, 0LL, 0LL);
  v10 = v18;
  if ( v18 >= 0 )
  {
    *a2 = BaseAddress;
    *a3 = a1;
    *a4 = 0;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v20 + 24) = v10;
    *(_QWORD *)(v20 + 32) = 9837LL;
    WdLogEvent5_WdError(v20);
  }
  IoFreeMdl(Mdl);
  if ( (int)v10 < 0 )
    goto LABEL_12;
  return (unsigned int)v10;
}
