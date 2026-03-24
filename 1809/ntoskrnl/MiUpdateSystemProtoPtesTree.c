/*
 * XREFs of MiUpdateSystemProtoPtesTree @ 0x140096060
 * Callers:
 *     MiDeleteEmptySubsections @ 0x140093928 (MiDeleteEmptySubsections.c)
 *     MiDeleteSubsectionPages @ 0x140094F80 (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x140095B30 (MiCreatePrototypePtes.c)
 *     MiDeletePerSessionProtos @ 0x140136FA4 (MiDeletePerSessionProtos.c)
 *     MiDeleteCachedSubsection @ 0x1402A1A18 (MiDeleteCachedSubsection.c)
 *     MiExtendSection @ 0x14061C4C8 (MiExtendSection.c)
 *     MiCreateImageFileMap @ 0x14061CEB8 (MiCreateImageFileMap.c)
 *     MiBuildImageControlArea @ 0x14061DA70 (MiBuildImageControlArea.c)
 *     MiSegmentDelete @ 0x14061E928 (MiSegmentDelete.c)
 *     MiDeletePageFileSectionNodes @ 0x14061EAB4 (MiDeletePageFileSectionNodes.c)
 *     MiCreatePagingFileMap @ 0x14061EB18 (MiCreatePagingFileMap.c)
 *     MiAllocatePerSessionProtos @ 0x1406C91F0 (MiAllocatePerSessionProtos.c)
 *     MiAllocateFileExtents @ 0x1408521B0 (MiAllocateFileExtents.c)
 *     MiCopyDirectMapHeader @ 0x140852BA4 (MiCopyDirectMapHeader.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x140064B40 (RtlAvlInsertNodeEx.c)
 *     MiObtainProtoBaseFromNode @ 0x1400961A4 (MiObtainProtoBaseFromNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC660 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateSystemProtoPtesTree(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v4; // rdi
  KIRQL v5; // bp
  _QWORD *v6; // rdx
  bool v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r9
  _QWORD *v10; // rax
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 result; // rax
  int v17; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  char v19; // [rsp+30h] [rbp+8h] BYREF

  v4 = MiObtainProtoBaseFromNode(a1, &v19);
  v5 = ExAcquireSpinLockExclusive(&dword_140438D78);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140438D70, a1);
    a1[3] &= ~8uLL;
    goto LABEL_20;
  }
  v6 = (_QWORD *)qword_140438D70;
  v7 = 0;
  if ( !qword_140438D70 )
    goto LABEL_19;
  while ( 1 )
  {
    v8 = v6[3] & 7LL;
    if ( v8 > 4 )
      break;
    if ( (_DWORD)v8 )
    {
      v11 = v8 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v17 = v12 - 1;
          if ( v17 )
          {
            if ( v17 != 1 )
              break;
            v9 = v6[4];
          }
          else
          {
            v9 = v6[6];
          }
        }
        else
        {
          v13 = *(v6 - 7) + 128LL;
          v14 = 0LL;
          v9 = *(_QWORD *)(*(v6 - 7) + 136LL);
          do
          {
            v15 = *(unsigned int *)(v13 + 44);
            v13 = *(_QWORD *)(v13 + 16);
            v14 += v15;
          }
          while ( v13 );
        }
      }
      else
      {
        v9 = *(v6 - 6);
      }
    }
    else
    {
      v9 = *(v6 - 13);
    }
    if ( v4 >= v9 )
      break;
    v10 = (_QWORD *)*v6;
    if ( !*v6 )
    {
      v7 = 0;
      goto LABEL_19;
    }
LABEL_8:
    v6 = v10;
  }
  v10 = (_QWORD *)v6[1];
  if ( v10 )
    goto LABEL_8;
  v7 = 1;
LABEL_19:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140438D70, (unsigned __int64)v6, v7, a1);
  a1[3] |= 8uLL;
LABEL_20:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140438D78);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v5;
  __writecr8(v5);
  return result;
}
