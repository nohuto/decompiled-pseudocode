/*
 * XREFs of ndisMiniportIsr @ 0x1C0066CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     NdisMQueueDpcEx @ 0x1C0065ED0 (NdisMQueueDpcEx.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C006ED38 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

char __fastcall ndisMiniportIsr(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int CurrentCpu; // edi
  unsigned int v5; // esi
  char v6; // r14
  _GROUP_AFFINITY TargetProcessors; // [rsp+20h] [rbp-30h] BYREF
  struct NDIS_PCW_CONTEXT v9; // [rsp+30h] [rbp-20h] BYREF
  char v10; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v11; // [rsp+90h] [rbp+40h] BYREF

  v2 = *(_QWORD *)(a2 + 96);
  v11 = 0;
  CurrentCpu = -1;
  v10 = 0;
  v9.CurrentCpu = -1;
  v5 = *(_DWORD *)(v2 + 80);
  v9.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v2 + 40);
  v9.DatapathEventsMask = *(_DWORD *)(v2 + 48);
  v9.DatapathCyclesMask = v5;
  if ( (v5 & 2) != 0 )
  {
    ndisPcwStartCycleCounter(&v9, 1u);
    CurrentCpu = v9.CurrentCpu;
    LOBYTE(v5) = v9.DatapathCyclesMask;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned int *))(a2 + 16))(*(_QWORD *)(a2 + 8), &v10, &v11);
  if ( (v5 & 2) != 0 )
  {
    ndisPcwEndCycleCounter(&v9, 1u, 0xEuLL);
    CurrentCpu = v9.CurrentCpu;
  }
  if ( v6 && (v9.DatapathEventsMask & 2) != 0 )
  {
    if ( CurrentCpu == -1 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      v9.CurrentCpu = CurrentCpu;
    }
    ++*(_QWORD *)((char *)&v9.PcwBlock->DatapathEventReferences[2]
                + CurrentCpu * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData);
  }
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
    if ( KeInsertQueueDpc((PRKDPC)(a2 + 32), 0LL, 0LL) )
    {
      if ( (v9.DatapathCyclesMask & 0x1000) != 0 )
        ndisPcwStartCycleCounter(&v9, 0xCu);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
    }
  }
  else
  {
    TargetProcessors.Mask = v11;
    *(_QWORD *)&TargetProcessors.Group = 0LL;
    NdisMQueueDpcEx((NDIS_HANDLE)a2, 0, &TargetProcessors, 0LL);
  }
  return v6;
}
