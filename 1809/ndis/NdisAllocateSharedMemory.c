/*
 * XREFs of NdisAllocateSharedMemory @ 0x1C0022590
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C003B564 (ndisFindReceiveQueueByQueueId.c)
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 *     ndisGetAnyProcInsideNode @ 0x1C00BB4B4 (ndisGetAnyProcInsideNode.c)
 */

NDIS_STATUS __stdcall NdisAllocateSharedMemory(
        NDIS_HANDLE NdisHandle,
        PNDIS_SHARED_MEMORY_PARAMETERS SharedMemoryParameters,
        PNDIS_HANDLE pAllocationHandle)
{
  _QWORD *v3; // r12
  _QWORD *v4; // r14
  __int64 v5; // r13
  _QWORD *v6; // rdi
  NDIS_STATUS v9; // ebx
  __int64 v10; // r15
  unsigned int v11; // eax
  _QWORD *PoolWithTag; // rax
  unsigned int PreferredNode; // ebx
  USHORT HighestNodeNumber; // ax
  __int64 v15; // r9
  void *v16; // rax
  KIRQL v17; // r9
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rax
  PVOID *v23; // r9
  int AnyProcInsideNode; // eax
  struct _KTHREAD *CurrentThread; // rcx
  UCHAR v27; // dl
  __int64 ReceiveQueueByQueueId; // rax
  KIRQL v29; // r10
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  void *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rdx
  _QWORD *v37; // rax
  char v38; // [rsp+30h] [rbp-50h]
  UCHAR v39[4]; // [rsp+34h] [rbp-4Ch]
  PVOID *v40; // [rsp+38h] [rbp-48h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp-40h] BYREF
  _PROCESSOR_NUMBER v42; // [rsp+48h] [rbp-38h] BYREF
  UCHAR Processor[4]; // [rsp+50h] [rbp-30h]
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-18h] BYREF

  v3 = 0LL;
  v40 = pAllocationHandle;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  *(_WORD *)&v39[2] = 0;
  v9 = -1073741637;
  v38 = 0;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  if ( (unsigned __int8)byte_1C00A0264 >= 4u )
  {
    WPP_SF_qD(21LL, &WPP_b7380f6131c0382fffce9713ea39f3ba_Traceguids, NdisHandle, SharedMemoryParameters->Length);
    pAllocationHandle = v40;
  }
  if ( !NdisHandle )
    goto LABEL_47;
  if ( *(_BYTE *)NdisHandle == 18 )
  {
    v4 = (_QWORD *)*((_QWORD *)NdisHandle + 2);
    v3 = NdisHandle;
  }
  else
  {
    if ( *(_BYTE *)NdisHandle != 17 )
    {
      v9 = -1073741811;
      goto LABEL_19;
    }
    v4 = NdisHandle;
  }
  *pAllocationHandle = 0LL;
  v10 = v4[63];
  v11 = SharedMemoryParameters->SGListBufferLength + 184;
  if ( v11 < 0xB8 )
  {
    v9 = -1073741811;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x6264444Eu);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xB8uLL);
      v6[7] = v4;
      v6[8] = v3;
      *((_OWORD *)v6 + 7) = *(_OWORD *)&SharedMemoryParameters->Header.Type;
      *((_OWORD *)v6 + 8) = *(_OWORD *)&SharedMemoryParameters->SharedMemoryHandle;
      *((_OWORD *)v6 + 9) = *(_OWORD *)&SharedMemoryParameters->Length;
      *((_OWORD *)v6 + 10) = *(_OWORD *)&SharedMemoryParameters->SGListBufferLength;
      v6[22] = *(_QWORD *)&SharedMemoryParameters->VPortId;
      v6[21] = v6 + 23;
      if ( SharedMemoryParameters->QueueId )
      {
        KeAcquireSpinLockRaiseToDpc(v4 + 12);
        v4[65] = KeGetCurrentThread();
        *((_DWORD *)v4 + 466) = 1836535;
        ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v4, SharedMemoryParameters->QueueId);
        v4[65] = 0LL;
        *((_DWORD *)v4 + 466) = 0;
        v5 = ReceiveQueueByQueueId;
        KeReleaseSpinLock(v4 + 12, v29);
      }
      else
      {
        v5 = v4[551];
      }
      if ( !v5 )
      {
        v9 = -1073741811;
LABEL_45:
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        goto LABEL_47;
      }
      v6[9] = v5;
      PreferredNode = SharedMemoryParameters->PreferredNode;
      HighestNodeNumber = KeQueryHighestNodeNumber();
      if ( PreferredNode != 0x80000000 )
      {
        if ( PreferredNode > HighestNodeNumber )
          PreferredNode = 0x80000000;
        if ( PreferredNode != 0x80000000 )
        {
          KeGetCurrentProcessorNumberEx(&ProcNumber);
          v39[2] = KeSetIdealProcessorThread(KeGetCurrentThread(), ProcNumber.Number);
          *(_WORD *)v39 = ProcNumber.Group;
          v42 = *(_PROCESSOR_NUMBER *)v39;
          if ( *(unsigned __int16 *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 20LL * KeGetProcessorIndexFromNumber(&v42) + 16) == PreferredNode )
          {
            CurrentThread = KeGetCurrentThread();
            v27 = v39[2];
          }
          else
          {
            v38 = 1;
            AnyProcInsideNode = ndisGetAnyProcInsideNode((unsigned __int16)PreferredNode);
            Affinity.Mask = -1LL;
            *(_DWORD *)Processor = AnyProcInsideNode;
            Affinity.Group = AnyProcInsideNode;
            KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
            CurrentThread = KeGetCurrentThread();
            v27 = Processor[2];
          }
          KeSetIdealProcessorThread(CurrentThread, v27);
        }
      }
      if ( SharedMemoryParameters->QueueId && !v3 && (v30 = *(_QWORD *)(v5 + 72)) != 0 && *(_QWORD *)(v30 + 776) )
      {
        v6[10] = *(_QWORD *)(v30 + 784);
        v31 = *(_QWORD *)(*(_QWORD *)(v5 + 72) + 792LL);
        v6[11] = v31;
        v9 = (*(__int64 (__fastcall **)(__int64, PNDIS_SHARED_MEMORY_PARAMETERS, _QWORD *))(*(_QWORD *)(v5 + 72) + 776LL))(
               v31,
               SharedMemoryParameters,
               v6 + 12);
        if ( v9 < 0 )
          goto LABEL_19;
        if ( (SharedMemoryParameters->Flags & 1) != 0 && SharedMemoryParameters->SGListBuffer->NumberOfElements > 1 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD))v6[10])(v6[11], v6[12]);
          goto LABEL_56;
        }
        memmove((void *)v6[21], SharedMemoryParameters->SGListBuffer, SharedMemoryParameters->SGListBufferLength);
        *((_DWORD *)v6 + 12) |= 4u;
      }
      else
      {
        if ( !v4[453] )
        {
          if ( v10 )
          {
            LOBYTE(v15) = 1;
            v16 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(*(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL)
                                                                                       + 16LL))(
                            *(_QWORD *)(v10 + 24),
                            SharedMemoryParameters->Length,
                            v6 + 13,
                            v15);
            SharedMemoryParameters->VirtualAddress = v16;
            if ( !v16 )
            {
LABEL_56:
              v9 = -1073741670;
              goto LABEL_19;
            }
            _InterlockedIncrement((volatile signed __int32 *)(v10 + 72));
            *((_DWORD *)v6 + 12) |= 1u;
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
            if ( !ContiguousNodeMemory )
              goto LABEL_56;
            PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
            *((_DWORD *)v6 + 12) |= 2u;
            v6[13] = PhysicalAddress.QuadPart;
          }
          v9 = 0;
          goto LABEL_19;
        }
        v6[10] = v4[454];
        v32 = v4[455];
        v6[11] = v32;
        v9 = ((__int64 (__fastcall *)(__int64, PNDIS_SHARED_MEMORY_PARAMETERS, _QWORD *))v4[453])(
               v32,
               SharedMemoryParameters,
               v6 + 12);
        if ( v9 >= 0 )
        {
          if ( (SharedMemoryParameters->Flags & 1) != 0 && SharedMemoryParameters->SGListBuffer->NumberOfElements > 1 )
          {
            ((void (__fastcall *)(_QWORD, _QWORD))v4[454])(v6[11], v6[12]);
            goto LABEL_56;
          }
          memmove((void *)v6[21], SharedMemoryParameters->SGListBuffer, SharedMemoryParameters->SGListBufferLength);
          *((_DWORD *)v6 + 12) |= 8u;
        }
      }
