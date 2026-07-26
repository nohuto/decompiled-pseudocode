/*
 * XREFs of ndisMiniportMessageIsr @ 0x1C0007D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C006ED38 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

__int64 __fastcall ndisMiniportMessageIsr(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  unsigned int Number; // r12d
  unsigned int CurrentCpu; // r15d
  unsigned __int64 v7; // r14
  unsigned int v8; // esi
  unsigned __int8 v9; // di
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  int v13; // ecx
  unsigned __int64 v14; // r15
  int v15; // ecx
  int v16; // edi
  unsigned __int64 v17; // r13
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v19; // r8
  unsigned int v20; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-2Ch] BYREF
  int v23; // [rsp+38h] [rbp-28h]
  __int64 v24; // [rsp+40h] [rbp-20h]
  struct NDIS_PCW_CONTEXT v25; // [rsp+48h] [rbp-18h] BYREF
  char v26; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int8 v27; // [rsp+B8h] [rbp+58h]

  v3 = *(_QWORD *)(a2 + 96);
  Number = 0;
  v22 = 0;
  CurrentCpu = -1;
  v26 = 0;
  v7 = a3;
  v8 = *(_DWORD *)(v3 + 80);
  v25.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v3 + 40);
  v25.DatapathEventsMask = *(_DWORD *)(v3 + 48);
  v25.DatapathCyclesMask = v8;
  v25.CurrentCpu = -1;
  if ( (v8 & 2) != 0 )
  {
    ndisPcwStartCycleCounter(&v25, 1u);
    CurrentCpu = v25.CurrentCpu;
    LOBYTE(v8) = v25.DatapathCyclesMask;
  }
  v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned int *))(a2 + 176))(
          *(_QWORD *)(a2 + 8),
          (unsigned int)v7,
          &v26,
          &v22);
  v9 = v27;
  if ( (v8 & 2) != 0 )
  {
    ndisPcwEndCycleCounter(&v25, 1u, 0xEuLL);
    CurrentCpu = v25.CurrentCpu;
  }
  if ( v9 && (v25.DatapathEventsMask & 2) != 0 )
  {
    if ( CurrentCpu == -1 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      v25.CurrentCpu = CurrentCpu;
    }
    ++*(_QWORD *)((char *)&v25.PcwBlock->DatapathEventReferences[2]
                + CurrentCpu * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData);
  }
  if ( v26 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
    if ( KeInsertQueueDpc(
           (PRKDPC)(*(_QWORD *)(a2 + 224)
                  + ((unsigned __int64)(ndisMaxNumberOfProcessors + (_DWORD)v7 * (ndisMaxNumberOfProcessors + 1)) << 6)),
           (PVOID)v7,
           0LL) )
    {
      if ( (v25.DatapathCyclesMask & 0x1000) != 0 )
        ndisPcwStartCycleCounter(&v25, 0xCu);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
    }
    return v9;
  }
  v11 = *(_QWORD *)(a2 + 96);
  v12 = v22;
  v23 = -1;
  v24 = *(_QWORD *)(v11 + 40);
  v13 = *(_DWORD *)(v11 + 48);
  if ( *(_BYTE *)(a2 + 193) )
    v14 = *(_QWORD *)(a2 + 224) + ((unsigned __int64)((unsigned int)v7 * (ndisMaxNumberOfProcessors + 1)) << 6);
  else
    v14 = *(_QWORD *)(a2 + 112);
  ProcNumber = 0;
  v15 = v13 & 0x1000000;
  if ( v15 )
    Number = KeGetPcr()->Prcb.Number;
  if ( !v22 )
    return v9;
  v16 = v15;
  do
  {
    v17 = v12;
    if ( (v12 & 1) != 0 )
    {
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      v19 = ProcessorIndexFromNumber;
      if ( ProcessorIndexFromNumber != -1 )
      {
        if ( ProcessorIndexFromNumber != Number && v16 )
        {
          v20 = v23;
          if ( v23 == -1 )
          {
            v20 = KeGetPcr()->Prcb.Number;
            v23 = v20;
          }
          ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * v20 + v24 + 96);
        }
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
        if ( !KeInsertQueueDpc((PRKDPC)(v14 + (v19 << 6)), (PVOID)v7, 0LL) )
          _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
      }
    }
    ++ProcNumber.Number;
    v12 >>= 1;
  }
  while ( v17 >= 2 );
  return v27;
}
