/*
 * XREFs of NdisMQueueDpcEx @ 0x1C0065ED0
 * Callers:
 *     NdisMQueueDpc @ 0x1C0065EA0 (NdisMQueueDpc.c)
 *     ndisMiniportIsr @ 0x1C0066CF0 (ndisMiniportIsr.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall NdisMQueueDpcEx(
        NDIS_HANDLE NdisInterruptHandle,
        ULONG MessageId,
        PGROUP_AFFINITY TargetProcessors,
        PVOID MiniportDpcContext)
{
  __int64 v4; // rax
  unsigned int v6; // r15d
  __int64 v7; // r14
  unsigned int Number; // r13d
  int v9; // r12d
  unsigned __int64 v10; // rsi
  KAFFINITY v11; // rbp
  unsigned __int64 Mask; // rdi
  int v13; // r12d
  unsigned __int64 v14; // rax
  ULONG ProcessorIndexFromNumber; // eax
  bool v16; // zf
  __int64 v18; // [rsp+20h] [rbp-58h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+80h] [rbp+8h] BYREF
  PVOID SystemArgument1; // [rsp+88h] [rbp+10h]
  PVOID SystemArgument2; // [rsp+98h] [rbp+20h]

  SystemArgument2 = MiniportDpcContext;
  LODWORD(SystemArgument1) = MessageId;
  v4 = *((_QWORD *)NdisInterruptHandle + 12);
  v6 = -1;
  v7 = 1LL;
  Number = 0;
  v9 = *(_DWORD *)(v4 + 48);
  v18 = *(_QWORD *)(v4 + 40);
  if ( *((_BYTE *)NdisInterruptHandle + 193) )
    v10 = *((_QWORD *)NdisInterruptHandle + 28) + ((unsigned __int64)(MessageId * (ndisMaxNumberOfProcessors + 1)) << 6);
  else
    v10 = *((_QWORD *)NdisInterruptHandle + 14);
  v11 = 0LL;
  Mask = TargetProcessors->Mask;
  ProcNumber.Group = TargetProcessors->Group;
  *(_WORD *)&ProcNumber.Number = 0;
  v13 = v9 & 0x1000000;
  if ( v13 )
    Number = KeGetPcr()->Prcb.Number;
  if ( Mask )
  {
    do
    {
      v14 = Mask;
      if ( (Mask & 1) != 0 )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
        if ( ProcessorIndexFromNumber == -1 )
        {
          v14 = Mask;
        }
        else
        {
          if ( ProcessorIndexFromNumber != Number && v13 )
          {
            if ( v6 == -1 )
              v6 = KeGetPcr()->Prcb.Number;
            ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * v6 + v18 + 96);
          }
          _InterlockedIncrement((volatile signed __int32 *)NdisInterruptHandle + 26);
          v16 = KeInsertQueueDpc(
                  (PRKDPC)(v10 + ((unsigned __int64)ProcessorIndexFromNumber << 6)),
                  (PVOID)(unsigned int)SystemArgument1,
                  SystemArgument2) == 0;
          v14 = Mask;
          if ( v16 )
            _InterlockedDecrement((volatile signed __int32 *)NdisInterruptHandle + 26);
          else
            v11 |= v7;
        }
      }
      ++ProcNumber.Number;
      v7 *= 2LL;
      Mask >>= 1;
    }
    while ( v14 >= 2 );
  }
  return v11;
}
