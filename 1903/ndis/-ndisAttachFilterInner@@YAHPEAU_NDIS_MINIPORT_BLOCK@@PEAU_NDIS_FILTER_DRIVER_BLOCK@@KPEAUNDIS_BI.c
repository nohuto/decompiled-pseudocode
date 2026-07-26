/*
 * XREFs of ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010680C (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     ndisSetupWmiNode @ 0x1C001B83C (ndisSetupWmiNode.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ndisIovGetNicSwitchList @ 0x1C001E4F8 (ndisIovGetNicSwitchList.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C0026080 (NdisNblTrackerRegisterComponent.c)
 *     WPP_RECORDER_SF_qqZddZD @ 0x1C0027280 (WPP_RECORDER_SF_qqZddZD.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0028F20 (ndisIndicateInitialStateToFilter.c)
 *     ndisReferenceFilterDriver @ 0x1C0029BF4 (ndisReferenceFilterDriver.c)
 *     ndisDereferenceFilterDriver @ 0x1C0029C14 (ndisDereferenceFilterDriver.c)
 *     ndisHandleFilterHandlersChange @ 0x1C0029CCC (ndisHandleFilterHandlersChange.c)
 *     ndisOpenRef @ 0x1C0029E0C (ndisOpenRef.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C0029E44 (ndisIfUpdateFilterIfStack.c)
 *     NdisIfAddIfStackEntry @ 0x1C002A1F0 (NdisIfAddIfStackEntry.c)
 *     ndisIfCreateFilterInterface @ 0x1C002A5BC (ndisIfCreateFilterInterface.c)
 *     ndisAllocOrFreeIterativeDataPathTrackerIfNeeded @ 0x1C002E1B4 (ndisAllocOrFreeIterativeDataPathTrackerIfNeeded.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002F0E4 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C002F4DC (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ndisCreateFilterAdapterRegistry @ 0x1C003A590 (ndisCreateFilterAdapterRegistry.c)
 *     ndisQueueFilterOnDriver @ 0x1C003C678 (ndisQueueFilterOnDriver.c)
 *     WPP_RECORDER_SF_qqZ @ 0x1C003CFD8 (WPP_RECORDER_SF_qqZ.c)
 *     ndisCloseRef @ 0x1C003EA0C (ndisCloseRef.c)
 *     ndisFilterXStateSetFlag @ 0x1C003F398 (ndisFilterXStateSetFlag.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C0066380 (NdisIfDeleteIfStackEntry.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0079C00 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     McTemplateK0qqq @ 0x1C007D5F8 (McTemplateK0qqq.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C008DF04 (ndisCreateFilterInstanceRegistry.c)
 *     ndisFilterAttachCleanUp @ 0x1C008F4AC (ndisFilterAttachCleanUp.c)
 *     EthInitializeFilter @ 0x1C00A1DEC (EthInitializeFilter.c)
 *     McTemplateK0jqxjqxdd @ 0x1C00BE748 (McTemplateK0jqxjqxdd.c)
 *     McTemplateK0juqjzzz @ 0x1C00BE820 (McTemplateK0juqjzzz.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00FCBA4 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1C0101980 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ndisPktMonFilterRegister @ 0x1C010242C (ndisPktMonFilterRegister.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C0102CE8 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisInitializeRef @ 0x1C010372C (ndisInitializeRef.c)
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C0105928 (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B3C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisFInvokeAttach @ 0x1C0105BC4 (ndisFInvokeAttach.c)
 *     ndisMDoMiniportOp @ 0x1C0108AA8 (ndisMDoMiniportOp.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C010A30C (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ndisInitializeZeroBasedRef @ 0x1C010B15C (ndisInitializeZeroBasedRef.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C01270D8 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01278A0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisAttachFilterInner(
        __int64 a1,
        _NDIS_FILTER_DRIVER_BLOCK *this,
        int a3,
        struct NDIS_BIND_FILTER_LINK *a4)
{
  __int64 v7; // rdx
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rsi
  int v9; // r14d
  int v10; // r15d
  struct _NDIS_MINIPORT_BLOCK *v11; // rdi
  struct NDIS_BIND_FILTER_LINK *v12; // r13
  _NDIS_FILTER_DRIVER_BLOCK *v13; // r15
  unsigned int FilterAdapterRegistry; // r14d
  PVOID PoolWithTag; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  struct Rtl::KString *v18; // rax
  void *v19; // rcx
  unsigned __int16 v20; // bx
  _WORD *v21; // rax
  struct NDISWATCHDOG__ *Watchdog; // rax
  int v23; // eax
  struct _NDIS_FILTER_BLOCK *v24; // r14
  struct _NDIS_FILTER_BLOCK *v25; // rbx
  KIRQL v26; // al
  _NDIS_MINIPORT_BLOCK *v27; // r13
  KIRQL v28; // al
  struct _NDIS_MINIPORT_BLOCK *v29; // rdx
  __int64 v30; // rax
  unsigned __int8 v31; // al
  char v32; // dl
  __int64 v33; // rax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediaType; // eax
  _QWORD *v35; // rcx
  _NDIS_OFFLOAD *p_MiniportCurrentConfig; // rax
  _NDIS_HD_SPLIT_CURRENT_CONFIG *v37; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v38; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v39; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *v40; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *v41; // rax
  _NDIS_IF_BLOCK *v42; // rdx
  void *v43; // rax
  void *v44; // rcx
  void *v45; // rdx
  _NDIS_MEDIUM v46; // eax
  const struct _EVENT_DESCRIPTOR *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // ecx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  NET_IFINDEX v54; // edx
  __int64 v55; // rax
  KIRQL v56; // bl
  struct _NDIS_FILTER_BLOCK *v57; // r12
  KIRQL v58; // al
  struct _NDIS_FILTER_BLOCK *v59; // r8
  KIRQL v60; // bl
  KIRQL v61; // dl
  int v62; // ecx
  PVOID v63; // r12
  char *v64; // rbx
  int v65; // edx
  signed int v66; // ebx
  struct _NDIS_MINIPORT_BLOCK *v67; // rdx
  __int64 v68; // rdx
  int v69; // edx
  _NDIS_MINIPORT_OFFLOAD *v71; // rax
  KIRQL v72; // bl
  struct _NDIS_MINIPORT_BLOCK *v73; // rdx
  __int16 v74; // ax
  KIRQL v75; // al
  int v76; // edx
  __int64 v77; // rax
  NET_IFINDEX v78; // edx
  __int64 v79; // rcx
  _NDIS_MEDIUM v80; // ecx
  int v81; // edx
  int Arg1; // [rsp+20h] [rbp-130h]
  const struct _GUID *Arg2; // [rsp+28h] [rbp-128h]
  char v84[8]; // [rsp+40h] [rbp-110h]
  char v85; // [rsp+D0h] [rbp-80h]
  char v86; // [rsp+D2h] [rbp-7Eh]
  char v87; // [rsp+D3h] [rbp-7Dh]
  struct _NDIS_FILTER_BLOCK *v90; // [rsp+E8h] [rbp-68h] BYREF
  int v91; // [rsp+F0h] [rbp-60h]
  int v92; // [rsp+F4h] [rbp-5Ch]
  int v93; // [rsp+F8h] [rbp-58h]
  int v94; // [rsp+FCh] [rbp-54h]
  int v95; // [rsp+100h] [rbp-50h]
  int v96; // [rsp+104h] [rbp-4Ch]
  int v97; // [rsp+108h] [rbp-48h]
  int v98; // [rsp+10Ch] [rbp-44h]
  int v99; // [rsp+110h] [rbp-40h]
  PVOID WnodeEventItem; // [rsp+120h] [rbp-30h] BYREF
  _NDIS_FILTER_DRIVER_BLOCK *v101; // [rsp+128h] [rbp-28h]
  struct _NDIS_FILTER_BLOCK *v102; // [rsp+130h] [rbp-20h] BYREF
  _BYTE v103[8]; // [rsp+138h] [rbp-18h] BYREF
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *v104; // [rsp+140h] [rbp-10h]
  _QWORD v105[28]; // [rsp+150h] [rbp+0h] BYREF
  struct _UNICODE_STRING v106[10]; // [rsp+230h] [rbp+E0h] BYREF
  wchar_t Dest[88]; // [rsp+2D0h] [rbp+180h] BYREF

  v91 = a3;
  v101 = this;
  v90 = 0LL;
  v102 = 0LL;
  v85 = 0;
  memset(v105, 0, sizeof(v105));
  v86 = 0;
  v87 = 0;
  if ( !ndisReferenceFilterDriver((__int64)this, 0) )
    return 3221291010LL;
  if ( !(unsigned __int8)ndisReferenceMiniport(a1) )
  {
    ndisDereferenceFilterDriver(this, v7, 0);
    return 3221291010LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x21u,
      (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
      (char)this,
      a1,
      &this->DefaultFilterCharacteristics.FriendlyName.Length);
  ndisReferencePackage((__int64)&ndisPkgs);
  p = a4->BindDriver._p;
  v9 = *(unsigned __int8 *)(a1 + 4023);
  v10 = *(unsigned __int8 *)(a1 + 4022);
  WnodeEventItem = (PVOID)(a1 + 4008);
  v92 = v9;
  v93 = v10;
  v104 = p;
  v94 = *(unsigned __int8 *)(a1 + 4019);
  v95 = *(unsigned __int8 *)(a1 + 4018);
  v96 = *(unsigned __int8 *)(a1 + 4017);
  v97 = *(unsigned __int8 *)(a1 + 4016);
  v98 = *(unsigned __int16 *)(a1 + 4014);
  v99 = *(unsigned __int16 *)(a1 + 4012);
  Arg1 = v99;
  LODWORD(Arg2) = v98;
  v11 = (struct _NDIS_MINIPORT_BLOCK *)a1;
  v12 = a4;
  if ( (int)RtlStringCbPrintfW(
              Dest,
              0xA8uLL,
              L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-%04u",
              *(unsigned int *)WnodeEventItem) < 0 )
  {
    v13 = v101;
    FilterAdapterRegistry = -1073741823;
    goto LABEL_107;
  }
  ndisFindAdjacentFilters((struct _NDIS_MINIPORT_BLOCK *)a1, a4, &v102, &v90);
  v13 = v101;
  FilterAdapterRegistry = ndisCreateFilterAdapterRegistry(&v101->DefaultFilterCharacteristics.ServiceName, a1);
  if ( FilterAdapterRegistry )
  {
LABEL_107:
    v17 = 0LL;
    goto LABEL_81;
  }
  if ( *(_BYTE *)(a1 + 32) < 6u && (*(_BYTE *)(a1 + 88) & 1) == 0 )
    ndisMDoMiniportOp(a1, 1, 65812, (__int64)v103, 4, 1u, 1);
  if ( !ndisReferenceFilterDriver((__int64)v13, 3u) )
  {
    FilterAdapterRegistry = -1073676282;
    goto LABEL_107;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x358uLL, 0x6266444Eu);
  v17 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    FilterAdapterRegistry = -1073741670;
    ndisDereferenceFilterDriver(v13, v16, 3u);
    goto LABEL_81;
  }
  memset(PoolWithTag, 0, 0x358uLL);
  *(_QWORD *)(v17 + 184) = -1LL;
  *(_DWORD *)v17 = 56099077;
  *(_QWORD *)(v17 + 16) = v13;
  v18 = Rtl::KString::Initialize(Dest);
  v19 = *(void **)(v17 + 40);
  *(_QWORD *)(v17 + 40) = v18;
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0x7274534Bu);
    v18 = *(struct Rtl::KString **)(v17 + 40);
  }
  if ( !v18 )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_119;
  }
  v20 = v13->DefaultFilterCharacteristics.FriendlyName.Length + 14 + **(_WORD **)(a1 + 3856);
  v21 = ExAllocatePoolWithTag(NonPagedPoolNx, v20 + 16LL, 0x7473444Eu);
  *(_QWORD *)(v17 + 48) = v21;
  if ( !v21 )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_119;
  }
  *v21 = 0;
  *(_WORD *)(*(_QWORD *)(v17 + 48) + 2LL) = v20;
  *(_QWORD *)(*(_QWORD *)(v17 + 48) + 8LL) = *(_QWORD *)(v17 + 48) + 16LL;
  RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v17 + 48), *(PCUNICODE_STRING *)(a1 + 3856));
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v17 + 48) >> 1)) = 45;
  **(_WORD **)(v17 + 48) += 2;
  RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v17 + 48), &v13->DefaultFilterCharacteristics.FriendlyName);
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v17 + 48) >> 1)) = 45;
  **(_WORD **)(v17 + 48) += 2;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v17 + 48) >> 1)) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 40) + 8LL) + 2 * (((unsigned __int64)**(unsigned __int16 **)(v17 + 40) - 8) >> 1));
  **(_WORD **)(v17 + 48) += 8;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v17 + 48) >> 1)) = 0;
  *(_QWORD *)(v17 + 656) = NdisNblTrackerRegisterComponent(1, v17, *(_QWORD *)(v17 + 48));
  Watchdog = (struct NDISWATCHDOG__ *)ndisAllocateWatchdog();
  wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::reset(
    (struct NDISWATCHDOG__ **)(v17 + 184),
    Watchdog);
  KeInitializeSpinLock((PKSPIN_LOCK)(v17 + 144));
  *(_BYTE *)(v17 + 56) = 0;
  v23 = *(_DWORD *)(v17 + 56);
  if ( (v23 & 0x100) != 0 )
    v23 &= ~0x100u;
  *(_BYTE *)(v17 + 64) = 0;
  *(_DWORD *)(v17 + 56) = v23 | 8;
  ndisInitializeRef(v17 + 72, 3u);
  ndisInitializeZeroBasedRef(v17 + 312);
  ndisCloseRef((PKSPIN_LOCK)(v17 + 312));
  if ( ndisDatapathVerifierMode == 1 )
  {
    if ( MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*(_QWORD *)(v17 + 16) + 16LL)) )
      *(_DWORD *)(v17 + 56) |= 0x200u;
  }
  else if ( ndisDatapathVerifierMode == 2 )
  {
    *(_DWORD *)(v17 + 56) |= 0x200u;
  }
  *(_QWORD *)(v17 + 584) = v13->DefaultFilterCharacteristics.SendNetBufferListsHandler;
  *(_QWORD *)(v17 + 592) = v13->DefaultFilterCharacteristics.SendNetBufferListsCompleteHandler;
  *(_QWORD *)(v17 + 608) = v13->DefaultFilterCharacteristics.ReceiveNetBufferListsHandler;
  *(_QWORD *)(v17 + 616) = v13->DefaultFilterCharacteristics.ReturnNetBufferListsHandler;
  *(_QWORD *)(v17 + 600) = v13->DefaultFilterCharacteristics.CancelSendNetBufferListsHandler;
  *(_QWORD *)(v17 + 168) = v17 + 160;
  *(_QWORD *)(v17 + 160) = v17 + 160;
  FilterAdapterRegistry = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(
                            (struct _NDIS_FILTER_BLOCK *)v17,
                            (_QWORD *)(v17 + 576),
                            0);
  if ( FilterAdapterRegistry )
    goto LABEL_119;
  v24 = v102;
  *(_QWORD *)(v17 + 208) = ndisStackExpansionFallbackWorker;
  *(_QWORD *)(v17 + 192) = 0LL;
  v25 = v90;
  *(_QWORD *)(v17 + 216) = v17;
  *(_QWORD *)(v17 + 112) = v25;
  *(_QWORD *)(v17 + 120) = v24;
  if ( v25 || v24 || !*(_QWORD *)(a1 + 2048) )
  {
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    if ( v24 )
      v24->LowerFilter = (_NDIS_FILTER_BLOCK *)v17;
    else
      *(_QWORD *)(a1 + 2048) = v17;
    if ( v25 )
      v25->HigherFilter = (_NDIS_FILTER_BLOCK *)v17;
    else
      *(_QWORD *)(a1 + 2040) = v17;
    *(_QWORD *)(v17 + 32) = a1;
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v26);
    v85 = 1;
    v27 = (_NDIS_MINIPORT_BLOCK *)a1;
    if ( *(_QWORD *)(a1 + 16) )
      v27 = *(_NDIS_MINIPORT_BLOCK **)(a1 + 16);
    v28 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    *(_QWORD *)(v17 + 104) = ndisGlobalFilterList;
    ndisGlobalFilterList = (PVOID)v17;
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v28);
    if ( ndisQueueFilterOnDriver(v17, (__int64)v13) )
    {
      if ( (v13->Bind._p->_t.FilterBindFlags & 2) == 0
        || (FilterAdapterRegistry = ndisCreateFilterInstanceRegistry((unsigned __int8)v13 - 112, v17, a1)) == 0 )
      {
        *(_BYTE *)(v17 + 64) = 1;
        *(_QWORD *)(v17 + 760) = a4;
        Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a1 + 5104));
        Ndis::BindState::AddBindContext(&a4->BindState, (void *)v17);
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a1 + 5104), v29);
        memset(v105, 0, sizeof(v105));
        v30 = *(_QWORD *)(v17 + 16);
        if ( *(_BYTE *)(v30 + 100) <= 6u )
        {
          v31 = *(_BYTE *)(v30 + 101);
          if ( v31 )
          {
            if ( v31 < 0x14u )
            {
              v32 = 2;
              v74 = 176;
            }
            else
            {
              if ( v31 >= 0x1Eu )
                goto LABEL_33;
              v32 = 3;
              v74 = 200;
            }
          }
          else
          {
            v32 = 1;
            v74 = 164;
          }
          WORD1(v105[0]) = v74;
LABEL_34:
          BYTE1(v105[0]) = v32;
          LOBYTE(v105[0]) = -103;
          LODWORD(v105[3]) = v27->IfIndex;
          v105[17] = v27->NetLuid.Value;
          v105[5] = &v27->MiniportName;
          v105[4] = v27->pAdapterInstanceName;
          v33 = *(_QWORD *)(v17 + 112);
          if ( v33 )
          {
            LODWORD(v105[18]) = *(_DWORD *)(v33 + 688);
            v105[19] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 112) + 696LL) + 1312LL);
          }
          else
          {
            LODWORD(v105[18]) = *(_DWORD *)(*(_QWORD *)(v17 + 32) + 4056LL);
            v105[19] = *(_QWORD *)(*(_QWORD *)(v17 + 32) + 4024LL);
          }
          v105[2] = *(_QWORD *)(v17 + 40);
          v105[10] = *(_QWORD *)(a1 + 768);
          if ( (*(_DWORD *)(a1 + 568) & 0x80000001) == 0x80000001 )
          {
            LODWORD(v105[9]) = 3;
          }
          else
          {
            if ( v25 )
            {
              LODWORD(v105[9]) = v25->MediaType;
              PhysicalMediaType = v25->PhysicalMediaType;
              goto LABEL_39;
            }
            LODWORD(v105[9]) = *(_DWORD *)(a1 + 1836);
          }
          PhysicalMediaType = *(_DWORD *)(a1 + 3776);
LABEL_39:
          HIDWORD(v105[9]) = PhysicalMediaType;
          v35 = *(_QWORD **)(v17 + 112);
          if ( v35 )
          {
            v105[6] = *(_QWORD *)((char *)v35 + 380);
            v105[7] = v35[49];
            v105[8] = v35[50];
            p_MiniportCurrentConfig = (_NDIS_OFFLOAD *)v35[83];
          }
          else
          {
            v105[6] = *(_QWORD *)(a1 + 344);
            v105[7] = *(_QWORD *)(a1 + 2760);
            v105[8] = *(_QWORD *)(a1 + 2768);
            v71 = *(_NDIS_MINIPORT_OFFLOAD **)(a1 + 4096);
            if ( !v71 || !v71->SupportsOffload )
            {
              v105[11] = 0LL;
              goto LABEL_42;
            }
            p_MiniportCurrentConfig = &v71->MiniportCurrentConfig;
          }
          v105[11] = p_MiniportCurrentConfig;
LABEL_42:
          v37 = (_NDIS_HD_SPLIT_CURRENT_CONFIG *)v105[21];
          if ( *(_QWORD *)(a1 + 4264) )
            v37 = *(_NDIS_HD_SPLIT_CURRENT_CONFIG **)(a1 + 4264);
          v38 = *(_NDIS_RECEIVE_FILTER_CAPABILITIES **)(a1 + 3552);
          v105[21] = v37;
          v39 = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)v105[22];
          if ( v38 )
            v39 = v38;
          v40 = *(_NDIS_NIC_SWITCH_CAPABILITIES **)(a1 + 3576);
          v105[22] = v39;
          v41 = (_NDIS_NIC_SWITCH_CAPABILITIES *)v105[24];
          if ( v40 )
            v41 = v40;
          v105[24] = v41;
          if ( (unsigned __int8)v32 >= 4u )
          {
            if ( *(_QWORD *)(a1 + 4608) )
            {
              v105[26] = *(_QWORD *)(a1 + 4608);
              if ( (unsigned int)ndisIovGetNicSwitchList(a1, &v105[27]) )
              {
                FilterAdapterRegistry = -1073741823;
LABEL_130:
                v12 = a4;
                goto LABEL_119;
              }
            }
            LOBYTE(v105[25]) = *(_BYTE *)(*(_QWORD *)(a1 + 4040) + 556LL);
          }
          v42 = *(_NDIS_IF_BLOCK **)(a1 + 4040);
          v105[23] = *(_QWORD *)(a1 + 3832);
          LOWORD(v105[12]) = v42->ifPhysAddress.Length;
          memmove((char *)&v105[12] + 2, v42->ifPhysAddress.Address, LOWORD(v105[12]));
          *(_QWORD *)(v17 + 344) = v105[6];
          *(_QWORD *)(v17 + 352) = v105[7];
          *(_QWORD *)(v17 + 360) = v105[8];
          if ( LODWORD(v105[6]) == 1 )
          {
            v43 = ndisFilterIndicateReceiveNetBufferLists;
            v44 = ndisFilterSendNetBufferLists;
            v45 = ndisFilterCancelSendNetBufferLists;
          }
          else
          {
            ndisFilterXStateSetFlag((struct _NDIS_FILTER_BLOCK *)v17);
            v43 = ndisFakeFilterReceiveHandler;
            v44 = ndisFakeFilterSendHandler;
            v45 = ndisFakeMiniportCancelSendPackets;
          }
          *(_QWORD *)(v17 + 640) = v45;
          *(_QWORD *)(v17 + 624) = v44;
          *(_QWORD *)(v17 + 632) = v43;
          if ( (*(_DWORD *)(a1 + 568) & 0x80000001) == 0x80000001 )
            v46 = *(_DWORD *)(a1 + 464);
          else
            v46 = v105[9];
          *(_DWORD *)(v17 + 336) = v46;
          *(_DWORD *)(v17 + 340) = HIDWORD(v105[9]);
          FilterAdapterRegistry = ndisIfCreateFilterInterface((struct _NDIS_FILTER_BLOCK *)v17);
          if ( FilterAdapterRegistry )
            goto LABEL_130;
          if ( (byte_1C00E8043 & 1) != 0 )
            McTemplateK0juqjzzz(
              *(_QWORD *)(v17 + 32) + 4008LL,
              *(_QWORD *)(v17 + 40),
              (const GUID *)(v17 + 672),
              v17 + 672,
              *(_BYTE *)(v17 + 64),
              6,
              *(_QWORD *)(v17 + 32) + 4008LL,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v17 + 32) + 3856LL) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v17 + 40) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v17 + 48) + 8LL));
          if ( Microsoft_Windows_Networking_CorrelationEnabled )
            EtwEx_tidActivityInfoTransfer(
              v48,
              v47,
              (const struct _GUID *)(v17 + 672),
              (const struct _GUID *)(a1 + 4008),
              Arg1,
              Arg2,
              0);
          HIDWORD(v105[0]) = *(_DWORD *)(v17 + 688);
          v87 = 1;
          v105[1] = *(_QWORD *)(*(_QWORD *)(v17 + 696) + 1312LL);
          FilterAdapterRegistry = ndisFInvokeAttach(v17, (__int64)v105);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqZddZD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v13->DefaultFilterCharacteristics.MajorNdisVersion,
              v49,
              (__int64)&WPP_RECORDER_INITIALIZED,
              Arg1);
          if ( FilterAdapterRegistry )
          {
            a4->BindState.AllowBindDespiteMandatory = v105[20] & 1;
            v75 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 144));
            *(_BYTE *)(v17 + 56) = 0;
            v76 = *(_DWORD *)(v17 + 56);
            if ( (v76 & 0x100) != 0 )
              v76 &= ~0x100u;
            *(_QWORD *)(v17 + 152) = 0LL;
            *(_DWORD *)(v17 + 56) = v76 | 8;
            KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 144), v75);
            *(_BYTE *)(v17 + 64) = 0;
            if ( (byte_1C00E8043 & 1) != 0 )
              McTemplateK0juqjzzz(
                *(_QWORD *)(v17 + 48),
                *(_QWORD *)(v17 + 40),
                (const GUID *)(v17 + 672),
                v17 + 672,
                0,
                7,
                *(_QWORD *)(v17 + 32) + 4008LL,
                *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v17 + 32) + 3856LL) + 8LL),
                *(const wchar_t **)(*(_QWORD *)(v17 + 40) + 8LL),
                *(const wchar_t **)(*(_QWORD *)(v17 + 48) + 8LL));
            goto LABEL_130;
          }
          v50 = *(_DWORD *)(v17 + 336);
          v51 = LODWORD(v105[9]);
          if ( v50 != LODWORD(v105[9]) && (*(_DWORD *)(a1 + 568) & 0x80000001) != 0x80000001 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)v84 = v105[9];
              WPP_RECORDER_SF_qqLd(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0xDu,
                0x23u,
                (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
                a1,
                v17,
                v50,
                *(_QWORD *)v84);
              v51 = LODWORD(v105[9]);
            }
            if ( Microsoft_Windows_NDISEnableBits < 0 )
              McTemplateK0jqxjqxdd(
                *(_QWORD *)(v17 + 696),
                v51,
                (const GUID *)(a1 + 4008),
                a1 + 4008,
                *(_DWORD *)(a1 + 4056),
                *(_QWORD *)(a1 + 4024),
                v17 + 672,
                *(_DWORD *)(v17 + 688),
                *(_QWORD *)(*(_QWORD *)(v17 + 696) + 1312LL),
                *(_DWORD *)(v17 + 336),
                v51);
            v86 = 1;
          }
          v52 = *(_QWORD *)(v17 + 120);
          if ( v52 )
          {
            v77 = *(_QWORD *)(v17 + 112);
            if ( v77 )
              v78 = *(_DWORD *)(v77 + 688);
            else
              v78 = *(_DWORD *)(a1 + 4056);
            NdisIfDeleteIfStackEntry(*(_DWORD *)(v52 + 688), v78);
          }
          v53 = *(_QWORD *)(v17 + 112);
          if ( v53 )
            v54 = *(_DWORD *)(v53 + 688);
          else
            v54 = *(_DWORD *)(*(_QWORD *)(v17 + 32) + 4056LL);
          NdisIfAddIfStackEntry(*(_DWORD *)(v17 + 688), v54);
          v55 = *(_QWORD *)(v17 + 120);
          if ( v55 )
            NdisIfAddIfStackEntry(*(_DWORD *)(v55 + 688), *(_DWORD *)(v17 + 688));
          v56 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          ndisIfUpdateFilterIfStack(*(_QWORD *)(v17 + 32));
          KeReleaseSpinLock(&ndisIfListLock, v56);
          v57 = *(struct _NDIS_FILTER_BLOCK **)(v17 + 112);
          v90 = v57;
          if ( v57 )
          {
            v58 = KeAcquireSpinLockRaiseToDpc(&v57->Lock);
            v59 = v90;
            v60 = v58;
            v57->LockThread = KeGetCurrentThread();
            *(_DWORD *)(v17 + 344) = v59->MediaConnectStateIndicateUp;
            *(_DWORD *)(v17 + 348) = v59->MediaDuplexStateIndicateUp;
            *(_QWORD *)(v17 + 352) = v59->XmitLinkSpeedIndicateUp;
            *(_QWORD *)(v17 + 360) = v59->RcvLinkSpeedIndicateUp;
            *(_DWORD *)(v17 + 368) = v59->PauseFunctionsIndicateUp;
            *(_DWORD *)(v17 + 372) = v59->AutoNegotiationFlagsIndicateUp;
            ndisOpenRef((PKSPIN_LOCK)(v17 + 312));
            v57->LockThread = 0LL;
            KeReleaseSpinLock(&v57->Lock, v60);
            v11 = (struct _NDIS_MINIPORT_BLOCK *)a1;
          }
          else
          {
            v72 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
            *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
            *(_DWORD *)(v17 + 344) = *(_DWORD *)(a1 + 344);
            *(_DWORD *)(v17 + 348) = *(_DWORD *)(a1 + 348);
            *(_QWORD *)(v17 + 352) = *(_QWORD *)(a1 + 2760);
            *(_QWORD *)(v17 + 360) = *(_QWORD *)(a1 + 2768);
            *(_DWORD *)(v17 + 368) = *(_DWORD *)(a1 + 812);
            *(_DWORD *)(v17 + 372) = *(_DWORD *)(a1 + 816);
            ndisOpenRef((PKSPIN_LOCK)(v17 + 312));
            *(_QWORD *)(a1 + 520) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v72);
          }
          *(_DWORD *)(*(_QWORD *)(v17 + 696) + 1220LL) = *(_DWORD *)(v17 + 344);
          *(_DWORD *)(*(_QWORD *)(v17 + 696) + 1224LL) = *(_DWORD *)(v17 + 348);
          *(_QWORD *)(*(_QWORD *)(v17 + 696) + 1208LL) = *(_QWORD *)(v17 + 360);
          *(_QWORD *)(*(_QWORD *)(v17 + 696) + 1200LL) = *(_QWORD *)(v17 + 352);
          ndisIndicateInitialStateToFilter((struct _NDIS_FILTER_BLOCK *)v17);
          v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 144));
          *(_QWORD *)(v17 + 152) = KeGetCurrentThread();
          *(_BYTE *)(v17 + 56) = 0;
          v62 = *(_DWORD *)(v17 + 56) | 4;
          *(_DWORD *)(v17 + 56) = v62;
          if ( v86 )
          {
            *(_DWORD *)(v17 + 56) = v62 | 0x8000;
            ++v11->MediaChangeFilters;
            v79 = *(_QWORD *)(v17 + 696);
            *(_QWORD *)(v17 + 336) = v105[9];
            *(_DWORD *)(v79 + 564) = *(_DWORD *)(v17 + 336);
            *(_DWORD *)(*(_QWORD *)(v17 + 696) + 568LL) = *(_DWORD *)(v17 + 340);
          }
          *(_QWORD *)(v17 + 152) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 144), v61);
          if ( v86 )
          {
            v80 = *(_DWORD *)(v17 + 336);
            v11->MediaType = v80;
            v11->PhysicalMediumType = *(_DWORD *)(v17 + 340);
            if ( v80 == NdisMedium802_3 )
            {
              if ( EthInitializeFilter(
                     v11->TopFilterRestartAttributes.MaxMulticastListSize,
                     (__int64)v11->IfBlock->ifPhysAddress.Address,
                     (__int64)v11->EthDB) )
              {
                v11->EthDB->Miniport = v11;
              }
            }
          }
          *(_BYTE *)(v17 + 64) = 2;
          if ( (byte_1C00E8043 & 1) != 0 )
            McTemplateK0juqjzzz(
              *(_QWORD *)(v17 + 32) + 4008LL,
              *(_QWORD *)(v17 + 40),
              (const GUID *)(v17 + 672),
              v17 + 672,
              2,
              8,
              *(_QWORD *)(v17 + 32) + 4008LL,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v17 + 32) + 3856LL) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v17 + 40) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v17 + 48) + 8LL));
          ndisPktMonFilterRegister(v17);
          ndisReferenceMiniport((__int64)v11);
          if ( v11->MajorNdisVersion < 6u && !v11->Miniport5HasNdis6Component )
            v11->Miniport5HasNdis6Component = 1;
          ndisSetupWmiNode(
            (__int64)v11,
            *(const void ***)(v17 + 48),
            v11->BindPaths->Paths[0].Length + v13->DefaultFilterCharacteristics.UniqueName.Length + 4,
            (__int128 *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL,
            &WnodeEventItem);
          v63 = WnodeEventItem;
          if ( WnodeEventItem )
          {
            v64 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
            memmove(
              v64,
              v13->DefaultFilterCharacteristics.UniqueName.Buffer,
              v13->DefaultFilterCharacteristics.UniqueName.Length);
            memmove(
              &v64[v13->DefaultFilterCharacteristics.UniqueName.Length + 2],
              v11->BindPaths->Paths[0].Buffer,
              v11->BindPaths->Paths[0].Length);
            v66 = IoWMIWriteEvent(v63);
            if ( v66 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v65) = 2;
                WPP_RECORDER_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v65,
                  1,
                  36,
                  (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids);
              }
              if ( (byte_1C00E8041 & 1) != 0 )
                McTemplateK0qqq(0LL, &FilterArrivalIndicationFailed, (const GUID *)(v17 + 672), v66, 0x10001u, 0);
              ExFreePoolWithTag(v63, 0);
            }
          }
          Ndis::BindEngine::BeginPolicyUpdates(&v11->BindEngine);
          v12 = a4;
          if ( Ndis::BindState::SetPause(&a4->BindState, DatapathRunning, PauseReason_InitialPause) )
          {
            memset(v106, 0, sizeof(v106));
            if ( (unsigned __int8)byte_1C00E673B >= 4u )
            {
              ndisGetBindLinkNameForTracing(a4, v106);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (int)v67,
                  0x1Cu,
                  0x25u,
                  (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
                  v106[0].Buffer,
                  *(_QWORD *)&v106[0].Length);
            }
          }
          Ndis::BindEngine::EndPolicyUpdates(&v11->BindEngine, v67);
          if ( v11->MajorNdisVersion < 6u && !v11->Miniport5HasNdis6Component )
            v11->Miniport5HasNdis6Component = 1;
LABEL_81:
          if ( ndisVerifierNdisDispatch
            && v17
            && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*(_QWORD *)(v17 + 16) + 16LL))
            && !*(_QWORD *)(v17 + 784)
            && ((int (__fastcall *)(_DRIVER_OBJECT *, __int64, void **))ndisVerifierNdisDispatch->NdisAllocateVerifierContext)(
                 v13->DriverObject,
                 v17,
                 &v13->FilterDriverContext) < 0
            && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v81) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v81,
              13,
              38,
              (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
              v17);
          }
          goto LABEL_82;
        }
LABEL_33:
        WORD1(v105[0]) = 224;
        v32 = 4;
        goto LABEL_34;
      }
    }
    else
    {
      FilterAdapterRegistry = -1073676286;
    }
    v12 = a4;
    goto LABEL_119;
  }
  FilterAdapterRegistry = -1073741823;
LABEL_119:
  if ( *(_QWORD *)(v17 + 760) )
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a1 + 5104));
    Ndis::BindState::RemoveBindContext(&v12->BindState, (void *)v17);
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a1 + 5104), v73);
    *(_QWORD *)(v17 + 760) = 0LL;
  }
  ndisFilterAttachCleanUp((PVOID)v17, (struct _NDIS_MINIPORT_BLOCK *)(a1 & -(__int64)(v85 != 0)), v87);
LABEL_82:
  ndisHandleFilterHandlersChange(v11);
  if ( v105[27] )
  {
    ExFreePoolWithTag((PVOID)v105[27], 0);
    v105[27] = 0LL;
  }
  if ( FilterAdapterRegistry
    && !v12->BindState.AllowBindDespiteMandatory
    && (v12->BindDriver._p->_t.FilterBindFlags & 1) == 0 )
  {
    ndisNotifyBindFailureOnUnboundProtocols((__int64)v11);
  }
  ndisDereferenceMiniport((__int64)v11, 0x27u);
  ndisDereferenceFilterDriver(v13, v68, 0);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v69) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v69,
      1,
      39,
      (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
      (char)v13,
      (char)v11,
      FilterAdapterRegistry);
  }
  return FilterAdapterRegistry;
}
