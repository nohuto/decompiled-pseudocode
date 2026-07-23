/*
 * XREFs of MiRebuildLargeZeroPage @ 0x140090410
 * Callers:
 *     <none>
 * Callees:
 *     MiProcessLargeCoalesceList @ 0x1400905DC (MiProcessLargeCoalesceList.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiRebuildLargeZeroPage(__int64 a1)
{
  volatile LONG *v1; // r14
  unsigned int v3; // ebx
  KIRQL v4; // si
  __int64 v5; // rbp
  unsigned int v6; // eax
  _WORD *v7; // rcx
  __int128 *v9; // rax
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v21; // rcx
  _BYTE v22[528]; // [rsp+20h] [rbp-238h] BYREF

  v1 = (volatile LONG *)(a1 + 6116);
  v3 = 1;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 6116));
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = a1 + 520LL * v3;
      if ( !*(_WORD *)(v5 + 5042) )
        break;
      v9 = (__int128 *)(v5 + 5040);
      v10 = 4LL;
      v11 = v22;
      do
      {
        v12 = *v9;
        v13 = v9[1];
        v9 += 8;
        *v11 = v12;
        v14 = *(v9 - 6);
        v11[1] = v13;
        v15 = *(v9 - 5);
        v11[2] = v14;
        v16 = *(v9 - 4);
        v11[3] = v15;
        v17 = *(v9 - 3);
        v11[4] = v16;
        v18 = *(v9 - 2);
        v11[5] = v17;
        v19 = *(v9 - 1);
        v11[6] = v18;
        v11 += 8;
        *(v11 - 1) = v19;
        --v10;
      }
      while ( v10 );
      *(_QWORD *)v11 = *(_QWORD *)v9;
      memset((void *)(v5 + 5048), 0, 0x200uLL);
      *(_WORD *)(v5 + 5042) = 0;
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v4);
      MiProcessLargeCoalesceList(a1, v5 + 5040, v22, v3 + 1);
      ExAcquireSpinLockExclusive(v1);
    }
    if ( !v3 )
      break;
LABEL_15:
    --v3;
  }
  v6 = 0;
  v7 = (_WORD *)(a1 + 5042);
  do
  {
    if ( *v7 )
      break;
    ++v6;
    v7 += 260;
  }
  while ( v6 < 2 );
  if ( v6 != 2 )
  {
    v3 = 2;
    goto LABEL_15;
  }
  *(_BYTE *)(a1 + 6112) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    v21 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v21);
  }
  __writecr8(v4);
  return PsDereferencePartition(*(_QWORD *)(a1 + 168));
}
