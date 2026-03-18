/*
 * XREFs of ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0222210
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C954 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     MapGpadl @ 0x1C022B060 (MapGpadl.c)
 *     UnmapGpadl @ 0x1C022B250 (UnmapGpadl.c)
 *     ?ReadCurrentFile@CDriverStoreCopy@@QEAAJPEAX_KK@Z @ 0x1C023C01C (-ReadCurrentFile@CDriverStoreCopy@@QEAAJPEAX_KK@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusReadDriverStoreFile(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rsi
  struct _KTHREAD **v8; // rdx
  PMDL v9; // r10
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  PVOID MappedSystemVa; // rax
  _BYTE v14[24]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v15[24]; // [rsp+48h] [rbp-18h] BYREF
  int CurrentFile; // [rsp+80h] [rbp+20h] BYREF
  PMDL MemoryDescriptorList; // [rsp+88h] [rbp+28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v15,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 4436LL;
    WdLogEvent5_WdError(v6);
    goto LABEL_20;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v7 )
    goto LABEL_20;
  v8 = (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 56LL);
  MemoryDescriptorList = 0LL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v14, v8);
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL) )
  {
    CurrentFile = -1073741811;
LABEL_16:
    v9 = MemoryDescriptorList;
    goto LABEL_17;
  }
  CurrentFile = MapGpadl(
                  *((_QWORD *)a1 + 7),
                  *(unsigned int *)(v7 + 36),
                  *(unsigned int *)(v7 + 32),
                  &MemoryDescriptorList);
  if ( CurrentFile < 0 )
    goto LABEL_16;
  v9 = MemoryDescriptorList;
  v10 = *(unsigned int *)(v7 + 32);
  if ( (unsigned int)v10 > MemoryDescriptorList->ByteCount )
    goto LABEL_17;
  v11 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL) + 1584LL);
  if ( v10 > v11 || *(_QWORD *)(v7 + 24) > v11 - v10 )
    goto LABEL_17;
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
  {
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
  }
  else
  {
    MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    v9 = MemoryDescriptorList;
  }
  if ( MappedSystemVa )
  {
    CurrentFile = CDriverStoreCopy::ReadCurrentFile(
                    *(CDriverStoreCopy **)(*((_QWORD *)a1 + 5) + 256LL),
                    MappedSystemVa,
                    *(_QWORD *)(v7 + 24),
                    *(_DWORD *)(v7 + 32));
    goto LABEL_16;
  }
  CurrentFile = -1073741801;
LABEL_17:
  if ( v9 )
    UnmapGpadl(*((_QWORD *)a1 + 7), *(unsigned int *)(v7 + 36), *(unsigned int *)(v7 + 32));
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &CurrentFile, 4u);
  v5 = 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
LABEL_20:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v5;
}
