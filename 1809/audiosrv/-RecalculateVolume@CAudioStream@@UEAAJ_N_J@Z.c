/*
 * XREFs of ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x18000D080
 * Callers:
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18000CFF0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x180015C40 (-SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C36C0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
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
  int *v19; // rcx
  __int64 (__fastcall *v20)(__int64, __int64, __int64, LPVOID *, int *, int *); // rax
  int v21; // eax
  int v22; // esi
  _QWORD *v23; // r12
  _QWORD *i; // r15
  int v26; // eax
  int v27; // r15d
  const struct _TlgProvider_t *v28; // rsi
  const WCHAR *v29; // rax
  LPCGUID v30; // r8
  LPCGUID v31; // r9
  _QWORD *v32; // rax
  __int64 v33; // rcx
  const WCHAR *v34; // rax
  LPCGUID v35; // r8
  LPCGUID v36; // r9
  __int64 v37; // rcx
  int *cData; // [rsp+20h] [rbp-E0h]
  _BYTE v39[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+44h] [rbp-BCh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  WINBOOL fPending; // [rsp+54h] [rbp-ACh] BYREF
  WINBOOL v44; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h] BYREF
  int v46[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v47[4]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  _QWORD *v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  WINBOOL *p_fPending; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+F0h] [rbp-10h] BYREF
  int *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  char *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v47[1] = -2LL;
  v45 = a3;
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
  cData = v46;
  v9 = (*(__int64 (__fastcall **)(CAudioStream *, __int64, _QWORD, _BYTE *))(*(_QWORD *)this + 40LL))(
         this,
         v7,
         *((_QWORD *)this + 14),
         v39);
  v10 = v9;
  if ( v9 >= 0 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
    v47[2] = (char *)this + 128;
    v11 = *((_QWORD *)this + 22);
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 24LL))(v11, &v40);
      v13 = v12;
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x49E,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v12);
      if ( v13 == -2147417848 )
      {
        LOBYTE(v40) = 0;
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 176);
      }
      v14 = *((_QWORD *)this + 22);
      if ( v14 && !v13 && ((_BYTE)v40 != 0) != (v39[0] != 0) )
      {
        v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 32LL))(
                v14,
                v39[0],
                0LL,
                0LL,
                0LL);
        v27 = v26;
        if ( v26 >= 0 )
        {
          if ( *((_QWORD *)this + 8) )
          {
            Context = 0LL;
            if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v44, &Context) && v44 )
            {
              Context = qword_1801B3518;
              qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
              qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
              wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
              InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
            }
            v28 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
            if ( *(_DWORD *)v28 > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
            {
              v42 = v39[0];
              v49 = &v42;
              v50 = 4LL;
              v47[0] = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 80LL))((char *)this + 8);
              v51 = v47;
              v52 = 8LL;
              v29 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
              TlgCreateWsz(&pDesc, v29);
              fPending = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
              p_fPending = &fPending;
              v55 = 4LL;
              TlgWrite(v28, &unk_180172B87, v30, v31, 6u, &pData);
            }
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4AB,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v26);
          if ( v27 == -2147417848 )
            wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 176);
        }
      }
    }
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1801B3518;
      qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
    }
    v15 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v15 > 4u
      && (*(_BYTE *)(v15 + 16) & 2) != 0
      && (*(_QWORD *)(v15 + 24) & 2LL) == *(_QWORD *)(v15 + 24) )
    {
      LOWORD(v40) = *((_WORD *)this + 42);
      v32 = (_QWORD *)*((_QWORD *)this + 14);
      v49 = &v40;
      v50 = 2LL;
      v51 = v32;
      v52 = 4 * (unsigned int)(unsigned __int16)v40;
      pDesc.Ptr = (ULONGLONG)v39;
      *(_QWORD *)&pDesc.Size = 1LL;
      p_fPending = (WINBOOL *)((char *)this + 320);
      v55 = 8LL;
      v33 = *((_QWORD *)this + 8);
      if ( v33 )
        v34 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 64LL))(v33);
      else
        v34 = L"null";
      TlgCreateWsz(&v56, v34);
      v42 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
      v57 = &v42;
      v58 = 4LL;
      v59 = (char *)this + 92;
      v60 = 4LL;
      TlgWrite((TraceLoggingHProvider)v15, &unk_180172B12, v35, v36, 9u, &pData);
    }
    v16 = *((_QWORD *)this + 21);
    if ( v16 )
    {
      Context = 0LL;
      v17 = *((_QWORD *)this + 14);
      v18 = *((unsigned int *)this + 21);
      if ( a2 )
      {
        v37 = v45;
        if ( v45 <= *(__int64 *)v46 )
          v37 = *(_QWORD *)v46;
        v45 = v37;
        v19 = (int *)&v45;
        v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64, LPVOID *, int *, int *))(*(_QWORD *)v16 + 48LL);
      }
      else
      {
        v19 = v46;
        v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64, LPVOID *, int *, int *))(*(_QWORD *)v16 + 32LL);
      }
      LODWORD(cData) = 1;
      v21 = v20(v16, v18, v17, &Context, cData, v19);
      v22 = v21;
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4EB,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v21);
      if ( v22 == -2147417848 )
      {
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 168);
        v22 = 0;
      }
      v5 = v22;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
    v47[0] = (char *)this + 224;
    v40 = 0;
    (*(void (__fastcall **)(char *, int *))(*((_QWORD *)this + 1) + 88LL))((char *)this + 8, &v40);
    v23 = (_QWORD *)*((_QWORD *)this + 34);
    for ( i = (_QWORD *)*((_QWORD *)this + 33); i != v23; ++i )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, *((_QWORD *)this + 6));
    if ( this != (CAudioStream *)-224LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
    if ( this != (CAudioStream *)-128LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x494,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v9,
    (int)v46);
  return v10;
}
