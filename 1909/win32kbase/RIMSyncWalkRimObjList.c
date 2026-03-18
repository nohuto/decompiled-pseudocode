/*
 * XREFs of RIMSyncWalkRimObjList @ 0x1C005B040
 * Callers:
 *     RIMDirectPnpRemoveUserModeRimDevices @ 0x1C0059A2C (RIMDirectPnpRemoveUserModeRimDevices.c)
 *     RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1C0059AB0 (RIMDirectStopUserModeRimDeviceClassNotifications.c)
 *     RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1C00B7AC0 (RIMDirectStartUserModeRimDeviceClassNotifications.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C010A590 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     RIMSetTestModeStatus @ 0x1C01330E0 (RIMSetTestModeStatus.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RIMSyncWalkRimObjList(char a1, void (__fastcall *a2)(_QWORD *))
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v7; // rax
  struct _LIST_ENTRY *v8; // rsi
  _QWORD **v9; // r14
  __int64 v10; // rbp
  _QWORD *v11; // rsi
  __int64 v12; // rbx

  if ( gbRIMInitialized )
  {
    v4 = 0LL;
    LODWORD(v5) = 0;
    RIMLockExclusive((__int64)&gObListLock);
    Flink = gObRimList.Flink;
    if ( gObRimList.Flink != &gObRimList )
    {
      do
      {
        Flink = Flink->Flink;
        LODWORD(v5) = v5 + 1;
      }
      while ( Flink != &gObRimList );
      if ( (_DWORD)v5 )
      {
        v7 = Win32AllocPool(8LL * (unsigned int)v5, 0x706D7452u);
        v8 = gObRimList.Flink;
        v4 = v7;
        v5 = 0LL;
        while ( v8 != &gObRimList )
        {
          if ( ObReferenceObjectByPointer(&v8[-1], 3u, ExRawInputManagerObjectType, 0) >= 0 )
          {
            *(_QWORD *)(v4 + 8 * v5) = v8 - 1;
            v5 = (unsigned int)(v5 + 1);
          }
          v8 = v8->Flink;
        }
      }
    }
    qword_1C0215788 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
    if ( (_DWORD)v5 )
    {
      v9 = (_QWORD **)v4;
      v10 = (unsigned int)v5;
      do
      {
        v11 = *v9;
        v12 = (__int64)(*v9 + 71);
        if ( a1 )
        {
          RIMLockExclusive((__int64)(v11 + 13));
          RIMLockExclusive(v12);
        }
        a2(v11);
        if ( a1 )
        {
          *(_QWORD *)(v12 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v12, 0LL);
          KeLeaveCriticalRegion();
          v11[14] = 0LL;
          ExReleasePushLockExclusiveEx(v11 + 13, 0LL);
          KeLeaveCriticalRegion();
        }
        ObfDereferenceObject(v11);
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    if ( v4 )
      Win32FreePool(v4);
  }
}
