/*
 * XREFs of ndisMCommonHaltMiniport @ 0x1C0115B88
 * Callers:
 *     ndisMHaltMiniport @ 0x1C00EC4FC (ndisMHaltMiniport.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ndisPmHaltMiniport @ 0x1C0119C48 (ndisPmHaltMiniport.c)
 * Callees:
 *     ndisWaitForResetCompletion @ 0x1C0010CD4 (ndisWaitForResetCompletion.c)
 *     ndisCancelWakeUpDpcTimer @ 0x1C0010DB8 (ndisCancelWakeUpDpcTimer.c)
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     PktMonClientComponentUnregister @ 0x1C001A8C8 (PktMonClientComponentUnregister.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001C600 (ndisCancelMediaDisconnectTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_LqZ @ 0x1C0049B34 (WPP_SF_LqZ.c)
 *     ndisMAbortPackets @ 0x1C0061E4C (ndisMAbortPackets.c)
 *     ndisMAbortRequests @ 0x1C0062084 (ndisMAbortRequests.c)
 *     ndisMDeQueueWorkItem @ 0x1C0062524 (ndisMDeQueueWorkItem.c)
 *     ndisDereferenceDmaAdapter @ 0x1C0065580 (ndisDereferenceDmaAdapter.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00B8F1C (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00BE278 (ndisCancelInitModeTimeoutTimer.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00C2C18 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     NdisMSleep @ 0x1C00CF740 (NdisMSleep.c)
 *     ndisMInvokeHalt @ 0x1C00F08F4 (ndisMInvokeHalt.c)
 *     ndisNDKCleanup @ 0x1C00F7958 (ndisNDKCleanup.c)
 *     ndisNdkPcwMiniportCleanup @ 0x1C00F7E38 (ndisNdkPcwMiniportCleanup.c)
 *     ndisSelectiveSuspendFree @ 0x1C00FC4B0 (ndisSelectiveSuspendFree.c)
 *     ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C0101214 (-ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z.c)
 */

