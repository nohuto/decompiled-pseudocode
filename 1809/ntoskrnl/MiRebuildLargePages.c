/*
 * XREFs of MiRebuildLargePages @ 0x1402CE840
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiNodeFreeZeroPages @ 0x1400EE374 (MiNodeFreeZeroPages.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400EE9A8 (MiNodeLargeFreeZeroPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetNodeStandbyPageCount @ 0x1402C05A0 (MiGetNodeStandbyPageCount.c)
 *     MiRebuildLargePage @ 0x1402CE5D4 (MiRebuildLargePage.c)
 */

void __fastcall MiRebuildLargePages(unsigned __int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rbx
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // rbp
  unsigned int v8; // esi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 i; // rdx
  int v12; // edx
  unsigned __int8 CurrentIrql; // si
  volatile __int64 *v14; // r15
  PRTL_BALANCED_NODE v15; // rax
  unsigned int v16; // ebp
  unsigned __int64 v17; // r11
  unsigned int v18; // r8d
  __int64 NodeStandbyPageCount; // rax
  __int64 v20; // r11
  int v21; // r8d
  unsigned __int64 v22; // rdx
  char v23; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v25; // rdi
  __int64 v26; // r8
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // rcx
  volatile signed __int64 *v29; // [rsp+20h] [rbp-58h] BYREF
  volatile __int64 *v30; // [rsp+28h] [rbp-50h]
  unsigned __int64 v31; // [rsp+80h] [rbp+8h]
  char v32; // [rsp+88h] [rbp+10h]

  v31 = a1 >> 58;
  v1 = 16 * (a1 | 0xFFC0000000000000uLL);
  v2 = *(_QWORD *)(v1 + 0x10) + 1984 * (a1 >> 58);
  v3 = *(_QWORD *)(v2 + 1808);
  v32 = *(_BYTE *)(v2 + 851);
  v4 = v3 / 0xC8;
  if ( v3 / 0xC8 >= (-(__int64)(v32 != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000 )
  {
    v5 = MiNodeLargeFreeZeroPages((_QWORD *)v2, 4u, 2);
    v7 = v5;
    if ( v5 < v4 )
    {
      v8 = MmNumberOfChannels;
      v9 = v4 - v5;
      v10 = 0LL;
      for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(v12 + 1) )
        v10 += MiNodeFreeZeroPages(v2, i, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v29 = 0LL;
      v14 = (volatile __int64 *)(v2 + 1928);
      v30 = (volatile __int64 *)(v2 + 1928);
      KxAcquireQueuedSpinLock((__int64)&v29, (volatile __int64 *)(v2 + 1928), v6);
      v15 = KeAbPreAcquire(v2, 0LL, 0);
      if ( v15 )
        BYTE2(v15[1].Left) |= 1u;
      if ( v10 >= v9 )
        goto LABEL_23;
      if ( v7 < 0x400 )
      {
        v16 = MmNumberOfChannels;
        v17 = 0LL;
        v18 = 0;
        if ( MmNumberOfChannels )
        {
          do
          {
            NodeStandbyPageCount = MiGetNodeStandbyPageCount(v1, v31, v18);
            v17 = NodeStandbyPageCount + v20;
            v18 = v21 + 1;
          }
          while ( v18 < v16 );
          v14 = (volatile __int64 *)(v2 + 1928);
        }
        if ( v3 < 0x5000A )
          v22 = 0x8000LL;
        else
          v22 = v3 / 0xA;
        if ( v17 > v22 )
          v10 += (v17 - v22) / 0xC8;
      }
      if ( v10 >= v9 )
      {
LABEL_23:
        *(_BYTE *)(v2 + 851) = 0;
        KxReleaseQueuedSpinLock(&v29);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        v25 = MiRebuildLargePage(v1, v31, v10);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v29 = 0LL;
        v30 = v14;
        KxAcquireQueuedSpinLock((__int64)&v29, v14, v26);
        if ( v25 )
        {
          v23 = 8;
        }
        else
        {
          if ( v32 )
            *(_BYTE *)(v2 + 851) = 1;
          v27 = *(_BYTE *)(v2 + 850);
          if ( v27 >= 0x80u )
            v23 = -1;
          else
            v23 = 2 * v27;
        }
      }
      else
      {
        v23 = 8;
      }
      *(_BYTE *)(v2 + 850) = v23;
      *(_BYTE *)(v2 + 848) = v23;
      *(_BYTE *)(v2 + 849) = 0;
      KxReleaseQueuedSpinLock(&v29);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v28 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v28);
      }
      __writecr8(CurrentIrql);
      KeAbPostRelease(v2);
    }
  }
  PsDereferencePartition(*(_QWORD *)(v1 + 168));
}
