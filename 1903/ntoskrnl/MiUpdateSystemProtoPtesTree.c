/*
 * XREFs of MiUpdateSystemProtoPtesTree @ 0x1400E0170
 * Callers:
 *     MiDeleteSubsectionPages @ 0x1400DC990 (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x1400DFCE0 (MiCreatePrototypePtes.c)
 *     MiDeleteEmptySubsections @ 0x1400E20C0 (MiDeleteEmptySubsections.c)
 *     MiDeletePerSessionProtos @ 0x140138800 (MiDeletePerSessionProtos.c)
 *     MiDeleteCachedSubsection @ 0x1402B8E40 (MiDeleteCachedSubsection.c)
 *     MiSegmentDelete @ 0x1406885A8 (MiSegmentDelete.c)
 *     MiDeletePageFileSectionNodes @ 0x140688730 (MiDeletePageFileSectionNodes.c)
 *     MiCreatePagingFileMap @ 0x140688794 (MiCreatePagingFileMap.c)
 *     MiCreateImageFileMap @ 0x14068AE6C (MiCreateImageFileMap.c)
 *     MiBuildImageControlArea @ 0x14068BB74 (MiBuildImageControlArea.c)
 *     MiExtendSection @ 0x14069CB90 (MiExtendSection.c)
 *     MiAllocatePerSessionProtos @ 0x1406E8AF8 (MiAllocatePerSessionProtos.c)
 *     MiAllocateFileExtents @ 0x14088BE80 (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     MiObtainProtoBaseFromNode @ 0x1400E02B4 (MiObtainProtoBaseFromNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateSystemProtoPtesTree(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v4; // rbp
  KIRQL v5; // si
  _QWORD *v6; // rdx
  bool v7; // r8
  unsigned __int64 v8; // rcx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  __int64 result; // rax
  _QWORD *v16; // rax
  int v17; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  char v19; // [rsp+30h] [rbp+8h] BYREF

  v4 = MiObtainProtoBaseFromNode(a1, &v19);
  v5 = ExAcquireSpinLockExclusive(&dword_140464740);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140464738, a1);
    a1[3] &= ~8uLL;
    goto LABEL_13;
  }
  v6 = (_QWORD *)qword_140464738;
  v7 = 0;
  if ( !qword_140464738 )
    goto LABEL_12;
  while ( 1 )
  {
    v8 = v6[3] & 7LL;
    if ( v8 > 4 )
      break;
    if ( (_DWORD)v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v17 = v10 - 1;
          if ( v17 )
          {
            if ( v17 != 1 )
              break;
            v13 = v6[4];
          }
          else
          {
            v13 = v6[6];
          }
        }
        else
        {
          v11 = *(v6 - 7) + 128LL;
          v12 = 0LL;
          v13 = *(_QWORD *)(*(v6 - 7) + 136LL);
          do
          {
            v14 = *(unsigned int *)(v11 + 44);
            v11 = *(_QWORD *)(v11 + 16);
            v12 += v14;
          }
          while ( v11 );
        }
      }
      else
      {
        v13 = *(v6 - 6);
      }
    }
    else
    {
      v13 = *(v6 - 13);
    }
    if ( v4 >= v13 )
      break;
    v16 = (_QWORD *)*v6;
    if ( !*v6 )
    {
      v7 = 0;
      goto LABEL_12;
    }
LABEL_20:
    v6 = v16;
  }
  v16 = (_QWORD *)v6[1];
  if ( v16 )
    goto LABEL_20;
  v7 = 1;
LABEL_12:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140464738, (unsigned __int64)v6, v7, a1);
  a1[3] |= 8uLL;
LABEL_13:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464740);
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
