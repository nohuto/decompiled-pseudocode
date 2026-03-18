/*
 * XREFs of MiLockLoaderEntry @ 0x1400FB344
 * Callers:
 *     MiSetPagingOfDriver @ 0x1400FA0BC (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x1400FABE4 (MiMakeDriverPagesPrivate.c)
 *     MiFindDriverNonPagedSections @ 0x1407106D0 (MiFindDriverNonPagedSections.c)
 *     MiLockdownSections @ 0x14071211C (MiLockdownSections.c)
 *     MiFreeInitializationCode @ 0x14071290C (MiFreeInitializationCode.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1401175E0 (ExAcquireAutoExpandPushLockExclusive.c)
 */

void __fastcall MiLockLoaderEntry(__int64 a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = a1 + 104;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 == 2 )
      ExAcquirePushLockSharedEx(v3, 0LL);
    else
      ExAcquireAutoExpandPushLockExclusive(v3, 0LL);
  }
  else
  {
    ExAcquirePushLockExclusiveEx(v3, a2);
  }
}
