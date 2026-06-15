/*
 * XREFs of ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x180045130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18002FE10 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@@Z @ 0x180045640 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@P.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800BE178 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800ED6A0 (--1-$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ @ 0x18011AD18 (-SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ.c)
 */

__int64 __fastcall CDeviceGraphManager::GetSaDevice(
        CDeviceGraphManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        struct ISaDeviceProxy **a7)
{
  struct _RTL_CRITICAL_SECTION *v7; // r14
  BOOL v11; // edi
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ebx
  struct IDeviceGraphObjectsStore *v15; // r14
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v18; // rcx
  int v19; // edi
  __int64 v20; // rcx
  signed __int64 v21; // rax
  signed __int32 v22; // ecx
  signed __int64 v23; // rtt
  __int64 v24; // r10
  void *v25; // rdx
  void *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // rax
  __int64 v33; // rdx
  struct IDeviceGraphObjectsStore *v34; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 (__fastcall ***v39)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-C0h] BYREF
  struct IDeviceGraphObjectsStore *v40; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-B0h] BYREF
  char *v42; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v43; // [rsp+68h] [rbp-A0h] BYREF
  WINBOOL fPending[2]; // [rsp+70h] [rbp-98h] BYREF
  LPVOID Context; // [rsp+78h] [rbp-90h] BYREF
  struct _RTL_CRITICAL_SECTION *v46; // [rsp+80h] [rbp-88h]
  _QWORD *v47; // [rsp+88h] [rbp-80h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp-78h] BYREF
  int v49[2]; // [rsp+98h] [rbp-70h]
  LPCRITICAL_SECTION v50[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 (__fastcall ***v51)(_QWORD, GUID *, __int64 *); // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v52[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-48h]
  unsigned __int16 *v54; // [rsp+C8h] [rbp-40h] BYREF
  int v55; // [rsp+D0h] [rbp-38h]
  int v56; // [rsp+D4h] [rbp-34h]
  void *v57; // [rsp+D8h] [rbp-30h]
  int v58; // [rsp+E0h] [rbp-28h]
  int v59; // [rsp+E4h] [rbp-24h]
  __int64 (__fastcall ****v60)(_QWORD, GUID *, __int64 *); // [rsp+E8h] [rbp-20h]
  __int64 v61; // [rsp+F0h] [rbp-18h]
  char **v62; // [rsp+F8h] [rbp-10h]
  __int64 v63; // [rsp+100h] [rbp-8h]
  void *v64; // [rsp+108h] [rbp+0h]
  int v65; // [rsp+110h] [rbp+8h]
  int v66; // [rsp+114h] [rbp+Ch]
  __int64 v67; // [rsp+118h] [rbp+10h]
  __int64 v68; // [rsp+120h] [rbp+18h]
  __int64 v69; // [rsp+128h] [rbp+20h]
  __int64 v70; // [rsp+130h] [rbp+28h]
  char *v71; // [rsp+138h] [rbp+30h]
  __int64 v72; // [rsp+140h] [rbp+38h]
  char *v73; // [rsp+148h] [rbp+40h]
  __int64 v74; // [rsp+150h] [rbp+48h]
  WINBOOL *v75; // [rsp+158h] [rbp+50h]
  __int64 v76; // [rsp+160h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  *(_QWORD *)v49 = a7;
  v46 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v11 = (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 168LL))(g_PolicyManager)
     && CEndpointCharacteristics::SharedAndExclusiveCanCoexist(a2);
  v12 = *(_QWORD *)a3;
  v40 = 0LL;
  v13 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, __int64, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
          g_DeviceGraphStore,
          v12,
          &v40);
  v14 = v13;
  if ( v13 < 0 )
  {
    v36 = 2453LL;
LABEL_46:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_37;
  }
  v13 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, struct SaDeviceParams *, _QWORD, BOOL, _QWORD))(*(_QWORD *)v40 + 56LL))(
          v40,
          a3,
          (unsigned int)a5,
          v11,
          *(_QWORD *)v49);
  v14 = v13;
  if ( v13 >= 0 )
  {
LABEL_36:
    v14 = 0;
    goto LABEL_37;
  }
  if ( v13 != -2005139430 )
  {
    v36 = 2458LL;
    goto LABEL_46;
  }
  (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)v40 + 72LL))(v40, v50);
  v15 = v40;
  v39 = 0LL;
  v16 = operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v43 = v16;
  v17 = v16;
  if ( v16 )
  {
    v18 = Microsoft::WRL::Details::ModuleBase::module_;
    v16[5] = 1LL;
    *v16 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `IInspectable'};
    v16[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
    v16[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
    v16[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
    if ( v18 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v18 + 8LL))(v18);
    *v17 = &CSaDeviceProxy::`vftable'{for `IInspectable'};
    v17[1] = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
    v47 = v17;
    v17[2] = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
    v17[3] = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
    v17[6] = 0LL;
    v17[7] = 0LL;
    v17[8] = 0LL;
    *((_BYTE *)v17 + 72) = 0;
    v17[10] = 0LL;
    v17[11] = 0LL;
    v17[12] = 0LL;
    v17[13] = 0LL;
    v17[14] = 0LL;
    v43 = 0LL;
    v19 = CSaDeviceProxy::RuntimeClassInitialize((CSaDeviceProxy *)v17, a3, a2, v15, a5, a4, a6);
    if ( v19 < 0 )
    {
      Microsoft::WRL::ComPtr<CSaDeviceProxy>::~ComPtr<CSaDeviceProxy>(&v47);
      Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v43);
    }
    else
    {
      v39 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(v17 + 1);
      (*(void (__fastcall **)(_QWORD *))(v17[1] + 8LL))(v17 + 1);
      if ( v17 )
      {
        v20 = v17[14];
        v47 = 0LL;
        (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v20 + 72LL))(v20, &lpCriticalSection);
        v21 = v17[5];
        v50[1] = (LPCRITICAL_SECTION)v21;
        while ( v21 >= 0 )
        {
          v22 = v21 - 1;
          v23 = v21;
          v21 = _InterlockedCompareExchange64(v17 + 5, v21 - 1, v21);
          if ( v23 == v21 )
            goto LABEL_14;
        }
        v22 = _InterlockedDecrement((volatile signed __int32 *)(2 * v21 + 16));
LABEL_14:
        if ( !v22 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*v17 + 48LL))(v17, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
        if ( lpCriticalSection )
        {
          LeaveCriticalSection(lpCriticalSection);
          lpCriticalSection = 0LL;
        }
      }
      v19 = 0;
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v43);
    v19 = -2147024882;
  }
  LODWORD(v42) = v19;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  v24 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v24 > 4u )
  {
    v25 = &unk_180162EC4;
    v26 = *(void **)a3;
    v51 = v39;
    v60 = &v51;
    v62 = &v42;
    LODWORD(v27) = 0;
    v61 = 8LL;
    v63 = 4LL;
    if ( v26 )
    {
      v25 = v26;
      v27 = -1LL;
      do
        ++v27;
      while ( *((_WORD *)v26 + v27) );
    }
    v64 = v25;
    v65 = 2 * v27 + 2;
    v28 = *((_QWORD *)a3 + 2);
    v66 = 0;
    v68 = 4LL;
    v70 = 2LL;
    v72 = 16LL;
    v67 = v28 + 4;
    v69 = v28 + 2;
    v71 = (char *)a3 + 48;
    v73 = (char *)a3 + 32;
    fPending[1] = *((_DWORD *)a3 + 2);
    v75 = &fPending[1];
    v74 = 8LL;
    v76 = 4LL;
    v52[1] = 4;
    v54 = *(unsigned __int16 **)(v24 + 8);
    v52[0] = 184549376;
    v53 = 0LL;
    v55 = *v54;
    v57 = &unk_180178630;
    v56 = 2;
    v29 = *(_QWORD *)(v24 + 32);
    v58 = 129;
    v59 = 1;
    LODWORD(v43) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(v29, v52, 0LL, 0LL, 10, &v54);
  }
  v14 = (unsigned int)v42;
  if ( (int)v42 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9B0,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v42);
  }
  else
  {
    v41 = 0LL;
    v30 = Microsoft::WRL::AsWeak<IStreamGroupProxy>(v39, &v41);
    v14 = v30;
    if ( v30 < 0 )
    {
      v37 = 2484LL;
    }
    else
    {
      v30 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, struct SaDeviceParams *, __int64 *))(*(_QWORD *)v40 + 64LL))(
              v40,
              a3,
              &v41);
      v14 = v30;
      if ( v30 >= 0 )
      {
        v31 = 0LL;
        v32 = v39;
        v39 = 0LL;
        **(_QWORD **)v49 = v32;
        v33 = v41;
        if ( v41 )
        {
          v41 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
          v31 = v39;
        }
        if ( v31 )
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v31)[2])(v31);
        if ( v50[0] )
          LeaveCriticalSection(v50[0]);
        v7 = v46;
        goto LABEL_36;
      }
      v37 = 2485LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v30);
    v38 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
  if ( v50[0] )
    LeaveCriticalSection(v50[0]);
  v7 = v46;
LABEL_37:
  v34 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)v34 + 16LL))(v34);
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return v14;
}
