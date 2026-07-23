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
  PVOID v5; // rax
  _DWORD *v6; // r15
  NTSTATUS v7; // edi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r13
  __int64 ProcessServerSilo; // r12
  char *v11; // r14
  __int64 v12; // rsi
  signed __int64 v13; // rax
  UNICODE_STRING PortName; // [rsp+60h] [rbp-108h] BYREF
  ULONG_PTR BufferLength; // [rsp+70h] [rbp-F8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-F0h] BYREF
  signed __int64 v18; // [rsp+A8h] [rbp-C0h]
  _PORT_MESSAGE ConnectionMessage; // [rsp+B0h] [rbp-B8h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+E0h] [rbp-88h] BYREF

  v2 = Size;
  *(_QWORD *)&PortName.Length = 0LL;
  PortName.Buffer = 0LL;
  memset(&ConnectionMessage, 0, sizeof(ConnectionMessage));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(&PortAttributes, 0, sizeof(PortAttributes));
  if ( !v2 || (v2 & 1) != 0 || v2 > 0xFFFF )
    return 3221225485LL;
  PoolWithQuotaTag = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v2, 0x50676244u);
  PortName.Buffer = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  PortName.MaximumLength = v2;
  PortName.Length = v2;
  memmove(PoolWithQuotaTag, Src, v2);
  v5 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x50676244u);
  v6 = v5;
  if ( v5 )
  {
    *(unsigned int *)((char *)&ConnectionMessage.u1.Length + 2) = -2147483608;
    BufferLength = 40LL;
    PortAttributes.MaxMessageLength = 272LL;
    PortAttributes.MaxPoolUsage = 8704LL;
    PortAttributes.Flags = 0x100000;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwAlpcConnectPort(
           (PHANDLE)v5 + 1,
           &PortName,
           &ObjectAttributes,
           &PortAttributes,
           0x20000u,
           0LL,
           &ConnectionMessage,
           &BufferLength,
           0LL,
           0LL,
           0LL);
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
      v18 = v13;
      if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v7 = 0;
      v6 = 0LL;
      if ( v12 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v12 + 4), 0) )
          ZwAlpcDisconnectPort(*(HANDLE *)(v12 + 8), 0);
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
  RtlFreeAnsiString(&PortName);
  return (unsigned int)v7;
}
