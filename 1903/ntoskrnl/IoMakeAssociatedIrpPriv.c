/*
 * XREFs of IoMakeAssociatedIrpPriv @ 0x14011BF14
 * Callers:
 *     IoMakeAssociatedIrpEx @ 0x14011BF00 (IoMakeAssociatedIrpEx.c)
 *     IoMakeAssociatedIrp @ 0x140170150 (IoMakeAssociatedIrp.c)
 * Callees:
 *     IopSetDriverFlagsExtension @ 0x1400A7C18 (IopSetDriverFlagsExtension.c)
 *     IoSetActivityIdIrp @ 0x1400A7F10 (IoSetActivityIdIrp.c)
 *     IopSetDiskIoAttributionExtension @ 0x1400A94C4 (IopSetDiskIoAttributionExtension.c)
 *     IopIrpHasExtensionType @ 0x14011C27C (IopIrpHasExtensionType.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

_SLIST_ENTRY *__fastcall IoMakeAssociatedIrpPriv(__int64 a1, __int64 a2, char a3)
{
  bool v5; // al
  unsigned int v6; // r10d
  __int64 v7; // rcx
  __int64 v8; // r9
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int16 v10; // di
  __int16 v11; // di
  __int64 v12; // rsi
  __int64 v13; // r12
  _GENERAL_LOOKASIDE *L; // rsi
  PSLIST_ENTRY v15; // rbx
  _SLIST_ENTRY **v16; // rdx
  __int16 Number; // ax
  bool v18; // al
  _SLIST_ENTRY *result; // rax
  char v20; // [rsp+80h] [rbp+18h]
  char v21; // [rsp+88h] [rbp+20h]

  v21 = 0;
  v5 = (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0;
  v6 = 6;
  if ( v5 && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL)
    || (unsigned __int8)IopIrpHasExtensionType(a1, v6)
    || (unsigned __int8)IopIrpHasExtensionType(v7, 8LL)
    || v8 && (*(_DWORD *)(v8 + 48) & 0x8000000) != 0 )
  {
    ++a3;
    v21 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v20 = 0;
  v10 = 72 * a3 + 208;
  if ( a3 > (char)IopLargeIrpStackLocations )
    goto LABEL_33;
  v20 = 4;
  if ( a3 == 1 )
  {
    v13 = 0LL;
    v12 = 2048LL;
  }
  else
  {
    if ( a3 <= (char)IopMediumIrpStackLocations )
    {
      v11 = (char)IopMediumIrpStackLocations;
      v12 = 2064LL;
      v13 = 1LL;
    }
    else
    {
      v11 = (char)IopLargeIrpStackLocations;
      v12 = 2080LL;
      v13 = 2LL;
    }
    v10 = 72 * v11 + 208;
  }
  L = *(_GENERAL_LOOKASIDE **)((char *)&CurrentPrcb->MxCsr + v12);
  ++L->TotalAllocates;
  v15 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( !v15 )
  {
    ++L->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[v13].L;
    ++L->TotalAllocates;
    v15 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v15 )
      ++L->AllocateMisses;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    if ( !v15 )
      goto LABEL_33;
    if ( *((_QWORD *)&v15[3].Next + 1) >= (unsigned __int64)(unsigned __int16)(72 * a3 + 208) )
    {
      v10 = *((_WORD *)&v15[3].Next + 4);
      goto LABEL_19;
    }
    ++L->TotalFrees;
    ExFreePoolWithTag(v15, 0);
LABEL_33:
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x20707249u);
    v15 = result;
    if ( !result )
      return result;
    goto LABEL_20;
  }
LABEL_19:
  if ( !v15 )
    goto LABEL_33;
LABEL_20:
  memset(v15, 0, v10);
  BYTE2(v15[4].Next) = a3;
  LOWORD(v15->Next) = 6;
  BYTE3(v15[4].Next) = a3 + 1;
  WORD1(v15->Next) = v10;
  BYTE6(v15[4].Next) = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v15[2].Next + 1) = v15 + 2;
  v15[2].Next = v15 + 2;
  v16 = &v15[4 * a3 + 13].Next + a3;
  *((_QWORD *)&v15[11].Next + 1) = v16;
  Number = CurrentPrcb->Number;
  LODWORD(v15[1].Next) |= 8u;
  WORD2(v15->Next) = Number;
  LODWORD(v15[1].Next) |= *(_DWORD *)(a1 + 16) & 0xE0002;
  HIBYTE(v15[4].Next) |= v20;
  *((_QWORD *)&v15[9].Next + 1) = *(_QWORD *)(a1 + 152);
  *((_QWORD *)&v15[1].Next + 1) = a1;
  if ( v21 )
  {
    --BYTE3(v15[4].Next);
    --BYTE2(v15[4].Next);
    *((_QWORD *)&v15[11].Next + 1) = v16 - 9;
    *((_QWORD *)&v15[12].Next + 1) = v16 - 9;
  }
  v18 = (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0;
  if ( v18 && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL) )
    IoSetActivityIdIrp((__int64)v15, (_OWORD *)(*(_QWORD *)(a1 + 200) + 24LL));
  if ( (unsigned __int8)IopIrpHasExtensionType(a1, 6LL) )
    IopSetDiskIoAttributionExtension(
      (__int64)v15,
      *(_QWORD *)(*(_QWORD *)(a1 + 200) + 16LL),
      *((_QWORD *)&v15[9].Next + 1),
      1);
  if ( (unsigned __int8)IopIrpHasExtensionType(a1, 8LL) )
    IopSetDriverFlagsExtension((__int64)v15, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 56LL));
  return v15;
}
