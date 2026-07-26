/*
 * XREFs of ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C00A0B8C
 * Callers:
 *     ?ndisInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C000F160 (-ndisInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003BBAC (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C007C208 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C00ADF7C (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 */

void __fastcall ndisQueueDpcWorkItem(struct _KDPC *a1, void *a2, void *a3, void *a4, char a5)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rsi
  unsigned int Number; // r15d
  unsigned int CurrentCpu; // edx
  __int64 v11; // rbx
  int v12; // eax
  NDIS_PCW_CONTEXT v13; // [rsp+20h] [rbp-50h] BYREF
  _QWORD WnodeEventItem[7]; // [rsp+38h] [rbp-38h] BYREF

  v5 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a2 + 12);
  Number = KeGetPcr()->Prcb.Number;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT(&v13, v5);
  if ( (v13.DatapathEventsMask & 0x800000) != 0 )
  {
    CurrentCpu = v13.CurrentCpu;
    if ( v13.CurrentCpu == -1 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      v13.CurrentCpu = CurrentCpu;
    }
    ++*(_QWORD *)((char *)&v13.PcwBlock[1].DatapathEventReferences[8]
                + CurrentCpu * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData);
  }
  ndisReferenceMiniportNoCheck((__int64)v5, 0x4Du);
  v11 = *((_QWORD *)a2 + 27)
      + 80LL * (Number + ndisMaxNumberOfProcessors * (*((_BYTE *)a2 + 193) != 0 ? (unsigned int)a3 : 0));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 72));
  if ( (*(_DWORD *)(v11 + 68) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)a2 + 26);
    ndisDereferenceMiniport((__int64)v5, 0x4Du);
  }
  else
  {
    *(_QWORD *)(v11 + 32) = a1;
    *(_QWORD *)(v11 + 40) = a2;
    *(_QWORD *)(v11 + 48) = a3;
    *(_QWORD *)(v11 + 56) = a4;
    *(_DWORD *)(v11 + 64) = Number;
    *(_DWORD *)(v11 + 68) = 1;
    if ( a5 )
    {
      v12 = 1;
      if ( HIBYTE(word_1C00E809C) )
      {
        memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
        HIDWORD(WnodeEventItem[5]) = 0x20000;
        LOWORD(WnodeEventItem[0]) = 48;
        WnodeEventItem[1] = qword_1C00E8090;
        *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
        BYTE4(WnodeEventItem[0]) = 24;
        IoWMIWriteEvent(WnodeEventItem);
        v12 = *(_DWORD *)(v11 + 68);
      }
      *(_DWORD *)(v11 + 68) = v12 | 2;
      ndisInsertInWorkQueue(
        (struct _KSEMAPHORE *)WPP_MAIN_CB.Dpc.DeferredRoutine + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
        (struct _WORK_QUEUE_ITEM *)v11,
        1);
      ndisQueuePeriodicReceivesTimer();
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v11, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    }
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v11 + 72));
}
