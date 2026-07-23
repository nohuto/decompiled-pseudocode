/*
 * XREFs of MiSystemImageHasPrivateFixups @ 0x140119C68
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiSystemImageHasPrivateFixups(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  int SystemRegionType; // eax
  unsigned __int64 v7; // rdi
  KIRQL v8; // al
  __int64 *v9; // rdx
  KIRQL v10; // si
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  *a3 = 0;
  *a2 = 0LL;
  if ( (__int64 *)qword_140439F40 == &qword_140439F40 )
    return 0LL;
  SystemRegionType = MiGetSystemRegionType(a1);
  if ( SystemRegionType != 12 && SystemRegionType != 1 )
    return 0LL;
  v7 = 0LL;
  v8 = ExAcquireSpinLockShared(&dword_140439F88);
  v9 = (__int64 *)qword_140439F40;
  v10 = v8;
  while ( v9 != &qword_140439F40 )
  {
    v11 = v9[2];
    if ( a1 >= v11 && a1 <= v9[3] )
    {
      v12 = (a1 - v11) >> 12;
      if ( _bittest(*(const signed __int32 **)(v9[5] + 8), v12) )
      {
        v7 = v11 - v9[4];
        *a2 = v9[6];
        *a3 = v12;
      }
      break;
    }
    v9 = (__int64 *)*v9;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140439F88);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v10);
  return v7;
}
