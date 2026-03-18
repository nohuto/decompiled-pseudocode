/*
 * XREFs of WmipUnreferenceEntry @ 0x140696B78
 * Callers:
 *     WmipAddProviderIdToPIList @ 0x140695BF4 (WmipAddProviderIdToPIList.c)
 *     WmipQueryAllData @ 0x140696674 (WmipQueryAllData.c)
 *     WmipDeleteMethod @ 0x140696A80 (WmipDeleteMethod.c)
 *     WmipSendEnableRequest @ 0x1406D1A40 (WmipSendEnableRequest.c)
 *     WmipQuerySetExecuteSI @ 0x140713490 (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x140713800 (WmipPrepareWnodeSI.c)
 *     WmipProcessEvent @ 0x14071C3AC (WmipProcessEvent.c)
 *     WmipRemoveDS @ 0x14073474C (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x140734788 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140734EE0 (WmipDetermineInstanceBaseIndex.c)
 *     WmipGenerateRegistrationNotification @ 0x140734FA8 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x140735154 (WmipEnableCollectionForNewGuid.c)
 *     WmipMangleInstanceName @ 0x140735548 (WmipMangleInstanceName.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140735738 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipSendEnableDisableRequest @ 0x140738420 (WmipSendEnableDisableRequest.c)
 *     WmipDSCleanup @ 0x14073BCB0 (WmipDSCleanup.c)
 *     WmipAddMofResource @ 0x140779FCC (WmipAddMofResource.c)
 *     WmipUpdateDataSource @ 0x14077DAB4 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x14077DC08 (WmipUpdateModifyGuid.c)
 *     WmipLegacyEtwWorker @ 0x14077F0F0 (WmipLegacyEtwWorker.c)
 *     WmipDereferenceEvent @ 0x1408F0184 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1408F052C (WmipIncludeStaticNames.c)
 *     WmipProcessLegacyEtwCallback @ 0x1408F1370 (WmipProcessLegacyEtwCallback.c)
 *     WmipUpdateAddGuid @ 0x1408F1454 (WmipUpdateAddGuid.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
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
