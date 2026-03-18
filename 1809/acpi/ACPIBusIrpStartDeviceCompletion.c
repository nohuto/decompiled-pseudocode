/*
 * XREFs of ACPIBusIrpStartDeviceCompletion @ 0x1C002F7C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00028B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPICheckModuleStarted @ 0x1C0056AAC (ACPICheckModuleStarted.c)
 */

void __fastcall ACPIBusIrpStartDeviceCompletion(__int64 a1, IRP *a2, int a3)
{
  struct _WORK_QUEUE_ITEM *v4; // rdi
  unsigned __int8 MinorFunction; // r14
  __int64 v8; // rcx
  KIRQL v9; // al
  _QWORD *i; // r8
  __int64 v11; // rax
  const char *v12; // rcx
  const char *v13; // rdx
  __int64 v14; // rax

  v4 = (struct _WORK_QUEUE_ITEM *)(a1 + 32);
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  a2->IoStatus.Status = a3;
  if ( a3 >= 0 )
  {
    *(_QWORD *)(a1 + 952) |= 0x80000uLL;
    *(_DWORD *)(a1 + 320) = 2;
  }
  if ( (*(_QWORD *)(a1 + 8) & 0x2000000000LL) != 0 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    if ( !*(_BYTE *)(a1 + 185) )
    {
      for ( i = *(_QWORD **)(a1 + 752); i != (_QWORD *)(a1 + 752); i = (_QWORD *)*i )
      {
        if ( (*(i - 95) & 0x2000000000LL) != 0 )
          *((_BYTE *)i - 583) = 0;
      }
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
    v8 = a1;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 744);
    if ( (*(_QWORD *)(v8 + 8) & 0x2000000000LL) == 0 )
      goto LABEL_5;
  }
  ACPICheckModuleStarted(v8, (unsigned int)a3);
LABEL_5:
  if ( a3 < 0 )
  {
    IofCompleteRequest(a2, 0);
    v11 = *(_QWORD *)(a1 + 8);
    v12 = (const char *)&unk_1C006E28A;
    v13 = (const char *)&unk_1C006E28A;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(a1 + 560);
      if ( (v11 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(a1 + 568);
    }
    v14 = MinorFunction;
    if ( MinorFunction >= 0x1Au )
      v14 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x3Cu,
      (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
      (char)a2,
      ACPIDispatchPnpTableNames[v14],
      a3,
      a1,
      v12,
      v13);
  }
  else
  {
    v4->List.Flink = 0LL;
    v4->WorkerRoutine = (void (__fastcall *)(void *))ACPIBusIrpStartDeviceWorker;
    v4->Parameter = v4;
    v4[1].List.Flink = *(_LIST_ENTRY **)(a1 + 720);
    v4[1].List.Blink = (_LIST_ENTRY *)a2;
    ExQueueWorkItem(v4, DelayedWorkQueue);
  }
}
