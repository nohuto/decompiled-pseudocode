/*
 * XREFs of SeCreateClientSecurityEx @ 0x1405DDE10
 * Callers:
 *     AlpcpExposeTokenAttribute @ 0x1405DFC60 (AlpcpExposeTokenAttribute.c)
 *     AlpcpImpersonateMessage @ 0x1405E4570 (AlpcpImpersonateMessage.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x14064015C (AlpcpGetEffectiveTokenMessage.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400064D0 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x14000A920 (PsIsHostSilo.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x14000CAA0 (SepReconcileTrustSidWithProcessProtection.c)
 *     ObFastReferenceObject @ 0x14003AF90 (ObFastReferenceObject.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007F850 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x1405DDCC0 (PsReferenceImpersonationTokenEx.c)
 *     SepCreateClientSecurityEx @ 0x1405DE000 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x1408E01B4 (SepUpdateSiloInClientSecurity.c)
 */

__int64 __fastcall SeCreateClientSecurityEx(__int64 a1, int a2, unsigned __int8 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // rsi
  __int64 *v10; // rdi
  int v11; // r14d
  char v12; // r15
  __int64 result; // rax
  unsigned int v14; // esi
  unsigned __int64 CurrentServerSilo; // rbx
  unsigned int v16; // ebx
  char v17; // [rsp+60h] [rbp-38h] BYREF
  char v18; // [rsp+61h] [rbp-37h] BYREF
  _BYTE v19[2]; // [rsp+62h] [rbp-36h] BYREF
  int v20; // [rsp+64h] [rbp-34h] BYREF
  __int64 v21; // [rsp+68h] [rbp-30h] BYREF
  char v22; // [rsp+A0h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v22 = 0;
  v17 = 0;
  v21 = 0LL;
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *(_KPROCESS **)(a1 + 544);
  v10 = (__int64 *)PsReferenceImpersonationTokenEx(a1, 0, v19, (bool *)&v18, &v20, &v22);
  if ( v10 )
  {
    v12 = v18;
    v11 = 2;
  }
  else
  {
    v10 = (__int64 *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
    if ( !v10 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
      v10 = (__int64 *)ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&Process[1]);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    v11 = 1;
    v22 = BYTE2(Process[2].ActiveProcessors.Bitmap[4]);
    v12 = 0;
  }
  SepReconcileTrustSidWithProcessProtection(v10[138], (__int64)&v22, &v17, &v21);
  result = SepCreateClientSecurityEx((_DWORD)v10, a2, a3, v11, v12, v20, 1, a1, v17, v21, a4);
  v14 = result;
  if ( (int)result < 0 || !*(_BYTE *)(a4 + 8) )
  {
    ObfDereferenceObject(v10);
    return v14;
  }
  if ( *(PEPROCESS *)(a1 + 544) != PsInitialSystemProcess )
    return result;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
    return v14;
  result = SepUpdateSiloInClientSecurity(a4, CurrentServerSilo);
  v16 = result;
  if ( (int)result < 0 )
  {
    ObfDereferenceObject(v10);
    return v16;
  }
  return result;
}
