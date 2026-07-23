/*
 * XREFs of IoMakeAssociatedIrpPriv @ 0x140107974
 * Callers:
 *     IoMakeAssociatedIrpEx @ 0x140107960 (IoMakeAssociatedIrpEx.c)
 *     IoMakeAssociatedIrp @ 0x140168C70 (IoMakeAssociatedIrp.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x1400DF5F0 (IopSetDiskIoAttributionExtension.c)
 *     IoSetActivityIdIrp @ 0x1400DF9E0 (IoSetActivityIdIrp.c)
 *     IopIrpHasExtensionType @ 0x140107CCC (IopIrpHasExtensionType.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

_SLIST_ENTRY *__fastcall IoMakeAssociatedIrpPriv(__int64 a1, __int64 a2, char a3)
{
  bool v5; // al
  unsigned int v6; // r10d
  __int64 v7; // r9
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int16 v9; // di
  __int16 v10; // di
  __int64 v11; // rsi
  __int64 v12; // r12
  _GENERAL_LOOKASIDE *L; // rsi
  PSLIST_ENTRY v14; // rbx
  _SLIST_ENTRY **v15; // rdx
  __int16 Number; // ax
  bool v17; // al
  _SLIST_ENTRY *result; // rax
  char v19; // [rsp+80h] [rbp+18h]
  char v20; // [rsp+88h] [rbp+20h]

  v20 = 0;
  v5 = (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0;
  v6 = 6;
  if ( v5 && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL)
    || (unsigned __int8)IopIrpHasExtensionType(a1, v6)
    || v7 && (*(_DWORD *)(v7 + 48) & 0x8000000) != 0 )
  {
    ++a3;
    v20 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v19 = 0;
  v9 = 72 * a3 + 208;
  if ( a3 > (char)IopLargeIrpStackLocations )
    goto LABEL_30;
  v19 = 4;
  if ( a3 == 1 )
  {
    v12 = 0LL;
    v11 = 2048LL;
  }
  else
  {
    if ( a3 <= (char)IopMediumIrpStackLocations )
    {
      v10 = (char)IopMediumIrpStackLocations;
      v11 = 2064LL;
      v12 = 1LL;
    }
    else
    {
      v10 = (char)IopLargeIrpStackLocations;
      v11 = 2080LL;
      v12 = 2LL;
    }
    v9 = 72 * v10 + 208;
  }
  L = *(_GENERAL_LOOKASIDE **)((char *)&CurrentPrcb->MxCsr + v11);
  ++L->TotalAllocates;
  v14 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( !v14 )
  {
    ++L->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[v12].L;
    ++L->TotalAllocates;
    v14 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v14 )
      ++L->AllocateMisses;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    if ( !v14 )
      goto LABEL_30;
    if ( *((_QWORD *)&v14[3].Next + 1) >= (unsigned __int64)(unsigned __int16)(72 * a3 + 208) )
    {
      v9 = *((_QWORD *)&v14[3].Next + 1);
      goto LABEL_18;
    }
    ++L->TotalFrees;
    ExFreePoolWithTag(v14, 0);
LABEL_30:
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x20707249u);
    v14 = result;
    if ( !result )
      return result;
    goto LABEL_19;
  }
LABEL_18:
  if ( !v14 )
    goto LABEL_30;
LABEL_19:
  memset(v14, 0, v9);
  BYTE2(v14[4].Next) = a3;
  LOWORD(v14->Next) = 6;
  BYTE3(v14[4].Next) = a3 + 1;
  WORD1(v14->Next) = v9;
  BYTE6(v14[4].Next) = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v14[2].Next + 1) = v14 + 2;
  v14[2].Next = v14 + 2;
  v15 = &v14[4 * a3 + 13].Next + a3;
  *((_QWORD *)&v14[11].Next + 1) = v15;
  Number = CurrentPrcb->Number;
  LODWORD(v14[1].Next) |= 8u;
  WORD2(v14->Next) = Number;
  LODWORD(v14[1].Next) |= *(_DWORD *)(a1 + 16) & 0xE0002;
  HIBYTE(v14[4].Next) |= v19;
  *((_QWORD *)&v14[9].Next + 1) = *(_QWORD *)(a1 + 152);
  *((_QWORD *)&v14[1].Next + 1) = a1;
  if ( v20 )
  {
    --BYTE3(v14[4].Next);
    --BYTE2(v14[4].Next);
    *((_QWORD *)&v14[11].Next + 1) = v15 - 9;
    *((_QWORD *)&v14[12].Next + 1) = v15 - 9;
  }
  v17 = (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0;
  if ( v17 && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL) )
    IoSetActivityIdIrp((__int64)v14, (_OWORD *)(*(_QWORD *)(a1 + 200) + 24LL));
  if ( (unsigned __int8)IopIrpHasExtensionType(a1, 6LL) )
    IopSetDiskIoAttributionExtension(
      (__int64)v14,
      *(_QWORD *)(*(_QWORD *)(a1 + 200) + 16LL),
      *((_QWORD *)&v14[9].Next + 1),
      1);
  return v14;
}
