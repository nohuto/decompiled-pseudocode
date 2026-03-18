/*
 * XREFs of MiDereferencePerSessionProtos @ 0x1406E88BC
 * Callers:
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiInsertInSystemSpace @ 0x1400A82A0 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400A8C3C (MiRemoveFromSystemSpace.c)
 *     MiFinishCreateSection @ 0x1405D74C0 (MiFinishCreateSection.c)
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     MiSectionDelete @ 0x140607970 (MiSectionDelete.c)
 *     MiValidateSectionCreate @ 0x14065BE44 (MiValidateSectionCreate.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x14070F5A4 (MiMapSystemImage.c)
 *     MiDeletePartialCloneVads @ 0x14089B3A0 (MiDeletePartialCloneVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiDereferenceSubsectionProtos @ 0x1406E896C (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x1406E8D08 (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiDereferencePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rsi
  volatile signed __int64 *v6; // rsi
  _QWORD *i; // rdi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v4 = *a1;
  --CurrentThread->SpecialApcDisable;
  v6 = (volatile signed __int64 *)(v4 + 40);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
  for ( i = a1 + 16; i; i = (_QWORD *)i[2] )
    MiDereferenceSubsectionProtos(i, a2, &v9);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return MiFreeSubsectionProtos(&v9);
}
