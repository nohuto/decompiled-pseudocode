/*
 * XREFs of ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00CE7D0 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisIovGetNicSwitchList @ 0x1C0014154 (ndisIovGetNicSwitchList.c)
 *     ndisAllocOrFreeIterativeDataPathTrackerIfNeeded @ 0x1C0016224 (ndisAllocOrFreeIterativeDataPathTrackerIfNeeded.c)
 *     ndisDereferenceFilterDriver @ 0x1C0016FB0 (ndisDereferenceFilterDriver.c)
 *     ndisSetupWmiNode @ 0x1C00172D4 (ndisSetupWmiNode.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0017CAC (ndisIndicateInitialStateToFilter.c)
 *     ndisReferenceFilterDriver @ 0x1C001A4CC (ndisReferenceFilterDriver.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C001C360 (NdisNblTrackerRegisterComponent.c)
 *     ndisIfCreateFilterInterface @ 0x1C001C89C (ndisIfCreateFilterInterface.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C001E47C (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C001E500 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C002297C (ndisIfUpdateFilterIfStack.c)
 *     NdisIfAddIfStackEntry @ 0x1C0022C40 (NdisIfAddIfStackEntry.c)
 *     ndisHandleFilterHandlersChange @ 0x1C0024818 (ndisHandleFilterHandlersChange.c)
 *     ndisQueueFilterOnDriver @ 0x1C0025030 (ndisQueueFilterOnDriver.c)
 *     ndisFilterXStateSetFlag @ 0x1C002528C (ndisFilterXStateSetFlag.c)
 *     ndisCloseRef @ 0x1C00258F8 (ndisCloseRef.c)
 *     ndisOpenRef @ 0x1C0025A9C (ndisOpenRef.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C003A8AC (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C0041380 (NdisIfDeleteIfStackEntry.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004D1FC (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     McTemplateK0qqq @ 0x1C004F464 (McTemplateK0qqq.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     WPP_SF_qqZ @ 0x1C004F958 (WPP_SF_qqZ.c)
 *     ndisFilterAttachCleanUp @ 0x1C005C06C (ndisFilterAttachCleanUp.c)
 *     McTemplateK0jqxjqxdd @ 0x1C007A5D8 (McTemplateK0jqxjqxdd.c)
 *     McTemplateK0juqjzzz @ 0x1C007A6B0 (McTemplateK0juqjzzz.c)
 *     WPP_SF_qqZddZD @ 0x1C007A9CC (WPP_SF_qqZddZD.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisMDoMiniportOp @ 0x1C00BD33C (ndisMDoMiniportOp.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BD9F0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00BE568 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BF650 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00BFE54 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00C09BC (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00C2CD0 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ndisPktMonFilterRegister @ 0x1C00C36AC (ndisPktMonFilterRegister.c)
 *     ndisInitializeRef @ 0x1C00C4264 (ndisInitializeRef.c)
 *     ndisInitializeZeroBasedRef @ 0x1C00C46B8 (ndisInitializeZeroBasedRef.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1C00C51C8 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ndisCreateFilterAdapterRegistry @ 0x1C00CFF90 (ndisCreateFilterAdapterRegistry.c)
 *     ndisFInvokeAttach @ 0x1C00D1244 (ndisFInvokeAttach.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C00EC7E8 (ndisCreateFilterInstanceRegistry.c)
 *     EthInitializeFilter @ 0x1C00F3B98 (EthInitializeFilter.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C0106D7C (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01074D8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisAttachFilterInner(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_DRIVER_BLOCK *a2,
        int a3,
        struct NDIS_BIND_FILTER_LINK *a4)
{
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rsi
  int v8; // r14d
  int v9; // r15d
  __int64 v10; // rdi
  struct NDIS_BIND_FILTER_LINK *v11; // r13
  _NDIS_FILTER_DRIVER_BLOCK *v12; // rsi
  unsigned int FilterAdapterRegistry; // r15d
  PVOID PoolWithTag; // rax
  __int64 v15; // r14
  struct Rtl::KString *v16; // rax
  struct Rtl::KString *v17; // rcx
  struct Rtl::KString *v18; // rbx
  unsigned __int16 v19; // bx
  _WORD *v20; // rax
  struct NDISWATCHDOG__ *Watchdog; // rax
  int v22; // eax
  struct _NDIS_FILTER_BLOCK *v23; // rcx
  struct _NDIS_FILTER_BLOCK *v24; // rax
  KIRQL v25; // al
  struct _NDIS_FILTER_BLOCK *v26; // rcx
  struct _NDIS_FILTER_BLOCK *v27; // r13
  __int64 v28; // rbx
  KIRQL v29; // al
  struct _NDIS_MINIPORT_BLOCK *v30; // rdx
  __int64 v31; // rax
  unsigned __int8 v32; // al
  char v33; // dl
  __int64 v34; // rax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediaType; // eax
  _QWORD *v36; // rcx
  _BYTE *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  void *v44; // rax
  void *v45; // rcx
  void *v46; // rdx
  int v47; // eax
  const struct _EVENT_DESCRIPTOR *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  NET_IFINDEX v53; // edx
  __int64 v54; // rax
  KIRQL v55; // bl
  struct _NDIS_FILTER_BLOCK *v56; // r12
  KIRQL v57; // di
  struct _NDIS_FILTER_BLOCK *v58; // rbx
  KIRQL v59; // dl
  int v60; // ecx
  PVOID v61; // r12
  char *v62; // rbx
  struct _MCGEN_TRACE_CONTEXT *v63; // rcx
  signed int v64; // ebx
  struct _NDIS_MINIPORT_BLOCK *v65; // rdx
  _BYTE *v67; // rax
  KIRQL v68; // bl
  int v69; // ecx
  struct _NDIS_MINIPORT_BLOCK *v70; // rdx
  __int16 v71; // ax
  KIRQL v72; // al
  int v73; // edx
  __int64 v74; // rax
  NET_IFINDEX v75; // edx
  __int64 v76; // rcx
  int v77; // ecx
  unsigned int Arg1[2]; // [rsp+20h] [rbp-130h]
  const struct _GUID *Arg2; // [rsp+28h] [rbp-128h]
  unsigned int v80[2]; // [rsp+30h] [rbp-120h]
  __int64 v81; // [rsp+40h] [rbp-110h]
  char v82; // [rsp+D0h] [rbp-80h]
  char v83; // [rsp+D2h] [rbp-7Eh]
  char v84; // [rsp+D3h] [rbp-7Dh]
  struct _NDIS_FILTER_BLOCK *v86; // [rsp+E0h] [rbp-70h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v87; // [rsp+E8h] [rbp-68h]
  int v88; // [rsp+F0h] [rbp-60h]
  int v89; // [rsp+F4h] [rbp-5Ch]
  int v90; // [rsp+F8h] [rbp-58h]
  int v91; // [rsp+FCh] [rbp-54h]
  int v92; // [rsp+100h] [rbp-50h]
  int v93; // [rsp+104h] [rbp-4Ch]
  int v94; // [rsp+108h] [rbp-48h]
  int Data3; // [rsp+10Ch] [rbp-44h]
  int Data2; // [rsp+110h] [rbp-40h]
  struct _NDIS_FILTER_BLOCK *v97; // [rsp+118h] [rbp-38h] BYREF
  _NDIS_FILTER_DRIVER_BLOCK *v98; // [rsp+120h] [rbp-30h]
  PVOID WnodeEventItem; // [rsp+130h] [rbp-20h] BYREF
  _BYTE v100[8]; // [rsp+138h] [rbp-18h] BYREF
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *v101; // [rsp+140h] [rbp-10h]
  _QWORD v102[28]; // [rsp+150h] [rbp+0h] BYREF
  struct _UNICODE_STRING v103; // [rsp+230h] [rbp+E0h] BYREF
  wchar_t Dest[88]; // [rsp+2D0h] [rbp+180h] BYREF

  v88 = a3;
  v98 = a2;
  v87 = a1;
  v86 = 0LL;
  v97 = 0LL;
  v82 = 0;
  memset(v102, 0, sizeof(v102));
  v83 = 0;
  v84 = 0;
  if ( !(unsigned __int8)ndisReferenceFilterDriver((__int64)a2) )
    return 3221291010LL;
  if ( !ndisReferenceMiniport((__int64)a1) )
  {
    ndisDereferenceFilterDriver(a2);
    return 3221291010LL;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqZ(
      0x21u,
      &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids,
      a2,
      a1,
      &a2->DefaultFilterCharacteristics.FriendlyName);
  ndisReferencePackage((__int64)&ndisPkgs);
  p = a4->BindDriver._p;
  v8 = a1->InterfaceGuid.Data4[7];
  v9 = a1->InterfaceGuid.Data4[6];
  WnodeEventItem = &a1->InterfaceGuid;
  v89 = v8;
  v90 = v9;
  v101 = p;
  v91 = v87->InterfaceGuid.Data4[3];
  v92 = v87->InterfaceGuid.Data4[2];
  v93 = v87->InterfaceGuid.Data4[1];
  v94 = v87->InterfaceGuid.Data4[0];
  Data3 = v87->InterfaceGuid.Data3;
  Data2 = v87->InterfaceGuid.Data2;
  LOBYTE(Arg1[0]) = Data2;
  LODWORD(Arg2) = Data3;
  v10 = (__int64)v87;
  v11 = a4;
  if ( (int)RtlStringCbPrintfW(
              Dest,
              0xA8uLL,
              L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-%04u",
              *(unsigned int *)WnodeEventItem) < 0 )
  {
    v12 = v98;
    FilterAdapterRegistry = -1073741823;
    goto LABEL_109;
  }
  ndisFindAdjacentFilters(v87, a4, &v97, &v86);
  v12 = v98;
  FilterAdapterRegistry = ndisCreateFilterAdapterRegistry(&v98->DefaultFilterCharacteristics.ServiceName, v10);
  if ( FilterAdapterRegistry )
  {
LABEL_109:
    v15 = 0LL;
    goto LABEL_83;
  }
  if ( *(_BYTE *)(v10 + 32) < 6u && (*(_BYTE *)(v10 + 88) & 1) == 0 )
    ndisMDoMiniportOp((void *)v10, 1, 65812, (__int64)v100, 4, 1u, 1);
  if ( !(unsigned __int8)ndisReferenceFilterDriver((__int64)v12) )
  {
    FilterAdapterRegistry = -1073676282;
    goto LABEL_109;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3A8uLL, 0x6266444Eu);
  v15 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    FilterAdapterRegistry = -1073741670;
    ndisDereferenceFilterDriver(v12);
    goto LABEL_83;
  }
  memset(PoolWithTag, 0, 0x3A8uLL);
  *(_QWORD *)(v15 + 40) = 0LL;
  *(_QWORD *)(v15 + 192) = -1LL;
  *(_DWORD *)v15 = 61341957;
  *(_QWORD *)(v15 + 16) = v12;
  v16 = Rtl::KString::Initialize(Dest);
  v17 = *(struct Rtl::KString **)(v15 + 40);
  v18 = v16;
  if ( v16 != v17 )
  {
    if ( v17 )
      ExFreePoolWithTag(v17, 0x7274534Bu);
    *(_QWORD *)(v15 + 40) = v18;
    v17 = v18;
  }
  if ( !v17 )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_121;
  }
  v19 = v12->DefaultFilterCharacteristics.FriendlyName.Length + 14 + **(_WORD **)(v10 + 3888);
  v20 = ExAllocatePoolWithTag(NonPagedPoolNx, v19 + 16LL, 0x7473444Eu);
  *(_QWORD *)(v15 + 48) = v20;
  if ( !v20 )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_121;
  }
  *v20 = 0;
  *(_WORD *)(*(_QWORD *)(v15 + 48) + 2LL) = v19;
  *(_QWORD *)(*(_QWORD *)(v15 + 48) + 8LL) = *(_QWORD *)(v15 + 48) + 16LL;
  RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v15 + 48), *(PCUNICODE_STRING *)(v10 + 3888));
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v15 + 48) >> 1)) = 45;
  **(_WORD **)(v15 + 48) += 2;
  RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v15 + 48), &v12->DefaultFilterCharacteristics.FriendlyName);
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v15 + 48) >> 1)) = 45;
  **(_WORD **)(v15 + 48) += 2;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v15 + 48) >> 1)) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 40) + 8LL) + 2 * (((unsigned __int64)**(unsigned __int16 **)(v15 + 40) - 8) >> 1));
  **(_WORD **)(v15 + 48) += 8;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v15 + 48) >> 1)) = 0;
  *(_QWORD *)(v15 + 664) = NdisNblTrackerRegisterComponent(1, v15, *(_QWORD *)(v15 + 48));
  Watchdog = ndisAllocateWatchdog();
  wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,-1,std::nullptr_t>>::reset(
    (struct NDISWATCHDOG__ **)(v15 + 192),
    Watchdog);
  KeInitializeSpinLock((PKSPIN_LOCK)(v15 + 144));
  *(_BYTE *)(v15 + 56) = 0;
  v22 = *(_DWORD *)(v15 + 56);
  if ( (v22 & 0x100) != 0 )
  {
    v22 &= ~0x100u;
    *(_DWORD *)(v15 + 56) = v22;
  }
  *(_BYTE *)(v15 + 64) = 0;
  *(_DWORD *)(v15 + 56) = v22 | 8;
  ndisInitializeRef(v15 + 72, 3);
  ndisInitializeZeroBasedRef(v15 + 320);
  ndisCloseRef((PKSPIN_LOCK)(v15 + 320));
  if ( ndisDatapathVerifierMode == 1 )
  {
    if ( MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*(_QWORD *)(v15 + 16) + 16LL)) )
      *(_DWORD *)(v15 + 56) |= 0x200u;
  }
  else if ( ndisDatapathVerifierMode == 2 )
  {
    *(_DWORD *)(v15 + 56) |= 0x200u;
  }
  *(_QWORD *)(v15 + 592) = v12->DefaultFilterCharacteristics.SendNetBufferListsHandler;
  *(_QWORD *)(v15 + 600) = v12->DefaultFilterCharacteristics.SendNetBufferListsCompleteHandler;
  *(_QWORD *)(v15 + 616) = v12->DefaultFilterCharacteristics.ReceiveNetBufferListsHandler;
  *(_QWORD *)(v15 + 624) = v12->DefaultFilterCharacteristics.ReturnNetBufferListsHandler;
  *(_QWORD *)(v15 + 608) = v12->DefaultFilterCharacteristics.CancelSendNetBufferListsHandler;
  *(_QWORD *)(v15 + 176) = v15 + 168;
  *(_QWORD *)(v15 + 168) = v15 + 168;
  FilterAdapterRegistry = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(
                            (struct _NDIS_FILTER_BLOCK *)v15,
                            (_QWORD *)(v15 + 584),
                            0);
  if ( FilterAdapterRegistry )
    goto LABEL_121;
  v23 = v97;
  *(_QWORD *)(v15 + 216) = ndisStackExpansionFallbackWorker;
  v24 = v86;
  *(_QWORD *)(v15 + 224) = v15;
  *(_QWORD *)(v15 + 200) = 0LL;
  *(_QWORD *)(v15 + 112) = v24;
  *(_QWORD *)(v15 + 120) = v23;
  if ( v24 || v23 || !*(_QWORD *)(v10 + 2064) )
  {
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 96));
    *(_QWORD *)(v10 + 520) = KeGetCurrentThread();
    v26 = v97;
    *(_DWORD *)(v10 + 1864) = 3867543;
    if ( v26 )
      v26->LowerFilter = (_NDIS_FILTER_BLOCK *)v15;
    else
      *(_QWORD *)(v10 + 2064) = v15;
    v27 = v86;
    if ( v86 )
      v86->HigherFilter = (_NDIS_FILTER_BLOCK *)v15;
    else
      *(_QWORD *)(v10 + 2056) = v15;
    *(_QWORD *)(v15 + 32) = v10;
    *(_QWORD *)(v10 + 520) = 0LL;
    *(_DWORD *)(v10 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), v25);
    v82 = 1;
    v28 = v10;
    if ( *(_QWORD *)(v10 + 16) )
      v28 = *(_QWORD *)(v10 + 16);
    v29 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    *(_QWORD *)(v15 + 104) = ndisGlobalFilterList;
    ndisGlobalFilterList = (PVOID)v15;
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v29);
    if ( ndisQueueFilterOnDriver(v15, (__int64)v12) )
    {
      if ( (v12->Bind._p->_t.FilterBindFlags & 2) == 0
        || (FilterAdapterRegistry = ndisCreateFilterInstanceRegistry(
                                      &v12->DefaultFilterCharacteristics.ServiceName,
                                      v15,
                                      v10)) == 0 )
      {
        *(_BYTE *)(v15 + 64) = 1;
        *(_QWORD *)(v15 + 768) = a4;
        Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v10 + 5144));
        Ndis::BindState::AddBindContext(&a4->BindState, (void *)v15);
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v10 + 5144), v30);
        memset(v102, 0, sizeof(v102));
        v31 = *(_QWORD *)(v15 + 16);
        if ( *(_BYTE *)(v31 + 100) <= 6u )
        {
          v32 = *(_BYTE *)(v31 + 101);
          if ( v32 )
          {
            if ( v32 < 0x14u )
            {
              v33 = 2;
              v71 = 176;
            }
            else
            {
              if ( v32 >= 0x1Eu )
                goto LABEL_35;
              v33 = 3;
              v71 = 200;
            }
          }
          else
          {
            v33 = 1;
            v71 = 164;
          }
          WORD1(v102[0]) = v71;
LABEL_36:
          BYTE1(v102[0]) = v33;
          LOBYTE(v102[0]) = -103;
          LODWORD(v102[3]) = *(_DWORD *)(v28 + 4088);
          v102[17] = *(_QWORD *)(v28 + 4056);
          v102[5] = v28 + 3840;
          v102[4] = *(_QWORD *)(v28 + 3888);
          v34 = *(_QWORD *)(v15 + 112);
          if ( v34 )
          {
            LODWORD(v102[18]) = *(_DWORD *)(v34 + 696);
            v102[19] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 112) + 704LL) + 1312LL);
          }
          else
          {
            LODWORD(v102[18]) = *(_DWORD *)(*(_QWORD *)(v15 + 32) + 4088LL);
            v102[19] = *(_QWORD *)(*(_QWORD *)(v15 + 32) + 4056LL);
          }
          v102[2] = *(_QWORD *)(v15 + 40);
          v102[10] = *(_QWORD *)(v10 + 768);
          if ( (*(_DWORD *)(v10 + 568) & 0x80000001) == 0x80000001 )
          {
            LODWORD(v102[9]) = 3;
          }
          else
          {
            if ( v27 )
            {
              LODWORD(v102[9]) = v27->MediaType;
              PhysicalMediaType = v27->PhysicalMediaType;
              goto LABEL_41;
            }
            LODWORD(v102[9]) = *(_DWORD *)(v10 + 1836);
          }
          PhysicalMediaType = *(_DWORD *)(v10 + 3808);
LABEL_41:
          HIDWORD(v102[9]) = PhysicalMediaType;
          v36 = *(_QWORD **)(v15 + 112);
          if ( v36 )
          {
            v102[6] = *(_QWORD *)((char *)v36 + 388);
            v102[7] = v36[50];
            v102[8] = v36[51];
            v37 = (_BYTE *)v36[84];
          }
          else
          {
            v102[6] = *(_QWORD *)(v10 + 344);
            v102[7] = *(_QWORD *)(v10 + 2776);
            v102[8] = *(_QWORD *)(v10 + 2784);
            v67 = *(_BYTE **)(v10 + 4128);
            if ( !v67 || !*v67 )
            {
              v102[11] = 0LL;
              goto LABEL_44;
            }
            v37 = v67 + 8;
          }
          v102[11] = v37;
LABEL_44:
          v38 = v102[21];
          if ( *(_QWORD *)(v10 + 4304) )
            v38 = *(_QWORD *)(v10 + 4304);
          v39 = *(_QWORD *)(v10 + 3576);
          v102[21] = v38;
          v40 = v102[22];
          if ( v39 )
            v40 = v39;
          v41 = *(_QWORD *)(v10 + 3600);
          v102[22] = v40;
          v42 = v102[24];
          if ( v41 )
            v42 = v41;
          v102[24] = v42;
          if ( (unsigned __int8)v33 >= 4u )
          {
            if ( *(_QWORD *)(v10 + 4648) )
            {
              v102[26] = *(_QWORD *)(v10 + 4648);
              if ( (unsigned int)ndisIovGetNicSwitchList(v10, &v102[27]) )
              {
                FilterAdapterRegistry = -1073741823;
LABEL_132:
                v11 = a4;
                goto LABEL_121;
              }
            }
            LOBYTE(v102[25]) = *(_BYTE *)(*(_QWORD *)(v10 + 4072) + 556LL);
          }
          v43 = *(_QWORD *)(v10 + 4072);
          v102[23] = *(_QWORD *)(v10 + 3864);
          LOWORD(v102[12]) = *(_WORD *)(v43 + 1124);
          memmove((char *)&v102[12] + 2, (const void *)(v43 + 1126), LOWORD(v102[12]));
          *(_QWORD *)(v15 + 352) = v102[6];
          *(_QWORD *)(v15 + 360) = v102[7];
          *(_QWORD *)(v15 + 368) = v102[8];
          if ( LODWORD(v102[6]) == 1 )
          {
            v44 = ndisFilterIndicateReceiveNetBufferLists;
            v45 = ndisFilterSendNetBufferLists;
            v46 = ndisFilterCancelSendNetBufferLists;
          }
          else
          {
            ndisFilterXStateSetFlag(v15);
            v44 = ndisFakeFilterReceiveHandler;
            v45 = ndisFakeFilterSendHandler;
            v46 = ndisFakeMiniportCancelSendPackets;
          }
          *(_QWORD *)(v15 + 648) = v46;
          *(_QWORD *)(v15 + 632) = v45;
          *(_QWORD *)(v15 + 640) = v44;
          if ( (*(_DWORD *)(v10 + 568) & 0x80000001) == 0x80000001 )
            v47 = *(_DWORD *)(v10 + 464);
          else
            v47 = v102[9];
          *(_DWORD *)(v15 + 344) = v47;
          *(_DWORD *)(v15 + 348) = HIDWORD(v102[9]);
          FilterAdapterRegistry = ndisIfCreateFilterInterface((struct _NDIS_FILTER_BLOCK *)v15);
          if ( FilterAdapterRegistry )
            goto LABEL_132;
          if ( (byte_1C00A2083 & 1) != 0 )
            McTemplateK0juqjzzz(
              *(_QWORD *)(v15 + 32) + 4040LL,
              *(_QWORD *)(v15 + 40),
              (const GUID *)(v15 + 680),
              v15 + 680,
              *(_BYTE *)(v15 + 64),
              189,
              *(_QWORD *)(v15 + 32) + 4040LL,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v15 + 32) + 3888LL) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v15 + 40) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v15 + 48) + 8LL));
          if ( Microsoft_Windows_Networking_CorrelationEnabled )
            EtwEx_tidActivityInfoTransfer(
              v49,
              v48,
              (const struct _GUID *)(v15 + 680),
              (const struct _GUID *)(v10 + 4040),
              Arg1[0],
              Arg2,
              0x200000u);
          HIDWORD(v102[0]) = *(_DWORD *)(v15 + 696);
          v84 = 1;
          v102[1] = *(_QWORD *)(*(_QWORD *)(v15 + 704) + 1312LL);
          FilterAdapterRegistry = ndisFInvokeAttach(v15, (__int64)v102);
          if ( (unsigned __int8)byte_1C00A0258 >= 4u )
          {
            LODWORD(v81) = FilterAdapterRegistry;
            v80[0] = v12->DefaultFilterCharacteristics.MinorNdisVersion;
            LODWORD(Arg2) = v12->DefaultFilterCharacteristics.MajorNdisVersion;
            WPP_SF_qqZddZD(
              v12->DefaultFilterCharacteristics.MinorNdisVersion,
              v12->DefaultFilterCharacteristics.MajorNdisVersion,
              v10,
              v15,
              &v12->DefaultFilterCharacteristics.FriendlyName,
              Arg2,
              *(_QWORD *)v80,
              *(_QWORD *)(v10 + 3888),
              v81);
          }
          if ( FilterAdapterRegistry )
          {
            a4->BindState.AllowBindDespiteMandatory = v102[20] & 1;
            v72 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 144));
            *(_QWORD *)(v15 + 152) = KeGetCurrentThread();
            *(_BYTE *)(v15 + 56) = 0;
            v73 = *(_DWORD *)(v15 + 56);
            *(_DWORD *)(v15 + 160) = 3867860;
            if ( (v73 & 0x100) != 0 )
            {
              v73 &= ~0x100u;
              *(_DWORD *)(v15 + 56) = v73;
            }
            *(_QWORD *)(v15 + 152) = 0LL;
            *(_DWORD *)(v15 + 56) = v73 | 8;
            *(_DWORD *)(v15 + 160) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 144), v72);
            *(_BYTE *)(v15 + 64) = 0;
            if ( (byte_1C00A2083 & 1) != 0 )
              McTemplateK0juqjzzz(
                *(_QWORD *)(v15 + 48),
                *(_QWORD *)(v15 + 40),
                (const GUID *)(v15 + 680),
                v15 + 680,
                0,
                224,
                *(_QWORD *)(v15 + 32) + 4040LL,
                *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v15 + 32) + 3888LL) + 8LL),
                *(const wchar_t **)(*(_QWORD *)(v15 + 40) + 8LL),
                *(const wchar_t **)(*(_QWORD *)(v15 + 48) + 8LL));
            goto LABEL_132;
          }
          v50 = LODWORD(v102[9]);
          if ( *(_DWORD *)(v15 + 344) != LODWORD(v102[9]) && (*(_DWORD *)(v10 + 568) & 0x80000001) != 0x80000001 )
          {
            if ( (unsigned __int8)byte_1C00A025C >= 4u )
            {
              LODWORD(Arg2) = v102[9];
              Arg1[0] = *(_DWORD *)(v15 + 344);
              WPP_SF_qqDD(0x23u, &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids, v10, v15, *(_QWORD *)Arg1, Arg2);
              v50 = LODWORD(v102[9]);
            }
            if ( Microsoft_Windows_NDISEnableBits < 0 )
              McTemplateK0jqxjqxdd(
                *(_QWORD *)(v15 + 704),
                v50,
                (const GUID *)(v10 + 4040),
                v10 + 4040,
                *(_DWORD *)(v10 + 4088),
                *(_QWORD *)(v10 + 4056),
                v15 + 680,
                *(_DWORD *)(v15 + 696),
                *(_QWORD *)(*(_QWORD *)(v15 + 704) + 1312LL),
                *(_DWORD *)(v15 + 344),
                v50);
            v83 = 1;
          }
          v51 = *(_QWORD *)(v15 + 120);
          if ( v51 )
          {
            v74 = *(_QWORD *)(v15 + 112);
            if ( v74 )
              v75 = *(_DWORD *)(v74 + 696);
            else
              v75 = *(_DWORD *)(v10 + 4088);
            NdisIfDeleteIfStackEntry(*(_DWORD *)(v51 + 696), v75);
          }
          v52 = *(_QWORD *)(v15 + 112);
          if ( v52 )
            v53 = *(_DWORD *)(v52 + 696);
          else
            v53 = *(_DWORD *)(*(_QWORD *)(v15 + 32) + 4088LL);
          NdisIfAddIfStackEntry(*(_DWORD *)(v15 + 696), v53);
          v54 = *(_QWORD *)(v15 + 120);
          if ( v54 )
            NdisIfAddIfStackEntry(*(_DWORD *)(v54 + 696), *(_DWORD *)(v15 + 696));
          v55 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          ndisIfUpdateFilterIfStack(*(_QWORD *)(v15 + 32));
          KeReleaseSpinLock(&ndisIfListLock, v55);
          v56 = *(struct _NDIS_FILTER_BLOCK **)(v15 + 112);
          v86 = v56;
          if ( v56 )
          {
            v57 = KeAcquireSpinLockRaiseToDpc(&v56->Lock);
            v58 = v86;
            v56->LockThread = KeGetCurrentThread();
            v58->LockDbg = 3867942;
            *(_DWORD *)(v15 + 352) = v58->MediaConnectStateIndicateUp;
            *(_DWORD *)(v15 + 356) = v58->MediaDuplexStateIndicateUp;
            *(_QWORD *)(v15 + 360) = v58->XmitLinkSpeedIndicateUp;
            *(_QWORD *)(v15 + 368) = v58->RcvLinkSpeedIndicateUp;
            *(_DWORD *)(v15 + 376) = v58->PauseFunctionsIndicateUp;
            *(_DWORD *)(v15 + 380) = v58->AutoNegotiationFlagsIndicateUp;
            ndisOpenRef((PKSPIN_LOCK)(v15 + 320));
            v56->LockThread = 0LL;
            v58->LockDbg = 0;
            KeReleaseSpinLock(&v56->Lock, v57);
            v10 = (__int64)v87;
            v12 = v98;
          }
          else
          {
            v68 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 96));
            *(_QWORD *)(v10 + 520) = KeGetCurrentThread();
            v69 = *(_DWORD *)(v10 + 344);
            *(_DWORD *)(v10 + 1864) = 3867957;
            *(_DWORD *)(v15 + 352) = v69;
            *(_DWORD *)(v15 + 356) = *(_DWORD *)(v10 + 348);
            *(_QWORD *)(v15 + 360) = *(_QWORD *)(v10 + 2776);
            *(_QWORD *)(v15 + 368) = *(_QWORD *)(v10 + 2784);
            *(_DWORD *)(v15 + 376) = *(_DWORD *)(v10 + 812);
            *(_DWORD *)(v15 + 380) = *(_DWORD *)(v10 + 816);
            ndisOpenRef((PKSPIN_LOCK)(v15 + 320));
            *(_QWORD *)(v10 + 520) = 0LL;
            *(_DWORD *)(v10 + 1864) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), v68);
          }
          *(_DWORD *)(*(_QWORD *)(v15 + 704) + 1220LL) = *(_DWORD *)(v15 + 352);
          *(_DWORD *)(*(_QWORD *)(v15 + 704) + 1224LL) = *(_DWORD *)(v15 + 356);
          *(_QWORD *)(*(_QWORD *)(v15 + 704) + 1208LL) = *(_QWORD *)(v15 + 368);
          *(_QWORD *)(*(_QWORD *)(v15 + 704) + 1200LL) = *(_QWORD *)(v15 + 360);
          ndisIndicateInitialStateToFilter(v15);
          v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 144));
          *(_QWORD *)(v15 + 152) = KeGetCurrentThread();
          *(_BYTE *)(v15 + 56) = 0;
          v60 = *(_DWORD *)(v15 + 56) | 4;
          *(_DWORD *)(v15 + 160) = 3867981;
          *(_DWORD *)(v15 + 56) = v60;
          if ( v83 )
          {
            *(_DWORD *)(v15 + 56) = v60 | 0x8000;
            ++*(_BYTE *)(v10 + 2005);
            v76 = *(_QWORD *)(v15 + 704);
            *(_QWORD *)(v15 + 344) = v102[9];
            *(_DWORD *)(v76 + 564) = *(_DWORD *)(v15 + 344);
            *(_DWORD *)(*(_QWORD *)(v15 + 704) + 568LL) = *(_DWORD *)(v15 + 348);
          }
          *(_QWORD *)(v15 + 152) = 0LL;
          *(_DWORD *)(v15 + 160) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 144), v59);
          if ( v83 )
          {
            v77 = *(_DWORD *)(v15 + 344);
            *(_DWORD *)(v10 + 464) = v77;
            *(_DWORD *)(v10 + 1832) = *(_DWORD *)(v15 + 348);
            if ( !v77 )
            {
              if ( EthInitializeFilter(
                     *(_DWORD *)(v10 + 3068),
                     *(_QWORD *)(v10 + 4072) + 1126LL,
                     *(_QWORD *)(v10 + 400)) )
              {
                *(_QWORD *)(*(_QWORD *)(v10 + 400) + 296LL) = v10;
              }
            }
          }
          *(_BYTE *)(v15 + 64) = 2;
          if ( (byte_1C00A2083 & 1) != 0 )
            McTemplateK0juqjzzz(
              *(_QWORD *)(v15 + 32) + 4040LL,
              *(_QWORD *)(v15 + 40),
              (const GUID *)(v15 + 680),
              v15 + 680,
              2,
              139,
              *(_QWORD *)(v15 + 32) + 4040LL,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v15 + 32) + 3888LL) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v15 + 40) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v15 + 48) + 8LL));
          ndisPktMonFilterRegister(v15);
          ndisReferenceMiniport(v10);
          if ( *(_BYTE *)(v10 + 32) < 6u && !*(_BYTE *)(v10 + 2002) )
            *(_BYTE *)(v10 + 2002) = 1;
          ndisSetupWmiNode(
            v10,
            *(const void ***)(v15 + 48),
            *(unsigned __int16 *)(*(_QWORD *)(v10 + 3800) + 8LL)
          + 4
          + v12->DefaultFilterCharacteristics.UniqueName.Length,
            (__int128 *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL,
            &WnodeEventItem);
          v61 = WnodeEventItem;
          if ( WnodeEventItem )
          {
            v62 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
            memmove(
              v62,
              v12->DefaultFilterCharacteristics.UniqueName.Buffer,
              v12->DefaultFilterCharacteristics.UniqueName.Length);
            memmove(
              &v62[v12->DefaultFilterCharacteristics.UniqueName.Length + 2],
              *(const void **)(*(_QWORD *)(v10 + 3800) + 16LL),
              *(unsigned __int16 *)(*(_QWORD *)(v10 + 3800) + 8LL));
            v64 = IoWMIWriteEvent(v61);
            if ( v64 < 0 )
            {
              if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                WPP_SF_(0x24u, &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids);
              if ( (byte_1C00A2081 & 1) != 0 )
                McTemplateK0qqq(v63, &FilterArrivalIndicationFailed, (const GUID *)(v15 + 680), v64, 0x5C7u, 0);
              ExFreePoolWithTag(v61, 0);
            }
          }
          Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v10 + 5144));
          v11 = a4;
          if ( Ndis::BindState::SetPause(&a4->BindState, DatapathRunning, PauseReason_InitialPause)
            && (unsigned __int8)byte_1C00A026B >= 4u )
          {
            ndisGetBindLinkNameForTracing(a4, &v103);
            if ( (unsigned __int8)byte_1C00A026B >= 4u )
              WPP_SF_Zq(0x25u, &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids, v103.Buffer, *(_QWORD *)&v103.Length);
          }
          Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v10 + 5144), v65);
          if ( *(_BYTE *)(v10 + 32) < 6u && !*(_BYTE *)(v10 + 2002) )
            *(_BYTE *)(v10 + 2002) = 1;
LABEL_83:
          if ( ndisVerifierNdisDispatch
            && v15
            && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*(_QWORD *)(v15 + 16) + 16LL))
            && !*(_QWORD *)(v15 + 792)
            && ((int (__fastcall *)(_DRIVER_OBJECT *, __int64, void **))ndisVerifierNdisDispatch->NdisAllocateVerifierContext)(
                 v12->DriverObject,
                 v15,
                 &v12->FilterDriverContext) < 0
            && (unsigned __int8)byte_1C00A025C >= 2u )
          {
            WPP_SF_q(0x26u, &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids, v15);
          }
          goto LABEL_84;
        }
LABEL_35:
        WORD1(v102[0]) = 224;
        v33 = 4;
        goto LABEL_36;
      }
    }
    else
    {
      FilterAdapterRegistry = -1073676286;
    }
    v11 = a4;
    goto LABEL_121;
  }
  FilterAdapterRegistry = -1073741823;
LABEL_121:
  if ( *(_QWORD *)(v15 + 768) )
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v10 + 5144));
    Ndis::BindState::RemoveBindContext(&v11->BindState, (void *)v15);
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v10 + 5144), v70);
    *(_QWORD *)(v15 + 768) = 0LL;
  }
  ndisFilterAttachCleanUp((PVOID)v15, v10 & -(__int64)(v82 != 0), v84);
LABEL_84:
  ndisHandleFilterHandlersChange(v10);
  if ( v102[27] )
  {
    ExFreePoolWithTag((PVOID)v102[27], 0);
    v102[27] = 0LL;
  }
  if ( FilterAdapterRegistry
    && !v11->BindState.AllowBindDespiteMandatory
    && (v11->BindDriver._p->_t.FilterBindFlags & 1) == 0 )
  {
    ndisNotifyBindFailureOnUnboundProtocols(v10);
  }
  ndisDereferenceMiniport(v10, 0x27u);
  ndisDereferenceFilterDriver(v12);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    Arg1[0] = FilterAdapterRegistry;
    WPP_SF_qqd(0x27u, &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids, v12, v10, *(_QWORD *)Arg1);
  }
  return FilterAdapterRegistry;
}