void __fastcall ndisMCommonHaltMiniport(__int64 BugCheckParameter2, __int16 a2)
{
  void (__fastcall *v2)(__int64, struct _NDIS_PACKET **, unsigned int); // r12
  char v3; // r13
  KIRQL v6; // al
  char v7; // bl
  _NDIS_HALT_ACTION v8; // r14d
  __int64 v9; // rcx
  KIRQL v10; // si
  KIRQL v11; // al
  KIRQL v12; // si
  char v13; // bl
  KIRQL v14; // al
  KIRQL v15; // bl
  int v16; // ecx
  int v17; // eax
  KIRQL v18; // al
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  char v25; // bl
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  void *v35; // rcx
  void *v36; // rcx
  void *v37; // rcx
  void *v38; // rcx
  void *v39; // rcx
  void *v40; // rcx
  void *v41; // rcx
  struct _NDIS_PD_BLOCK *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  void *v46; // rcx
  void *v47; // rcx
  void *v48; // rcx
  KIRQL v49; // al
  __int64 v50; // rdx
  struct _NDIS_STACK_RESERVED *v51; // r8
  KIRQL v52; // si
  _QWORD *v53; // rcx
  _QWORD *v54; // rbx
  __int64 v55; // r9
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  unsigned int i; // [rsp+A0h] [rbp+48h]
  unsigned int v58; // [rsp+A0h] [rbp+48h]
  char v59; // [rsp+A8h] [rbp+50h]
  unsigned int v60; // [rsp+A8h] [rbp+50h]
  struct NDISWATCHDOG__ *v61; // [rsp+B0h] [rbp+58h] BYREF
  LARGE_INTEGER Timeout; // [rsp+B8h] [rbp+60h] BYREF

  v59 = a2;
  v2 = ndisMDummyIndicatePacket;
  v3 = a2 & 0x10;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Bu, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, BugCheckParameter2);
  ndisReferencePackage((__int64)&ndisPkgs);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
  *(_DWORD *)(BugCheckParameter2 + 124) |= 0xA0000u;
  v7 = 0;
  *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v6);
  ndisWaitForResetCompletion(BugCheckParameter2);
  if ( (a2 & 4) != 0 )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(BugCheckParameter2 + 360), 0);
  if ( (a2 & 0x40) != 0 )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(BugCheckParameter2 + 4184), 0);
  if ( (a2 & 0x100) != 0 && *(_QWORD *)(BugCheckParameter2 + 4872) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(BugCheckParameter2 + 4864), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(BugCheckParameter2 + 4864));
    v7 = 0;
    *(_QWORD *)(BugCheckParameter2 + 4872) = 0LL;
  }
  v8 = NdisHaltDevicePoweredDown;
  if ( (a2 & 2) != 0 )
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(BugCheckParameter2 + 3856), 2u);
  if ( (a2 & 8) != 0 )
    ndisCancelWakeUpDpcTimer(BugCheckParameter2);
  ndisCancelInitModeTimeoutTimer(BugCheckParameter2, 1);
  v9 = *(_QWORD *)(BugCheckParameter2 + 4136);
  if ( v9 )
    ndisNdkPcwMiniportCleanup(v9);
  while ( 1 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
    *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(BugCheckParameter2 + 1864) = 1442852;
    if ( !*(_BYTE *)(BugCheckParameter2 + 89) )
      break;
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v10);
    for ( i = 0; i < 0x32; ++i )
      ;
  }
  *(_BYTE *)(BugCheckParameter2 + 89) = 1;
  *(_DWORD *)(BugCheckParameter2 + 1868) = 1442852;
  *(_QWORD *)(BugCheckParameter2 + 1872) = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter2 + 2208) != BugCheckParameter2 + 2208
    || (*(_DWORD *)(BugCheckParameter2 + 4460) & 1) != 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v7 = 1;
    *(_QWORD *)(BugCheckParameter2 + 1616) = &Event;
  }
  *(_BYTE *)(BugCheckParameter2 + 89) = 0;
  *(_QWORD *)(BugCheckParameter2 + 1864) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 1872) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v10);
  if ( v7 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
  *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  v12 = v11;
  while ( 1 )
  {
    *(_DWORD *)(BugCheckParameter2 + 1864) = 1442877;
    if ( !*(_BYTE *)(BugCheckParameter2 + 89) )
      break;
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v12);
    v58 = 0;
    do
      ++v58;
    while ( v58 < 0x32 );
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
    *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  }
  *(_BYTE *)(BugCheckParameter2 + 89) = 1;
  *(_DWORD *)(BugCheckParameter2 + 1868) = 1442877;
  *(_QWORD *)(BugCheckParameter2 + 1872) = KeGetCurrentThread();
  if ( *(_DWORD *)(BugCheckParameter2 + 4288) )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v13 = 1;
    *(_QWORD *)(BugCheckParameter2 + 4296) = &Event;
  }
  else
  {
    v13 = 0;
  }
  *(_QWORD *)(BugCheckParameter2 + 1864) = 0LL;
  *(_BYTE *)(BugCheckParameter2 + 89) = 0;
  *(_QWORD *)(BugCheckParameter2 + 1872) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v12);
  if ( v13 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
  v15 = v14;
  *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(BugCheckParameter2 + 1864) = 1442902;
  if ( *(_DWORD *)(BugCheckParameter2 + 3140) )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 3152) = &Event;
    *(_DWORD *)(BugCheckParameter2 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v15);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    *(_QWORD *)(BugCheckParameter2 + 3152) = 0LL;
  }
  else
  {
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v14);
  }
  v16 = *(_DWORD *)(BugCheckParameter2 + 120);
  if ( (v16 & 0x8000) != 0 )
  {
    v2 = *(void (__fastcall **)(__int64, struct _NDIS_PACKET **, unsigned int))(BugCheckParameter2 + 432);
    *(_QWORD *)(BugCheckParameter2 + 432) = ndisMDummyIndicatePacket;
    if ( *(_DWORD *)(BugCheckParameter2 + 1828) )
    {
      do
        NdisMSleep(0x3E8u);
      while ( *(_DWORD *)(BugCheckParameter2 + 1828) );
      v16 = *(_DWORD *)(BugCheckParameter2 + 120);
    }
  }
  if ( v3 )
  {
    if ( v16 >= 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 124) & 0x100) != 0 )
      {
        v8 = NdisHaltDeviceFailed;
      }
      else
      {
        v8 = NdisHaltDeviceSurpriseRemoved;
        if ( (v16 & 0x8000) != 0 && *(_DWORD *)(BugCheckParameter2 + 1520) == 3 )
        {
          v8 = NdisHaltDeviceInstanceDeInitialized;
        }
        else if ( (v16 & 4) == 0 )
        {
          v17 = 0;
          if ( *(_DWORD *)(BugCheckParameter2 + 1520) == 3 )
            v17 = 6;
          v8 = v17;
        }
      }
    }
  }
  else
  {
    v8 = NdisHaltDeviceInitializationFailed;
  }
  if ( (unsigned __int8)byte_1C00A0258 >= 4u )
  {
    WPP_SF_LqZ(
      0x1Cu,
      &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids,
      v8,
      BugCheckParameter2,
      *(_QWORD *)(BugCheckParameter2 + 3888));
    v16 = *(_DWORD *)(BugCheckParameter2 + 120);
  }
  if ( *(_BYTE *)(BugCheckParameter2 + 32) < 6u )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(BugCheckParameter2 + 3792) + 144LL))(*(_QWORD *)(BugCheckParameter2 + 24));
  }
  else if ( (v16 & 0x100) == 0 )
  {
    ndisMakeWatchdog(
      (struct _NDIS_REFCOUNT_BLOCK **)&v61,
      (void *)BugCheckParameter2,
      (_NDIS_REFCOUNT_STACK_ENTRY)34,
      *(void **)(*(_QWORD *)(BugCheckParameter2 + 3792) + 144LL),
      0x41EB0u,
      0LL);
    ndisMInvokeHalt(BugCheckParameter2, v8);
    if ( v61 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v61);
  }
  *(_DWORD *)(BugCheckParameter2 + 2264) = 1;
  ndisLogMiniportEvent(BugCheckParameter2, 0x34u);
  if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) != 0 )
    *(_QWORD *)(BugCheckParameter2 + 432) = v2;
  *(_DWORD *)(BugCheckParameter2 + 124) &= ~0x80000u;
  ndisCancelMediaDisconnectTimer(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 124) & 0x4000) == 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x40) != 0 )
      ndisDereferenceDmaAdapter(*(PVOID *)(BugCheckParameter2 + 504));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
    *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
    v19 = *(_QWORD *)(BugCheckParameter2 + 504);
    *(_DWORD *)(BugCheckParameter2 + 1864) = 1443033;
    if ( v19 )
    {
      *(_QWORD *)(v19 + 80) = &Event;
      Timeout.QuadPart = -300000000LL;
      *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v18);
      KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v18);
    }
    *(_DWORD *)(BugCheckParameter2 + 120) &= ~0x40u;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 2728) )
    *(_QWORD *)(BugCheckParameter2 + 2728) = 0LL;
  while ( 1 )
  {
    v20 = *(_QWORD **)(BugCheckParameter2 + 960);
    if ( !v20 )
      break;
    *(_QWORD *)(BugCheckParameter2 + 960) = *v20;
    ExFreePoolWithTag(v20, 0);
  }
  while ( 1 )
  {
    v21 = *(_QWORD **)(BugCheckParameter2 + 968);
    if ( !v21 )
      break;
    *(_QWORD *)(BugCheckParameter2 + 968) = *v21;
    ExFreePoolWithTag(v21, 0);
  }
  while ( 1 )
  {
    v22 = *(_QWORD **)(BugCheckParameter2 + 976);
    if ( !v22 )
      break;
    *(_QWORD *)(BugCheckParameter2 + 976) = *v22;
    ExFreePoolWithTag(v22, 0);
  }
  v23 = *(void **)(BugCheckParameter2 + 768);
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0);
    *(_QWORD *)(BugCheckParameter2 + 768) = 0LL;
  }
  v24 = *(void **)(BugCheckParameter2 + 2752);
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0);
    *(_QWORD *)(BugCheckParameter2 + 2752) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 2760) = 0;
  }
  v25 = v59;
  if ( v59 < 0 )
  {
    v26 = *(void **)(BugCheckParameter2 + 3424);
    if ( v26 )
    {
      ExFreePoolWithTag(v26, 0);
      *(_QWORD *)(BugCheckParameter2 + 3424) = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 3432) = 0;
    }
  }
  v27 = *(void **)(BugCheckParameter2 + 3504);
  if ( v27 )
  {
    ExFreePoolWithTag(v27, 0);
    *(_QWORD *)(BugCheckParameter2 + 3504) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 3512) = 0;
  }
  v28 = *(void **)(BugCheckParameter2 + 3536);
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0);
    *(_QWORD *)(BugCheckParameter2 + 3536) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 3544) = 0;
  }
  v29 = *(void **)(BugCheckParameter2 + 4800);
  if ( v29 )
  {
    ExFreePoolWithTag(v29, 0);
    *(_QWORD *)(BugCheckParameter2 + 4800) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 4808) = 0;
  }
  v30 = *(void **)(BugCheckParameter2 + 3560);
  if ( v30 )
  {
    ExFreePoolWithTag(v30, 0);
    *(_QWORD *)(BugCheckParameter2 + 3560) = 0LL;
  }
  v31 = *(void **)(BugCheckParameter2 + 3568);
  if ( v31 )
  {
    ExFreePoolWithTag(v31, 0);
    *(_QWORD *)(BugCheckParameter2 + 3568) = 0LL;
  }
  v32 = *(void **)(BugCheckParameter2 + 3576);
  if ( v32 )
  {
    ExFreePoolWithTag(v32, 0);
    *(_QWORD *)(BugCheckParameter2 + 3576) = 0LL;
  }
  v33 = *(void **)(BugCheckParameter2 + 3584);
  if ( v33 )
  {
    ExFreePoolWithTag(v33, 0);
    *(_QWORD *)(BugCheckParameter2 + 3584) = 0LL;
  }
  v34 = *(void **)(BugCheckParameter2 + 3592);
  if ( v34 )
  {
    ExFreePoolWithTag(v34, 0);
    *(_QWORD *)(BugCheckParameter2 + 3592) = 0LL;
  }
  v35 = *(void **)(BugCheckParameter2 + 3600);
  if ( v35 )
  {
    ExFreePoolWithTag(v35, 0);
    *(_QWORD *)(BugCheckParameter2 + 3600) = 0LL;
  }
  v36 = *(void **)(BugCheckParameter2 + 4640);
  if ( v36 )
  {
    ExFreePoolWithTag(v36, 0);
    *(_QWORD *)(BugCheckParameter2 + 4640) = 0LL;
  }
  v37 = *(void **)(BugCheckParameter2 + 4648);
  if ( v37 )
  {
    ExFreePoolWithTag(v37, 0);
    *(_QWORD *)(BugCheckParameter2 + 4648) = 0LL;
  }
  v38 = *(void **)(BugCheckParameter2 + 4944);
  if ( v38 )
  {
    ExFreePoolWithTag(v38, 0);
    *(_QWORD *)(BugCheckParameter2 + 4944) = 0LL;
  }
  v39 = *(void **)(BugCheckParameter2 + 4952);
  if ( v39 )
  {
    ExFreePoolWithTag(v39, 0);
    *(_QWORD *)(BugCheckParameter2 + 4952) = 0LL;
  }
  v40 = *(void **)(BugCheckParameter2 + 4960);
  if ( v40 )
  {
    ExFreePoolWithTag(v40, 0);
    *(_QWORD *)(BugCheckParameter2 + 4960) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 4968) = 0;
  }
  v41 = *(void **)(BugCheckParameter2 + 4976);
  if ( v41 )
  {
    ExFreePoolWithTag(v41, 0);
    *(_QWORD *)(BugCheckParameter2 + 4976) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 4984) = 0;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 4136) )
  {
    ndisNDKCleanup((struct _NDIS_MINIPORT_BLOCK *)BugCheckParameter2);
    *(_QWORD *)(BugCheckParameter2 + 4136) = 0LL;
  }
  v42 = *(struct _NDIS_PD_BLOCK **)(BugCheckParameter2 + 5536);
  if ( v42 )
    ndisPDCleanupPDBlock(v42);
  v43 = *(void **)(BugCheckParameter2 + 5840);
  if ( v43 )
  {
    ExFreePoolWithTag(v43, 0);
    *(_QWORD *)(BugCheckParameter2 + 5840) = 0LL;
  }
  v44 = *(void **)(BugCheckParameter2 + 5832);
  if ( v44 )
  {
    ExFreePoolWithTag(v44, 0);
    *(_QWORD *)(BugCheckParameter2 + 5832) = 0LL;
  }
  v45 = *(void **)(BugCheckParameter2 + 5848);
  if ( v45 )
  {
    ExFreePoolWithTag(v45, 0);
    *(_QWORD *)(BugCheckParameter2 + 5848) = 0LL;
  }
  v46 = *(void **)(BugCheckParameter2 + 5856);
  if ( v46 )
  {
    ExFreePoolWithTag(v46, 0);
    *(_QWORD *)(BugCheckParameter2 + 5856) = 0LL;
  }
  v47 = *(void **)(BugCheckParameter2 + 4608);
  if ( v47 )
  {
    ExFreePoolWithTag(v47, 0);
    *(_QWORD *)(BugCheckParameter2 + 4608) = 0LL;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 4488) )
    ndisSelectiveSuspendFree(BugCheckParameter2);
  PktMonClientComponentUnregister((_QWORD *)(BugCheckParameter2 + 5864));
  if ( (struct _NDIS_MINIPORT_BLOCK *)BugCheckParameter2 == ndisMiniportTrackAlloc )
    ndisMiniportTrackAlloc = 0LL;
  v48 = *(void **)(BugCheckParameter2 + 3168);
  if ( v48 )
    memset(v48, 0, 112LL * ndisMaxNumberOfProcessors);
  if ( *(_QWORD *)(BugCheckParameter2 + 560)
    || *(_QWORD *)(BugCheckParameter2 + 112)
    || *(_QWORD *)(BugCheckParameter2 + 784) )
  {
    v55 = *(_QWORD *)(BugCheckParameter2 + 3888);
    if ( *(_QWORD *)(BugCheckParameter2 + 112) )
    {
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v55, "Halting without deregistering interrupt");
      KeBugCheckEx(
        0x7Cu,
        (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFFBuLL) + 13,
        BugCheckParameter2,
        *(_QWORD *)(BugCheckParameter2 + 112),
        0LL);
    }
    if ( *(_QWORD *)(BugCheckParameter2 + 784) )
    {
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v55, "Halting without deregistering interrupt");
      KeBugCheckEx(
        0x7Cu,
        (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFFBuLL) + 13,
        BugCheckParameter2,
        *(_QWORD *)(BugCheckParameter2 + 784),
        0LL);
    }
    DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v55, "Halting without deregistering timer");
    KeBugCheckEx(
      0x7Cu,
      (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFFBuLL) + 14,
      BugCheckParameter2,
      *(_QWORD *)(BugCheckParameter2 + 560),
      0LL);
  }
  v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
  *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  v52 = v49;
  while ( 1 )
  {
    *(_DWORD *)(BugCheckParameter2 + 1864) = 1443348;
    if ( !*(_BYTE *)(BugCheckParameter2 + 89) )
      break;
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v52);
    v60 = 0;
    do
      ++v60;
    while ( v60 < 0x32 );
    v52 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
    *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  }
  *(_BYTE *)(BugCheckParameter2 + 89) = 1;
  *(_DWORD *)(BugCheckParameter2 + 1868) = 1443348;
  *(_QWORD *)(BugCheckParameter2 + 1872) = KeGetCurrentThread();
  ndisMAbortPackets(BugCheckParameter2, v50, v51);
  ndisMDeQueueWorkItem(BugCheckParameter2, 0, 0LL, 0LL);
  ndisMAbortRequests(BugCheckParameter2);
  if ( (v25 & 0x20) != 0 )
  {
    v53 = *(_QWORD **)(BugCheckParameter2 + 512);
    *(_QWORD *)(BugCheckParameter2 + 512) = 0LL;
    if ( v53 )
    {
      do
      {
        v54 = (_QWORD *)*v53;
        ExFreePoolWithTag(v53, 0);
        v53 = v54;
      }
      while ( v54 );
    }
  }
  *(_BYTE *)(BugCheckParameter2 + 89) = 0;
  *(_QWORD *)(BugCheckParameter2 + 1864) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 1872) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v52);
  if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x80u) == 0 )
    *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Du, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, BugCheckParameter2);
}
