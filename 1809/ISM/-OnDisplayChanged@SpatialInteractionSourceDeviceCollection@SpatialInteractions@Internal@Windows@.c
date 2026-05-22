/*
 * XREFs of ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800B0708
 * Callers:
 *     ?Invoke@DisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUIHolographicDisplayWatcher@4Holographic@Graphics@5@PEAUIHolographicDisplay@785@@Z @ 0x1800AE9A0 (-Invoke@DisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXXZ @ 0x1800AB554 (-StartActivity@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QE.c)
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800ADF9C (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorT.c)
 *     ?EnumerateDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@CAJU_GUID@@PEAV?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800AE6AC (-EnumerateDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800AFC34 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     _lambda_df3ea2b2c6b3ab40825ce20637938084_::operator() @ 0x1800B0F3C (_lambda_df3ea2b2c6b3ab40825ce20637938084_--operator().c)
 *     ?AddDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUIHolographicDisplay@Holographic@Graphics@4@@Z @ 0x1800B1744 (-AddDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJ.c)
 *     ?RemoveDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUIHolographicDisplay@Holographic@Graphics@4@@Z @ 0x1800B1820 (-RemoveDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800B21C8 (-EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B3D10 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgRefl.c)
 *     ?_Tidy@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800B5588 (-_Tidy@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@.c)
 *     ?CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x1801181F0 (-CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@.c)
 *     ??$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@CAJPEAPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@W4Behavior@012@@Z @ 0x18011CB50 (--$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@-$Singleton@VSpatia.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rdx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // rbx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rbx
  int v23; // eax
  int v24; // eax
  HSTRING *i; // rdi
  int v26; // eax
  int v27; // ebx
  int v28; // eax
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v29; // rcx
  HSTRING v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v33; // rax
  __int64 v34; // rcx
  __int64 *v35; // rdi
  __int64 *v36; // rbx
  int v37; // eax
  __int64 **v38; // rax
  __int64 *k; // rcx
  __int64 *j; // rax
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 (__fastcall ***v44)(_QWORD, GUID *, _QWORD *); // rcx
  int v46[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v47)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D8h] BYREF
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v48; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+40h] [rbp-C8h] BYREF
  HSTRING v50; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD InterfaceClassGuid[5]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v54; // [rsp+88h] [rbp-80h] BYREF
  __int64 v55; // [rsp+98h] [rbp-70h]
  __int128 v56; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v57; // [rsp+B0h] [rbp-58h]
  __int128 v58; // [rsp+C0h] [rbp-48h]
  __int128 v59; // [rsp+D0h] [rbp-38h]
  __int64 v60; // [rsp+E0h] [rbp-28h]
  char *v61; // [rsp+E8h] [rbp-20h]
  _OWORD v62[4]; // [rsp+F8h] [rbp-10h] BYREF
  char v63; // [rsp+138h] [rbp+30h]
  __int128 v64; // [rsp+148h] [rbp+40h] BYREF
  int v65; // [rsp+158h] [rbp+50h]
  _QWORD v66[4]; // [rsp+168h] [rbp+60h] BYREF
  int v67; // [rsp+188h] [rbp+80h]
  int *v68; // [rsp+190h] [rbp+88h]
  int *v69; // [rsp+198h] [rbp+90h]
  int v70; // [rsp+1A0h] [rbp+98h] BYREF
  char v71; // [rsp+1A4h] [rbp+9Ch]
  int v72; // [rsp+1C8h] [rbp+C0h] BYREF
  const char *v73; // [rsp+1D0h] [rbp+C8h]
  __int64 v74; // [rsp+1D8h] [rbp+D0h]
  char v75; // [rsp+1E0h] [rbp+D8h]
  __int64 v76; // [rsp+1E8h] [rbp+E0h]
  char v77[144]; // [rsp+1F0h] [rbp+E8h] BYREF
  __int64 v78; // [rsp+280h] [rbp+178h]
  __int64 v79; // [rsp+288h] [rbp+180h]
  __int64 v80; // [rsp+290h] [rbp+188h]
  __int64 v81; // [rsp+298h] [rbp+190h]
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]
  char v83; // [rsp+310h] [rbp+208h] BYREF

  v83 = a4;
  v60 = -2LL;
  v46[1] = 0;
  if ( !a3 )
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EB,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)v6;
  }
  v50 = 0LL;
  string = 0LL;
  LOWORD(v46[0]) = 256;
  v66[1] = 0LL;
  v66[2] = v66;
  v66[3] = 0LL;
  v67 = 0;
  v68 = &v72;
  v69 = &v70;
  v70 = 0;
  v71 = 0;
  v75 = 0;
  v72 = 0;
  v73 = "OnHolographicDisplayChanged";
  v74 = 0LL;
  v76 = 1LL;
  v78 = 0LL;
  memset_0(v77, 0, sizeof(v77));
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v66[0] = &SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::StartActivity((SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged *)v66);
  *(_QWORD *)&v56 = (char *)v46 + 1;
  *((_QWORD *)&v56 + 1) = this;
  *(_QWORD *)&v57 = &v50;
  *((_QWORD *)&v57 + 1) = v66;
  *(_QWORD *)&v58 = &v46[1];
  *((_QWORD *)&v58 + 1) = &string;
  *(_QWORD *)&v59 = &v83;
  *((_QWORD *)&v59 + 1) = v46;
  v62[0] = v56;
  v62[1] = v57;
  v62[2] = v58;
  v62[3] = v59;
  v63 = 1;
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::IHolographicDisplay *, HSTRING *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &string);
  v6 = v7;
  v46[1] = v7;
  if ( v7 < 0 )
  {
    v9 = 783LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_89;
  }
  v7 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureResources(this, v8);
  v6 = v7;
  v46[1] = v7;
  if ( v7 < 0 )
  {
    v9 = 784LL;
    goto LABEL_12;
  }
  if ( v83 )
  {
    v7 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddDisplay(this, a3);
    v6 = v7;
    v46[1] = v7;
    if ( v7 < 0 )
    {
      v9 = 790LL;
      goto LABEL_12;
    }
  }
  else
  {
    v7 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveDisplay(this, a3);
    v6 = v7;
    v46[1] = v7;
    if ( v7 < 0 )
    {
      v9 = 794LL;
      goto LABEL_12;
    }
  }
  InterfaceClassGuid[1] = 0LL;
  InterfaceClassGuid[2] = 0LL;
  *((_OWORD *)this + 10) = 0u;
  *((_DWORD *)this + 44) = 0;
  v10 = *((_QWORD *)this + 54);
  if ( v10 )
  {
    *((_QWORD *)this + 54) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 18);
  if ( v11 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 17);
  if ( v12 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  WindowsDeleteString(*((HSTRING *)this + 19));
  *((_QWORD *)this + 19) = 0LL;
  v47 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)this + 51)
                                                                                                + 48LL))(
          *((_QWORD *)this + 51),
          &v47);
  v6 = v13;
  v46[1] = v13;
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    v15 = 807LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)v14);
    goto LABEL_87;
  }
  if ( !v47 )
  {
    LOBYTE(v46[0]) = 1;
    v16 = (_QWORD *)*((_QWORD *)this + 42);
    if ( (__int64)(*((_QWORD *)this + 43) - (_QWORD)v16) >> 3 )
    {
      v6 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*v16)(
             *v16,
             &GUID_9acea414_1d9f_4090_a388_90c06f6eae9c,
             &v47);
    }
    else
    {
      v47 = 0LL;
      v6 = -2147023728;
    }
    if ( v6 < 0 )
    {
      v14 = (unsigned int)v6;
      v15 = 811LL;
      goto LABEL_27;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this + 9);
  v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 53);
  v18 = v47;
  if ( v17 != v47 )
  {
    v19 = v47;
    if ( v47 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v47)[1])(v47);
      v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 53);
      v18 = v47;
    }
    *((_QWORD *)this + 53) = v19;
    if ( v17 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v17)[2])(v17);
      v18 = v47;
    }
  }
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-360LL )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 9);
    v18 = v47;
  }
  v52 = 0LL;
  v20 = (**v18)(v18, &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7, &v52);
  v6 = v20;
  v46[1] = v20;
  if ( v20 < 0 )
  {
    v21 = 820LL;
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_85;
  }
  v22 = v52;
  WindowsDeleteString(v50);
  v50 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v22 + 64LL))(v22, &v50);
  v6 = v20;
  v46[1] = v20;
  if ( v20 < 0 )
  {
    v21 = 822LL;
    goto LABEL_39;
  }
  v51 = 0LL;
  v23 = Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::_Create<Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory>(&v51);
  v6 = v23;
  if ( v23 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8DC,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v23);
  v46[1] = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33B,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_83;
  }
  v54 = 0LL;
  v55 = 0LL;
  *(GUID *)&InterfaceClassGuid[1] = GUID_DEVINTERFACE_SPATIAL_GRAPH;
  v24 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnumerateDevices(
          (LPGUID)&InterfaceClassGuid[1],
          (__int64)&v54);
  v6 = v24;
  v46[1] = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33E,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_82;
  }
  for ( i = (HSTRING *)v54; ; ++i )
  {
    if ( i == *((HSTRING **)&v54 + 1) )
    {
      v46[1] = -2147023728;
      v6 = -2147023728;
      goto LABEL_82;
    }
    v48 = 0LL;
    v26 = CreateSpatialGraphDriverClient(*i, &v48);
    v27 = v26;
    if ( v26 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x343,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v26);
    if ( v27 >= 0 )
      break;
LABEL_54:
    v29 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  v28 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, HSTRING, __int128 *))(*(_QWORD *)v48 + 64LL))(
          v48,
          v50,
          &v64);
  if ( v28 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x346,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v28);
    goto LABEL_54;
  }
  v30 = *i;
  *i = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 19));
  *((_QWORD *)this + 19) = v30;
  v31 = v51;
  v51 = 0LL;
  v32 = *((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = v31;
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  v33 = v48;
  v48 = 0LL;
  v34 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = v33;
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  *((_OWORD *)this + 10) = v64;
  *((_DWORD *)this + 44) = v65;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 11);
  v61 = (char *)this + 440;
  v35 = (__int64 *)*((_QWORD *)this + 60);
  v36 = (__int64 *)*v35;
  while ( v36 != v35 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v36[5] + 72LL))(v36[5]) )
    {
      *(_QWORD *)&v56 = off_18013E498;
      *((_QWORD *)&v56 + 1) = this;
      *((_QWORD *)&v59 + 1) = &v56;
      v37 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
              (__int64)this,
              (__int64)(v36 + 5),
              (__int64)&v56,
              1);
      if ( v37 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35C,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
          (const char *)(unsigned int)v37);
    }
    if ( !*((_BYTE *)v36 + 25) )
    {
      v38 = (__int64 **)v36[2];
      if ( *((_BYTE *)v38 + 25) )
      {
        for ( j = (__int64 *)v36[1]; !*((_BYTE *)j + 25) && v36 == (__int64 *)j[2]; j = (__int64 *)j[1] )
          v36 = j;
        v36 = j;
      }
      else
      {
        v36 = (__int64 *)v36[2];
        for ( k = *v38; !*((_BYTE *)k + 25); k = (__int64 *)*k )
          v36 = k;
      }
    }
  }
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-440LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 11);
  BYTE1(v46[0]) = 0;
  v41 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *))(*(_QWORD *)v41 + 16LL))(v41);
  }
  v6 = 0;
LABEL_82:
  std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(&v54);
LABEL_83:
  v42 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
LABEL_85:
  v43 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
LABEL_87:
  v44 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v44)[2])(v44);
  }
LABEL_89:
  v63 = 0;
  lambda_df3ea2b2c6b3ab40825ce20637938084_::operator()(v62);
  v66[0] = &SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v66);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v66);
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v50);
  return (unsigned int)v6;
}
