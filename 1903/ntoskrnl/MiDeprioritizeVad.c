/*
 * XREFs of MiDeprioritizeVad @ 0x14013B5DC
 * Callers:
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009C6C (MiDereferenceControlAreaFile.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockAndDereferenceVad @ 0x1400504B0 (MiUnlockAndDereferenceVad.c)
 *     MiTryLockVad @ 0x14013B6AC (MiTryLockVad.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402C482C (MiDeprioritizeVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PfCheckDeprioritizeFile @ 0x1406585C8 (PfCheckDeprioritizeFile.c)
 */

void __fastcall MiDeprioritizeVad(unsigned int *P, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  ULONG_PTR v9; // rax
  __int64 v10; // r15
  unsigned __int64 v11; // rbp

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  if ( (unsigned int)MiTryLockVad(CurrentThread, P) )
  {
    if ( (P[12] & 4) == 0 )
    {
      v6 = P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32);
      v7 = (a2 >> 12) - v6;
      if ( (P[16] & 0x2000000) != 0 )
      {
        v8 = **((_QWORD **)P + 9);
        v9 = MiReferenceControlAreaFile(v8);
        v10 = *(_QWORD *)(v9 + 24);
        MiDereferenceControlAreaFile(v8, v9);
        if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0
          && (v11 = v7 & 0xFFFFFFFFFFFFFF00uLL,
              (unsigned int)PfCheckDeprioritizeFile(Process[1].ActiveGroupsMask, v10, v11) == 1) )
        {
          if ( (P[16] & 0x2000000) != 0 )
            MiDeprioritizeVirtualAddresses((v6 << 12) + ((v11 - 256) << 12), 256LL, &Process[1].IdealNode[6], 18LL);
        }
        else
        {
          P[16] &= ~0x2000000u;
        }
      }
    }
    MiUnlockAndDereferenceVad((char *)P);
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && (P[12] & 4) != 0 )
      ExFreePoolWithTag(P, 0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
}
