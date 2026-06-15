/*
 * XREFs of ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180045B00
 * Callers:
 *     <none>
 * Callees:
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18002FE10 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x180046170 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800BE178 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x1800ECC5C (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@.c)
 *     ??1?$ComPtr@VCSharedStreamGroupProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800ED67C (--1-$ComPtr@VCSharedStreamGroupProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CDeviceGraphManager::GetStreamGroup(
        CDeviceGraphManager *this,
        struct IDeviceGraphObjectsStore *a2,
        struct StreamGroupParams *a3,
        unsigned int a4,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a5,
        struct IStreamGroupProxy **a6)
{
  struct IStreamGroupProxy **v6; // rbx
  struct StreamGroupParams *v7; // rsi
  void (__fastcall *v8)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *); // rax
  struct AUDIO_DEVICE_MODE_DESCRIPTOR *v9; // rdi
  _BYTE *v12; // r13
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int128 v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v26; // rcx
  int v27; // r14d
  signed __int64 v28; // rax
  signed __int32 v29; // ecx
  signed __int64 v30; // rtt
  __int64 v31; // r10
  void *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  struct IStreamGroupProxy *v39; // rax
  __int64 (__fastcall ***v40)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v42; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v43)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v46; // [rsp+58h] [rbp-B0h] BYREF
  struct StreamGroupParams *v47; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v49; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v50[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 (__fastcall ***v51)(_QWORD, GUID *, __int64 *); // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v52; // [rsp+90h] [rbp-78h]
  char *v53; // [rsp+98h] [rbp-70h]
  char *v54; // [rsp+A0h] [rbp-68h]
  WINBOOL *v55; // [rsp+A8h] [rbp-60h]
  char *v56; // [rsp+B0h] [rbp-58h]
  struct IStreamGroupProxy **v57; // [rsp+B8h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD v59[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-38h]
  unsigned __int16 *v61; // [rsp+D8h] [rbp-30h] BYREF
  int v62; // [rsp+E0h] [rbp-28h]
  int v63; // [rsp+E4h] [rbp-24h]
  void *v64; // [rsp+E8h] [rbp-20h]
  int v65; // [rsp+F0h] [rbp-18h]
  int v66; // [rsp+F4h] [rbp-14h]
  __int64 (__fastcall ****v67)(_QWORD, GUID *, __int64 *); // [rsp+F8h] [rbp-10h]
  __int64 v68; // [rsp+100h] [rbp-8h]
  __int64 *v69; // [rsp+108h] [rbp+0h]
  __int64 v70; // [rsp+110h] [rbp+8h]
  void *v71; // [rsp+118h] [rbp+10h]
  int v72; // [rsp+120h] [rbp+18h]
  int v73; // [rsp+124h] [rbp+1Ch]
  __int64 v74; // [rsp+128h] [rbp+20h]
  __int64 v75; // [rsp+130h] [rbp+28h]
  __int64 v76; // [rsp+138h] [rbp+30h]
  __int64 v77; // [rsp+140h] [rbp+38h]
  char *v78; // [rsp+148h] [rbp+40h]
  __int64 v79; // [rsp+150h] [rbp+48h]
  char *v80; // [rsp+158h] [rbp+50h]
  __int64 v81; // [rsp+160h] [rbp+58h]
  WINBOOL *v82; // [rsp+168h] [rbp+60h]
  __int64 v83; // [rsp+170h] [rbp+68h]
  _BYTE *v84; // [rsp+178h] [rbp+70h]
  __int64 v85; // [rsp+180h] [rbp+78h]
  char *v86; // [rsp+188h] [rbp+80h]
  __int64 v87; // [rsp+190h] [rbp+88h]
  char *v88; // [rsp+198h] [rbp+90h]
  __int64 v89; // [rsp+1A0h] [rbp+98h]
  unsigned int v90; // [rsp+210h] [rbp+108h] BYREF

  v90 = a4;
  v6 = a6;
  v7 = a3;
  v8 = *(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)a2 + 72LL);
  v9 = a5;
  v47 = a3;
  v57 = a6;
  v8(a2, &lpCriticalSection);
  v12 = (char *)v7 + 48;
  if ( *((_BYTE *)v7 + 48) || *((_BYTE *)v7 + 50) )
    v13 = -2147023728;
  else
    v13 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, struct StreamGroupParams *, struct IStreamGroupProxy **))(*(_QWORD *)a2 + 32LL))(
            a2,
            v7,
            v6);
  LODWORD(v42) = v13;
  if ( v13 != -2147023728 )
    goto LABEL_49;
  v43 = 0LL;
  if ( v9 )
    v14 = *((_DWORD *)v9 + 14);
  else
    v14 = 0;
  v15 = 16 * (v14 + 5LL);
  if ( v15 > 0x7FFFFFFF )
  {
    v16 = 0LL;
  }
  else
  {
    v50[0] = CoTaskMemAlloc((unsigned int)v15);
    v16 = v50[0];
    if ( v50[0] )
    {
      LODWORD(v42) = 0;
      *(_DWORD *)v50[0] = *((_DWORD *)v7 + 2);
      *(_QWORD *)(v16 + 4) = (unsigned __int8)*v12;
      v55 = (WINBOOL *)((char *)v7 + 8);
      if ( v9 )
        v17 = *(unsigned __int16 *)(*((_QWORD *)v9 + 2) + 16LL) + 18;
      else
        v17 = 0;
      *(_DWORD *)(v16 + 12) = v17;
      if ( v9 )
        v18 = *((_QWORD *)v9 + 2);
      else
        v18 = 0LL;
      *(_QWORD *)(v16 + 16) = v18;
      *(_QWORD *)(v16 + 24) = *(_QWORD *)v7;
      v19 = *((_QWORD *)v7 + 2);
      v52 = (_QWORD *)((char *)v7 + 16);
      *(_DWORD *)(v16 + 36) = *(unsigned __int16 *)(v19 + 16) + 18;
      *(_QWORD *)(v16 + 40) = *((_QWORD *)v7 + 2);
      v54 = (char *)v7 + 24;
      *(_QWORD *)(v16 + 48) = *((_QWORD *)v7 + 3);
      if ( v9 )
        v20 = *((_DWORD *)v9 + 8);
      else
        v20 = 0;
      *(_DWORD *)(v16 + 56) = v20;
      v21 = *((_OWORD *)v7 + 2);
      v53 = (char *)v7 + 32;
      v56 = (char *)v7 + 50;
      *(_OWORD *)(v16 + 60) = v21;
      *(_DWORD *)(v16 + 76) = v14;
      v22 = 0LL;
      for ( *(_DWORD *)(v16 + 32) = *((unsigned __int8 *)v7 + 50);
            (unsigned int)v22 < *(_DWORD *)(v16 + 76);
            *(_OWORD *)(v16 + 16 * v24) = *(_OWORD *)((char *)v9 + 8 * v23 + 60) )
      {
        v23 = 2LL * (unsigned int)v22;
        v24 = (unsigned int)v22 + 5LL;
        v22 = (unsigned int)(v22 + 1);
      }
      if ( *v12 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v43);
        v27 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
                &v43,
                &v47,
                v50,
                &v90);
      }
      else
      {
        if ( v43 )
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v43)[2])(v43, v22);
        v46 = operator new(0x640uLL, (const struct std::nothrow_t *)&std::nothrow);
        v25 = v46;
        if ( v46 )
        {
          v46[1] = &CBaseStreamGroupProxy::`vftable';
          v25[6] = 0LL;
          v25[7] = 0LL;
          v25[9] = 0LL;
          v25[10] = 0LL;
          v25[11] = 0LL;
          v25[12] = 0LL;
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v25 + 13), 0, 0);
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)v25 + 4, 0, 0);
          v26 = Microsoft::WRL::Details::ModuleBase::module_;
          v25[25] = 0LL;
          v25[26] = 0LL;
          v25[27] = 0LL;
          v25[28] = 0LL;
          v25[29] = 0LL;
          v25[30] = 0LL;
          *v25 = &CSharedStreamGroupProxy::`vftable'{for `IInspectable'};
          v25[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CBaseStreamGroupProxy>,IWeakReferenceSource,IInspectable>'};
          v25[31] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
          v25[32] = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
          v25[34] = 1LL;
          if ( v26 )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v26 + 8LL))(v26);
          *((_DWORD *)v25 + 70) = 0;
          *v25 = &CSharedStreamGroupProxy::`vftable'{for `IInspectable'};
          v25[1] = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CBaseStreamGroupProxy>,IWeakReferenceSource,IInspectable>'};
          v25[31] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
          v25[32] = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v25 + 36), 0, 0);
          *((_BYTE *)v25 + 328) = 0;
          memset_0(v25 + 42, 0, 0x4E0uLL);
          v25[198] = 0LL;
          v25[199] = 0LL;
          v49 = v25;
          v46 = 0LL;
          v27 = CSharedStreamGroupProxy::RuntimeClassInitialize(
                  (CSharedStreamGroupProxy *)v25,
                  v7,
                  (struct STREAM_GROUP_DESCRIPTOR *)v16,
                  a4);
          if ( v27 < 0 )
          {
            Microsoft::WRL::ComPtr<CSharedStreamGroupProxy>::~ComPtr<CSharedStreamGroupProxy>(&v49);
            Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v46);
          }
          else
          {
            v43 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(v25 + 1);
            (*(void (__fastcall **)(_QWORD *))(v25[1] + 8LL))(v25 + 1);
            if ( v25 )
            {
              v28 = v25[34];
              v49 = 0LL;
              v50[1] = v28;
              while ( v28 >= 0 )
              {
                v29 = v28 - 1;
                v30 = v28;
                v28 = _InterlockedCompareExchange64(v25 + 34, v28 - 1, v28);
                if ( v30 == v28 )
                  goto LABEL_28;
              }
              v29 = _InterlockedDecrement((volatile signed __int32 *)(2 * v28 + 16));
LABEL_28:
              if ( !v29 )
              {
                (*(void (__fastcall **)(_QWORD *, __int64))(v25[1] + 400LL))(v25 + 1, 1LL);
                if ( Microsoft::WRL::Details::ModuleBase::module_ )
                  (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
              }
              v7 = v47;
            }
            v27 = 0;
          }
        }
        else
        {
          Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v46);
          v27 = -2147024882;
        }
      }
      LODWORD(v42) = v27;
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
      v31 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v31 > 4u )
      {
        v32 = &unk_180162EC4;
        v51 = v43;
        v67 = &v51;
        v69 = &v42;
        LODWORD(v33) = 0;
        v68 = 8LL;
        v70 = 4LL;
        if ( *(_QWORD *)v7 )
        {
          v32 = *(void **)v7;
          v33 = -1LL;
          do
            ++v33;
          while ( *(_WORD *)(*(_QWORD *)v7 + 2 * v33) );
        }
        v71 = v32;
        v72 = 2 * v33 + 2;
        v73 = 0;
        v34 = *v52 + 4LL;
        v75 = 4LL;
        v74 = v34;
        v35 = *v52 + 2LL;
        v77 = 2LL;
        v76 = v35;
        v78 = v53;
        v80 = v54;
        v79 = 16LL;
        v81 = 8LL;
        fPending[1] = *v55;
        v82 = &fPending[1];
        v86 = (char *)v7 + 49;
        v88 = v56;
        v83 = 4LL;
        v84 = v12;
        v85 = 1LL;
        v87 = 1LL;
        v89 = 1LL;
        v59[1] = 4;
        v61 = *(unsigned __int16 **)(v31 + 8);
        v59[0] = 184549376;
        v60 = 0LL;
        v62 = *v61;
        v64 = &unk_1801786BD;
        v63 = 2;
        v36 = *(_QWORD *)(v31 + 32);
        v65 = 163;
        v66 = 1;
        LODWORD(v44) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwEventWriteTransfer(v36, v59, 0LL, 0LL, 13, &v61);
      }
      if ( (int)v42 >= 0 )
      {
        v44 = 0LL;
        v37 = Microsoft::WRL::AsWeak<IStreamGroupProxy>(v43, &v44);
        LODWORD(v42) = v37;
        if ( v37 >= 0 )
        {
          v37 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, __int64 *))(*(_QWORD *)a2 + 40LL))(
                  a2,
                  &v44);
          LODWORD(v42) = v37;
        }
        v38 = v44;
        if ( v44 )
        {
          v44 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
          v37 = v42;
        }
        if ( v37 >= 0 )
        {
          v39 = (struct IStreamGroupProxy *)v43;
          v43 = 0LL;
          *v57 = v39;
        }
      }
      goto LABEL_46;
    }
  }
  LODWORD(v42) = -2147024882;
LABEL_46:
  v40 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v40)[2])(v40);
  }
  CoTaskMemFree((LPVOID)v16);
  v13 = v42;
LABEL_49:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v13;
}
