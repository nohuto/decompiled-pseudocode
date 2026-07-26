/*
 * XREFs of ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C0065C7C
 * Callers:
 *     ndisInterruptDpc @ 0x1C0006B20 (ndisInterruptDpc.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C00151C8 (ndisReferenceMiniportNoCheck.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C004F05C (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C006D158 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 */

void __fastcall ndisQueueDpcWorkItem(struct _KDPC *a1, void *a2, void *a3, void *a4, char a5)
{
  __int64 v5; // rsi
  unsigned int Number; // r14d
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  _QWORD WnodeEventItem[6]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *((_QWORD *)a2 + 12);
  Number = KeGetPcr()->Prcb.Number;
  if ( (*(_DWORD *)(v5 + 48) & 0x800000) != 0 )
  {
    v11 = *(_QWORD *)(v5 + 40) + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v11 + 288);
  }
  ndisReferenceMiniportNoCheck(v5, 0x4Du);
  v12 = *((_QWORD *)a2 + 27)
      + 80LL * (Number + ndisMaxNumberOfProcessors * (*((_BYTE *)a2 + 193) != 0 ? (unsigned int)a3 : 0));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 72));
  if ( (*(_DWORD *)(v12 + 68) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)a2 + 26);
    ndisDereferenceMiniport(v5, 0x4Du);
  }
  else
  {
    *(_QWORD *)(v12 + 32) = a1;
    *(_QWORD *)(v12 + 40) = a2;
    *(_QWORD *)(v12 + 48) = a3;
    *(_QWORD *)(v12 + 56) = a4;
    *(_DWORD *)(v12 + 64) = Number;
    *(_DWORD *)(v12 + 68) = 1;
    if ( a5 )
    {
      v13 = 1;
      if ( HIBYTE(word_1C00A209C) )
      {
        memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
        HIDWORD(WnodeEventItem[5]) = 0x20000;
        LOWORD(WnodeEventItem[0]) = 48;
        WnodeEventItem[1] = qword_1C00A2090;
        *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
        BYTE4(WnodeEventItem[0]) = 24;
        IoWMIWriteEvent(WnodeEventItem);
        v13 = *(_DWORD *)(v12 + 68);
      }
      *(_DWORD *)(v12 + 68) = v13 | 2;
      ndisInsertInWorkQueue(
        (struct _KSEMAPHORE *)WPP_MAIN_CB.Dpc.DeferredRoutine + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
        (struct _WORK_QUEUE_ITEM *)v12,
        1);
      ndisQueuePeriodicReceivesTimer();
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v12, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    }
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v12 + 72));
}
