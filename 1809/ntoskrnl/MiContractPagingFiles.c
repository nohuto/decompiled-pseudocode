/*
 * XREFs of MiContractPagingFiles @ 0x1400916A8
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140609AD0 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MiOkToShrinkPageFiles @ 0x140091738 (MiOkToShrinkPageFiles.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiQueuePageFileExtension @ 0x1402B89D4 (MiQueuePageFileExtension.c)
 */

__int64 __fastcall MiContractPagingFiles(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  __int64 v5; // r9
  _QWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // r8
  KIRQL v9; // si
  struct _KPRCB *CurrentPrcb; // rcx

  result = MiOkToShrinkPageFiles(*(_QWORD *)(a1 + 7656), *(_QWORD *)(a1 + 7784));
  if ( (_DWORD)result )
  {
    v3 = *(_DWORD *)(a1 + 7128);
    v4 = 0;
    if ( v3 )
    {
      v5 = a1 + 7136;
      do
      {
        v6 = *(_QWORD **)v5;
        result = *(unsigned __int16 *)(*(_QWORD *)v5 + 204LL);
        if ( (result & 0x50) == 0 )
        {
          result = v6[2];
          if ( *v6 != result && v6[3] > 0x4000uLL )
            break;
        }
        ++v4;
        v5 += 8LL;
      }
      while ( v4 < v3 );
    }
    if ( v4 != v3 )
    {
      v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
      v9 = v7;
      if ( *(_QWORD *)(a1 + 544) == -1LL )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        result = v9;
        __writecr8(v9);
      }
      else
      {
        *(_QWORD *)(a1 + 512) = 0LL;
        LOBYTE(v8) = v7;
        *(_BYTE *)(a1 + 591) |= 0x10u;
        *(_QWORD *)(a1 + 544) = -1LL;
        *(_QWORD *)(a1 + 536) = a1;
        return MiQueuePageFileExtension(a1 + 512, 0LL, v8);
      }
    }
  }
  return result;
}
