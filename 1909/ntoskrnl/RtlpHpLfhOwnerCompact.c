/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x14001DA54
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x14001D970 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x14001DA54 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlpHpLfhOwnerCompact @ 0x14001DA54 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpAcquireLockShared @ 0x14001DBB0 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14001E510 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpLfhOwnerCompact(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD **v6; // rdi
  volatile LONG *v7; // rbx
  unsigned __int8 v8; // al
  _QWORD *v9; // r14
  unsigned __int8 v10; // bp
  __int64 result; // rax
  unsigned __int8 v12; // al
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _KPRCB *CurrentPrcb; // rcx

  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v12 = *(_BYTE *)(a2 + 2);
    if ( v12 )
    {
      v13 = 0LL;
      v14 = v12;
      do
      {
        RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(v13 + *(_QWORD *)(a2 + 96)), a3);
        v13 += 8LL;
        --v14;
      }
      while ( v14 );
    }
  }
  v6 = (_QWORD **)(a2 + 24);
  if ( *v6 != v6 || (result = a2 + 40, *(_QWORD *)result != result) )
  {
    v7 = (volatile LONG *)(a2 + 16);
    v8 = RtlpHpAcquireLockShared(v7, *(unsigned __int8 *)(a1 + 57));
    v9 = *v6;
    v10 = v8;
    while ( v9 != v6 )
    {
      RtlpHpLfhSubsegmentDecommitPages(a1, (_DWORD)v9, -1, 1, a3);
      v9 = (_QWORD *)*v9;
    }
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v7);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      result = v10;
      __writecr8(v10);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v7);
      KeAbPostRelease((ULONG_PTR)v7);
      return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v15, v16, v17);
    }
  }
  return result;
}
