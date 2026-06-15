/*
 * XREFs of ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x18003F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18003DF00 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@@Z @ 0x18003EF00 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@P.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063980 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800BA544 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E1FEC (--1-$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ @ 0x18010D0D4 (-SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ.c)
 */

__int64 __fastcall CDeviceGraphManager::GetSaDevice(
        CDeviceGraphManager *this,
        struct CEndpointCharacteristics *a2,
        IMalloc *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        struct ISaDeviceProxy **a7)
{
  BOOL v10; // edi
  IMalloc v11; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  struct IDeviceGraphObjectsStore *v15; // r15
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  int v18; // edi
  struct Microsoft::WRL::Details::ModuleBase *v19; // rcx
  signed __int64 v20; // rax
  unsigned int v21; // ecx
  signed __int64 v22; // rtt
  __int64 v23; // r10
  const WCHAR *lpVtbl; // rdx
  IMalloc v25; // rcx
  __int64 v26; // rax
  struct IMallocVtbl *v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // rcx
  struct ISaDeviceProxy *v33; // rax
  __int64 v34; // rdx
  struct IDeviceGraphObjectsStore *v35; // rcx
  int v37; // [rsp+28h] [rbp-E0h]
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-C0h] BYREF
  struct IDeviceGraphObjectsStore *v39; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+58h] [rbp-B0h] BYREF
  int v41; // [rsp+60h] [rbp-A8h] BYREF
  WINBOOL v42; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v43; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v44; // [rsp+70h] [rbp-98h] BYREF
  LPVOID Context; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v46; // [rsp+80h] [rbp-88h] BYREF
  LPCRITICAL_SECTION v47; // [rsp+88h] [rbp-80h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp-78h] BYREF
  __int64 (__fastcall ***v49)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp-70h] BYREF
  struct ISaDeviceProxy **v50; // [rsp+A0h] [rbp-68h]
  LPCRITICAL_SECTION v51; // [rsp+A8h] [rbp-60h]
  _DWORD v52[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-50h]
  unsigned __int16 *v54; // [rsp+C8h] [rbp-40h] BYREF
  int v55; // [rsp+D0h] [rbp-38h]
  int v56; // [rsp+D4h] [rbp-34h]
  void *v57; // [rsp+D8h] [rbp-30h]
  int v58; // [rsp+E0h] [rbp-28h]
  int v59; // [rsp+E4h] [rbp-24h]
  __int64 (__fastcall ****v60)(_QWORD, GUID *, __int64 *); // [rsp+E8h] [rbp-20h]
  __int64 v61; // [rsp+F0h] [rbp-18h]
  int *v62; // [rsp+F8h] [rbp-10h]
  __int64 v63; // [rsp+100h] [rbp-8h]
  const WCHAR *v64; // [rsp+108h] [rbp+0h]
  int v65; // [rsp+110h] [rbp+8h]
  int v66; // [rsp+114h] [rbp+Ch]
  char *v67; // [rsp+118h] [rbp+10h]
  __int64 v68; // [rsp+120h] [rbp+18h]
  char *v69; // [rsp+128h] [rbp+20h]
  __int64 v70; // [rsp+130h] [rbp+28h]
  IMalloc *v71; // [rsp+138h] [rbp+30h]
  __int64 v72; // [rsp+140h] [rbp+38h]
  IMalloc *v73; // [rsp+148h] [rbp+40h]
  __int64 v74; // [rsp+150h] [rbp+48h]
  __int64 *v75; // [rsp+158h] [rbp+50h]
  __int64 v76; // [rsp+160h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v50 = a7;
  v51 = (LPCRITICAL_SECTION)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v10 = (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 168LL))(g_PolicyManager)
     && CEndpointCharacteristics::SharedAndExclusiveCanCoexist(a2);
  v11.lpVtbl = a3->lpVtbl;
  v39 = 0LL;
  v12 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, IMalloc, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
          g_DeviceGraphStore,
          v11,
          &v39);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 2051LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v12,
      v37);
    goto LABEL_56;
  }
  v37 = (int)a7;
  v12 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, IMalloc *, _QWORD, BOOL))(*(_QWORD *)v39 + 56LL))(
          v39,
          a3,
          (unsigned int)a5,
          v10);
  v13 = v12;
  if ( v12 >= 0 )
    goto LABEL_55;
  if ( v12 != -2005139430 )
  {
    v14 = 2056LL;
    goto LABEL_10;
  }
  (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)v39 + 72LL))(v39, &v47);
  v15 = v39;
  v38 = 0LL;
  v16 = operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v44 = v16;
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
    v46 = v17;
    v17[2] = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
    v17[3] = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
    v17[6] = 0LL;
    v17[7] = 0LL;
    v17[8] = 0LL;
    v17[10] = 0LL;
    v17[13] = 0LL;
    v17[14] = 0LL;
    v44 = 0LL;
    v18 = CSaDeviceProxy::RuntimeClassInitialize((CSaDeviceProxy *)v17, a3, a2, v15, a5, a4, a6);
    if ( v18 >= 0 )
    {
      v38 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(v17 + 1);
      (*(void (__fastcall **)(_QWORD *))(v17[1] + 8LL))(v17 + 1);
      if ( v17 )
      {
        (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(*(_QWORD *)v17[14] + 72LL))(v17[14], &lpCriticalSection);
        v20 = v17[5];
        while ( v20 >= 0 )
        {
          if ( (_DWORD)v20 == 0x7FFFFFFF )
            goto LABEL_28;
          v21 = v20 - 1;
          v22 = v20;
          v20 = _InterlockedCompareExchange64(v17 + 5, v20 - 1, v20);
          if ( v22 == v20 )
            goto LABEL_25;
        }
        v21 = ATL::SafeDecrementReferenceMultiThread((int *)(2 * v20 + 16));
LABEL_25:
        if ( !v21 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*v46 + 48LL))(v46, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
LABEL_28:
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
      }
      v18 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<CSaDeviceProxy>::~ComPtr<CSaDeviceProxy>(&v46);
      Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v44);
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v44);
    v18 = -2147024882;
  }
  v41 = v18;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v42, &Context) && v42 )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v23 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v23 > 4u )
  {
    lpVtbl = &word_18015F720;
    v25.lpVtbl = a3->lpVtbl;
    v49 = v38;
    v60 = &v49;
    v62 = &v41;
    LODWORD(v26) = 0;
    v61 = 8LL;
    v63 = 4LL;
    if ( v25.lpVtbl )
    {
      lpVtbl = (const WCHAR *)v25.lpVtbl;
      v26 = -1LL;
      do
        ++v26;
      while ( *((_WORD *)&v25.lpVtbl->QueryInterface + v26) );
    }
    v27 = a3[2].lpVtbl;
    v65 = 2 * v26 + 2;
    v64 = lpVtbl;
    v66 = 0;
    v68 = 4LL;
    v67 = (char *)&v27->QueryInterface + 4;
    v69 = (char *)&v27->QueryInterface + 2;
    v71 = a3 + 6;
    v73 = a3 + 4;
    LODWORD(v43) = a3[1].lpVtbl;
    v75 = &v43;
    v70 = 2LL;
    v72 = 16LL;
    v74 = 8LL;
    v76 = 4LL;
    v52[1] = 4;
    v54 = *(unsigned __int16 **)(v23 + 8);
    v52[0] = ((unsigned int)&unk_1801735DB - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v28 = *(_QWORD *)(v23 + 32);
    v53 = 0LL;
    v55 = *v54;
    v57 = &unk_1801735E6;
    v56 = 2;
    v58 = 129;
    v59 = 1;
    EtwEventWriteTransfer(v28, v52, 0LL, 0LL, 10, &v54);
  }
  v13 = v41;
  if ( v41 >= 0 )
  {
    v40 = 0LL;
    v29 = Microsoft::WRL::AsWeak<IStreamGroupProxy>(v38, &v40);
    v13 = v29;
    if ( v29 < 0 )
    {
      v30 = 2082LL;
      goto LABEL_45;
    }
    v29 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, IMalloc *, __int64 *))(*(_QWORD *)v39 + 64LL))(
            v39,
            a3,
            &v40);
    v13 = v29;
    if ( v29 < 0 )
    {
      v30 = 2083LL;
LABEL_45:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v30,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v29,
        v37);
      v31 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      goto LABEL_47;
    }
    v32 = 0LL;
    v33 = (struct ISaDeviceProxy *)v38;
    v38 = 0LL;
    *v50 = v33;
    v34 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      v32 = v38;
    }
    if ( v32 )
    {
      v38 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v32)[2])(v32);
    }
    if ( v47 )
      LeaveCriticalSection(v47);
LABEL_55:
    v13 = 0;
    goto LABEL_56;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x81E,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v41,
    v37);
LABEL_47:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v38);
  if ( v47 )
    LeaveCriticalSection(v47);
LABEL_56:
  v35 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)v35 + 16LL))(v35);
  }
  if ( v51 )
    LeaveCriticalSection(v51);
  return v13;
}
