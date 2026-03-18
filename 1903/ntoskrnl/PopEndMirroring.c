/*
 * XREFs of PopEndMirroring @ 0x140599140
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400F8850 (KeSetSystemGroupAffinityThread.c)
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopInvokeSystemStateHandler @ 0x140598740 (PopInvokeSystemStateHandler.c)
 *     PopBuildMemoryImageHeader @ 0x14059B168 (PopBuildMemoryImageHeader.c)
 *     EtwKernelMemoryRundown @ 0x1408F3B40 (EtwKernelMemoryRundown.c)
 */

__int64 __fastcall PopEndMirroring(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rsi
  int v2; // ebx
  unsigned __int8 CurrentIrql; // cl
  int v4; // edi
  unsigned int v5; // eax
  bool v6; // zf
  unsigned int v7; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int16 *v12[2]; // [rsp+48h] [rbp-19h] BYREF
  __int16 v13; // [rsp+58h] [rbp-9h]
  int v14; // [rsp+5Ah] [rbp-7h]
  __int16 v15; // [rsp+5Eh] [rbp-3h]
  struct _KDPC Dpc; // [rsp+68h] [rbp+7h] BYREF
  int v17; // [rsp+C8h] [rbp+67h] BYREF

  v1 = (unsigned int)BugCheckParameter3;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  v14 = 0;
  v15 = 0;
  memset(&Dpc, 0, sizeof(Dpc));
  if ( !(_DWORD)v1 )
  {
    if ( (BYTE4(xmmword_140572410) & 1) != 0 )
      EtwKernelMemoryRundown();
    KeSetEvent(PopSleeperHandoff, 0, 1u);
    KeWaitForSingleObject(&PopSleeperHandoff[1], Executive, 0, 0, 0LL);
    v2 = PopBuildMemoryImageHeader((PVOID)qword_140443080);
    if ( v2 >= 0 )
    {
      Affinity.Reserved[1] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
      Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
      Affinity.Reserved[2] = 0;
      KeSetSystemGroupAffinityThread(&Affinity, 0LL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      memset(&PopHibernateSystemContext, 0, 0x50uLL);
      dword_140468080 = KeNumberProcessors_0;
      HIDWORD(qword_140468088) = KeNumberProcessors_0;
      LODWORD(qword_140468088) = 1;
      if ( ((unsigned __int8)&SListHead & 0xF) != 0 )
        RtlRaiseStatus(-2147483646);
      SListHead = 0uLL;
      KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopInvokeStateHandlerTargetProcessor, &PopHibernateSystemContext);
      v12[1] = (unsigned __int16 *)qword_140572748[0];
      v12[0] = (unsigned __int16 *)KeActiveProcessors;
      Dpc.Importance = 2;
      v13 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v17, v12) )
      {
        if ( v17 )
        {
          v4 = dword_140468084;
          if ( !Dpc.DpcData )
            Dpc.Number = v17 + 1280;
          KeInsertQueueDpc(&Dpc, 0LL, 0LL);
          while ( v4 == dword_140468084 )
            ;
        }
      }
      goto LABEL_19;
    }
    goto LABEL_23;
  }
  if ( (_DWORD)v1 != 1 )
  {
    v2 = -1073741823;
    goto LABEL_23;
  }
  v2 = *(_DWORD *)(qword_140443080 + 188);
  if ( v2 < 0 || (v2 = PopInvokeSystemStateHandler(PopHibernatePowerStateHandlerType, qword_140443080), v2 < 0) )
  {
LABEL_23:
    IoAddTriageDumpDataBlock((ULONG)&PopAction, (PVOID)0x1C0);
    if ( *(_QWORD *)&qword_140443078 )
      IoAddTriageDumpDataBlock(qword_140443078, (PVOID)0x1D8);
    if ( qword_140443080 )
    {
      IoAddTriageDumpDataBlock(qword_140443080, (PVOID)0x1C8);
      v9 = *(_QWORD *)(qword_140443080 + 168);
      if ( v9 )
        IoAddTriageDumpDataBlock(v9, (PVOID)0x178);
      v10 = *(_QWORD *)(qword_140443080 + 200);
      if ( v10 )
        IoAddTriageDumpDataBlock(v10, (PVOID)0x3E0);
    }
    KeBugCheckEx(0xA0u, 9uLL, v2, v1, 0LL);
  }
  if ( PoResumeFromHibernate )
    v2 = 1073742484;
LABEL_19:
  v5 = v2;
  v6 = v2 == 1073742484;
  v7 = 0;
  if ( v6 )
    return v5;
  return v7;
}
