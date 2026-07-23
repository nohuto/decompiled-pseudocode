/*
 * XREFs of MiReplaceSystemProtoPtesNode @ 0x1402C79A0
 * Callers:
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     MiObtainProtoBaseFromNode @ 0x1400960E4 (MiObtainProtoBaseFromNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReplaceSystemProtoPtesNode(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rbp
  KIRQL v5; // di
  bool v6; // r8
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  v4 = MiObtainProtoBaseFromNode(a1, &v19);
  v5 = ExAcquireSpinLockExclusive(&dword_140439E38);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140439E30, a1);
  a1[3] &= ~8uLL;
  v6 = 0;
  v7 = (_QWORD *)qword_140439E30;
  if ( qword_140439E30 )
  {
    while ( 1 )
    {
      v8 = v7[3] & 7LL;
      if ( v8 > 4 )
        goto LABEL_15;
      if ( !(_DWORD)v8 )
      {
        v12 = *(v7 - 13);
        goto LABEL_16;
      }
      v9 = v8 - 1;
      if ( !v9 )
      {
        v12 = *(v7 - 6);
        goto LABEL_16;
      }
      v10 = v9 - 1;
      if ( v10 )
        break;
      v13 = *(v7 - 7) + 128LL;
      v14 = 0LL;
      v12 = *(_QWORD *)(*(v7 - 7) + 136LL);
      do
      {
        v15 = *(unsigned int *)(v13 + 44);
        v13 = *(_QWORD *)(v13 + 16);
        v14 += v15;
      }
      while ( v13 );
LABEL_16:
      if ( v4 < v12 )
      {
        v16 = (_QWORD *)*v7;
        if ( !*v7 )
        {
          v6 = 0;
          goto LABEL_22;
        }
      }
      else
      {
        v16 = (_QWORD *)v7[1];
        if ( !v16 )
        {
          v6 = 1;
          goto LABEL_22;
        }
      }
      v7 = v16;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v12 = v7[6];
      goto LABEL_16;
    }
    if ( v11 == 1 )
    {
      v12 = v7[4];
      goto LABEL_16;
    }
LABEL_15:
    v12 = 0LL;
    goto LABEL_16;
  }
LABEL_22:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140439E30, (unsigned __int64)v7, v6, a2);
  a2[3] |= 8uLL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439E38);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v5;
  __writecr8(v5);
  return result;
}
