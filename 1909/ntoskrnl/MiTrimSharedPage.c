/*
 * XREFs of MiTrimSharedPage @ 0x14012F104
 * Callers:
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiTradePage @ 0x1400B9240 (MiTradePage.c)
 *     MiMarkFileOnlyPfnBad @ 0x1402CC374 (MiMarkFileOnlyPfnBad.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x1400BF958 (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x1400C0420 (MiReleaseControlAreaWaiters.c)
 *     MiTrimSection @ 0x1400C0BB0 (MiTrimSection.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiPreventControlAreaDeletion @ 0x14012F308 (MiPreventControlAreaDeletion.c)
 *     MiDecrementSubsection @ 0x14012F3F4 (MiDecrementSubsection.c)
 *     MiReferencePfBackedSection @ 0x14012F47C (MiReferencePfBackedSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiClusterVadFull @ 0x1402E0580 (MiClusterVadFull.c)
 */

__int64 __fastcall MiTrimSharedPage(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned __int64 v6; // r15
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // r13d
  int v11; // r12d
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 *v17; // rax
  struct _KPRCB *v18; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 *v20; // rax
  _QWORD v21[5]; // [rsp+20h] [rbp-30h] BYREF
  int v22; // [rsp+48h] [rbp-8h]
  int v23; // [rsp+4Ch] [rbp-4h]
  _QWORD *v24; // [rsp+90h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v23 = 0;
  v24 = 0LL;
  BugCheckParameter2 = 0LL;
  v6 = v3 | 0x8000000000000000uLL;
  v7 = (a3 >> 18) & 1 | 2;
  if ( (a3 & 0x80000) == 0 )
    v7 = (a3 >> 18) & 1;
  v8 = v7 | 4;
  if ( (a3 & 0x20000) == 0 )
    v8 = v7;
  v9 = v8 | 8;
  if ( (a3 & 0x10000000) == 0 )
    v9 = v8;
  v10 = v9 | 0x10;
  v11 = a3 & 0x800000;
  if ( (a3 & 0x800000) == 0 )
    v10 = v9;
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
    v17 = (__int64 *)MiReferencePfBackedSection(v6);
    v14 = (__int64)v17;
    if ( v17 )
    {
      v12 = *v17;
      if ( !v11 || *(int *)(v12 + 56) >= 0 || (unsigned int)MiClusterVadFull(a1, v17) != 1 )
        goto LABEL_16;
      v20 = MiDecrementModifiedWriteCount(v12, 0);
      if ( v20 )
        MiReleaseControlAreaWaiters(v20);
    }
    MiLockPageInline(a1);
    return 0LL;
  }
  v12 = MiPreventControlAreaDeletion(a1, 0LL, &BugCheckParameter2, &v24);
  if ( !v12 )
    return 0LL;
  v13 = *(_QWORD *)(a1 + 16);
  if ( qword_140465800 && (v13 & 0x10) == 0 )
    v13 &= ~qword_140465800;
  v14 = v13 >> 16;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18);
  }
  __writecr8(a2);
  MiReleaseControlAreaWaiters(v24);
LABEL_16:
  v22 = 0;
  v21[0] = v12;
  v21[1] = v6;
  v21[2] = v6;
  v21[3] = v14;
  v21[4] = v14;
  if ( (unsigned int)MiTrimSection((__int64)v21, 1, v10) || (*(_BYTE *)(a1 + 34) & 7) == 6 )
    MiTrimSection((__int64)v21, 1, v10);
  if ( BugCheckParameter2 )
    MiDecrementSubsection(BugCheckParameter2);
  v15 = MiDecrementModifiedWriteCount(v12, 0);
  if ( v15 )
    MiReleaseControlAreaWaiters(v15);
  MiLockPageInline(a1);
  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    return 2LL;
  return 0LL;
}
