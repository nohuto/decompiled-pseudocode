/*
 * XREFs of MiRebuildLargeZeroPage @ 0x1400F7840
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     PsDereferencePartition @ 0x1400C5468 (PsDereferencePartition.c)
 *     MiProcessLargeCoalesceList @ 0x1400F7A0C (MiProcessLargeCoalesceList.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall MiRebuildLargeZeroPage(__int64 a1)
{
  volatile LONG *v1; // r14
  unsigned int v3; // edi
  KIRQL v4; // si
  __int64 v5; // rbp
  unsigned int v6; // eax
  _WORD *v7; // rcx
  __int128 *v8; // rax
  __int64 v9; // rdx
  _OWORD *v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v20; // rcx
  _BYTE v21[528]; // [rsp+20h] [rbp-238h] BYREF

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
      v8 = (__int128 *)(v5 + 5040);
      v9 = 4LL;
      v10 = v21;
      do
      {
        v11 = *v8;
        v12 = v8[1];
        v8 += 8;
        *v10 = v11;
        v13 = *(v8 - 6);
        v10[1] = v12;
        v14 = *(v8 - 5);
        v10[2] = v13;
        v15 = *(v8 - 4);
        v10[3] = v14;
        v16 = *(v8 - 3);
        v10[4] = v15;
        v17 = *(v8 - 2);
        v10[5] = v16;
        v18 = *(v8 - 1);
        v10[6] = v17;
        v10 += 8;
        *(v10 - 1) = v18;
        --v9;
      }
      while ( v9 );
      *(_QWORD *)v10 = *(_QWORD *)v8;
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
      MiProcessLargeCoalesceList(a1, v5 + 5040, v21, v3 + 1);
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
  *(_WORD *)(a1 + 6112) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    v20 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v20);
  }
  __writecr8(v4);
  PsDereferencePartition(*(_QWORD *)(a1 + 168));
}
