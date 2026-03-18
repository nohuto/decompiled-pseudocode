/*
 * XREFs of ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1C0207F0C
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C010EAF0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateStandardAllocationParams(
        struct _D3DKMT_CREATEALLOCATION *a1,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a2,
        __int64 a3)
{
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  ULONG64 pStandardAllocation; // rdx
  __int64 v7; // rax

  Flags = a1->Flags;
  pStandardAllocation = *(_DWORD *)&Flags & 0x20020;
  if ( (*(_DWORD *)&Flags & 0x20020) == 0
    || (_DWORD)pStandardAllocation == 131104
    || (*(_BYTE *)&Flags & 2) == 0
    || (*(_WORD *)&Flags & 0x820) == 0x20
    || a1->PrivateDriverDataSize
    || a1->NumAllocations != 1 )
  {
    goto LABEL_17;
  }
  if ( (_BYTE)a3 )
  {
    pStandardAllocation = (ULONG64)a1->pStandardAllocation;
    a1 = (struct _D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
    if ( pStandardAllocation >= MmUserProbeAddress )
      pStandardAllocation = MmUserProbeAddress;
    *(_OWORD *)&a2->Type = *(_OWORD *)pStandardAllocation;
    *(_QWORD *)&a2->Flags.0 = *(_QWORD *)(pStandardAllocation + 16);
  }
  else
  {
    *a2 = *a1->pStandardAllocation;
  }
  if ( a2->Type != D3DKMT_STANDARDALLOCATIONTYPE_EXISTINGHEAP || a2->Flags.Value )
  {
LABEL_17:
    v7 = WdLogNewEntry5_WdError(a1, pStandardAllocation, a3);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
  }
  else
  {
    if ( a2->ExistingHeapData.Size - 1 <= 0xFFFFFFFE )
      return 0LL;
    v7 = WdLogNewEntry5_WdError(4294967294LL, pStandardAllocation, a3);
    *(_QWORD *)(v7 + 24) = a2->ExistingHeapData.Size;
    *(_QWORD *)(v7 + 32) = -1073741811LL;
  }
  WdLogEvent5_WdError(v7);
  return 3221225485LL;
}
