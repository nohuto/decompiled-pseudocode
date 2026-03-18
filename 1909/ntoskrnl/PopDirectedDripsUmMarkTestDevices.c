/*
 * XREFs of PopDirectedDripsUmMarkTestDevices @ 0x1408B8698
 * Callers:
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1408A3A84 (PopDirectedDripsIdleResiliencyCallback.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400028D0 (RtlLookupElementGenericTableAvl.c)
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PopQueueDirectedDripsWork @ 0x1402F15A0 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsNotify @ 0x140749280 (PopDirectedDripsNotify.c)
 *     IoLockUnlockPnpDeviceTree @ 0x14085E16C (IoLockUnlockPnpDeviceTree.c)
 *     PopDirectedDripsMarkCandidateDevice @ 0x1408A3E0C (PopDirectedDripsMarkCandidateDevice.c)
 */

void PopDirectedDripsUmMarkTestDevices()
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // zf
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  signed __int32 v6; // ett
  _QWORD *v7; // rdi
  _QWORD *i; // rax
  _QWORD *v9; // rax
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  _DWORD Buffer[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
  v0 = PopDirectedDripsUmTestDeviceCount;
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange(&PopDirectedDripsUmTestDeviceCount, v0, v0);
  }
  while ( v1 != v0 );
  if ( v0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopDirectedDripsUmLock, 0LL);
    v3 = PopDirectedDripsUmTestPermissive == 0;
    v16 = (unsigned __int8)PopWnfCsEnterScenarioId;
    _m_prefetchw(PopDirectedDripsState);
    v4 = PopDirectedDripsState[0];
    if ( v3 )
    {
      do
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange(PopDirectedDripsState, v4, v4);
      }
      while ( v5 != v4 );
    }
    else
    {
      do
      {
        v6 = v4;
        v4 = _InterlockedCompareExchange(PopDirectedDripsState, v4, v4);
      }
      while ( v6 != v4 );
    }
    if ( (v4 & 1) != 0 )
      dword_1404447D4 = 0;
    IoLockUnlockPnpDeviceTree(1);
    v7 = IopRootDeviceNode;
    for ( i = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); i; i = (_QWORD *)i[1] )
      v7 = i;
    while ( v7 != IopRootDeviceNode )
    {
      if ( v7[10] )
      {
        Buffer[1] = *((unsigned __int16 *)v7 + 20) >> 1;
        v15 = v7[6];
        Buffer[0] = 1;
        if ( RtlLookupElementGenericTableAvl(&PopDirectedDripsUmTestDeviceTable, Buffer) )
          PopDirectedDripsMarkCandidateDevice(v7[10]);
      }
      v9 = (_QWORD *)*v7;
      if ( *v7 )
      {
        do
        {
          v7 = v9;
          v9 = (_QWORD *)v9[1];
        }
        while ( v9 );
      }
      else
      {
        v7 = (_QWORD *)v7[2];
      }
    }
    IoLockUnlockPnpDeviceTree(0);
    if ( PopDirectedDripsUmTestPermissive )
    {
      _m_prefetchw(PopDirectedDripsState);
      v10 = PopDirectedDripsState[0];
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange(PopDirectedDripsState, v10, v10);
      }
      while ( v11 != v10 );
      if ( (v10 & 1) != 0 )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140444840, 0LL);
        if ( qword_1404449C8 == v16 )
        {
          if ( dword_1404449D0 )
          {
            _m_prefetchw(PopDirectedDripsState);
            v12 = PopDirectedDripsState[0];
            do
            {
              v13 = v12;
              v12 = _InterlockedCompareExchange(PopDirectedDripsState, v12 | 0x3000, v12);
            }
            while ( v13 != v12 );
            if ( (v12 & 0x3000) != 0x3000 || dword_1404447D4 )
              PopQueueDirectedDripsWork((struct _KEVENT *)PopDirectedDripsState, 0x800uLL);
          }
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140444840, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140444840);
        KeAbPostRelease((ULONG_PTR)&qword_140444840);
      }
    }
    else
    {
      PopDirectedDripsNotify(3, &v16);
    }
    PopReleaseRwLock((ULONG_PTR)&PopDirectedDripsUmLock);
  }
}
