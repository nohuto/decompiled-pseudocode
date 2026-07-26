/*
 * XREFs of ndisMCommonHaltMiniport @ 0x1C0136B28
 * Callers:
 *     ndisMHaltMiniport @ 0x1C0082038 (ndisMHaltMiniport.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisPmHaltMiniport @ 0x1C013B334 (ndisPmHaltMiniport.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisWaitForResetCompletion @ 0x1C00146C8 (ndisWaitForResetCompletion.c)
 *     ndisCancelWakeUpDpcTimer @ 0x1C0014778 (ndisCancelWakeUpDpcTimer.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0015150 (WPP_RECORDER_SF_LqZ.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     NdisMSleep @ 0x1C001BEC0 (NdisMSleep.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001CA48 (ndisCancelMediaDisconnectTimer.c)
 *     PktMonClientComponentUnregister @ 0x1C0023D0C (PktMonClientComponentUnregister.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisMAbortPackets @ 0x1C009995C (ndisMAbortPackets.c)
 *     ndisMAbortRequests @ 0x1C0099BD4 (ndisMAbortRequests.c)
 *     ndisMDeQueueWorkItem @ 0x1C009A2E8 (ndisMDeQueueWorkItem.c)
 *     ndisDereferenceDmaAdapter @ 0x1C009F7C8 (ndisDereferenceDmaAdapter.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00FC814 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FCAEC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00FF774 (ndisCancelInitModeTimeoutTimer.c)
 *     ndisMInvokeHalt @ 0x1C01178D4 (ndisMInvokeHalt.c)
 *     ndisNDKCleanup @ 0x1C0119CFC (ndisNDKCleanup.c)
 *     ndisNdkPcwMiniportCleanup @ 0x1C011A070 (ndisNdkPcwMiniportCleanup.c)
 *     ndisSelectiveSuspendFree @ 0x1C011BE18 (ndisSelectiveSuspendFree.c)
 *     ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C01216D4 (-ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z.c)
 */

