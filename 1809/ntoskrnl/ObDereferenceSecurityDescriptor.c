/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x1405C9410
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400DA8EC (IopCompleteUnloadOrDelete.c)
 *     EtwpFreeGuidEntry @ 0x1405C0920 (EtwpFreeGuidEntry.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1405C1EEC (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1405C5324 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1405C833C (ObQuerySecurityDescriptorInfo.c)
 *     ObpAdjustCreatorAccessState @ 0x1405C84C8 (ObpAdjustCreatorAccessState.c)
 *     ObSetSecurityDescriptorInfo @ 0x1405C8A30 (ObSetSecurityDescriptorInfo.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C9190 (SepAppendAceToTokenObjectAcl.c)
 *     ObReleaseObjectSecurity @ 0x1405C93E0 (ObReleaseObjectSecurity.c)
 *     ObpReferenceSecurityDescriptor @ 0x1405C9750 (ObpReferenceSecurityDescriptor.c)
 *     ObpCreateHandle @ 0x1405E12B0 (ObpCreateHandle.c)
 *     ExpWnfCreateNameInstance @ 0x14060E058 (ExpWnfCreateNameInstance.c)
 *     IopGetSetSecurityObject @ 0x1406990F0 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140699558 (IopSetDeviceSecurityDescriptor.c)
 *     ObDeassignSecurity @ 0x1406AACE0 (ObDeassignSecurity.c)
 *     ExpWnfDeleteNameInstance @ 0x1406AB6E8 (ExpWnfDeleteNameInstance.c)
 *     EtwpFreeLoggerContext @ 0x1406C08C0 (EtwpFreeLoggerContext.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1408C3030 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall ObDereferenceSecurityDescriptor(__int64 a1, unsigned int a2)
{
  volatile signed __int64 *v3; // rbx
  signed __int64 v4; // rax
  __int64 v5; // rsi
  signed __int64 v6; // rcx
  signed __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *v9; // rbp
  volatile signed __int64 *v10; // r14
  __int64 v11; // rax
  volatile signed __int64 *i; // rcx

  v3 = (volatile signed __int64 *)(a1 - 32);
  _m_prefetchw((const void *)(a1 - 32 + 8));
  v4 = *(_QWORD *)(a1 - 32 + 8);
  v5 = a2;
  v6 = v4 - a2;
  if ( v6 <= 0 )
  {
LABEL_4:
    if ( v6 )
      __fastfail(0xEu);
    CurrentThread = KeGetCurrentThread();
    v9 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v3 + 4));
    --CurrentThread->KernelApcDisable;
    v10 = v9 + 1;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v9, 0LL);
    v11 = _InterlockedExchangeAdd64(v3 + 1, -a2) - v5;
    if ( v11 > 0 )
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v9);
      KeAbPostRelease((ULONG_PTR)v9);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    else
    {
      if ( v11 )
        __fastfail(0xEu);
      for ( i = (volatile signed __int64 *)*v10; i != v3; i = (volatile signed __int64 *)*i )
        v10 = i;
      *v10 = *v3;
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v9);
      KeAbPostRelease((ULONG_PTR)v9);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      ExFreePoolWithTag((PVOID)v3, 0x6353624Fu);
    }
  }
  else
  {
    while ( 1 )
    {
      v7 = v4;
      v4 = _InterlockedCompareExchange64(v3 + 1, v6, v4);
      if ( v7 == v4 )
        break;
      v6 = v4 - a2;
      if ( v6 <= 0 )
        goto LABEL_4;
    }
  }
}
