/*
 * XREFs of VmpAccessFaultBatch @ 0x140329758
 * Callers:
 *     VmAccessFault @ 0x1408ECEA0 (VmAccessFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpFaultEntryInsert @ 0x140329C4C (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x140329DB8 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockShared @ 0x14032ADD8 (VmpProcessContextLockShared.c)
 *     VmpProcessUpdateSlat @ 0x14032AE30 (VmpProcessUpdateSlat.c)
 *     VmpAccessFaultBatchResolve @ 0x1408ED7A4 (VmpAccessFaultBatchResolve.c)
 */

__int64 __fastcall VmpAccessFaultBatch(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        int a7,
        __int64 a8)
{
  int v8; // edi
  __int64 v9; // rsi
  PEX_SPIN_LOCK v11; // rbp
  int v12; // r13d
  int updated; // edi
  __int64 v14; // r15
  int v15; // r12d
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  struct _KPRCB *v23; // rcx

  v8 = a4;
  LODWORD(v9) = a3;
  v11 = SpinLock;
  while ( 1 )
  {
    VmpFaultEntryInsert(v11, a2, (unsigned int)v9);
    v12 = 1;
    updated = VmpAccessFaultBatchResolve(a2, v9, v8, a5, a6, a7);
    if ( updated < 0 )
      goto LABEL_37;
    v14 = VmpProcessContextLockShared(v11);
    if ( *((_QWORD *)v11 + 9) != a8 )
      break;
    v15 = 0;
    v16 = a2 + 48LL * (unsigned int)v9;
    if ( a2 < v16 )
    {
      v17 = a2 + 32;
      v18 = (48 * (unsigned __int64)(unsigned int)v9 - 1) / 0x30 + 1;
      do
      {
        if ( (*(_QWORD *)(v17 - 8) & 0x10000000000000LL) != 0 || (*(_BYTE *)(v17 + 7) & 1) != 0 )
        {
          *(_QWORD *)v17 |= 0x80000000000000uLL;
          ++v15;
        }
        v17 += 48LL;
        --v18;
      }
      while ( v18 );
      v11 = SpinLock;
    }
    if ( v15 != (_DWORD)v9 )
    {
      updated = VmpProcessUpdateSlat((_DWORD)v11, a2, v9, a4, (a5 >> 5) & 1);
      if ( updated < 0 )
        goto LABEL_29;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v11);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v14 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8((unsigned __int8)v14);
    v14 = -1LL;
    VmpFaultEntryRemove(v11, a2, (unsigned int)v9);
    v12 = 0;
    if ( v15 )
    {
      v9 = 0LL;
      if ( a2 < v16 )
      {
        v20 = (__int64 *)(a2 + 32);
        do
        {
          v21 = *v20;
          if ( (*v20 & 0x80000000000000LL) != 0 )
          {
            if ( (v21 & 0x100000000000000LL) == 0 )
            {
              *(v20 - 1) &= ~0x10000000000000uLL;
              *v20 = v21 & 0xFFFFFFFFFFFFFLL;
              v22 = 6 * v9;
              v9 = (unsigned int)(v9 + 1);
              *(_OWORD *)(a2 + 8 * v22) = *((_OWORD *)v20 - 2);
              *(_OWORD *)(a2 + 8 * v22 + 16) = *((_OWORD *)v20 - 1);
              *(_OWORD *)(a2 + 8 * v22 + 32) = *(_OWORD *)v20;
            }
            if ( !--v15 )
              break;
          }
          v20 += 6;
        }
        while ( (unsigned __int64)(v20 - 4) < v16 );
        v8 = a4;
        if ( (_DWORD)v9 )
          continue;
      }
    }
    updated = 0;
    goto LABEL_29;
  }
  updated = -1073741558;
LABEL_29:
  if ( v14 != -1 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(v11);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v14 < 2u )
    {
      v23 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v23);
    }
    __writecr8((unsigned __int8)v14);
  }
  if ( v12 )
LABEL_37:
    VmpFaultEntryRemove(v11, a2, (unsigned int)v9);
  return (unsigned int)updated;
}
