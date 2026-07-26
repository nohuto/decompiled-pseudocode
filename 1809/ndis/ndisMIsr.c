/*
 * XREFs of ndisMIsr @ 0x1C0066690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C006ED38 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

char __fastcall ndisMIsr(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int v4; // edi
  struct NDIS_PCW_CONTEXT v6; // [rsp+20h] [rbp-20h] BYREF
  char v7; // [rsp+58h] [rbp+18h] BYREF
  char v8; // [rsp+60h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a2 + 104);
  v6.CurrentCpu = -1;
  v7 = 0;
  v4 = *(_DWORD *)(v2 + 80);
  v6.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v2 + 40);
  v6.DatapathEventsMask = *(_DWORD *)(v2 + 48);
  v6.DatapathCyclesMask = v4;
  if ( (v4 & 2) != 0 )
  {
    ndisPcwStartCycleCounter(&v6, 1u);
    LOBYTE(v4) = v6.DatapathCyclesMask;
  }
  if ( (*(_DWORD *)(v2 + 120) & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v2 + 3792) + 128LL))(*(_QWORD *)(v2 + 24));
    v7 = 1;
    v8 = 1;
  }
  else
  {
    (*(void (__fastcall **)(char *, char *, _QWORD))(a2 + 24))(&v8, &v7, *(_QWORD *)(v2 + 24));
  }
  if ( (v4 & 2) != 0 )
    ndisPcwEndCycleCounter(&v6, 1u, 0xEuLL);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 112));
    if ( KeInsertQueueDpc((PRKDPC)(a2 + 40), 0LL, 0LL) )
    {
      if ( (v6.DatapathCyclesMask & 0x1000) != 0 )
        ndisPcwStartCycleCounter(&v6, 0xCu);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 112));
    }
  }
  if ( v8 && (v6.DatapathEventsMask & 2) != 0 )
  {
    if ( v6.CurrentCpu == -1 )
      v6.CurrentCpu = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)((char *)&v6.PcwBlock->DatapathEventReferences[2]
                + v6.CurrentCpu * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData);
  }
  return v8;
}
