/*
 * XREFs of ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18002A180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     _freea @ 0x180015D40 (_freea.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x1800271E0 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180028110 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _alloca_probe @ 0x180068810 (_alloca_probe.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::AddStream(CPerStreamVolumeAudioSession *this, struct CAudioStream *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  char v4; // r15
  bool v5; // si
  char *v6; // rbx
  BOOL inited; // eax
  void **v8; // rcx
  struct CAudioStream *v9; // rbx
  int v10; // eax
  unsigned int v11; // esi
  WINBOOL *p_fPending; // rbx
  unsigned __int64 v13; // rax
  size_t v14; // rcx
  __int64 v15; // rax
  void *v16; // rsp
  int *v17; // rsi
  __int64 v18; // rdx
  struct CAudioStream *v19; // rcx
  unsigned int v20; // r14d
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  const struct _TlgProvider_t *v25; // r12
  struct _RTL_CRITICAL_SECTION *v26; // rax
  __int64 v27; // rcx
  const WCHAR *v28; // rax
  LPCGUID v29; // r8
  LPCGUID v30; // r9
  int *v31; // rax
  unsigned __int64 v32; // rax
  _DWORD *v33; // rax
  void *v34; // rcx
  _DWORD *v35; // r8
  __int64 v36; // rdx
  unsigned int i; // edx
  __int64 v38; // rcx
  struct CAudioStream *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // eax
  unsigned __int64 v43; // rcx
  size_t v44; // rdx
  __int64 v45; // rax
  void *v46; // rsp
  WINBOOL *v47; // rax
  bool v48; // zf
  _BYTE v49[32]; // [rsp+0h] [rbp-40h] BYREF
  UINT32 cData[2]; // [rsp+20h] [rbp-20h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-18h]
  int v52; // [rsp+40h] [rbp+0h] BYREF
  struct CAudioStream *v53; // [rsp+48h] [rbp+8h]
  WINBOOL fPending; // [rsp+50h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp+18h] BYREF
  char v56; // [rsp+60h] [rbp+20h]
  LPVOID Context; // [rsp+68h] [rbp+28h] BYREF
  LPVOID v58; // [rsp+70h] [rbp+30h] BYREF
  int v59[2]; // [rsp+78h] [rbp+38h] BYREF
  EVENT_DATA_DESCRIPTOR v60; // [rsp+80h] [rbp+40h] BYREF
  int *v61; // [rsp+A0h] [rbp+60h]
  __int64 v62; // [rsp+A8h] [rbp+68h]
  LPCRITICAL_SECTION *p_lpCriticalSection; // [rsp+B0h] [rbp+70h]
  __int64 v64; // [rsp+B8h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp+80h] BYREF
  LPVOID *p_Context; // [rsp+D0h] [rbp+90h]
  __int64 v67; // [rsp+D8h] [rbp+98h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+F8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 848);
  v53 = a2;
  *((_QWORD *)a2 + 8) = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 848);
  v4 = 1;
  v56 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = *((_DWORD *)this + 223) != 0;
  if ( v56 )
    LeaveCriticalSection(lpCriticalSection);
  *(float *)&v52 = FLOAT_1_0;
  *(_QWORD *)v59 = 0LL;
  if ( v53 )
    v6 = (char *)v53 + 16;
  else
    v6 = 0LL;
  Context = 0LL;
  inited = InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  v8 = &AudioSrvTelemetryProvider::`vftable';
  if ( inited && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  GetPolicyVolumeForAudioStream((__int64)v8, (__int64)v6, *((_QWORD *)Context + 1), (float *)&v52, (__int64 *)v59);
  v9 = v53;
  *((_QWORD *)v53 + 12) = *(_QWORD *)v59;
  if ( *(float *)&v52 != *((float *)v9 + 23) )
  {
    *((float *)v9 + 23) = *(float *)&v52;
    if ( *((_QWORD *)v9 + 8) )
    {
      v58 = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &v58) && fPending )
      {
        v58 = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      v25 = (const struct _TlgProvider_t *)*((_QWORD *)v58 + 1);
      if ( *(_DWORD *)v25 > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)v58 + 1), 0x400000000000uLL) )
      {
        v62 = 4LL;
        v61 = &v52;
        v26 = (struct _RTL_CRITICAL_SECTION *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v9 + 1) + 80LL))((__int64)v9 + 8);
        v27 = *((_QWORD *)v9 + 8);
        lpCriticalSection = v26;
        p_lpCriticalSection = &lpCriticalSection;
        v64 = 8LL;
        v28 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 64LL))(v27);
        TlgCreateWsz(&pDesc, v28);
        LODWORD(Context) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 9) + 40LL))(*((_QWORD *)v9 + 9));
        p_Context = &Context;
        v67 = 4LL;
        TlgWrite(v25, &unk_180172BE2, v29, v30, 6u, &v60);
      }
    }
  }
  v10 = (*(__int64 (__fastcall **)(struct CAudioStream *, bool, _QWORD))(*(_QWORD *)v53 + 104LL))(v53, v5, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v10,
      cData[0]);
LABEL_41:
    *((_QWORD *)v53 + 8) = 0LL;
    return v11;
  }
  p_fPending = 0LL;
  lpCriticalSection = v2;
  v56 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v13 = 4LL * *((unsigned int *)this + 250);
  v14 = v13 + 16;
  if ( v13 + 16 < v13 )
    goto LABEL_77;
  if ( v14 <= 0x400 )
  {
    if ( v14 <= v13 )
      v14 = 0LL;
    v15 = v14 + 15;
    if ( v14 + 15 < v14 )
      v15 = 0xFFFFFFFFFFFFFF0LL;
    v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
    v17 = &v52;
    if ( v49 == (_BYTE *)-64LL )
      goto LABEL_77;
    v52 = 52428;
    goto LABEL_18;
  }
  if ( v14 <= v13 )
    v14 = 0LL;
  v31 = (int *)malloc(v14);
  v17 = v31;
  if ( v31 )
  {
    *v31 = 56797;
LABEL_18:
    v17 += 4;
  }
  if ( !v17 )
  {
LABEL_77:
    v36 = 2782LL;
    goto LABEL_78;
  }
  p_fPending = v17;
  memcpy_0(v17, *((const void **)this + 126), 4LL * *((unsigned int *)this + 250));
  v19 = v53;
  if ( *((_QWORD *)this + 126) )
  {
    v20 = *((_DWORD *)this + 250);
    if ( v20 >= *((_DWORD *)v53 + 21) )
      goto LABEL_22;
  }
  v32 = 4LL * *((unsigned int *)v53 + 21);
  if ( !is_mul_ok(*((unsigned int *)v53 + 21), 4uLL) )
    v32 = -1LL;
  v33 = operator new[](v32, (const struct std::nothrow_t *)&std::nothrow);
  v34 = (void *)*((_QWORD *)this + 126);
  v35 = v33;
  *((_QWORD *)this + 126) = v33;
  if ( v34 )
  {
    operator delete(v34);
    v35 = (_DWORD *)*((_QWORD *)this + 126);
  }
  if ( v35 )
  {
    for ( i = 0; i < *((_DWORD *)this + 250); v35[v38] = v17[v38] )
      v38 = i++;
    v39 = v53;
    if ( i < *((_DWORD *)v53 + 21) )
    {
      v40 = *((_QWORD *)this + 126);
      do
      {
        v41 = i++;
        *(_DWORD *)(v40 + 4 * v41) = 1065353216;
        v39 = v53;
      }
      while ( i < *((_DWORD *)v53 + 21) );
    }
    v42 = *((_DWORD *)v39 + 21);
    *((_DWORD *)this + 250) = v42;
    v43 = 4LL * v42;
    v44 = v43 + 16;
    if ( v43 + 16 < v43 )
      v44 = 0LL;
    if ( v44 )
    {
      if ( v44 > 0x400 )
      {
        v47 = (WINBOOL *)malloc(v44);
        p_fPending = v47;
        if ( v47 )
        {
          *v47 = 56797;
          p_fPending = v47 + 4;
        }
      }
      else
      {
        v45 = v44 + 15;
        if ( v44 + 15 < v44 )
          v45 = 0xFFFFFFFFFFFFFF0LL;
        v46 = alloca(v45 & 0xFFFFFFFFFFFFFFF0uLL);
        p_fPending = &v52;
        if ( v49 != (_BYTE *)-64LL )
        {
          v52 = 52428;
          p_fPending = &fPending;
        }
      }
    }
    else
    {
      p_fPending = 0LL;
    }
    v48 = p_fPending == v17;
    if ( p_fPending != v17 )
    {
      freea(v17);
      v48 = p_fPending == v17;
    }
    if ( v48 )
      p_fPending = v17;
    if ( p_fPending )
    {
      memcpy_0(p_fPending, *((const void **)this + 126), 4LL * *((unsigned int *)this + 250));
      v19 = v53;
      v20 = *((_DWORD *)this + 250);
LABEL_22:
      if ( v56 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v19 = v53;
      }
      v21 = *(_QWORD *)v19;
      LOBYTE(pData) = 1;
      *(_QWORD *)cData = 0LL;
      v22 = (*(__int64 (__fastcall **)(struct CAudioStream *, __int64, _QWORD, WINBOOL *))(v21 + 96))(
              v19,
              v18,
              v20,
              p_fPending);
      v11 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB0F,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v22,
          cData[0]);
      }
      else
      {
        v23 = CAudioSession::AddStream(this, v53);
        v11 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB11,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v23,
            cData[0]);
        }
        else
        {
          v4 = 0;
          v11 = 0;
        }
      }
      goto LABEL_27;
    }
    v36 = 2818LL;
  }
  else
  {
    v36 = 2796LL;
  }
LABEL_78:
  v11 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v36,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)0x8007000ELL,
    cData[0]);
  if ( v56 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_27:
  if ( p_fPending && *(p_fPending - 4) == 56797 )
    free(p_fPending - 4);
  if ( v4 )
    goto LABEL_41;
  return v11;
}
