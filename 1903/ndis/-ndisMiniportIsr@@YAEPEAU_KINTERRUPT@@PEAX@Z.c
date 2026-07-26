/*
 * XREFs of ?ndisMiniportIsr@@YAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C00A08A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003BBBC (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     NdisMQueueDpcEx @ 0x1C00A0D30 (NdisMQueueDpcEx.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF4B8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF64C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

char __fastcall ndisMiniportIsr(struct _KINTERRUPT *a1, char *a2)
{
  char DatapathCyclesMask; // di
  char v4; // si
  unsigned int CurrentCpu; // ecx
  _GROUP_AFFINITY TargetProcessors; // [rsp+20h] [rbp-30h] BYREF
  NDIS_PCW_CONTEXT v8; // [rsp+30h] [rbp-20h] BYREF
  char v9; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v10; // [rsp+80h] [rbp+30h] BYREF

  v10 = 0;
  v9 = 0;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT(&v8, *((struct _NDIS_MINIPORT_BLOCK **)a2 + 12));
  DatapathCyclesMask = v8.DatapathCyclesMask;
  if ( (v8.DatapathCyclesMask & 2) != 0 )
  {
    ndisPcwStartCycleCounter(&v8, 1u);
    DatapathCyclesMask = v8.DatapathCyclesMask;
  }
  v4 = (*((__int64 (__fastcall **)(_QWORD, char *, unsigned int *))a2 + 2))(*((_QWORD *)a2 + 1), &v9, &v10);
  if ( (DatapathCyclesMask & 2) != 0 )
    ndisPcwEndCycleCounter(&v8, 1u, 0xEuLL);
  if ( v4 && (v8.DatapathEventsMask & 2) != 0 )
  {
    CurrentCpu = v8.CurrentCpu;
    if ( v8.CurrentCpu == -1 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      v8.CurrentCpu = CurrentCpu;
    }
    ++*(_QWORD *)((char *)&v8.PcwBlock->DatapathEventReferences[2]
                + ndisPcwPerCpuDataStride * CurrentCpu
                + ndisPcwOffsetToPerCpuData);
  }
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)a2 + 26);
    if ( KeInsertQueueDpc((PRKDPC)(a2 + 32), 0LL, 0LL) )
    {
      if ( (v8.DatapathCyclesMask & 0x1000) != 0 )
        ndisPcwStartCycleCounter(&v8, 0xCu);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)a2 + 26);
    }
  }
  else
  {
    *(_QWORD *)&TargetProcessors.Group = 0LL;
    TargetProcessors.Mask = v10;
    NdisMQueueDpcEx(a2, 0, &TargetProcessors, 0LL);
  }
  return v4;
}
