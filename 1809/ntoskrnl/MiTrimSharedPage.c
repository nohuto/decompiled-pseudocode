/*
 * XREFs of MiTrimSharedPage @ 0x1400E97F0
 * Callers:
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 *     MiMarkFileOnlyPfnBad @ 0x1402B6578 (MiMarkFileOnlyPfnBad.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x140022DA0 (MiDecrementModifiedWriteCount.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiDecrementSubsection @ 0x1400E7798 (MiDecrementSubsection.c)
 *     MiPreventControlAreaDeletion @ 0x1400E9578 (MiPreventControlAreaDeletion.c)
 *     MiTrimSection @ 0x1400EAC24 (MiTrimSection.c)
 *     MiReferencePfBackedSection @ 0x1401304F0 (MiReferencePfBackedSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiClusterVadFull @ 0x1402C6318 (MiClusterVadFull.c)
 */

__int64 __fastcall MiTrimSharedPage(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned __int64 v5; // r15
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // r13d
  int v10; // r12d
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 *v16; // rax
  struct _KPRCB *v17; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 *v19; // rax
  _QWORD v20[5]; // [rsp+20h] [rbp-30h] BYREF
  int v21; // [rsp+48h] [rbp-8h]
  __int64 *v22; // [rsp+90h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+58h] BYREF

  v22 = 0LL;
  BugCheckParameter2 = 0LL;
  v5 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v6 = (a3 >> 18) & 1 | 2;
  if ( (a3 & 0x80000) == 0 )
    v6 = (a3 >> 18) & 1;
  v7 = v6 | 4;
  if ( (a3 & 0x20000) == 0 )
    v7 = v6;
  v8 = v7 | 8;
  if ( (a3 & 0x10000000) == 0 )
    v8 = v7;
  v9 = v8 | 0x10;
  v10 = a3 & 0x800000;
  if ( (a3 & 0x800000) == 0 )
    v9 = v8;
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(a2);
    v16 = (__int64 *)MiReferencePfBackedSection(v5);
    v13 = (__int64)v16;
    if ( v16 )
    {
      v11 = *v16;
      if ( !v10 || *(int *)(v11 + 56) >= 0 || (unsigned int)MiClusterVadFull(a1, v16) != 1 )
        goto LABEL_16;
      v19 = MiDecrementModifiedWriteCount(v11, 0);
      if ( v19 )
        MiReleaseControlAreaWaiters(v19);
    }
    MiLockPageInline(a1);
    return 0LL;
  }
  v11 = MiPreventControlAreaDeletion(a1, 0, &BugCheckParameter2, &v22);
  if ( !v11 )
    return 0LL;
  v12 = *(_QWORD *)(a1 + 16);
  if ( qword_14043B180 && (v12 & 0x10) == 0 )
    v12 &= ~qword_14043B180;
  v13 = v12 >> 16;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v17);
  }
  __writecr8(a2);
  MiReleaseControlAreaWaiters(v22);
LABEL_16:
  v21 = 0;
  v20[0] = v11;
  v20[1] = v5;
  v20[2] = v5;
  v20[3] = v13;
  v20[4] = v13;
  if ( (unsigned int)MiTrimSection(v20, 1LL, v9) || (*(_BYTE *)(a1 + 34) & 7) == 6 )
    MiTrimSection(v20, 1LL, v9);
  if ( BugCheckParameter2 )
    MiDecrementSubsection((__int64 *)BugCheckParameter2);
  v14 = MiDecrementModifiedWriteCount(v11, 0);
  if ( v14 )
    MiReleaseControlAreaWaiters(v14);
  MiLockPageInline(a1);
  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    return 2LL;
  return 0LL;
}
