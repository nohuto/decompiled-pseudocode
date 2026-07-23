/*
 * XREFs of MiUnlinkBadPages @ 0x1402A7278
 * Callers:
 *     MmMarkPhysicalMemoryAsGood @ 0x1402A7CA0 (MmMarkPhysicalMemoryAsGood.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     MiReleaseNonPagedResources @ 0x1400E1968 (MiReleaseNonPagedResources.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReferencePagePartition @ 0x1402B4844 (MiReferencePagePartition.c)
 *     MiUnlinkPageFromBadList @ 0x1402BFFF0 (MiUnlinkPageFromBadList.c)
 */

__int64 __fastcall MiUnlinkBadPages(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v3; // rdi
  __int64 v4; // r12
  __int64 v5; // rbx
  volatile signed __int64 *v6; // rsi
  _QWORD *v7; // r15
  __int64 v8; // r14
  unsigned __int8 v9; // al
  char v10; // cl
  unsigned __int8 v11; // bp
  struct _KPRCB *v12; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v14; // rcx

  v3 = BugCheckParameter2;
  v4 = 0LL;
  v5 = 48 * BugCheckParameter2 - 0x58000000000LL;
  if ( BugCheckParameter2 < a2 )
  {
    v6 = (volatile signed __int64 *)(v5 + 24);
    v7 = (_QWORD *)(48 * BugCheckParameter2 - 0x57FFFFFFFD8LL);
    do
    {
      if ( v3 <= 0xFFFFFFFFFLL && (*v7 & 0x20000000000000LL) != 0 )
      {
        v8 = 0LL;
        v9 = MiLockPageInline(v5);
        v10 = *(_BYTE *)(v5 + 35);
        v11 = v9;
        if ( (v10 & 0x40) == 0 )
          goto LABEL_25;
        if ( (*(_QWORD *)(v5 + 40) & 0x10000000000000LL) == 0 )
        {
          v8 = MiReferencePagePartition(v5);
          if ( !v8 )
          {
            _InterlockedAnd64(v6, 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            __writecr8(v11);
            v5 -= 48LL;
            v6 -= 6;
            --v3;
            v7 -= 6;
            goto LABEL_32;
          }
LABEL_21:
          *(_BYTE *)(v5 + 35) &= ~0x40u;
          *(_BYTE *)(v5 + 35) &= ~0x80u;
          if ( (*(_QWORD *)(v5 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL && (*(_BYTE *)(v5 + 34) & 7) == 5 )
          {
            MiUnlinkPageFromBadList(v5, 0LL);
            *v6 |= 0x4000000000000000uLL;
            MiInsertPageInFreeOrZeroedList(v3, 2);
          }
          ++v4;
LABEL_25:
          _InterlockedAnd64(v6, 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
          {
            v14 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v14);
          }
          __writecr8(v11);
          if ( v8 )
          {
            MiReleaseNonPagedResources(v8, 1uLL);
            PsDereferencePartition(*(_QWORD *)(v8 + 168));
          }
          goto LABEL_32;
        }
        if ( (v10 & 0x10) == 0 )
          goto LABEL_21;
        _InterlockedAnd64(v6, 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
        {
          v12 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v12);
        }
        __writecr8(v11);
      }
LABEL_32:
      ++v3;
      v7 += 6;
      v5 += 48LL;
      v6 += 6;
    }
    while ( v3 < a2 );
  }
  return v4;
}
