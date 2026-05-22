/*
 * XREFs of ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800E33DC
 * Callers:
 *     ?LockAndInvokeDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJPEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800E2B40 (-LockAndInvokeDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Intern.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??4?$ComPtr@UIHolographicDisplay@Holographic@Graphics@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180036520 (--4-$ComPtr@UIHolographicDisplay@Holographic@Graphics@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007C0B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?EnumerateDevices@SpatialInteractionDevices@@YAJU_GUID@@PEAV?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800D7F80 (-EnumerateDevices@SpatialInteractionDevices@@YAJU_GUID@@PEAV-$vector@VHString@Wrappers@WRL@Micro.c)
 *     ?_Tidy@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800D976C (-_Tidy@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@.c)
 *     ??0?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800E0578 (--0-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ??1OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800E0A98 (--1OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     _lambda_94bf11a16993f060fe03c20fc4fc2394_::operator() @ 0x1800E0F54 (_lambda_94bf11a16993f060fe03c20fc4fc2394_--operator().c)
 *     ?AddDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUIHolographicDisplay@Holographic@Graphics@4@@Z @ 0x1800E14A4 (-AddDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJ.c)
 *     ?EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800E21B4 (-EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800E4490 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?RemoveDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUIHolographicDisplay@Holographic@Graphics@4@@Z @ 0x1800E4688 (-RemoveDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?StartActivity@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXXZ @ 0x1800E4EC0 (-StartActivity@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QE.c)
 *     ??$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@CAJPEAPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@W4Behavior@012@@Z @ 0x18014BE04 (--$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@-$Singleton@VSpatia.c)
 *     ?CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x180154660 (-CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2,
        struct Windows::Graphics::Holographic::IHolographicDisplay *a3,
        char a4)
{
  int v6; // ebx
  int v7; // eax
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v8; // rdx
  __int64 v9; // rdx
  struct _RTL_CRITICAL_SECTION **v10; // r15
  struct _RTL_CRITICAL_SECTION **v11; // r14
  __int64 v12; // rbx
  int v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rbx
  int v20; // eax
  int v21; // eax
  HSTRING *i; // rsi
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  HSTRING v27; // rbx
  __int64 v28; // rcx
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v29; // rcx
  struct _RTL_CRITICAL_SECTION **v30; // rbx
  struct _RTL_CRITICAL_SECTION *v31; // rax
  struct _RTL_CRITICAL_SECTION *v32; // rsi
  __int64 v33; // r9
  int v34; // eax
  int v35; // [rsp+20h] [rbp-E0h] BYREF
  int v36; // [rsp+24h] [rbp-DCh] BYREF
  __int64 (__fastcall ***v37)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+30h] [rbp-D0h] BYREF
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v39; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING string; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v41; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  GUID InterfaceClassGuid; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v45; // [rsp+80h] [rbp-80h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h]
  __int128 v47; // [rsp+98h] [rbp-68h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-58h]
  __int128 v49; // [rsp+B8h] [rbp-48h]
  __int128 v50; // [rsp+C8h] [rbp-38h]
  struct _RTL_CRITICAL_SECTION *v51[3]; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD v52[4]; // [rsp+F0h] [rbp-10h] BYREF
  char v53; // [rsp+130h] [rbp+30h]
  __int128 v54; // [rsp+140h] [rbp+40h] BYREF
  int v55; // [rsp+150h] [rbp+50h]
  _QWORD v56[40]; // [rsp+160h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]
  char v58; // [rsp+308h] [rbp+208h] BYREF

  v58 = a4;
  v51[1] = (struct _RTL_CRITICAL_SECTION *)-2LL;
  v36 = 0;
  if ( !a3 )
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x286,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)v6;
  }
  v41 = 0LL;
  string = 0LL;
  LOWORD(v35) = 256;
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v56,
    (__int64)"OnHolographicDisplayChanged");
  v56[0] = &SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::StartActivity((SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged *)v56);
  *(_QWORD *)&v47 = (char *)&v35 + 1;
  *((_QWORD *)&v47 + 1) = this;
  *(_QWORD *)&v48 = &v41;
  *((_QWORD *)&v48 + 1) = v56;
  *(_QWORD *)&v49 = &v36;
  *((_QWORD *)&v49 + 1) = &string;
  *(_QWORD *)&v50 = &v58;
  *((_QWORD *)&v50 + 1) = &v35;
  v52[0] = v47;
  v52[1] = v48;
  v52[2] = v49;
  v52[3] = v50;
  v53 = 1;
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::IHolographicDisplay *, HSTRING *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &string);
  v6 = v7;
  v36 = v7;
  if ( v7 < 0 )
  {
    v9 = 694LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_47;
  }
  v7 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureResources(this, v8);
  v6 = v7;
  v36 = v7;
  if ( v7 < 0 )
  {
    v9 = 695LL;
    goto LABEL_12;
  }
  if ( v58 )
  {
    v7 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddDisplay(this, a3);
    v6 = v7;
    v36 = v7;
    if ( v7 < 0 )
    {
      v9 = 700LL;
      goto LABEL_12;
    }
  }
  else
  {
    v7 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveDisplay(this, a3);
    v6 = v7;
    v36 = v7;
    if ( v7 < 0 )
    {
      v9 = 704LL;
      goto LABEL_12;
    }
  }
  *(_QWORD *)&InterfaceClassGuid.Data1 = 0LL;
  *(_QWORD *)InterfaceClassGuid.Data4 = 0LL;
  *((_OWORD *)this + 10) = 0u;
  *((_DWORD *)this + 44) = 0;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 54);
  v10 = (struct _RTL_CRITICAL_SECTION **)((char *)this + 144);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 18);
  v11 = (struct _RTL_CRITICAL_SECTION **)((char *)this + 136);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 17);
  WindowsDeleteString(*((HSTRING *)this + 19));
  *((_QWORD *)this + 19) = 0LL;
  v37 = 0LL;
  v12 = *((_QWORD *)this + 51);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v37);
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v12 + 48LL))(
          v12,
          &v37);
  v6 = v13;
  v36 = v13;
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    v15 = 717LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)v14);
    goto LABEL_46;
  }
  if ( !v37 )
  {
    LOBYTE(v35) = 1;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v37);
    v16 = (_QWORD *)*((_QWORD *)this + 42);
    if ( (__int64)(*((_QWORD *)this + 43) - (_QWORD)v16) >> 3 )
    {
      v6 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD))*v16)(
             *v16,
             &GUID_9acea414_1d9f_4090_a388_90c06f6eae9c,
             &v37);
    }
    else
    {
      v37 = 0LL;
      v6 = -2147023728;
    }
    if ( v6 < 0 )
    {
      v14 = (unsigned int)v6;
      v15 = 721LL;
      goto LABEL_21;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this + 9);
  v38 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 360);
  Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::IHolographicDisplay>::operator=(
    (__int64 *)this + 53,
    (__int64 *)&v37);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v38);
  v43 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v43);
  v17 = (**v37)(v37, &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7, &v43);
  v6 = v17;
  v36 = v17;
  if ( v17 < 0 )
  {
    v18 = 730LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_45;
  }
  v19 = v43;
  WindowsDeleteString(v41);
  v41 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v19 + 64LL))(v19, &v41);
  v6 = v17;
  v36 = v17;
  if ( v17 < 0 )
  {
    v18 = 732LL;
    goto LABEL_26;
  }
  v42 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v42);
  v20 = Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::_Create<Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory>(&v42);
  v6 = v20;
  if ( v20 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90D,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v20);
  v36 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E1,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_44;
  }
  v45 = 0LL;
  v46 = 0LL;
  InterfaceClassGuid = GUID_DEVINTERFACE_SPATIAL_GRAPH;
  v21 = SpatialInteractionDevices::EnumerateDevices(&InterfaceClassGuid, (__int64)&v45);
  v6 = v21;
  v36 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E4,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_43;
  }
  for ( i = (HSTRING *)v45; ; ++i )
  {
    if ( i == *((HSTRING **)&v45 + 1) )
    {
      v36 = -2147023728;
      v6 = -2147023728;
      goto LABEL_43;
    }
    v39 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v39);
    v23 = CreateSpatialGraphDriverClient(*i, &v39);
    v24 = v23;
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        745LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v23);
    if ( v24 >= 0 )
      break;
LABEL_40:
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v39);
  }
  v25 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, HSTRING, __int128 *))(*(_QWORD *)v39 + 72LL))(
          v39,
          v41,
          &v54);
  if ( v25 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      748LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v25);
    goto LABEL_40;
  }
  v27 = *i;
  *i = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 19));
  *((_QWORD *)this + 19) = v27;
  v28 = v42;
  v42 = 0LL;
  v38 = *v11;
  *v11 = (struct _RTL_CRITICAL_SECTION *)v28;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v38);
  v29 = v39;
  v39 = 0LL;
  v38 = *v10;
  *v10 = (struct _RTL_CRITICAL_SECTION *)v29;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v38);
  *((_OWORD *)this + 10) = v54;
  *((_DWORD *)this + 44) = v55;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 11);
  v51[0] = (struct _RTL_CRITICAL_SECTION *)((char *)this + 440);
  v30 = (struct _RTL_CRITICAL_SECTION **)*((_QWORD *)this + 60);
  v31 = *v30;
  v38 = *v30;
  while ( v31 != (struct _RTL_CRITICAL_SECTION *)v30 )
  {
    v32 = v31 + 1;
    if ( (*(unsigned __int8 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)v31[1].DebugInfo + 72LL))(v31[1].DebugInfo) )
    {
      *(_QWORD *)&v47 = off_180176230;
      *((_QWORD *)&v47 + 1) = this;
      *((_QWORD *)&v50 + 1) = &v47;
      LOBYTE(v33) = 1;
      v34 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
              this,
              v32,
              &v47,
              v33);
      if ( v34 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          770LL,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
          (const char *)(unsigned int)v34);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v38);
    v31 = v38;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(v51);
  BYTE1(v35) = 0;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v39);
  v6 = 0;
LABEL_43:
  std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy((__int64)&v45);
LABEL_44:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v42);
LABEL_45:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v43);
LABEL_46:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v37);
LABEL_47:
  v53 = 0;
  lambda_94bf11a16993f060fe03c20fc4fc2394_::operator()((__int64)v52);
  SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::~OnHolographicDisplayChanged((SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged *)v56);
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v41);
  return (unsigned int)v6;
}
