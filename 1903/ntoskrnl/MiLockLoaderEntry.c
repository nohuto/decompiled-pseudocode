/*
 * XREFs of MiLockLoaderEntry @ 0x1400F78A4
 * Callers:
 *     MiSetPagingOfDriver @ 0x1400F661C (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x1400F7144 (MiMakeDriverPagesPrivate.c)
 *     MiFindDriverNonPagedSections @ 0x14070E8F0 (MiFindDriverNonPagedSections.c)
 *     MiLockdownSections @ 0x14071033C (MiLockdownSections.c)
 *     MiFreeInitializationCode @ 0x140710B2C (MiFreeInitializationCode.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140115F50 (ExAcquireAutoExpandPushLockExclusive.c)
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
