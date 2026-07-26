/*
 * XREFs of NdisMQueueDpcEx @ 0x1C00A0F00
 * Callers:
 *     ?ndisMiniportIsr@@YAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C00A0A70 (-ndisMiniportIsr@@YAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     NdisMQueueDpc @ 0x1C00A0ED0 (NdisMQueueDpc.c)
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003BBAC (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

KAFFINITY __stdcall NdisMQueueDpcEx(
        NDIS_HANDLE NdisInterruptHandle,
        ULONG MessageId,
        PGROUP_AFFINITY TargetProcessors,
        PVOID MiniportDpcContext)
{
  __int64 v6; // r14
  unsigned int Number; // r12d
  int v8; // r9d
  KAFFINITY v9; // r10
  unsigned __int64 v10; // rdi
  unsigned __int16 Group; // ax
  KAFFINITY v12; // rbp
  unsigned __int64 Mask; // rsi
  unsigned int v14; // r15d
  unsigned __int64 v15; // r13
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int CurrentCpu; // ecx
  NDIS_PCW_CONTEXT v19; // [rsp+20h] [rbp-58h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+80h] [rbp+8h] BYREF
  PVOID SystemArgument1; // [rsp+88h] [rbp+10h]
  PVOID SystemArgument2; // [rsp+98h] [rbp+20h]

  SystemArgument2 = MiniportDpcContext;
  LODWORD(SystemArgument1) = MessageId;
  v6 = 1LL;
  Number = 0;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT(&v19, *((struct _NDIS_MINIPORT_BLOCK **)NdisInterruptHandle + 12));
  if ( *((_BYTE *)NdisInterruptHandle + 193) == (_BYTE)v9 )
    v10 = *((_QWORD *)NdisInterruptHandle + 14);
  else
    v10 = *((_QWORD *)NdisInterruptHandle + 28) + ((unsigned __int64)(v8 * (ndisMaxNumberOfProcessors + 1)) << 6);
  Group = TargetProcessors->Group;
  v12 = v9;
  Mask = TargetProcessors->Mask;
  ProcNumber.Group = Group;
  *(_WORD *)&ProcNumber.Number = v9;
  v14 = v19.DatapathEventsMask & 0x1000000;
  if ( (v19.DatapathEventsMask & 0x1000000) != 0 )
    Number = KeGetPcr()->Prcb.Number;
  if ( Mask )
  {
    do
    {
      v15 = Mask;
      if ( (Mask & 1) != 0 )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
        if ( ProcessorIndexFromNumber != -1 )
        {
          if ( ProcessorIndexFromNumber != Number && v14 )
          {
            CurrentCpu = v19.CurrentCpu;
            if ( v19.CurrentCpu == -1 )
            {
              CurrentCpu = KeGetPcr()->Prcb.Number;
              v19.CurrentCpu = CurrentCpu;
            }
            ++*(_QWORD *)((char *)&v19.PcwBlock->DatapathEventReferences[24]
                        + ndisPcwPerCpuDataStride * CurrentCpu
                        + ndisPcwOffsetToPerCpuData);
          }
          _InterlockedIncrement((volatile signed __int32 *)NdisInterruptHandle + 26);
          if ( KeInsertQueueDpc(
                 (PRKDPC)(v10 + ((unsigned __int64)ProcessorIndexFromNumber << 6)),
                 (PVOID)(unsigned int)SystemArgument1,
                 SystemArgument2) )
          {
            v12 |= v6;
          }
          else
          {
            _InterlockedDecrement((volatile signed __int32 *)NdisInterruptHandle + 26);
          }
        }
      }
      ++ProcNumber.Number;
      v6 *= 2LL;
      Mask >>= 1;
    }
    while ( v15 >= 2 );
  }
  return v12;
}
