/*
 * XREFs of ?ndisMiniportMessageIsr@@YAEPEAU_KINTERRUPT@@PEAXK@Z @ 0x1C000F980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF4B8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF64C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

__int64 __fastcall ndisMiniportMessageIsr(struct _KINTERRUPT *a1, void *a2, unsigned int a3)
{
  __int64 v3; // rcx
  unsigned int Number; // edi
  unsigned int v6; // esi
  unsigned __int64 v7; // r15
  unsigned int v8; // eax
  unsigned __int8 v9; // r14
  __int64 v11; // rax
  int v12; // edx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r12
  int v15; // edx
  int v16; // r14d
  unsigned __int64 v17; // r13
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v19; // r8
  _NDIS_PCW_DATA_BLOCK *v20; // rax
  unsigned int v21; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-34h] BYREF
  int v24; // [rsp+38h] [rbp-30h]
  __int64 v25; // [rsp+40h] [rbp-28h]
  struct NDIS_PCW_CONTEXT v26; // [rsp+48h] [rbp-20h] BYREF
  char v27; // [rsp+A8h] [rbp+40h] BYREF
  unsigned __int8 v28; // [rsp+B8h] [rbp+50h]

  v3 = *((_QWORD *)a2 + 12);
  Number = 0;
  v23 = 0;
  v27 = 0;
  LOBYTE(v6) = 0;
  v7 = a3;
  v8 = *(_DWORD *)(v3 + 48);
  v26.PcwBlock = 0LL;
  *(_QWORD *)&v26.DatapathEventsMask = 0LL;
  v26.CurrentCpu = -1;
  if ( v8 || *(_DWORD *)(v3 + 80) )
  {
    v6 = *(_DWORD *)(v3 + 80);
    v26.DatapathEventsMask = v8;
    v20 = *(_NDIS_PCW_DATA_BLOCK **)(v3 + 40);
    v26.DatapathCyclesMask = v6;
    v26.PcwBlock = v20;
    if ( !v20 )
    {
      LOBYTE(v6) = v26.DatapathCyclesMask;
      v26.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v3 + 40);
    }
  }
  if ( (v6 & 2) != 0 )
  {
    ndisPcwStartCycleCounter(&v26, 1u);
    LOBYTE(v6) = v26.DatapathCyclesMask;
  }
  v28 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned int *))a2 + 22))(
          *((_QWORD *)a2 + 1),
          (unsigned int)v7,
          &v27,
          &v23);
  v9 = v28;
  if ( (v6 & 2) != 0 )
    ndisPcwEndCycleCounter(&v26, 1u, 0xEuLL);
  if ( v9 && (v26.DatapathEventsMask & 2) != 0 )
  {
    if ( v26.CurrentCpu == -1 )
      v26.CurrentCpu = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)((char *)&v26.PcwBlock->DatapathEventReferences[2]
                + v26.CurrentCpu * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData);
  }
  if ( v27 )
  {
    _InterlockedIncrement((volatile signed __int32 *)a2 + 26);
    if ( KeInsertQueueDpc(
           (PRKDPC)(*((_QWORD *)a2 + 28)
                  + ((unsigned __int64)(ndisMaxNumberOfProcessors + (_DWORD)v7 * (ndisMaxNumberOfProcessors + 1)) << 6)),
           (PVOID)v7,
           0LL) )
    {
      if ( (v26.DatapathCyclesMask & 0x1000) != 0 )
        ndisPcwStartCycleCounter(&v26, 0xCu);
      return v9;
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)a2 + 26);
      return v9;
    }
  }
  else
  {
    v11 = *((_QWORD *)a2 + 12);
    v12 = 0;
    v13 = v23;
    v25 = 0LL;
    v24 = -1;
    if ( *(_DWORD *)(v11 + 48) || *(_DWORD *)(v11 + 80) )
    {
      v12 = *(_DWORD *)(v11 + 48);
      v25 = *(_QWORD *)(v11 + 40);
      if ( !v25 )
        v25 = *(_QWORD *)(v11 + 40);
    }
    if ( *((_BYTE *)a2 + 193) )
      v14 = *((_QWORD *)a2 + 28) + ((unsigned __int64)((unsigned int)v7 * (ndisMaxNumberOfProcessors + 1)) << 6);
    else
      v14 = *((_QWORD *)a2 + 14);
    ProcNumber = 0;
    v15 = v12 & 0x1000000;
    if ( v15 )
      Number = KeGetPcr()->Prcb.Number;
    if ( v23 )
    {
      v16 = v15;
      do
      {
        v17 = v13;
        if ( (v13 & 1) != 0 )
        {
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          v19 = ProcessorIndexFromNumber;
          if ( ProcessorIndexFromNumber != -1 )
          {
            if ( ProcessorIndexFromNumber != Number && v16 )
            {
              v21 = v24;
              if ( v24 == -1 )
              {
                v21 = KeGetPcr()->Prcb.Number;
                v24 = v21;
              }
              ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * v21 + v25 + 96);
            }
            _InterlockedIncrement((volatile signed __int32 *)a2 + 26);
            if ( !KeInsertQueueDpc((PRKDPC)(v14 + (v19 << 6)), (PVOID)v7, 0LL) )
              _InterlockedDecrement((volatile signed __int32 *)a2 + 26);
          }
        }
        ++ProcNumber.Number;
        v13 >>= 1;
      }
      while ( v17 >= 2 );
      return v28;
    }
    else
    {
      return v9;
    }
  }
}
