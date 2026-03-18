/*
 * XREFs of DbgkRegisterErrorPort @ 0x140729B54
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1400065B0 (PsGetProcessServerSilo.c)
 *     PsIsHostSilo @ 0x14000A9B0 (PsIsHostSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x1401C1B30 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x1401C1C90 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     DbgkpDeleteErrorPort @ 0x140849B98 (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  unsigned int v2; // edi
  wchar_t *PoolWithQuotaTag; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // r15
  int v7; // edi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r13
  __int64 ProcessServerSilo; // r12
  char *v11; // r14
  __int64 v12; // rsi
  signed __int64 v13; // rax
  __int64 v14; // r8
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-108h] BYREF
  __int64 v17; // [rsp+70h] [rbp-F8h]
  _OWORD v18[3]; // [rsp+78h] [rbp-F0h] BYREF
  signed __int64 v19; // [rsp+A8h] [rbp-C0h]
  _QWORD v20[16]; // [rsp+B0h] [rbp-B8h] BYREF

  v2 = Size;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  memset(v20, 0, 0x28uLL);
  memset(v18, 0, sizeof(v18));
  memset(&v20[6], 0, 0x48uLL);
  if ( !v2 || (v2 & 1) != 0 || v2 > 0xFFFF )
    return 3221225485LL;
  PoolWithQuotaTag = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v2, 0x50676244u);
  UnicodeString.Buffer = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  UnicodeString.MaximumLength = v2;
  UnicodeString.Length = v2;
  memmove(PoolWithQuotaTag, Src, v2);
  v5 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x50676244u);
  v6 = v5;
  if ( v5 )
  {
    *(_DWORD *)((char *)v20 + 2) = -2147483608;
    v17 = 40LL;
    v20[8] = 272LL;
    v20[10] = 8704LL;
    LODWORD(v20[6]) = 0x100000;
    LODWORD(v18[0]) = 48;
    *((_QWORD *)&v18[0] + 1) = 0LL;
    DWORD2(v18[1]) = 512;
    *(_QWORD *)&v18[1] = 0LL;
    v18[2] = 0LL;
    v7 = ZwAlpcConnectPort((__int64)(v5 + 2), (__int64)&UnicodeString, (__int64)v18);
    if ( v7 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *v6 = 1;
      v6[1] = 0;
      Process = (__int64)CurrentThread->ApcState.Process;
      ProcessServerSilo = PsGetProcessServerSilo(Process);
      v11 = (char *)PsGetServerSiloGlobals(ProcessServerSilo) + 960;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v11, 0LL);
      v12 = *((_QWORD *)v11 + 1);
      if ( !v12 && PsIsHostSilo(ProcessServerSilo) )
        _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
      *((_QWORD *)v11 + 1) = v6;
      *((_QWORD *)v11 + 2) = Process;
      v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL);
      v19 = v13;
      if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v7 = 0;
      v6 = 0LL;
      if ( v12 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v12 + 4), 0) )
          ZwAlpcDisconnectPort(*(_QWORD *)(v12 + 8), 0LL, v14);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12, 0xFFFFFFFF) == 1 )
          DbgkpDeleteErrorPort((PVOID)v12);
      }
      KeSetEvent(*((PRKEVENT *)v11 + 3), 0, 0);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  else
  {
    v7 = -1073741670;
  }
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v7;
}
