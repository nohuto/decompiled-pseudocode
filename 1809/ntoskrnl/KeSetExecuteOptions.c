/*
 * XREFs of KeSetExecuteOptions @ 0x140135D7C
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetExecuteOptions(__int64 a1, int a2)
{
  char v2; // si
  __int64 v4; // rax
  unsigned int v5; // r14d
  unsigned __int8 CurrentIrql; // bl
  char v7; // al
  char v8; // al
  char v9; // cl
  char v10; // r8
  char v11; // cl
  char v12; // r8
  char v13; // cl
  char v14; // r8
  char v15; // cl
  char v16; // r8
  char v17; // cl
  char v18; // dl
  char v19; // r9
  bool v20; // zf
  char v21; // dl
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = a2;
  if ( (a2 & 0xFFFFFF80) != 0 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a1 + 1064);
  if ( !v4 || *(_WORD *)(v4 + 8) != 332 )
    return 3221225485LL;
  v5 = -1073741790;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v7 = *(_BYTE *)(a1 + 447);
  if ( (v7 & 8) == 0 )
  {
    v8 = v7 & 0xFE;
    if ( (v2 & 1) != 0 )
      v8 = v8 & 0xFC | 1;
    v9 = v8 | 4;
    if ( (v2 & 4) == 0 )
      v9 = v8;
    v10 = v9;
    v11 = v9 | 2;
    if ( (v2 & 2) == 0 )
      v11 = v10;
    v12 = v11;
    v13 = v11 | 0x10;
    if ( (v2 & 0x10) == 0 )
      v13 = v12;
    v14 = v13;
    v15 = v13 | 0x20;
    if ( (v2 & 0x20) == 0 )
      v15 = v14;
    v16 = v15;
    v17 = v15 | 0x40;
    if ( (v2 & 0x40) == 0 )
      v17 = v16;
    v18 = v17 | 8;
    if ( (v2 & 8) == 0 )
      v18 = v17;
    v19 = v18;
    v20 = (v18 & 2) == 0;
    v21 = v18 | 0x30;
    if ( v20 )
      v21 = v19;
    v5 = 0;
    *(_BYTE *)(a1 + 447) = v21;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return v5;
}
