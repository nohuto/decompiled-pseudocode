/*
 * XREFs of DbgkRegisterErrorPort @ 0x1407024A0
 * Callers:
 *     NtSetSystemInformation @ 0x140663DF0 (NtSetSystemInformation.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x14009238C (PsGetServerSiloGlobals.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7670 (ExAllocatePoolWithQuotaTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsIsHostSilo @ 0x1400B8A80 (PsIsHostSilo.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x1401B9070 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x1401B91D0 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     DbgkpDeleteErrorPort @ 0x1407070E4 (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  unsigned __int16 v2; // di
  size_t v4; // rsi
  wchar_t *PoolWithQuotaTag; // rax
  _DWORD *v7; // r15
  unsigned int v8; // edi
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r13
  __int64 ProcessServerSilo; // r12
  char *v13; // rsi
  __int64 v14; // r14
  __int64 v15; // r8
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+70h] [rbp-E8h]
  int v18; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+80h] [rbp-D8h]
  __int64 v20; // [rsp+88h] [rbp-D0h]
  int v21; // [rsp+90h] [rbp-C8h]
  __int128 v22; // [rsp+98h] [rbp-C0h]
  _QWORD v23[14]; // [rsp+A8h] [rbp-B0h] BYREF

  v2 = Size;
  if ( !(_DWORD)Size || (Size & 1) != 0 || (unsigned int)Size > 0xFFFF )
    return 3221225485LL;
  v4 = (unsigned int)Size;
  PoolWithQuotaTag = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)Size, 0x50676244u);
  UnicodeString.Buffer = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  UnicodeString.MaximumLength = v2;
  UnicodeString.Length = v2;
  memmove(PoolWithQuotaTag, Src, v4);
  v7 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x50676244u);
  if ( v7 )
  {
    memset(v23, 0, sizeof(v23));
    *(_DWORD *)((char *)v23 + 2) = -2147483608;
    v17 = 40LL;
    v23[7] = 272LL;
    v23[9] = 8704LL;
    LODWORD(v23[5]) = 0x100000;
    v18 = 48;
    v19 = 0LL;
    v21 = 512;
    v20 = 0LL;
    v22 = 0LL;
    v9 = ZwAlpcConnectPort((__int64)(v7 + 2), (__int64)&UnicodeString, (__int64)&v18);
    v8 = v9;
    if ( v9 == 192 )
    {
      v8 = -1073741749;
    }
    else if ( v9 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *v7 = 1;
      v7[1] = 0;
      Process = (__int64)CurrentThread->ApcState.Process;
      ProcessServerSilo = PsGetProcessServerSilo(Process);
      v13 = (char *)PsGetServerSiloGlobals(ProcessServerSilo) + 960;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v13, 0LL);
      v14 = *((_QWORD *)v13 + 1);
      if ( !v14 && PsIsHostSilo(ProcessServerSilo) )
        _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
      *((_QWORD *)v13 + 1) = v7;
      *((_QWORD *)v13 + 2) = Process;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v13);
      KeAbPostRelease((ULONG_PTR)v13);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      v8 = 0;
      v7 = 0LL;
      if ( v14 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v14 + 4), 0) )
          ZwAlpcDisconnectPort(*(_QWORD *)(v14 + 8), 0LL, v15);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14, 0xFFFFFFFF) == 1 )
          DbgkpDeleteErrorPort((PVOID)v14);
      }
      KeSetEvent(*((PRKEVENT *)v13 + 3), 0, 0);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v8 = -1073741670;
  }
  RtlFreeAnsiString(&UnicodeString);
  return v8;
}
