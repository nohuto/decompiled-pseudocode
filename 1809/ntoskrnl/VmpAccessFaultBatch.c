/*
 * XREFs of VmpAccessFaultBatch @ 0x14030BC68
 * Callers:
 *     VmAccessFault @ 0x1408B1080 (VmAccessFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpAccessFaultBatchResolve @ 0x14030BEFC (VmpAccessFaultBatchResolve.c)
 *     VmpFaultEntryInsert @ 0x14030C37C (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x14030C4E8 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockShared @ 0x14030D3F4 (VmpProcessContextLockShared.c)
 *     VmpProcessUpdateSlat @ 0x14030D44C (VmpProcessUpdateSlat.c)
 */

__int64 __fastcall VmpAccessFaultBatch(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // edi
  __int64 v7; // rsi
  PEX_SPIN_LOCK v9; // rbp
  int v10; // r13d
  int updated; // edi
  __int64 v12; // r15
  int v13; // r12d
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  struct _KPRCB *v21; // rcx

  v6 = a4;
  LODWORD(v7) = a3;
  v9 = SpinLock;
  while ( 1 )
  {
    VmpFaultEntryInsert(v9, a2, (unsigned int)v7);
    v10 = 1;
    updated = VmpAccessFaultBatchResolve(a2, (unsigned int)v7, v6, a5);
    if ( updated < 0 )
      goto LABEL_37;
    v12 = VmpProcessContextLockShared(v9);
    if ( *((_QWORD *)v9 + 9) != a6 )
      break;
    v13 = 0;
    v14 = a2 + 48LL * (unsigned int)v7;
    if ( a2 < v14 )
    {
      v15 = a2 + 32;
      v16 = (48 * (unsigned __int64)(unsigned int)v7 - 1) / 0x30 + 1;
      do
      {
        if ( (*(_QWORD *)(v15 - 8) & 0x10000000000000LL) != 0 || (*(_BYTE *)(v15 + 7) & 1) != 0 )
        {
          *(_QWORD *)v15 |= 0x80000000000000uLL;
          ++v13;
        }
        v15 += 48LL;
        --v16;
      }
      while ( v16 );
      v9 = SpinLock;
    }
    if ( v13 != (_DWORD)v7 )
    {
      updated = VmpProcessUpdateSlat(v9, a2, (unsigned int)v7, (a4 >> 5) & 1);
      if ( updated < 0 )
        goto LABEL_29;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v9);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v12 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8((unsigned __int8)v12);
    v12 = -1LL;
    VmpFaultEntryRemove(v9, a2, (unsigned int)v7);
    v10 = 0;
    if ( v13 )
    {
      v7 = 0LL;
      if ( a2 < v14 )
      {
        v18 = (__int64 *)(a2 + 32);
        do
        {
          v19 = *v18;
          if ( (*v18 & 0x80000000000000LL) != 0 )
          {
            if ( (v19 & 0x100000000000000LL) == 0 )
            {
              *(v18 - 1) &= ~0x10000000000000uLL;
              *v18 = v19 & 0xFFFFFFFFFFFFFLL;
              v20 = 6 * v7;
              v7 = (unsigned int)(v7 + 1);
              *(_OWORD *)(a2 + 8 * v20) = *((_OWORD *)v18 - 2);
              *(_OWORD *)(a2 + 8 * v20 + 16) = *((_OWORD *)v18 - 1);
              *(_OWORD *)(a2 + 8 * v20 + 32) = *(_OWORD *)v18;
            }
            if ( !--v13 )
              break;
          }
          v18 += 6;
        }
        while ( (unsigned __int64)(v18 - 4) < v14 );
        v6 = a4;
        if ( (_DWORD)v7 )
          continue;
      }
    }
    updated = 0;
    goto LABEL_29;
  }
  updated = -1073741558;
LABEL_29:
  if ( v12 != -1 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(v9);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v12 < 2u )
    {
      v21 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v21);
    }
    __writecr8((unsigned __int8)v12);
  }
  if ( v10 )
LABEL_37:
    VmpFaultEntryRemove(v9, a2, (unsigned int)v7);
  return (unsigned int)updated;
}
