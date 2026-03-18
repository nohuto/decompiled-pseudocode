/*
 * XREFs of MiFlushDataSection @ 0x1400E2D3C
 * Callers:
 *     MiCreateImageFileMap @ 0x14068AE6C (MiCreateImageFileMap.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x14005F650 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     CcFlushCachePriv @ 0x140077160 (CcFlushCachePriv.c)
 *     MmFlushSection @ 0x140077AD0 (MmFlushSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFlushDataSection(__int64 a1, _DWORD *a2)
{
  _QWORD *v4; // rcx
  __int64 result; // rax
  int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 v11; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0;
  v10[0] = 0LL;
  v4 = *(_QWORD **)(a1 + 40);
  v10[1] = 0LL;
  result = MiLockSectionControlArea(v4, 1, &v11);
  if ( result )
  {
    if ( *(_DWORD *)(result + 92) || *(_QWORD *)(result + 112) > 1uLL )
      *a2 = 1;
    v6 = *(_DWORD *)(result + 88);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(result + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v11);
    v8 = *(_QWORD *)(a1 + 40);
    if ( v6 )
    {
      CcFlushCachePriv(v8, 0LL, 0, 0LL, 0, (unsigned int *)v10);
      return LODWORD(v10[0]);
    }
    else
    {
      return MmFlushSection(v8, 0LL, 0LL, v7, v10, 1u);
    }
  }
  return result;
}