_UNKNOWN **__fastcall ndisMCommonHaltMiniport(ULONG_PTR a1, __int16 a2)
{
  void (__fastcall *v2)(__int64, struct _NDIS_PACKET **, unsigned int); // r12
  char v3; // r13
  __int16 v4; // si
  KIRQL v6; // al
  char v7; // bl
  int v8; // r14d
  __int64 v9; // rcx
  KIRQL v10; // si
  char v11; // bl
  KIRQL v12; // si
  KIRQL v13; // al
  KIRQL v14; // bl
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // ecx
  int v18; // eax
  KIRQL v19; // al
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  char v26; // bl
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
  void *v42; // rcx
  struct _NDIS_PD_BLOCK *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  void *v46; // rcx
  void *v47; // rcx
  void *v48; // rcx
  void *v49; // rcx
  KIRQL v50; // al
  __int64 v51; // rdx
  struct _NDIS_STACK_RESERVED *v52; // r8
  KIRQL v53; // si
  _QWORD *v54; // rcx
  _QWORD *v55; // rbx
  __int16 v56; // dx
  _UNKNOWN **result; // rax
  __int64 v58; // r9
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF
  unsigned int i; // [rsp+B0h] [rbp+48h]
  unsigned int j; // [rsp+B0h] [rbp+48h]
  char v62; // [rsp+B8h] [rbp+50h]
  unsigned int v63; // [rsp+B8h] [rbp+50h]
  struct NDISWATCHDOG__ *v64; // [rsp+C0h] [rbp+58h] BYREF
  LARGE_INTEGER Timeout; // [rsp+C8h] [rbp+60h] BYREF

  v62 = a2;
  v2 = ndisMDummyIndicatePacket;
  v3 = a2 & 0x10;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      27,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      a1);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(a1 + 124) |= 0xA0000u;
  v7 = 0;
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  ndisWaitForResetCompletion(a1);
  if ( (v4 & 4) != 0 )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 360), 0);
  if ( (v4 & 0x40) != 0 )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 4152), 0);
  if ( (v4 & 0x100) != 0 && *(_QWORD *)(a1 + 4832) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 4824), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 4824));
    v7 = 0;
    *(_QWORD *)(a1 + 4832) = 0LL;
  }
  v8 = 2;
  if ( (v4 & 2) != 0 )
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 3824), 2u);
  if ( (v4 & 8) != 0 )
    ndisCancelWakeUpDpcTimer(a1);
  ndisCancelInitModeTimeoutTimer(a1, 1);
  v9 = *(_QWORD *)(a1 + 4104);
  if ( v9 )
    ndisNdkPcwMiniportCleanup(v9);
  while ( 1 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    if ( !*(_BYTE *)(a1 + 89) )
      break;
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v10);
    for ( i = 0; i < 0x32; ++i )
      ;
  }
  *(_BYTE *)(a1 + 89) = 1;
  *(_QWORD *)(a1 + 1864) = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 2192) != a1 + 2192 || (*(_DWORD *)(a1 + 4420) & 1) != 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v7 = 1;
    *(_QWORD *)(a1 + 1616) = &Event;
  }
  *(_BYTE *)(a1 + 89) = 0;
  *(_QWORD *)(a1 + 1864) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v10);
  if ( v7 )
  {
    v11 = 0;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  else
  {
    v11 = 0;
  }
  while ( 1 )
  {
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    if ( !*(_BYTE *)(a1 + 89) )
      break;
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v12);
    for ( j = 0; j < 0x32; ++j )
      ;
  }
  *(_BYTE *)(a1 + 89) = 1;
  *(_QWORD *)(a1 + 1864) = KeGetCurrentThread();
  if ( *(_DWORD *)(a1 + 4248) )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = 1;
    *(_QWORD *)(a1 + 4256) = &Event;
  }
  *(_BYTE *)(a1 + 89) = 0;
  *(_QWORD *)(a1 + 1864) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v12);
  if ( v11 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v14 = v13;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  if ( *(_DWORD *)(a1 + 3124) )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_QWORD *)(a1 + 3136) = &Event;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v14);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    *(_QWORD *)(a1 + 3136) = 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v13);
  }
  v17 = *(_DWORD *)(a1 + 120);
  if ( (v17 & 0x8000) != 0 )
  {
    v2 = *(void (__fastcall **)(__int64, struct _NDIS_PACKET **, unsigned int))(a1 + 432);
    *(_QWORD *)(a1 + 432) = ndisMDummyIndicatePacket;
    if ( *(_DWORD *)(a1 + 1828) )
    {
      do
        NdisMSleep(0x3E8u);
      while ( *(_DWORD *)(a1 + 1828) );
      v17 = *(_DWORD *)(a1 + 120);
    }
  }
  if ( v3 )
  {
    if ( v17 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 124) & 0x100) != 0 )
      {
        v8 = 4;
      }
      else
      {
        v8 = 3;
        if ( (v17 & 0x8000) != 0 && *(_DWORD *)(a1 + 1520) == 3 )
        {
          v8 = 1;
        }
        else if ( (v17 & 4) == 0 )
        {
          v18 = 0;
          if ( *(_DWORD *)(a1 + 1520) == 3 )
            v18 = 6;
          v8 = v18;
        }
      }
    }
  }
  else
  {
    v8 = 5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v15,
      v16,
      0x1Cu,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      v8,
      a1,
      *(unsigned __int16 **)(a1 + 3856));
    v17 = *(_DWORD *)(a1 + 120);
  }
  if ( *(_BYTE *)(a1 + 32) < 6u )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 3760) + 144LL))(*(_QWORD *)(a1 + 24));
  }
  else if ( (v17 & 0x100) == 0 )
  {
    ndisMakeWatchdog(&v64, (void *)a1, 34, *(void **)(*(_QWORD *)(a1 + 3760) + 144LL), 0x41EB0u, 0LL);
    ndisMInvokeHalt((_QWORD *)a1, v8);
    if ( v64 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(v64);
  }
  *(_DWORD *)(a1 + 2248) = 1;
  ndisLogMiniportEvent(a1, 0x34u);
  if ( (*(_DWORD *)(a1 + 120) & 0x8000) != 0 )
    *(_QWORD *)(a1 + 432) = v2;
  *(_DWORD *)(a1 + 124) &= ~0x80000u;
  ndisCancelMediaDisconnectTimer(a1);
  if ( (*(_DWORD *)(a1 + 124) & 0x4000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x40) != 0 )
      ndisDereferenceDmaAdapter(*(PVOID *)(a1 + 504));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v20 = *(_QWORD *)(a1 + 504);
    if ( v20 )
    {
      *(_QWORD *)(v20 + 80) = &Event;
      Timeout.QuadPart = -300000000LL;
      *(_QWORD *)(a1 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v19);
      KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout);
    }
    else
    {
      *(_QWORD *)(a1 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v19);
    }
    *(_DWORD *)(a1 + 120) &= ~0x40u;
  }
  if ( *(_QWORD *)(a1 + 2712) )
    *(_QWORD *)(a1 + 2712) = 0LL;
  while ( 1 )
  {
    v21 = *(_QWORD **)(a1 + 960);
    if ( !v21 )
      break;
    *(_QWORD *)(a1 + 960) = *v21;
    ExFreePoolWithTag(v21, 0);
  }
  while ( 1 )
  {
    v22 = *(_QWORD **)(a1 + 968);
    if ( !v22 )
      break;
    *(_QWORD *)(a1 + 968) = *v22;
    ExFreePoolWithTag(v22, 0);
  }
  while ( 1 )
  {
    v23 = *(_QWORD **)(a1 + 976);
    if ( !v23 )
      break;
    *(_QWORD *)(a1 + 976) = *v23;
    ExFreePoolWithTag(v23, 0);
  }
  v24 = *(void **)(a1 + 768);
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0);
    *(_QWORD *)(a1 + 768) = 0LL;
  }
  v25 = *(void **)(a1 + 2736);
  if ( v25 )
  {
    ExFreePoolWithTag(v25, 0);
    *(_QWORD *)(a1 + 2736) = 0LL;
    *(_DWORD *)(a1 + 2744) = 0;
  }
  v26 = v62;
  if ( v62 < 0 )
  {
    v27 = *(void **)(a1 + 3400);
    if ( v27 )
    {
      ExFreePoolWithTag(v27, 0);
      *(_QWORD *)(a1 + 3400) = 0LL;
      *(_DWORD *)(a1 + 3408) = 0;
    }
  }
  v28 = *(void **)(a1 + 3480);
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0);
    *(_QWORD *)(a1 + 3480) = 0LL;
    *(_DWORD *)(a1 + 3488) = 0;
  }
  v29 = *(void **)(a1 + 3512);
  if ( v29 )
  {
    ExFreePoolWithTag(v29, 0);
    *(_QWORD *)(a1 + 3512) = 0LL;
    *(_DWORD *)(a1 + 3520) = 0;
  }
  v30 = *(void **)(a1 + 4760);
  if ( v30 )
  {
    ExFreePoolWithTag(v30, 0);
    *(_QWORD *)(a1 + 4760) = 0LL;
    *(_DWORD *)(a1 + 4768) = 0;
  }
  v31 = *(void **)(a1 + 3536);
  if ( v31 )
  {
    ExFreePoolWithTag(v31, 0);
    *(_QWORD *)(a1 + 3536) = 0LL;
  }
  v32 = *(void **)(a1 + 3544);
  if ( v32 )
  {
    ExFreePoolWithTag(v32, 0);
    *(_QWORD *)(a1 + 3544) = 0LL;
  }
  v33 = *(void **)(a1 + 3552);
  if ( v33 )
  {
    ExFreePoolWithTag(v33, 0);
    *(_QWORD *)(a1 + 3552) = 0LL;
  }
  v34 = *(void **)(a1 + 3560);
  if ( v34 )
  {
    ExFreePoolWithTag(v34, 0);
    *(_QWORD *)(a1 + 3560) = 0LL;
  }
  v35 = *(void **)(a1 + 3568);
  if ( v35 )
  {
    ExFreePoolWithTag(v35, 0);
    *(_QWORD *)(a1 + 3568) = 0LL;
  }
  v36 = *(void **)(a1 + 3576);
  if ( v36 )
  {
    ExFreePoolWithTag(v36, 0);
    *(_QWORD *)(a1 + 3576) = 0LL;
  }
  v37 = *(void **)(a1 + 4600);
  if ( v37 )
  {
    ExFreePoolWithTag(v37, 0);
    *(_QWORD *)(a1 + 4600) = 0LL;
  }
  v38 = *(void **)(a1 + 4608);
  if ( v38 )
  {
    ExFreePoolWithTag(v38, 0);
    *(_QWORD *)(a1 + 4608) = 0LL;
  }
  v39 = *(void **)(a1 + 4904);
  if ( v39 )
  {
    ExFreePoolWithTag(v39, 0);
    *(_QWORD *)(a1 + 4904) = 0LL;
  }
  v40 = *(void **)(a1 + 4912);
  if ( v40 )
  {
    ExFreePoolWithTag(v40, 0);
    *(_QWORD *)(a1 + 4912) = 0LL;
  }
  v41 = *(void **)(a1 + 4920);
  if ( v41 )
  {
    ExFreePoolWithTag(v41, 0);
    *(_QWORD *)(a1 + 4920) = 0LL;
    *(_DWORD *)(a1 + 4928) = 0;
  }
  v42 = *(void **)(a1 + 4936);
  if ( v42 )
  {
    ExFreePoolWithTag(v42, 0);
    *(_QWORD *)(a1 + 4936) = 0LL;
    *(_DWORD *)(a1 + 4944) = 0;
  }
  if ( *(_QWORD *)(a1 + 4104) )
  {
    ndisNDKCleanup((struct _NDIS_MINIPORT_BLOCK *)a1);
    *(_QWORD *)(a1 + 4104) = 0LL;
  }
  v43 = *(struct _NDIS_PD_BLOCK **)(a1 + 5472);
  if ( v43 )
    ndisPDCleanupPDBlock(v43);
  v44 = *(void **)(a1 + 5776);
  if ( v44 )
  {
    ExFreePoolWithTag(v44, 0);
    *(_QWORD *)(a1 + 5776) = 0LL;
  }
  v45 = *(void **)(a1 + 5768);
  if ( v45 )
  {
    ExFreePoolWithTag(v45, 0);
    *(_QWORD *)(a1 + 5768) = 0LL;
  }
  v46 = *(void **)(a1 + 5784);
  if ( v46 )
  {
    ExFreePoolWithTag(v46, 0);
    *(_QWORD *)(a1 + 5784) = 0LL;
  }
  v47 = *(void **)(a1 + 5792);
  if ( v47 )
  {
    ExFreePoolWithTag(v47, 0);
    *(_QWORD *)(a1 + 5792) = 0LL;
  }
  v48 = *(void **)(a1 + 4568);
  if ( v48 )
  {
    ExFreePoolWithTag(v48, 0);
    *(_QWORD *)(a1 + 4568) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 4448) )
    ndisSelectiveSuspendFree(a1);
  PktMonClientComponentUnregister((_QWORD *)(a1 + 5800));
  if ( (struct _NDIS_MINIPORT_BLOCK *)a1 == ndisMiniportTrackAlloc )
    ndisMiniportTrackAlloc = 0LL;
  v49 = *(void **)(a1 + 3152);
  if ( v49 )
    memset(v49, 0, 112LL * ndisMaxNumberOfProcessors);
  if ( *(_QWORD *)(a1 + 560) || *(_QWORD *)(a1 + 112) || *(_QWORD *)(a1 + 784) )
  {
    v58 = *(_QWORD *)(a1 + 3856);
    if ( *(_QWORD *)(a1 + 112) )
    {
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v58, "Halting without deregistering interrupt");
      KeBugCheckEx(0x7Cu, (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFFBuLL) + 13, a1, *(_QWORD *)(a1 + 112), 0LL);
    }
    if ( *(_QWORD *)(a1 + 784) )
    {
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v58, "Halting without deregistering interrupt");
      KeBugCheckEx(0x7Cu, (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFFBuLL) + 13, a1, *(_QWORD *)(a1 + 784), 0LL);
    }
    DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v58, "Halting without deregistering timer");
    KeBugCheckEx(0x7Cu, (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFFBuLL) + 14, a1, *(_QWORD *)(a1 + 560), 0LL);
  }
  v50 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  v53 = v50;
  while ( *(_BYTE *)(a1 + 89) )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v53);
    v63 = 0;
    do
      ++v63;
    while ( v63 < 0x32 );
    v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  }
  *(_BYTE *)(a1 + 89) = 1;
  *(_QWORD *)(a1 + 1864) = KeGetCurrentThread();
  ndisMAbortPackets(a1, v51, v52);
  ndisMDeQueueWorkItem(a1, 0, 0LL, 0LL);
  ndisMAbortRequests(a1);
  if ( (v26 & 0x20) != 0 )
  {
    v54 = *(_QWORD **)(a1 + 512);
    *(_QWORD *)(a1 + 512) = 0LL;
    if ( v54 )
    {
      do
      {
        v55 = (_QWORD *)*v54;
        ExFreePoolWithTag(v54, 0);
        v54 = v55;
      }
      while ( v55 );
    }
  }
  *(_BYTE *)(a1 + 89) = 0;
  *(_QWORD *)(a1 + 1864) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v53);
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
    *(_QWORD *)(a1 + 24) = 0LL;
  ndisDereferencePackage((__int64)&ndisPkgs);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v56) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_q(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v56,
                          1,
                          29,
                          (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                          a1);
  }
  return result;
}
