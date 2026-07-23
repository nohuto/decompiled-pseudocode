/*
 * XREFs of ExpTimeZoneInitSiloState @ 0x1405849E4
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1408886A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14000FBB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14000FBD0 (PsAttachSiloToCurrentThread.c)
 *     PsGetHostSilo @ 0x140091BB0 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     ZwSetSystemTime @ 0x1401BB790 (ZwSetSystemTime.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExpReadTimeZoneInformation @ 0x1405848AC (ExpReadTimeZoneInformation.c)
 *     ExAcquireTimeRefreshLock @ 0x1406669FC (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1406BFE98 (ExReleaseTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x140735864 (ExpRefreshTimeZoneInformation.c)
 */

__int64 __fastcall ExpTimeZoneInitSiloState(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *ServerSiloGlobals; // rdi
  struct _LIST_ENTRY *v3; // rcx
  struct _LIST_ENTRY *v4; // rsi
  PVOID PoolWithTag; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 HostSilo; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  v4 = PsAttachSiloToCurrentThread(v3);
  ExpReadTimeZoneInformation((__int64)L"TimeZoneVirtualizationSupported", 0, (__int64)&v11);
  if ( v11 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3F0uLL, 0x5A547845u);
    ServerSiloGlobals[132] = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x3F0uLL);
      v6 = ServerSiloGlobals[132];
      *((_BYTE *)ServerSiloGlobals + 1041) = 1;
      *(_DWORD *)(v6 + 432) = -1;
      ExpReadTimeZoneInformation((__int64)L"ActiveTimeBias", -1, ServerSiloGlobals[132] + 436LL);
      LOBYTE(v7) = 1;
      ExAcquireTimeRefreshLock(v7);
      LOBYTE(v8) = 1;
      ExpRefreshTimeZoneInformation(v8);
      ExReleaseTimeRefreshLock();
      ZwSetSystemTime(0LL, 0LL);
    }
    else
    {
      v1 = -1073741670;
    }
  }
  else
  {
    HostSilo = PsGetHostSilo();
    ServerSiloGlobals[132] = *((_QWORD *)PsGetServerSiloGlobals(HostSilo) + 132);
  }
  PsDetachSiloFromCurrentThread(v4);
  return v1;
}
