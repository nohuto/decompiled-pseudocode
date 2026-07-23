/*
 * XREFs of WmipUnreferenceEntry @ 0x1405FD204
 * Callers:
 *     WmipQueryAllData @ 0x14059EBCC (WmipQueryAllData.c)
 *     WmipQuerySetExecuteSI @ 0x1405FCF88 (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x140613888 (WmipPrepareWnodeSI.c)
 *     WmipAddProviderIdToPIList @ 0x140613B34 (WmipAddProviderIdToPIList.c)
 *     WmipDeleteMethod @ 0x140690140 (WmipDeleteMethod.c)
 *     WmipProcessEvent @ 0x14069036C (WmipProcessEvent.c)
 *     WmipSendEnableRequest @ 0x1406CF574 (WmipSendEnableRequest.c)
 *     WmipRemoveDS @ 0x140708834 (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x140708870 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140709020 (WmipDetermineInstanceBaseIndex.c)
 *     WmipGenerateRegistrationNotification @ 0x1407090E8 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x140709294 (WmipEnableCollectionForNewGuid.c)
 *     WmipMangleInstanceName @ 0x1407096A0 (WmipMangleInstanceName.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140709890 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipSendEnableDisableRequest @ 0x14070BB0C (WmipSendEnableDisableRequest.c)
 *     WmipDSCleanup @ 0x14070E810 (WmipDSCleanup.c)
 *     WmipAddMofResource @ 0x140752B6C (WmipAddMofResource.c)
 *     WmipLegacyEtwWorker @ 0x140757650 (WmipLegacyEtwWorker.c)
 *     WmipDereferenceEvent @ 0x1408B45F8 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1408B4998 (WmipIncludeStaticNames.c)
 *     WmipProcessLegacyEtwCallback @ 0x1408B5830 (WmipProcessLegacyEtwCallback.c)
 *     WmipUpdateAddGuid @ 0x1408B5A2C (WmipUpdateAddGuid.c)
 *     WmipUpdateDataSource @ 0x1408B5B08 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1408B5E54 (WmipUpdateModifyGuid.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
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
