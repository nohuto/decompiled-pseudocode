/*
 * XREFs of MiSegmentDelete @ 0x14061F928
 * Callers:
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     MiProcessDereferenceList @ 0x140154150 (MiProcessDereferenceList.c)
 *     MiDestroySection @ 0x1401698BC (MiDestroySection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MiReleaseControlAreaCharges @ 0x140079C58 (MiReleaseControlAreaCharges.c)
 *     MiGetControlAreaPartition @ 0x1400937E8 (MiGetControlAreaPartition.c)
 *     ObFastReplaceObject @ 0x140094864 (ObFastReplaceObject.c)
 *     MiDereferenceControlAreaProbe @ 0x140094C2C (MiDereferenceControlAreaProbe.c)
 *     MiDeleteSegmentPages @ 0x140094D78 (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x1400957FC (MiPrepareSegmentForDeletion.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140095FA0 (MiUpdateSystemProtoPtesTree.c)
 *     IoDiskIoAttributionDereference @ 0x1401058D4 (IoDiskIoAttributionDereference.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14016C8B4 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiDeletePageFileSectionNodes @ 0x14061FAB4 (MiDeletePageFileSectionNodes.c)
 *     MiLogSectionCreate @ 0x14084F998 (MiLogSectionCreate.c)
 */

__int64 __fastcall MiSegmentDelete(volatile signed __int64 *a1)
{
  volatile signed __int64 v1; // rbp
  volatile __int64 *v2; // r15
  int v3; // ebx
  __int16 v5; // si
  __int64 v6; // rdx
  __int64 *v7; // r14
  __int64 v8; // r13
  void *v9; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  __int64 ControlAreaPartition; // rax
  unsigned int v14; // [rsp+50h] [rbp+8h]

  v1 = *a1;
  v2 = a1 + 8;
  v3 = *((_DWORD *)a1 + 14);
  v5 = *(_WORD *)(*a1 + 12);
  v6 = (__int64)(a1 + 16);
  v14 = *((_QWORD *)a1 + 8) != 0LL;
  if ( (v3 & 0xA0) != 0x80 )
    v6 = 0LL;
  v7 = MiPrepareSegmentForDeletion((__int64)a1, v6);
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v5 & 0x2000) != 0 )
      DbgUnLoadImageSymbolsUnicode(
        (PCUNICODE_STRING)((*v2 & 0xFFFFFFFFFFFFFFF0uLL) + 88),
        *(_QWORD *)(v1 + 32),
        (__int64)KeGetCurrentThread()->ApcState.Process);
    MiReleaseControlAreaWaiters(v7);
  }
  else if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
  {
    MiLogSectionCreate(a1, 0LL);
  }
  v8 = MiDeleteSegmentPages((__int64)a1);
  v9 = 0LL;
  v10 = MiReleaseControlAreaCharges((__int64)a1);
  if ( (v3 & 0x82) == 0x80 )
    v9 = (void *)ObFastReplaceObject(v2, 0LL);
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v3 & 0x20) != 0 )
    {
      MiUpdateSystemProtoPtesTree(*((unsigned __int64 **)a1 + 12), 0);
      ExFreePoolWithTag(*(PVOID *)(v1 + 64), 0);
    }
  }
  else
  {
    MiDeletePageFileSectionNodes(a1);
  }
  if ( v10 )
  {
    ControlAreaPartition = MiGetControlAreaPartition((__int64)a1);
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, v14, v10);
  }
  if ( (a1[7] & 0x20) == 0 && (v3 & 0x80u) != 0 )
    v11 = 8LL * *((_QWORD *)a1 + 15);
  else
    v11 = 0LL;
  MiDereferenceControlAreaProbe(a1, 0);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( v11 )
    IoDiskIoAttributionDereference(v11);
  ExFreePoolWithTag((PVOID)v1, 0);
  return v8;
}
