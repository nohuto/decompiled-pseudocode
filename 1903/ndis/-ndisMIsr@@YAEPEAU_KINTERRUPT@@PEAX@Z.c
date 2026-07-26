/*
 * XREFs of ?ndisMIsr@@YAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C00A0770
 * Callers:
 *     <none>
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003BBBC (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF4B8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF64C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

char __fastcall ndisMIsr(struct _KINTERRUPT *a1, char *a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // r10
  __int64 v4; // r10
  char DatapathCyclesMask; // di
  unsigned int CurrentCpu; // ecx
  NDIS_PCW_CONTEXT v8; // [rsp+20h] [rbp-20h] BYREF
  char v9; // [rsp+58h] [rbp+18h] BYREF
  char v10; // [rsp+60h] [rbp+20h] BYREF

  v2 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a2 + 13);
  v9 = 0;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT(&v8, v2);
  DatapathCyclesMask = v8.DatapathCyclesMask;
  if ( (v8.DatapathCyclesMask & 2) != 0 )
  {
    ndisPcwStartCycleCounter(&v8, 1u);
    DatapathCyclesMask = v8.DatapathCyclesMask;
  }
  if ( (*(_DWORD *)(v4 + 120) & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v4 + 3760) + 128LL))(*(_QWORD *)(v4 + 24));
    v9 = 1;
    v10 = 1;
  }
  else
  {
    (*((void (__fastcall **)(char *, char *, _QWORD))a2 + 3))(&v10, &v9, *(_QWORD *)(v4 + 24));
  }
  if ( (DatapathCyclesMask & 2) != 0 )
    ndisPcwEndCycleCounter(&v8, 1u, 0xEuLL);
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)a2 + 28);
    if ( KeInsertQueueDpc((PRKDPC)(a2 + 40), 0LL, 0LL) )
    {
      if ( (v8.DatapathCyclesMask & 0x1000) != 0 )
        ndisPcwStartCycleCounter(&v8, 0xCu);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)a2 + 28);
    }
  }
  if ( v10 && (v8.DatapathEventsMask & 2) != 0 )
  {
    CurrentCpu = v8.CurrentCpu;
    if ( v8.CurrentCpu == -1 )
      CurrentCpu = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)((char *)&v8.PcwBlock->DatapathEventReferences[2]
                + ndisPcwPerCpuDataStride * CurrentCpu
                + ndisPcwOffsetToPerCpuData);
  }
  return v10;
}
