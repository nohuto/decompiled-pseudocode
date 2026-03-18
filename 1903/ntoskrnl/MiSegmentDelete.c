/*
 * XREFs of MiSegmentDelete @ 0x1406885A8
 * Callers:
 *     MiCheckControlArea @ 0x140070F40 (MiCheckControlArea.c)
 *     MiProcessDereferenceList @ 0x140165044 (MiProcessDereferenceList.c)
 *     MiDestroySection @ 0x140170208 (MiDestroySection.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MiReleaseControlAreaCharges @ 0x140070DEC (MiReleaseControlAreaCharges.c)
 *     ObFastReplaceObject @ 0x14007FAD4 (ObFastReplaceObject.c)
 *     MiGetControlAreaPartition @ 0x1400A9178 (MiGetControlAreaPartition.c)
 *     MiDeleteSegmentPages @ 0x1400DF264 (MiDeleteSegmentPages.c)
 *     MiDereferenceControlAreaProbe @ 0x1400DF7D0 (MiDereferenceControlAreaProbe.c)
 *     MiPrepareSegmentForDeletion @ 0x1400DF804 (MiPrepareSegmentForDeletion.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400E0170 (MiUpdateSystemProtoPtesTree.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E05A0 (MiReleaseControlAreaWaiters.c)
 *     IoDiskIoAttributionDereference @ 0x1400E73A8 (IoDiskIoAttributionDereference.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140180E64 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiDeletePageFileSectionNodes @ 0x140688730 (MiDeletePageFileSectionNodes.c)
 *     MiLogSectionCreate @ 0x14088A810 (MiLogSectionCreate.c)
 */

__int64 __fastcall MiSegmentDelete(__int64 a1)
{
  __int64 v1; // rbp
  volatile __int64 *v2; // r15
  int v3; // ebx
  int v5; // edi
  __int64 v6; // rdx
  __int64 *v7; // r14
  __int64 v8; // r13
  void *v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  __int64 ControlAreaPartition; // rax
  unsigned int v14; // [rsp+50h] [rbp+8h]

  v1 = *(_QWORD *)a1;
  v2 = (volatile __int64 *)(a1 + 64);
  v3 = *(_DWORD *)(a1 + 56);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  v6 = a1 + 128;
  v14 = *(_QWORD *)(a1 + 64) != 0LL;
  if ( (v3 & 0xA0) != 0x80 )
    v6 = 0LL;
  v7 = MiPrepareSegmentForDeletion(a1, v6);
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
  v8 = MiDeleteSegmentPages((_QWORD *)a1);
  v9 = 0LL;
  v10 = MiReleaseControlAreaCharges(a1, 0LL);
  if ( (v3 & 0x82) == 0x80 )
    v9 = (void *)ObFastReplaceObject(v2, 0LL);
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v3 & 0x20) != 0 )
    {
      MiUpdateSystemProtoPtesTree(*(unsigned __int64 **)(a1 + 96), 0);
      ExFreePoolWithTag(*(PVOID *)(v1 + 64), 0);
    }
  }
  else
  {
    MiDeletePageFileSectionNodes(a1);
  }
  if ( v10 )
  {
    ControlAreaPartition = MiGetControlAreaPartition(a1);
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, v14, v10);
  }
  if ( (*(_BYTE *)(a1 + 56) & 0x20) == 0 && (v3 & 0x80u) != 0 )
    v11 = 8LL * *(_QWORD *)(a1 + 120);
  else
    v11 = 0LL;
  MiDereferenceControlAreaProbe((volatile signed __int64 *)a1, 0);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( v11 )
    IoDiskIoAttributionDereference(v11);
  ExFreePoolWithTag((PVOID)v1, 0);
  return v8;
}
