/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x1405C7520
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400F10C4 (IopCompleteUnloadOrDelete.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1405C4404 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1405C4458 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1405C5F80 (ObQuerySecurityDescriptorInfo.c)
 *     ObpAdjustCreatorAccessState @ 0x1405C6118 (ObpAdjustCreatorAccessState.c)
 *     ObSetSecurityDescriptorInfo @ 0x1405C7140 (ObSetSecurityDescriptorInfo.c)
 *     ObReleaseObjectSecurity @ 0x1405C7290 (ObReleaseObjectSecurity.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C72C0 (SepAppendAceToTokenObjectAcl.c)
 *     ObpReferenceSecurityDescriptor @ 0x1405C7850 (ObpReferenceSecurityDescriptor.c)
 *     ObpCreateHandle @ 0x1405F3B50 (ObpCreateHandle.c)
 *     IopGetSetSecurityObject @ 0x140623F40 (IopGetSetSecurityObject.c)
 *     ExpWnfDeleteNameInstance @ 0x140652F64 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfCreateNameInstance @ 0x140653EBC (ExpWnfCreateNameInstance.c)
 *     EtwpFreeLoggerSecurityDescriptor @ 0x1406AC978 (EtwpFreeLoggerSecurityDescriptor.c)
 *     ObDeassignSecurity @ 0x1406CEB2C (ObDeassignSecurity.c)
 *     EtwpFreeGuidEntry @ 0x1406E19DC (EtwpFreeGuidEntry.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14071B784 (IopSetDeviceSecurityDescriptor.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1408FFB9C (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
