/*
 * XREFs of MiCleanCfg @ 0x14012F5A4
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1405F2BC8 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140075490 (MiUnlockAndDereferenceVadShared.c)
 */

void MiCleanCfg()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rbp
  char **v2; // rbx
  char *v3; // rsi

  CurrentThread = KeGetCurrentThread();
  v1 = 2LL;
  v2 = (char **)(*(_QWORD *)&CurrentThread->ApcState.Process[1].IdealGlobalNode + 408LL);
  do
  {
    v3 = *v2;
    if ( *v2 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v3 + 40), 0LL);
      BYTE1(CurrentThread[1].Queue) |= 0x20u;
      MiUnlockAndDereferenceVadShared(v3);
      *v2 = 0LL;
    }
    v2 += 4;
    --v1;
  }
  while ( v1 );
}
