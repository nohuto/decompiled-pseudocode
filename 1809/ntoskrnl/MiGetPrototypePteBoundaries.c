/*
 * XREFs of MiGetPrototypePteBoundaries @ 0x1402C7854
 * Callers:
 *     MiMakeTransitionHeatBatch @ 0x1402CEE04 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     MiObtainProtoBaseFromNode @ 0x1400960E4 (MiObtainProtoBaseFromNode.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPrototypePteBoundaries(unsigned __int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  KIRQL v5; // al
  _QWORD *v6; // rcx
  KIRQL v7; // bl
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v18; // [rsp+40h] [rbp+18h]

  v4 = 0LL;
  v5 = ExAcquireSpinLockShared(&dword_140439E38);
  v6 = (_QWORD *)qword_140439E30;
  v7 = v5;
  if ( !qword_140439E30 )
    goto LABEL_25;
  v8 = v18;
  while ( 1 )
  {
    v9 = v6[3] & 7LL;
    if ( v9 > 4 )
      goto LABEL_16;
    if ( !(_DWORD)v9 )
    {
      v13 = *(v6 - 13);
      v8 = *((unsigned int *)v6 - 17);
      goto LABEL_17;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v13 = *(v6 - 6);
      v8 = *((unsigned int *)v6 - 3);
      goto LABEL_17;
    }
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        v13 = v6[6];
        v8 = v6[4];
        goto LABEL_17;
      }
      if ( v12 == 1 )
      {
        v13 = v6[4];
        v8 = v6[5];
        goto LABEL_17;
      }
LABEL_16:
      v13 = 0LL;
      goto LABEL_17;
    }
    v14 = *(v6 - 7) + 128LL;
    v8 = 0LL;
    v13 = *(_QWORD *)(*(v6 - 7) + 136LL);
    do
    {
      v15 = *(unsigned int *)(v14 + 44);
      v14 = *(_QWORD *)(v14 + 16);
      v8 += v15;
    }
    while ( v14 );
LABEL_17:
    if ( a1 < v13 )
    {
      v6 = (_QWORD *)*v6;
      goto LABEL_21;
    }
    if ( a1 < v13 + 8 * v8 )
      break;
    v6 = (_QWORD *)v6[1];
LABEL_21:
    if ( !v6 )
      goto LABEL_25;
  }
  if ( v6 )
    v4 = MiObtainProtoBaseFromNode(v6, a2);
LABEL_25:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140439E38);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v7);
  return v4;
}
