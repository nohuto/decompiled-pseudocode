/*
 * XREFs of SmKmCleanup @ 0x1408E8E48
 * Callers:
 *     ?SmReInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14031FDF8 (-SmReInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

void __fastcall SmKmCleanup(__int64 a1)
{
  struct _PRIVILEGE_SET **v2; // rdi
  __int64 v3; // r15
  struct _PRIVILEGE_SET *v4; // rsi
  volatile signed __int64 *p_Attributes; // rbx
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r14

  v2 = (struct _PRIVILEGE_SET **)a1;
  v3 = 32LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      p_Attributes = (volatile signed __int64 *)&v4->Privilege[0].Attributes;
      v6 = 32LL;
      do
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)p_Attributes, 0LL);
        v8 = *((_QWORD *)p_Attributes - 2);
        if ( v8 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 256))(a1, *((_QWORD *)p_Attributes - 2), 7LL);
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)p_Attributes - 1);
        }
        else
        {
          *((_QWORD *)p_Attributes - 2) = -1LL;
        }
        if ( (_InterlockedExchangeAdd64(p_Attributes, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(p_Attributes);
        KeAbPostRelease((ULONG_PTR)p_Attributes);
        KeLeaveCriticalRegion();
        if ( v8 )
          (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 256))(a1, v8, 1LL);
        p_Attributes += 5;
        --v6;
      }
      while ( v6 );
      CmSiFreeMemory(v4);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
}