LABEL_19:
      if ( v38 )
      {
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        KeSetIdealProcessorThread(KeGetCurrentThread(), v39[2]);
      }
      if ( v9 >= 0 )
      {
        v6[19] = SharedMemoryParameters->VirtualAddress;
        if ( (v6[6] & 3) != 0 )
        {
          if ( SharedMemoryParameters->SGListBufferLength >= 0x28 )
          {
            SharedMemoryParameters->SGListBuffer->NumberOfElements = 1;
            SharedMemoryParameters->SGListBuffer->Elements[0].Address.QuadPart = v6[13];
            SharedMemoryParameters->SGListBuffer->Elements[0].Length = SharedMemoryParameters->Length;
          }
          SharedMemoryParameters->SharedMemoryHandle = 0LL;
        }
        v17 = KeAcquireSpinLockRaiseToDpc(v4 + 12);
        v4[65] = KeGetCurrentThread();
        v18 = v4 + 451;
        *((_DWORD *)v4 + 466) = 1836789;
        v19 = v4[451];
        if ( *(_QWORD **)(v19 + 8) == v4 + 451 )
        {
          *v6 = v19;
          v6[1] = v18;
          *(_QWORD *)(v19 + 8) = v6;
          *v18 = v6;
          if ( v3 )
          {
            v35 = v3 + 95;
            v36 = v3[95];
            v37 = v6 + 2;
            if ( *(_QWORD **)(v36 + 8) != v3 + 95 )
              goto LABEL_67;
            *v37 = v36;
            v6[3] = v35;
            *(_QWORD *)(v36 + 8) = v37;
            *v35 = v37;
          }
          v20 = (_QWORD *)(v5 + 88);
          v21 = *(_QWORD *)(v5 + 88);
          v22 = v6 + 4;
          if ( *(_QWORD *)(v21 + 8) == v5 + 88 )
          {
            v6[5] = v20;
            *v22 = v21;
            *(_QWORD *)(v21 + 8) = v22;
            *v20 = v22;
            v4[65] = 0LL;
            *((_DWORD *)v4 + 466) = 0;
            KeReleaseSpinLock(v4 + 12, v17);
            v23 = v40;
            *v40 = v6;
            goto LABEL_30;
          }
        }
LABEL_67:
        __fastfail(3u);
      }
      goto LABEL_45;
    }
    v9 = -1073741670;
  }
LABEL_47:
  v23 = v40;
LABEL_30:
  if ( (unsigned __int8)byte_1C00A0264 >= 4u )
    WPP_SF_dq(22LL, &WPP_b7380f6131c0382fffce9713ea39f3ba_Traceguids, (unsigned int)v9, *v23);
  return v9;
}
