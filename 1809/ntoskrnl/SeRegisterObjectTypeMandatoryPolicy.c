/*
 * XREFs of SeRegisterObjectTypeMandatoryPolicy @ 0x14017D56C
 * Callers:
 *     SepTokenInitialization @ 0x1409AF964 (SepTokenInitialization.c)
 *     PspInitPhase0 @ 0x1409B20C8 (PspInitPhase0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall SeRegisterObjectTypeMandatoryPolicy(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  char v6; // bp
  unsigned int v7; // eax
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // di

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SepMandatoryObjectTypePolicyLock, 0LL);
  v7 = 0;
  if ( !SepMandatoryObjectTypePolicyCount )
    goto LABEL_7;
  v8 = SepMandatoryObjectTypePolicy;
  while ( a1 != *v8 )
  {
    ++v7;
    v8 += 3;
    if ( v7 >= SepMandatoryObjectTypePolicyCount )
      goto LABEL_5;
  }
  v6 = 1;
LABEL_5:
  if ( v7 >= 0x20 )
  {
    v3 = -1073741823;
    goto LABEL_14;
  }
  if ( v6 )
  {
    v9 = v7;
  }
  else
  {
LABEL_7:
    v9 = v7;
    ++SepMandatoryObjectTypePolicyCount;
    v10 = 3LL * v7;
    *(_QWORD *)&SepMandatoryObjectTypePolicy[2 * v10] = a1;
    SepMandatoryObjectTypePolicy[2 * v10 + 4] = 0;
    SepMandatoryObjectTypePolicy[2 * v10 + 2] = 0;
  }
  v11 = 3 * v9;
  SepMandatoryObjectTypePolicy[2 * v11 + 2] |= 1u;
  SepMandatoryObjectTypePolicy[2 * v11 + 3] = a2;
  if ( (a2 & 1) != 0 )
    SepMandatoryObjectTypePolicy[6 * v9 + 4] |= 0x100u;
  if ( (a2 & 2) != 0 )
    SepMandatoryObjectTypePolicy[6 * v9 + 4] |= 0x200u;
  if ( (a2 & 4) != 0 )
    SepMandatoryObjectTypePolicy[6 * v9 + 4] |= 0x400u;
LABEL_14:
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock);
  KeAbPostRelease((ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
