/*
 * XREFs of WmipUnreferenceEntry @ 0x1405FC204
 * Callers:
 *     WmipQueryAllData @ 0x14059DBCC (WmipQueryAllData.c)
 *     WmipQuerySetExecuteSI @ 0x1405FBF88 (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x140612888 (WmipPrepareWnodeSI.c)
 *     WmipAddProviderIdToPIList @ 0x140612B34 (WmipAddProviderIdToPIList.c)
 *     WmipDeleteMethod @ 0x14068EF80 (WmipDeleteMethod.c)
 *     WmipProcessEvent @ 0x14068F1AC (WmipProcessEvent.c)
 *     WmipSendEnableRequest @ 0x1406CE2D4 (WmipSendEnableRequest.c)
 *     WmipRemoveDS @ 0x140707594 (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x1407075D0 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140707D80 (WmipDetermineInstanceBaseIndex.c)
 *     WmipGenerateRegistrationNotification @ 0x140707E48 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x140707FF4 (WmipEnableCollectionForNewGuid.c)
 *     WmipMangleInstanceName @ 0x140708400 (WmipMangleInstanceName.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1407085F0 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipSendEnableDisableRequest @ 0x14070A86C (WmipSendEnableDisableRequest.c)
 *     WmipDSCleanup @ 0x14070D570 (WmipDSCleanup.c)
 *     WmipAddMofResource @ 0x14075197C (WmipAddMofResource.c)
 *     WmipLegacyEtwWorker @ 0x140756460 (WmipLegacyEtwWorker.c)
 *     WmipDereferenceEvent @ 0x1408B3398 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1408B3738 (WmipIncludeStaticNames.c)
 *     WmipProcessLegacyEtwCallback @ 0x1408B4570 (WmipProcessLegacyEtwCallback.c)
 *     WmipUpdateAddGuid @ 0x1408B476C (WmipUpdateAddGuid.c)
 *     WmipUpdateDataSource @ 0x1408B4848 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1408B4B94 (WmipUpdateModifyGuid.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExFreeToNPagedLookasideList @ 0x1400922D8 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WmipUnreferenceEntry(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v4; // rdi
  volatile signed __int64 v6; // rax
  int v7; // ecx
  void (__fastcall *v8)(volatile signed __int64 *); // rax
  void **v9; // rcx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = _InterlockedDecrement64(a2 + 3);
  if ( v4 )
  {
    if ( v4 < 0 )
      KeBugCheckEx(0x14Au, 2uLL, (ULONG_PTR)a2, 0LL, 0LL);
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  else
  {
    v6 = *a2;
    v7 = *((_DWORD *)a2 + 4) | 0x20000000;
    *((_DWORD *)a2 + 4) = v7;
    if ( v6 && (v7 & 0x10000000) != 0 )
    {
      if ( *(volatile signed __int64 **)(v6 + 8) != a2 || (v9 = (void **)*((_QWORD *)a2 + 1), *v9 != a2) )
        __fastfail(3u);
      *v9 = (void *)v6;
      *(_QWORD *)(v6 + 8) = v9;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    v8 = *(void (__fastcall **)(volatile signed __int64 *))(a1 + 16);
    if ( v8 )
      v8(a2);
    ExFreeToNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)a1, (PVOID)a2);
  }
  return v4;
}
