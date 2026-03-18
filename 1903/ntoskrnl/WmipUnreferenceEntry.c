/*
 * XREFs of WmipUnreferenceEntry @ 0x140669758
 * Callers:
 *     WmipAddProviderIdToPIList @ 0x1406687D4 (WmipAddProviderIdToPIList.c)
 *     WmipQueryAllData @ 0x140669254 (WmipQueryAllData.c)
 *     WmipDeleteMethod @ 0x140669660 (WmipDeleteMethod.c)
 *     WmipSendEnableRequest @ 0x1406D26E0 (WmipSendEnableRequest.c)
 *     WmipQuerySetExecuteSI @ 0x1407116B0 (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x140711A20 (WmipPrepareWnodeSI.c)
 *     WmipProcessEvent @ 0x14071A5BC (WmipProcessEvent.c)
 *     WmipRemoveDS @ 0x1407324EC (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x140732528 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140732C80 (WmipDetermineInstanceBaseIndex.c)
 *     WmipGenerateRegistrationNotification @ 0x140732D48 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x140732EF4 (WmipEnableCollectionForNewGuid.c)
 *     WmipMangleInstanceName @ 0x1407332E8 (WmipMangleInstanceName.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1407334D8 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipSendEnableDisableRequest @ 0x1407361C0 (WmipSendEnableDisableRequest.c)
 *     WmipDSCleanup @ 0x140739A20 (WmipDSCleanup.c)
 *     WmipAddMofResource @ 0x1407769EC (WmipAddMofResource.c)
 *     WmipUpdateDataSource @ 0x14077B1E4 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x14077B338 (WmipUpdateModifyGuid.c)
 *     WmipLegacyEtwWorker @ 0x14077C7D0 (WmipLegacyEtwWorker.c)
 *     WmipDereferenceEvent @ 0x1408F0874 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1408F0C1C (WmipIncludeStaticNames.c)
 *     WmipProcessLegacyEtwCallback @ 0x1408F1A60 (WmipProcessLegacyEtwCallback.c)
 *     WmipUpdateAddGuid @ 0x1408F1B44 (WmipUpdateAddGuid.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
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
