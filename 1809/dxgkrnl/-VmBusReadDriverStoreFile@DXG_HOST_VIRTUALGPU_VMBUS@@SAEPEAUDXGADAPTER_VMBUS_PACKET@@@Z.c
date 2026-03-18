/*
 * XREFs of ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F2540
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003656C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     MapGpadl @ 0x1C01FAE00 (MapGpadl.c)
 *     UnmapGpadl @ 0x1C01FAF80 (UnmapGpadl.c)
 *     ?ReadCurrentFile@CDriverStoreCopy@@QEAAJPEAX_KK@Z @ 0x1C02097B4 (-ReadCurrentFile@CDriverStoreCopy@@QEAAJPEAX_KK@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusReadDriverStoreFile(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rsi
  struct _KTHREAD **v6; // rdx
  PMDL v7; // r10
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  PVOID MappedSystemVa; // rax
  _BYTE v12[24]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v13[24]; // [rsp+48h] [rbp-18h] BYREF
  int CurrentFile; // [rsp+80h] [rbp+20h] BYREF
  PMDL MemoryDescriptorList; // [rsp+88h] [rbp+28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v13,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 4495LL;
    WdLogEvent5_WdError(v4);
    goto LABEL_20;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v5 )
    goto LABEL_20;
  v6 = (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 56LL);
  MemoryDescriptorList = 0LL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v12, v6);
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL) )
  {
    CurrentFile = -1073741811;
LABEL_16:
    v7 = MemoryDescriptorList;
    goto LABEL_17;
  }
  CurrentFile = MapGpadl(
                  *((_QWORD *)a1 + 7),
                  *(unsigned int *)(v5 + 36),
                  *(unsigned int *)(v5 + 32),
                  &MemoryDescriptorList);
  if ( CurrentFile < 0 )
    goto LABEL_16;
  v7 = MemoryDescriptorList;
  v8 = *(unsigned int *)(v5 + 32);
  if ( (unsigned int)v8 > MemoryDescriptorList->ByteCount )
    goto LABEL_17;
  v9 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL) + 1584LL);
  if ( v8 > v9 || *(_QWORD *)(v5 + 24) > v9 - v8 )
    goto LABEL_17;
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
  {
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
  }
  else
  {
    MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    v7 = MemoryDescriptorList;
  }
  if ( MappedSystemVa )
  {
    CurrentFile = CDriverStoreCopy::ReadCurrentFile(
                    *(CDriverStoreCopy **)(*((_QWORD *)a1 + 5) + 256LL),
                    MappedSystemVa,
                    *(_QWORD *)(v5 + 24),
                    *(_DWORD *)(v5 + 32));
    goto LABEL_16;
  }
  CurrentFile = -1073741801;
LABEL_17:
  if ( v7 )
    UnmapGpadl(*((_QWORD *)a1 + 7), *(unsigned int *)(v5 + 36), *(unsigned int *)(v5 + 32));
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &CurrentFile, 4u);
  v3 = 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
LABEL_20:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v3;
}
