/*
 * XREFs of NdisAllocateSharedMemory @ 0x1C00357F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C005F4B8 (ndisFindReceiveQueueByQueueId.c)
 */

NDIS_STATUS __stdcall NdisAllocateSharedMemory(
        NDIS_HANDLE NdisHandle,
        PNDIS_SHARED_MEMORY_PARAMETERS SharedMemoryParameters,
        PNDIS_HANDLE pAllocationHandle)
{
  _QWORD *v3; // r13
  KSPIN_LOCK *v4; // r14
  __int64 v5; // r12
  _LARGE_INTEGER *v6; // rdi
  int v9; // ebx
  const struct _GUID *v10; // rdx
  NDIS_HANDLE v11; // rbx
  KSPIN_LOCK v12; // r13
  unsigned int v13; // eax
  _LARGE_INTEGER *PoolWithTag; // rax
  unsigned int PreferredNode; // ebx
  USHORT HighestNodeNumber; // ax
  __int64 v17; // r9
  void *v18; // rax
  KIRQL v19; // r9
  _LARGE_INTEGER **v20; // rcx
  LONGLONG v21; // rdx
  _LARGE_INTEGER **v22; // rdx
  LONGLONG v23; // r8
  _LARGE_INTEGER *v24; // rax
  PVOID *v25; // rax
  UCHAR v27; // r15
  unsigned __int64 Mask; // rax
  __int64 ReceiveQueueByQueueId; // rax
  KIRQL v30; // r10
  _LARGE_INTEGER *v31; // rax
  _LARGE_INTEGER v32; // rcx
  _LARGE_INTEGER v33; // rcx
  void *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _LARGE_INTEGER **v36; // rcx
  LONGLONG v37; // rdx
  _LARGE_INTEGER *v38; // rax
  char v39; // [rsp+40h] [rbp-49h]
  _QWORD *v40; // [rsp+48h] [rbp-41h]
  UCHAR Processor[4]; // [rsp+50h] [rbp-39h]
  USHORT Count; // [rsp+54h] [rbp-35h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+58h] [rbp-31h] BYREF
  PVOID *v44; // [rsp+60h] [rbp-29h]
  _PROCESSOR_NUMBER v45; // [rsp+68h] [rbp-21h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+70h] [rbp-19h] BYREF
  _GROUP_AFFINITY v47; // [rsp+80h] [rbp-9h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp+7h] BYREF

  v44 = pAllocationHandle;
  v3 = 0LL;
  v40 = 0LL;
  v4 = 0LL;
  ProcNumber = 0;
  v5 = 0LL;
  *(_WORD *)&Processor[2] = 0;
  v6 = 0LL;
  v39 = 0;
  v47.Mask = 0LL;
  *(_QWORD *)&v47.Group = 0LL;
  PreviousAffinity.Mask = 0LL;
  v9 = -1073741637;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  v10 = &WPP_7e4e4e2c73163f40df239693cce6d855_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v10,
      21,
      21,
      (struct _GUID *)&WPP_7e4e4e2c73163f40df239693cce6d855_Traceguids,
      (char)NdisHandle,
      SharedMemoryParameters->Length);
    pAllocationHandle = v44;
  }
  if ( !NdisHandle )
    goto LABEL_50;
  if ( *(_BYTE *)NdisHandle == 18 )
  {
    v4 = (KSPIN_LOCK *)*((_QWORD *)NdisHandle + 2);
    v11 = NdisHandle;
    v40 = NdisHandle;
  }
  else
  {
    if ( *(_BYTE *)NdisHandle != 17 )
    {
      v9 = -1073741811;
LABEL_20:
      if ( v39 )
      {
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        KeSetIdealProcessorThread(KeGetCurrentThread(), Processor[2]);
      }
      if ( v9 >= 0 )
      {
        v6[19] = (_LARGE_INTEGER)SharedMemoryParameters->VirtualAddress;
        if ( (v6[6].LowPart & 3) != 0 )
        {
          if ( SharedMemoryParameters->SGListBufferLength >= 0x28 )
          {
            SharedMemoryParameters->SGListBuffer->NumberOfElements = 1;
            SharedMemoryParameters->SGListBuffer->Elements[0].Address = v6[13];
            SharedMemoryParameters->SGListBuffer->Elements[0].Length = SharedMemoryParameters->Length;
          }
          SharedMemoryParameters->SharedMemoryHandle = 0LL;
        }
        v19 = KeAcquireSpinLockRaiseToDpc(v4 + 12);
        v4[65] = (KSPIN_LOCK)KeGetCurrentThread();
        v20 = (_LARGE_INTEGER **)(v4 + 448);
        v21 = v4[448];
        if ( *(KSPIN_LOCK **)(v21 + 8) == v4 + 448 )
        {
          v6->QuadPart = v21;
          v6[1].QuadPart = (LONGLONG)v20;
          *(_QWORD *)(v21 + 8) = v6;
          *v20 = v6;
          if ( v3 )
          {
            v36 = (_LARGE_INTEGER **)(v3 + 95);
            v37 = v3[95];
            v38 = v6 + 2;
            if ( *(_QWORD **)(v37 + 8) != v3 + 95 )
              goto LABEL_74;
            v38->QuadPart = v37;
            v6[3].QuadPart = (LONGLONG)v36;
            *(_QWORD *)(v37 + 8) = v38;
            *v36 = v38;
          }
          v22 = (_LARGE_INTEGER **)(v5 + 88);
          v23 = *(_QWORD *)(v5 + 88);
          v24 = v6 + 4;
          if ( *(_QWORD *)(v23 + 8) == v5 + 88 )
          {
            v6[5].QuadPart = (LONGLONG)v22;
            v24->QuadPart = v23;
            *(_QWORD *)(v23 + 8) = v24;
            *v22 = v24;
            v4[65] = 0LL;
            KeReleaseSpinLock(v4 + 12, v19);
            v25 = v44;
            *v44 = v6;
            goto LABEL_31;
          }
        }
LABEL_74:
        __fastfail(3u);
      }
      goto LABEL_48;
    }
    v4 = (KSPIN_LOCK *)NdisHandle;
    v11 = 0LL;
  }
  *pAllocationHandle = 0LL;
  v12 = v4[63];
  v13 = SharedMemoryParameters->SGListBufferLength + 184;
  if ( v13 < 0xB8 )
  {
    v9 = -1073741811;
  }
  else
  {
    PoolWithTag = (_LARGE_INTEGER *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x6264444Eu);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xB8uLL);
      v6[7].QuadPart = (LONGLONG)v4;
      v6[8].QuadPart = (LONGLONG)v11;
      *(_OWORD *)&v6[14].LowPart = *(_OWORD *)&SharedMemoryParameters->Header.Type;
      *(_OWORD *)&v6[16].LowPart = *(_OWORD *)&SharedMemoryParameters->SharedMemoryHandle;
      *(_OWORD *)&v6[18].LowPart = *(_OWORD *)&SharedMemoryParameters->Length;
      *(_OWORD *)&v6[20].LowPart = *(_OWORD *)&SharedMemoryParameters->SGListBufferLength;
      v6[22] = *(_LARGE_INTEGER *)&SharedMemoryParameters->VPortId;
      v6[21].QuadPart = (LONGLONG)&v6[23];
      if ( SharedMemoryParameters->QueueId )
      {
        KeAcquireSpinLockRaiseToDpc(v4 + 12);
        v4[65] = (KSPIN_LOCK)KeGetCurrentThread();
        ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v4, SharedMemoryParameters->QueueId);
        v4[65] = 0LL;
        v5 = ReceiveQueueByQueueId;
        KeReleaseSpinLock(v4 + 12, v30);
      }
      else
      {
        v5 = v4[546];
      }
      if ( !v5 )
      {
        v9 = -1073741811;
LABEL_48:
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        goto LABEL_50;
      }
      v6[9].QuadPart = v5;
      PreferredNode = SharedMemoryParameters->PreferredNode;
      HighestNodeNumber = KeQueryHighestNodeNumber();
      if ( PreferredNode != 0x80000000 )
      {
        if ( PreferredNode > HighestNodeNumber )
          PreferredNode = 0x80000000;
        if ( PreferredNode != 0x80000000 )
        {
          KeGetCurrentProcessorNumberEx(&ProcNumber);
          v27 = KeSetIdealProcessorThread(KeGetCurrentThread(), ProcNumber.Number);
          *(_WORD *)Processor = ProcNumber.Group;
          Processor[2] = v27;
          v45 = *(_PROCESSOR_NUMBER *)Processor;
          if ( *((unsigned __int16 *)&WPP_MAIN_CB.Queue.ListEntry.Blink[1].Flink
               + 10 * KeGetProcessorIndexFromNumber(&v45)) != PreferredNode )
          {
            v39 = 1;
            Affinity.Mask = 0LL;
            *(_QWORD *)&Affinity.Group = 0LL;
            KeQueryNodeActiveAffinity(PreferredNode, &Affinity, &Count);
            v27 = 0;
            if ( Count )
            {
              Mask = Affinity.Mask;
              if ( (Affinity.Mask & 1) == 0 )
              {
                do
                {
                  ++v27;
                  Mask >>= 1;
                }
                while ( (Mask & 1) == 0 );
                Affinity.Mask = Mask;
              }
            }
            else
            {
              v27 = -1;
            }
            v47.Mask = -1LL;
            v47.Group = Affinity.Group;
            KeSetSystemGroupAffinityThread(&v47, &PreviousAffinity);
          }
          KeSetIdealProcessorThread(KeGetCurrentThread(), v27);
        }
      }
      if ( SharedMemoryParameters->QueueId )
      {
        if ( !v40 )
        {
          v31 = *(_LARGE_INTEGER **)(v5 + 72);
          if ( v31 )
          {
            if ( v31[97].QuadPart )
            {
              v6[10] = v31[98];
              v32 = *(_LARGE_INTEGER *)(*(_QWORD *)(v5 + 72) + 792LL);
              v6[11] = v32;
              v9 = (*(__int64 (__fastcall **)(_LARGE_INTEGER, PNDIS_SHARED_MEMORY_PARAMETERS, _LARGE_INTEGER *))(*(_QWORD *)(v5 + 72) + 776LL))(
                     v32,
                     SharedMemoryParameters,
                     v6 + 12);
              if ( v9 >= 0 )
              {
                if ( (SharedMemoryParameters->Flags & 1) != 0
                  && SharedMemoryParameters->SGListBuffer->NumberOfElements > 1 )
                {
                  ((void (__fastcall *)(_QWORD, _QWORD))v6[10].QuadPart)(
                    (_LARGE_INTEGER)v6[11].QuadPart,
                    (_LARGE_INTEGER)v6[12].QuadPart);
LABEL_61:
                  v9 = -1073741670;
                  goto LABEL_19;
                }
                memmove(
                  (void *)v6[21].QuadPart,
                  SharedMemoryParameters->SGListBuffer,
                  SharedMemoryParameters->SGListBufferLength);
                v6[6].LowPart |= 4u;
              }
              goto LABEL_19;
            }
          }
        }
      }
      if ( v4[450] )
      {
        v6[10].QuadPart = v4[451];
        v33.QuadPart = v4[452];
        v6[11] = v33;
        v9 = ((__int64 (__fastcall *)(_QWORD, PNDIS_SHARED_MEMORY_PARAMETERS, __int64))v4[450])(
               (_LARGE_INTEGER)v33.QuadPart,
               SharedMemoryParameters,
               &v6[12]);
        if ( v9 < 0 )
          goto LABEL_19;
        if ( (SharedMemoryParameters->Flags & 1) != 0 && SharedMemoryParameters->SGListBuffer->NumberOfElements > 1 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD))v4[451])(
            (_LARGE_INTEGER)v6[11].QuadPart,
            (_LARGE_INTEGER)v6[12].QuadPart);
          goto LABEL_61;
        }
        memmove(
          (void *)v6[21].QuadPart,
          SharedMemoryParameters->SGListBuffer,
          SharedMemoryParameters->SGListBufferLength);
        v6[6].LowPart |= 8u;
