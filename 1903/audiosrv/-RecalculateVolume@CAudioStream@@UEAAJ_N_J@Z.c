/*
 * XREFs of ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x18001CB40
 * Callers:
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18001D9E0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x180044870 (-SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001ADAC (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1EF0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::RecalculateVolume(CAudioStream *this, char a2, __int64 a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // r14d
  __int64 v11; // rcx
  int v12; // eax
  int v13; // r15d
  __int64 v14; // r10
  __int64 v15; // rsi
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(__int64, __int64, __int64, LPVOID *); // rax
  int v20; // eax
  int v21; // esi
  _QWORD *v22; // r12
  _QWORD *i; // r15
  int v25; // eax
  int v26; // r15d
  const struct _TlgProvider_t *v27; // rsi
  const WCHAR *v28; // rax
  LPCGUID v29; // r8
  LPCGUID v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rcx
  const WCHAR *v33; // rax
  LPCGUID v34; // r8
  LPCGUID v35; // r9
  __int64 v36; // rcx
  _BYTE v37[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+44h] [rbp-BCh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+50h] [rbp-B0h] BYREF
  WINBOOL fPending; // [rsp+54h] [rbp-ACh] BYREF
  WINBOOL v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h]
  int v44[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v45[4]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  _QWORD *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  WINBOOL *p_fPending; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+F0h] [rbp-10h] BYREF
  int *v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  char *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v45[1] = -2LL;
  v43 = a3;
  v5 = 0;
  if ( !*((_QWORD *)this + 21) || !*((_QWORD *)this + 22) )
  {
LABEL_33:
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 48LL))(this);
    return v5;
  }
  v6 = 0;
  v7 = *((unsigned int *)this + 21);
  if ( (_DWORD)v7 )
  {
    v8 = *((_QWORD *)this + 14);
    do
    {
      *(_DWORD *)(v8 + 4LL * v6++) = 1065353216;
      v7 = *((unsigned int *)this + 21);
    }
    while ( v6 < (unsigned int)v7 );
  }
  v9 = (*(__int64 (__fastcall **)(CAudioStream *, __int64, _QWORD, _BYTE *))(*(_QWORD *)this + 40LL))(
         this,
         v7,
         *((_QWORD *)this + 14),
         v37);
  v10 = v9;
  if ( v9 >= 0 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
    v45[2] = (char *)this + 128;
    v11 = *((_QWORD *)this + 22);
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 24LL))(v11, &v38);
      v13 = v12;
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x49F,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v12,
          (int)v44);
      if ( v13 == -2147417848 )
      {
        LOBYTE(v38) = 0;
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 176);
      }
      v14 = *((_QWORD *)this + 22);
      if ( v14 && !v13 && ((_BYTE)v38 != 0) != (v37[0] != 0) )
      {
        v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 32LL))(
                v14,
                v37[0],
                0LL,
                0LL);
        v26 = v25;
        if ( v25 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4AC,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v25,
            0);
          if ( v26 == -2147417848 )
            wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 176);
        }
        else if ( *((_QWORD *)this + 8) )
        {
          Context = 0LL;
          if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v42, &Context) && v42 )
          {
            Context = &qword_1801B8588;
            qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
            qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
          }
          v27 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
          if ( *(_DWORD *)v27 > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
          {
            v40 = v37[0];
            v47 = &v40;
            v48 = 4LL;
            v45[0] = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 80LL))((char *)this + 8);
            v49 = v45;
            v50 = 8LL;
            v28 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
            TlgCreateWsz(&pDesc, v28);
            fPending = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
            p_fPending = &fPending;
            v53 = 4LL;
            TlgWrite(v27, &unk_180177EDA, v29, v30, 6u, &pData);
          }
        }
      }
    }
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_1801B8588;
      qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
    }
    v15 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v15 > 4u
      && (*(_BYTE *)(v15 + 16) & 2) != 0
      && (*(_QWORD *)(v15 + 24) & 2LL) == *(_QWORD *)(v15 + 24) )
    {
      LOWORD(v38) = *((_WORD *)this + 42);
      v31 = (_QWORD *)*((_QWORD *)this + 14);
      v47 = &v38;
      v48 = 2LL;
      v49 = v31;
      v50 = 4 * (unsigned int)(unsigned __int16)v38;
      pDesc.Ptr = (ULONGLONG)v37;
      *(_QWORD *)&pDesc.Size = 1LL;
      p_fPending = (WINBOOL *)((char *)this + 320);
      v53 = 8LL;
      v32 = *((_QWORD *)this + 8);
      if ( v32 )
        v33 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 64LL))(v32);
      else
        v33 = L"null";
      TlgCreateWsz(&v54, v33);
      v40 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
      v55 = &v40;
      v56 = 4LL;
      v57 = (char *)this + 92;
      v58 = 4LL;
      TlgWrite((TraceLoggingHProvider)v15, &unk_180177E65, v34, v35, 9u, &pData);
    }
    v16 = *((_QWORD *)this + 21);
    if ( v16 )
    {
      Context = 0LL;
      v17 = *((_QWORD *)this + 14);
      v18 = *((unsigned int *)this + 21);
      if ( a2 )
      {
        v36 = v43;
        if ( v43 <= *(__int64 *)v44 )
          v36 = *(_QWORD *)v44;
        v43 = v36;
        v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64, LPVOID *))(*(_QWORD *)v16 + 48LL);
      }
      else
      {
        v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64, LPVOID *))(*(_QWORD *)v16 + 32LL);
      }
      v20 = v19(v16, v18, v17, &Context);
      v21 = v20;
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4EC,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v20,
          1);
      if ( v21 == -2147417848 )
      {
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 168);
        v21 = 0;
      }
      v5 = v21;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
    v45[0] = (char *)this + 224;
    v38 = 0;
    (*(void (__fastcall **)(char *, int *))(*((_QWORD *)this + 1) + 88LL))((char *)this + 8, &v38);
    v22 = (_QWORD *)*((_QWORD *)this + 34);
    for ( i = (_QWORD *)*((_QWORD *)this + 33); i != v22; ++i )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, *((_QWORD *)this + 6));
    if ( this != (CAudioStream *)-224LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
    if ( this != (CAudioStream *)-128LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x495,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
