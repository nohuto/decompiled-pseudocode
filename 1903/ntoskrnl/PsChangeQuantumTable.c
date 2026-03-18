/*
 * XREFs of PsChangeQuantumTable @ 0x140744EEC
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 *     PspInitPhase0 @ 0x140A0457C (PspInitPhase0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     MmIsThisAnNtAsSystem @ 0x1400B5880 (MmIsThisAnNtAsSystem.c)
 *     KeSetQuantumProcess @ 0x1400E4758 (KeSetQuantumProcess.c)
 *     PspUnlockProcessListShared @ 0x14017F520 (PspUnlockProcessListShared.c)
 *     PspComputeQuantum @ 0x14068E4CC (PspComputeQuantum.c)
 */

char __fastcall PsChangeQuantumTable(char a1, char a2)
{
  unsigned int v3; // eax
  int v5; // eax
  char *v6; // rbx
  int v7; // edi
  char result; // al
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *i; // rbx
  char v11; // al
  __int64 v12; // r8

  v3 = a2 & 3;
  if ( v3 >= 2 )
    v3 = 2;
  *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 6) = v3;
  v5 = a2 & 0xC;
  if ( v5 == 4 )
  {
    v6 = (char *)&PspVariableQuantums;
  }
  else if ( v5 == 8 )
  {
    v6 = PspFixedQuantums;
  }
  else
  {
    v6 = PspFixedQuantums;
    if ( !MmIsThisAnNtAsSystem() )
      v6 = (char *)&PspVariableQuantums;
  }
  v7 = a2 & 0x30;
  if ( v7 == 16 || v7 != 32 && MmIsThisAnNtAsSystem() )
    v6 += 3;
  PspForegroundQuantum = *(_WORD *)v6;
  result = v6[2];
  PspUseJobSchedulingClasses = v6 == &byte_140947287;
  byte_1409AE7EE = result;
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    for ( i = (__int64 *)PsActiveProcessHead; i != &PsActiveProcessHead; i = (__int64 *)*i )
    {
      v11 = PspComputeQuantum((__int64)(i - 94), *((_BYTE *)i + 714));
      KeSetQuantumProcess(v12, v11);
    }
    return PspUnlockProcessListShared((__int64)CurrentThread);
  }
  return result;
}