LABEL_19:
        v3 = v40;
        goto LABEL_20;
      }
      if ( v12 )
      {
        LOBYTE(v17) = 1;
        v18 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _LARGE_INTEGER *, __int64))(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL)
                                                                                           + 16LL))(
                        *(_QWORD *)(v12 + 24),
                        SharedMemoryParameters->Length,
                        v6 + 13,
                        v17);
        SharedMemoryParameters->VirtualAddress = v18;
        if ( v18 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 72));
          v6[6].LowPart |= 1u;
LABEL_18:
          v9 = 0;
          goto LABEL_19;
        }
      }
      else
      {
        ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(
                                         SharedMemoryParameters->Length,
                                         0LL,
                                         -1LL,
                                         0LL,
                                         4,
                                         PreferredNode);
        SharedMemoryParameters->VirtualAddress = ContiguousNodeMemory;
        if ( ContiguousNodeMemory )
        {
          PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
          v6[6].LowPart |= 2u;
          v6[13] = PhysicalAddress;
          goto LABEL_18;
        }
      }
      v9 = -1073741670;
      goto LABEL_19;
    }
    v9 = -1073741670;
  }
LABEL_50:
  v25 = v44;
LABEL_31:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x16u,
      (struct _GUID *)&WPP_7e4e4e2c73163f40df239693cce6d855_Traceguids,
      v9,
      *v25);
  return v9;
}
