/*
 * XREFs of ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18003A370
 * Callers:
 *     <none>
 * Callees:
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180032CA0 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18003AB20 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180067C24 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800BDCA8 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x1800EC7DC (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@.c)
 *     ??1?$ComPtr@VCSharedStreamGroupProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800ED1FC (--1-$ComPtr@VCSharedStreamGroupProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CDeviceGraphManager::GetStreamGroup(
        CDeviceGraphManager *this,
        struct IDeviceGraphObjectsStore *a2,
        struct StreamGroupParams *a3,
        unsigned int a4,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a5,
        struct IStreamGroupProxy **a6)
{
  struct IStreamGroupProxy **v6; // rdi
  struct AUDIO_DEVICE_MODE_DESCRIPTOR *v7; // rbx
  void (__fastcall *v8)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *); // rax
  struct StreamGroupParams *v9; // rsi
  bool v12; // zf
  unsigned int v13; // edi
  unsigned int v14; // r14d
  unsigned __int64 v15; // rax
  char *v16; // rdi
  bool v17; // cl
  int v18; // eax
  int v19; // r15d
  _BYTE *v20; // r8
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // edx
  __int128 v26; // xmm0
  char *v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v31; // rcx
  signed __int64 v32; // rax
  unsigned int v33; // ecx
  signed __int64 v34; // rtt
  __int64 v35; // r10
  void *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  struct IStreamGroupProxy *v43; // rax
  __int64 (__fastcall ***v44)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v46; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v47)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v50; // [rsp+58h] [rbp-B0h] BYREF
  struct StreamGroupParams *v51; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-A0h] BYREF
  char *v53; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v54; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v55; // [rsp+80h] [rbp-88h]
  signed __int64 v56; // [rsp+88h] [rbp-80h]
  __int64 (__fastcall ***v57)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp-78h] BYREF
  _QWORD *v58; // [rsp+98h] [rbp-70h]
  char *v59; // [rsp+A0h] [rbp-68h]
  char *v60; // [rsp+A8h] [rbp-60h]
  WINBOOL *v61; // [rsp+B0h] [rbp-58h]
  struct IStreamGroupProxy **v62; // [rsp+B8h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD v64[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-38h]
  unsigned __int16 *v66; // [rsp+D8h] [rbp-30h] BYREF
  int v67; // [rsp+E0h] [rbp-28h]
  int v68; // [rsp+E4h] [rbp-24h]
  void *v69; // [rsp+E8h] [rbp-20h]
  int v70; // [rsp+F0h] [rbp-18h]
  int v71; // [rsp+F4h] [rbp-14h]
  __int64 (__fastcall ****v72)(_QWORD, GUID *, __int64 *); // [rsp+F8h] [rbp-10h]
  __int64 v73; // [rsp+100h] [rbp-8h]
  __int64 *v74; // [rsp+108h] [rbp+0h]
  __int64 v75; // [rsp+110h] [rbp+8h]
  void *v76; // [rsp+118h] [rbp+10h]
  int v77; // [rsp+120h] [rbp+18h]
  int v78; // [rsp+124h] [rbp+1Ch]
  __int64 v79; // [rsp+128h] [rbp+20h]
  __int64 v80; // [rsp+130h] [rbp+28h]
  __int64 v81; // [rsp+138h] [rbp+30h]
  __int64 v82; // [rsp+140h] [rbp+38h]
  char *v83; // [rsp+148h] [rbp+40h]
  __int64 v84; // [rsp+150h] [rbp+48h]
  char *v85; // [rsp+158h] [rbp+50h]
  __int64 v86; // [rsp+160h] [rbp+58h]
  WINBOOL *v87; // [rsp+168h] [rbp+60h]
  __int64 v88; // [rsp+170h] [rbp+68h]
  _BYTE *v89; // [rsp+178h] [rbp+70h]
  __int64 v90; // [rsp+180h] [rbp+78h]
  char *v91; // [rsp+188h] [rbp+80h]
  __int64 v92; // [rsp+190h] [rbp+88h]
  char *v93; // [rsp+198h] [rbp+90h]
  __int64 v94; // [rsp+1A0h] [rbp+98h]
  unsigned int v95; // [rsp+210h] [rbp+108h] BYREF

  v95 = a4;
  v6 = a6;
  v7 = a5;
  v8 = *(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)a2 + 72LL);
  v9 = a3;
  v51 = a3;
  v62 = a6;
  v8(a2, &lpCriticalSection);
  v12 = *((_BYTE *)v9 + 48) == 0;
  v55 = (char *)v9 + 48;
  if ( !v12 || *((_BYTE *)v9 + 50) )
    v13 = -2147023728;
  else
    v13 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, struct StreamGroupParams *, struct IStreamGroupProxy **))(*(_QWORD *)a2 + 32LL))(
            a2,
            v9,
            v6);
  LODWORD(v46) = v13;
  if ( v13 == -2147023728 )
  {
    v47 = 0LL;
    if ( v7 )
      v14 = *((_DWORD *)v7 + 14);
    else
      v14 = 0;
    v15 = 16 * (v14 + 5LL);
    if ( v15 <= 0x7FFFFFFF )
    {
      v53 = (char *)CoTaskMemAlloc((unsigned int)v15);
      v16 = v53;
      v17 = v53 != 0LL;
    }
    else
    {
      v16 = 0LL;
      v53 = 0LL;
      v17 = 0;
    }
    v18 = 0;
    v19 = -2147024882;
    if ( !v17 )
      v18 = -2147024882;
    LODWORD(v46) = v18;
    if ( v17 )
    {
      v20 = v55;
      v61 = (WINBOOL *)((char *)v9 + 8);
      *(_DWORD *)v16 = *((_DWORD *)v9 + 2);
      *(_QWORD *)(v16 + 4) = (unsigned __int8)*v20;
      if ( v7 )
        v21 = *(unsigned __int16 *)(*((_QWORD *)v7 + 2) + 16LL) + 18;
      else
        v21 = 0;
      *((_DWORD *)v16 + 3) = v21;
      if ( v7 )
        v22 = *((_QWORD *)v7 + 2);
      else
        v22 = 0LL;
      *((_QWORD *)v16 + 2) = v22;
      *((_QWORD *)v16 + 3) = *(_QWORD *)v9;
      v23 = *((_QWORD *)v9 + 2);
      v58 = (_QWORD *)((char *)v9 + 16);
      *((_DWORD *)v16 + 9) = *(unsigned __int16 *)(v23 + 16) + 18;
      *((_QWORD *)v16 + 5) = *((_QWORD *)v9 + 2);
      v60 = (char *)v9 + 24;
      *((_QWORD *)v16 + 6) = *((_QWORD *)v9 + 3);
      if ( v7 )
        v24 = *((_DWORD *)v7 + 8);
      else
        v24 = 0;
      *((_DWORD *)v16 + 14) = v24;
      v25 = 0;
      v26 = *((_OWORD *)v9 + 2);
      v59 = (char *)v9 + 32;
      *(_OWORD *)(v16 + 60) = v26;
      *((_DWORD *)v16 + 19) = v14;
      v27 = (char *)v9 + 50;
      *((_DWORD *)v16 + 8) = *((unsigned __int8 *)v9 + 50);
      if ( *((_DWORD *)v16 + 19) )
      {
        do
        {
          v28 = 2LL * v25;
          v29 = v25++ + 5LL;
          *(_OWORD *)&v16[16 * v29] = *(_OWORD *)((char *)v7 + 8 * v28 + 60);
        }
        while ( v25 < *((_DWORD *)v16 + 19) );
      }
      if ( *v20 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v47);
        v19 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
                &v47,
                &v51,
                &v53,
                &v95);
      }
      else
      {
        if ( v47 )
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v47)[2])(v47);
        v50 = operator new(0x640uLL, (const struct std::nothrow_t *)&std::nothrow);
        v30 = v50;
        if ( v50 )
        {
          v50[1] = &CBaseStreamGroupProxy::`vftable';
          v30[6] = 0LL;
          v30[7] = 0LL;
          v30[9] = 0LL;
          v30[10] = 0LL;
          v30[11] = 0LL;
          v30[12] = 0LL;
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v30 + 13), 0, 0);
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)v30 + 4, 0, 0);
          v31 = Microsoft::WRL::Details::ModuleBase::module_;
          v30[25] = 0LL;
          v30[26] = 0LL;
          v30[27] = 0LL;
          v30[28] = 0LL;
          v30[29] = 0LL;
          v30[30] = 0LL;
          *v30 = &CSharedStreamGroupProxy::`vftable'{for `IInspectable'};
          v30[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CBaseStreamGroupProxy>,IWeakReferenceSource,IInspectable>'};
          v30[31] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
          v30[32] = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
          v30[34] = 1LL;
          if ( v31 )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v31 + 8LL))(v31);
          *((_DWORD *)v30 + 70) = 0;
          *v30 = &CSharedStreamGroupProxy::`vftable'{for `IInspectable'};
          v30[1] = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CBaseStreamGroupProxy>,IWeakReferenceSource,IInspectable>'};
          v30[31] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
          v30[32] = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v30 + 36), 0, 0);
          *((_BYTE *)v30 + 328) = 0;
          memset_0(v30 + 42, 0, 0x4E0uLL);
          v30[198] = 0LL;
          v30[199] = 0LL;
          v54 = v30;
          v50 = 0LL;
          v19 = CSharedStreamGroupProxy::RuntimeClassInitialize(
                  (CSharedStreamGroupProxy *)v30,
                  v9,
                  (struct STREAM_GROUP_DESCRIPTOR *)v16,
                  a4);
          if ( v19 >= 0 )
          {
            v47 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(v30 + 1);
            (*(void (__fastcall **)(_QWORD *))(v30[1] + 8LL))(v30 + 1);
            if ( v30 )
            {
              v32 = v30[34];
              v56 = v32;
              v54 = 0LL;
              while ( v32 >= 0 )
              {
                if ( (_DWORD)v32 == 0x7FFFFFFF )
                  goto LABEL_46;
                v33 = v32 - 1;
                v34 = v32;
                v32 = _InterlockedCompareExchange64(v30 + 34, v32 - 1, v32);
                if ( v34 == v32 )
                  goto LABEL_43;
              }
              v33 = ATL::SafeDecrementReferenceMultiThread((int *)(2 * v32 + 16));
LABEL_43:
              if ( !v33 )
              {
                (*(void (__fastcall **)(_QWORD *, __int64))(v30[1] + 400LL))(v30 + 1, 1LL);
                if ( Microsoft::WRL::Details::ModuleBase::module_ )
                  (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
              }
LABEL_46:
              v9 = v51;
            }
            v19 = 0;
          }
          else
          {
            Microsoft::WRL::ComPtr<CSharedStreamGroupProxy>::~ComPtr<CSharedStreamGroupProxy>(&v54);
            Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v50);
          }
        }
        else
        {
          Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v50);
        }
      }
      LODWORD(v46) = v19;
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
      v35 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v35 > 4u )
      {
        v36 = &unk_180161DC4;
        v57 = v47;
        v72 = &v57;
        v74 = &v46;
        LODWORD(v37) = 0;
        v73 = 8LL;
        v75 = 4LL;
        if ( *(_QWORD *)v9 )
        {
          v36 = *(void **)v9;
          v37 = -1LL;
          do
            ++v37;
          while ( *(_WORD *)(*(_QWORD *)v9 + 2 * v37) );
        }
        v77 = 2 * v37 + 2;
        v76 = v36;
        v78 = 0;
        v38 = *v58 + 4LL;
        v80 = 4LL;
        v79 = v38;
        v39 = *v58 + 2LL;
        v82 = 2LL;
        v81 = v39;
        v83 = v59;
        v85 = v60;
        v84 = 16LL;
        v86 = 8LL;
        fPending[1] = *v61;
        v87 = &fPending[1];
        v89 = v55;
        v91 = (char *)v9 + 49;
        v88 = 4LL;
        v90 = 1LL;
        v92 = 1LL;
        v93 = v27;
        v94 = 1LL;
        v64[1] = 4;
        v66 = *(unsigned __int16 **)(v35 + 8);
        v64[0] = 184549376;
        v65 = 0LL;
        v67 = *v66;
        v69 = &unk_18017769D;
        v68 = 2;
        v40 = *(_QWORD *)(v35 + 32);
        v70 = 163;
        v71 = 1;
        LODWORD(v48) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwEventWriteTransfer(v40, v64, 0LL, 0LL, 13, &v66);
      }
      if ( (int)v46 >= 0 )
      {
        v48 = 0LL;
        v41 = Microsoft::WRL::AsWeak<IStreamGroupProxy>(v47, &v48);
        LODWORD(v46) = v41;
        if ( v41 >= 0 )
        {
          v41 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, __int64 *))(*(_QWORD *)a2 + 40LL))(
                  a2,
                  &v48);
          LODWORD(v46) = v41;
        }
        v42 = v48;
        if ( v48 )
        {
          v48 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
          v41 = v46;
        }
        if ( v41 >= 0 )
        {
          v43 = (struct IStreamGroupProxy *)v47;
          v47 = 0LL;
          *v62 = v43;
        }
      }
    }
    v44 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v44)[2])(v44);
    }
    CoTaskMemFree(v16);
    v13 = v46;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v13;
}
