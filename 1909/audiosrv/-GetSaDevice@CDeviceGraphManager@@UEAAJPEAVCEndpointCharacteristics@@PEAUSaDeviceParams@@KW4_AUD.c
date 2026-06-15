/*
 * XREFs of ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x180039810
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180032CA0 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@@Z @ 0x180039EB0 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@P.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180067C24 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800BDCA8 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800ED220 (--1-$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ @ 0x18011A818 (-SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ.c)
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
  BOOL v10; // edi
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  struct IDeviceGraphObjectsStore *v15; // r15
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  int v18; // edi
  struct Microsoft::WRL::Details::ModuleBase *v19; // rcx
  __int64 v20; // rcx
  signed __int64 v21; // rax
  unsigned int v22; // ecx
  signed __int64 v23; // rtt
  __int64 v24; // r10
  void *v25; // rdx
  void *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // rcx
  struct ISaDeviceProxy *v34; // rax
  __int64 v35; // rdx
  struct IDeviceGraphObjectsStore *v36; // rcx
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-C0h] BYREF
  struct IDeviceGraphObjectsStore *v39; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+58h] [rbp-B0h] BYREF
  char *v41; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v42; // [rsp+68h] [rbp-A0h] BYREF
  WINBOOL fPending[2]; // [rsp+70h] [rbp-98h] BYREF
  LPVOID Context; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v45; // [rsp+80h] [rbp-88h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp-80h] BYREF
  LPCRITICAL_SECTION v47[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 (__fastcall ***v48)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp-68h] BYREF
  struct ISaDeviceProxy **v49; // [rsp+A8h] [rbp-60h]
  LPCRITICAL_SECTION v50; // [rsp+B0h] [rbp-58h]
  _DWORD v51[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-48h]
  unsigned __int16 *v53; // [rsp+C8h] [rbp-40h] BYREF
  int v54; // [rsp+D0h] [rbp-38h]
  int v55; // [rsp+D4h] [rbp-34h]
  void *v56; // [rsp+D8h] [rbp-30h]
  int v57; // [rsp+E0h] [rbp-28h]
  int v58; // [rsp+E4h] [rbp-24h]
  __int64 (__fastcall ****v59)(_QWORD, GUID *, __int64 *); // [rsp+E8h] [rbp-20h]
  __int64 v60; // [rsp+F0h] [rbp-18h]
  char **v61; // [rsp+F8h] [rbp-10h]
  __int64 v62; // [rsp+100h] [rbp-8h]
  void *v63; // [rsp+108h] [rbp+0h]
  int v64; // [rsp+110h] [rbp+8h]
  int v65; // [rsp+114h] [rbp+Ch]
  __int64 v66; // [rsp+118h] [rbp+10h]
  __int64 v67; // [rsp+120h] [rbp+18h]
  __int64 v68; // [rsp+128h] [rbp+20h]
  __int64 v69; // [rsp+130h] [rbp+28h]
  char *v70; // [rsp+138h] [rbp+30h]
  __int64 v71; // [rsp+140h] [rbp+38h]
  char *v72; // [rsp+148h] [rbp+40h]
  __int64 v73; // [rsp+150h] [rbp+48h]
  WINBOOL *v74; // [rsp+158h] [rbp+50h]
  __int64 v75; // [rsp+160h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v49 = a7;
  v50 = (LPCRITICAL_SECTION)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v10 = (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 168LL))(g_PolicyManager)
     && CEndpointCharacteristics::SharedAndExclusiveCanCoexist(a2);
  v11 = *(_QWORD *)a3;
  v39 = 0LL;
  v12 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, __int64, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
          g_DeviceGraphStore,
          v11,
          &v39);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 2453LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_56;
  }
  v12 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, struct SaDeviceParams *, _QWORD, BOOL, struct ISaDeviceProxy **))(*(_QWORD *)v39 + 56LL))(
          v39,
          a3,
          (unsigned int)a5,
          v10,
          a7);
  v13 = v12;
  if ( v12 >= 0 )
    goto LABEL_55;
  if ( v12 != -2005139430 )
  {
    v14 = 2458LL;
    goto LABEL_10;
  }
  (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)v39 + 72LL))(v39, v47);
  v15 = v39;
  v38 = 0LL;
  v16 = operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v42 = v16;
  v17 = v16;
  if ( v16 )
  {
    v19 = Microsoft::WRL::Details::ModuleBase::module_;
    v16[5] = 1LL;
    *v16 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `IInspectable'};
    v16[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
    v16[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
    v16[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
    if ( v19 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v19 + 8LL))(v19);
    *v17 = &CSaDeviceProxy::`vftable'{for `IInspectable'};
    v17[1] = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
    v45 = v17;
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
    v42 = 0LL;
    v18 = CSaDeviceProxy::RuntimeClassInitialize((CSaDeviceProxy *)v17, a3, a2, v15, a5, a4, a6);
    if ( v18 >= 0 )
    {
      v38 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(v17 + 1);
      (*(void (__fastcall **)(_QWORD *))(v17[1] + 8LL))(v17 + 1);
      if ( v17 )
      {
        v20 = v17[14];
        v45 = 0LL;
        (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v20 + 72LL))(v20, &lpCriticalSection);
        v21 = v17[5];
        v47[1] = (LPCRITICAL_SECTION)v21;
        while ( v21 >= 0 )
        {
          if ( (_DWORD)v21 == 0x7FFFFFFF )
            goto LABEL_28;
          v22 = v21 - 1;
          v23 = v21;
          v21 = _InterlockedCompareExchange64(v17 + 5, v21 - 1, v21);
          if ( v23 == v21 )
            goto LABEL_25;
        }
        v22 = ATL::SafeDecrementReferenceMultiThread((int *)(2 * v21 + 16));
LABEL_25:
        if ( !v22 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*v17 + 48LL))(v17, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
LABEL_28:
        if ( lpCriticalSection )
        {
          LeaveCriticalSection(lpCriticalSection);
          lpCriticalSection = 0LL;
        }
      }
      v18 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<CSaDeviceProxy>::~ComPtr<CSaDeviceProxy>(&v45);
      Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v42);
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v42);
    v18 = -2147024882;
  }
  LODWORD(v41) = v18;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  v24 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v24 > 4u )
  {
    v25 = &unk_180161DC4;
    v26 = *(void **)a3;
    v48 = v38;
    v59 = &v48;
    v61 = &v41;
    LODWORD(v27) = 0;
    v60 = 8LL;
    v62 = 4LL;
    if ( v26 )
    {
      v25 = v26;
      v27 = -1LL;
      do
        ++v27;
      while ( *((_WORD *)v26 + v27) );
    }
    v28 = *((_QWORD *)a3 + 2);
    v64 = 2 * v27 + 2;
    v63 = v25;
    v65 = 0;
    v67 = 4LL;
    v66 = v28 + 4;
    v68 = v28 + 2;
    v70 = (char *)a3 + 48;
    v72 = (char *)a3 + 32;
    fPending[1] = *((_DWORD *)a3 + 2);
    v74 = &fPending[1];
    v69 = 2LL;
    v71 = 16LL;
    v73 = 8LL;
    v75 = 4LL;
    v51[1] = 4;
    v53 = *(unsigned __int16 **)(v24 + 8);
    v51[0] = 184549376;
    v52 = 0LL;
    v54 = *v53;
    v56 = &unk_180177610;
    v55 = 2;
    v29 = *(_QWORD *)(v24 + 32);
    v57 = 129;
    v58 = 1;
    LODWORD(v42) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(v29, v51, 0LL, 0LL, 10, &v53);
  }
  v13 = (unsigned int)v41;
  if ( (int)v41 >= 0 )
  {
    v40 = 0LL;
    v30 = Microsoft::WRL::AsWeak<IStreamGroupProxy>(v38, &v40);
    v13 = v30;
    if ( v30 < 0 )
    {
      v31 = 2484LL;
      goto LABEL_45;
    }
    v30 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, struct SaDeviceParams *, __int64 *))(*(_QWORD *)v39 + 64LL))(
            v39,
            a3,
            &v40);
    v13 = v30;
    if ( v30 < 0 )
    {
      v31 = 2485LL;
LABEL_45:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v31,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v30);
      v32 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      goto LABEL_47;
    }
    v33 = 0LL;
    v34 = (struct ISaDeviceProxy *)v38;
    v38 = 0LL;
    *v49 = v34;
    v35 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      v33 = v38;
    }
    if ( v33 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v33)[2])(v33);
    if ( v47[0] )
      LeaveCriticalSection(v47[0]);
LABEL_55:
    v13 = 0;
    goto LABEL_56;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9B0,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v41);
LABEL_47:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
  if ( v47[0] )
    LeaveCriticalSection(v47[0]);
LABEL_56:
  v36 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)v36 + 16LL))(v36);
  }
  if ( v50 )
    LeaveCriticalSection(v50);
  return v13;
}
