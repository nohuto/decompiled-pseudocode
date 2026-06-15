/*
 * XREFs of ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180022B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001CC20 (--3@YAXPEAX@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18001E100 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180029A90 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180065320 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _alloca_probe @ 0x18006C8D0 (_alloca_probe.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     _freea @ 0x1800D20D4 (_freea.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::AddStream(CPerStreamVolumeAudioSession *this, struct CAudioStream *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  char v4; // r15
  bool v5; // r14
  char *v6; // rsi
  BOOL inited; // eax
  void **v8; // rcx
  struct CAudioStream *v9; // rsi
  int v10; // eax
  unsigned int v11; // esi
  unsigned __int64 v12; // rax
  size_t v13; // rcx
  __int64 v14; // rax
  void *v15; // rsp
  WINBOOL *p_fPending; // rsi
  WINBOOL *v17; // rbx
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
  WINBOOL *v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  _DWORD *v34; // rax
  void *v35; // rcx
  _DWORD *v36; // r8
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
  _BYTE v48[32]; // [rsp+0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-18h]
  int Memory; // [rsp+40h] [rbp+0h] BYREF
  struct CAudioStream *v51; // [rsp+48h] [rbp+8h]
  WINBOOL fPending; // [rsp+50h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp+18h] BYREF
  char v54; // [rsp+60h] [rbp+20h]
  LPVOID Context; // [rsp+68h] [rbp+28h] BYREF
  LPVOID v56; // [rsp+70h] [rbp+30h] BYREF
  int v57[2]; // [rsp+78h] [rbp+38h] BYREF
  EVENT_DATA_DESCRIPTOR v58; // [rsp+80h] [rbp+40h] BYREF
  int *p_Memory; // [rsp+A0h] [rbp+60h]
  __int64 v60; // [rsp+A8h] [rbp+68h]
  LPCRITICAL_SECTION *p_lpCriticalSection; // [rsp+B0h] [rbp+70h]
  __int64 v62; // [rsp+B8h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp+80h] BYREF
  LPVOID *p_Context; // [rsp+D0h] [rbp+90h]
  __int64 v65; // [rsp+D8h] [rbp+98h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+F8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 808);
  v51 = a2;
  *((_QWORD *)a2 + 8) = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 808);
  v4 = 1;
  v54 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = *((_DWORD *)this + 213) != 0;
  if ( v54 )
    LeaveCriticalSection(lpCriticalSection);
  *(float *)&Memory = FLOAT_1_0;
  *(_QWORD *)v57 = 0LL;
  if ( v51 )
    v6 = (char *)v51 + 16;
  else
    v6 = 0LL;
  Context = 0LL;
  inited = InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  v8 = &AudioSrvTelemetryProvider::`vftable';
  if ( inited && fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  GetPolicyVolumeForAudioStream((__int64)v8, (__int64)v6, *((_QWORD *)Context + 1), (float *)&Memory, (__int64 *)v57);
  v9 = v51;
  *((_QWORD *)v51 + 12) = *(_QWORD *)v57;
  if ( *(float *)&Memory != *((float *)v9 + 23) )
  {
    *((float *)v9 + 23) = *(float *)&Memory;
    if ( *((_QWORD *)v9 + 8) )
    {
      v56 = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &v56) && fPending )
      {
        v56 = &qword_1801B7588;
        qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
      }
      v25 = (const struct _TlgProvider_t *)*((_QWORD *)v56 + 1);
      if ( *(_DWORD *)v25 > 4u )
      {
        v60 = 4LL;
        p_Memory = &Memory;
        v26 = (struct _RTL_CRITICAL_SECTION *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v9 + 1) + 80LL))((__int64)v9 + 8);
        v27 = *((_QWORD *)v9 + 8);
        lpCriticalSection = v26;
        p_lpCriticalSection = &lpCriticalSection;
        v62 = 8LL;
        v28 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 64LL))(v27);
        TlgCreateWsz(&pDesc, v28);
        LODWORD(Context) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 9) + 40LL))(*((_QWORD *)v9 + 9));
        p_Context = &Context;
        v65 = 4LL;
        TlgWrite(v25, &unk_180176F15, v29, v30, 6u, &v58);
      }
    }
  }
  v10 = (*(__int64 (__fastcall **)(struct CAudioStream *, bool, _QWORD))(*(_QWORD *)v51 + 104LL))(v51, v5, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD4,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v10);
LABEL_39:
    *((_QWORD *)v51 + 8) = 0LL;
    return v11;
  }
  lpCriticalSection = v2;
  v54 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v12 = 4LL * *((unsigned int *)this + 240);
  v13 = v12 + 16;
  if ( v12 + 16 < v12 )
  {
    p_fPending = 0LL;
  }
  else if ( v13 > 0x400 )
  {
    if ( v13 <= v12 )
      v13 = 0LL;
    v31 = (WINBOOL *)malloc(v13);
    p_fPending = v31;
    if ( v31 )
    {
      *v31 = 56797;
      p_fPending = v31 + 4;
    }
  }
  else
  {
    if ( v13 <= v12 )
      v13 = 0LL;
    v14 = v13 + 15;
    if ( v13 + 15 < v13 )
      v14 = 0xFFFFFFFFFFFFFF0LL;
    v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
    p_fPending = &Memory;
    if ( v48 != (_BYTE *)-64LL )
    {
      Memory = 52428;
      p_fPending = &fPending;
    }
  }
  v17 = p_fPending;
  if ( p_fPending )
  {
    memcpy_0(p_fPending, *((const void **)this + 121), 4LL * *((unsigned int *)this + 240));
    v19 = v51;
    if ( *((_QWORD *)this + 121) )
    {
      v20 = *((_DWORD *)this + 240);
      if ( v20 >= *((_DWORD *)v51 + 21) )
        goto LABEL_21;
    }
    v33 = 4LL * *((unsigned int *)v51 + 21);
    if ( !is_mul_ok(*((unsigned int *)v51 + 21), 4uLL) )
      v33 = -1LL;
    v34 = operator new[](v33, (const struct std::nothrow_t *)&std::nothrow);
    v35 = (void *)*((_QWORD *)this + 121);
    v36 = v34;
    *((_QWORD *)this + 121) = v34;
    if ( v35 )
    {
      operator delete(v35);
      v36 = (_DWORD *)*((_QWORD *)this + 121);
    }
    if ( v36 )
    {
      for ( i = 0; i < *((_DWORD *)this + 240); v36[v38] = p_fPending[v38] )
        v38 = i++;
      v39 = v51;
      if ( i < *((_DWORD *)v51 + 21) )
      {
        v40 = *((_QWORD *)this + 121);
        do
        {
          v41 = i++;
          *(_DWORD *)(v40 + 4 * v41) = 1065353216;
          v39 = v51;
        }
        while ( i < *((_DWORD *)v51 + 21) );
      }
      v42 = *((_DWORD *)v39 + 21);
      *((_DWORD *)this + 240) = v42;
      v43 = 4LL * v42;
      v44 = v43 + 16;
      if ( v43 + 16 < v43 )
        v44 = 0LL;
      if ( v44 )
      {
        if ( v44 > 0x400 )
        {
          v47 = (WINBOOL *)malloc(v44);
          v17 = v47;
          if ( v47 )
          {
            *v47 = 56797;
            v17 = v47 + 4;
          }
        }
        else
        {
          v45 = v44 + 15;
          if ( v44 + 15 < v44 )
            v45 = 0xFFFFFFFFFFFFFF0LL;
          v46 = alloca(v45 & 0xFFFFFFFFFFFFFFF0uLL);
          v17 = &Memory;
          if ( v48 != (_BYTE *)-64LL )
          {
            Memory = 52428;
            v17 = &fPending;
          }
        }
      }
      else
      {
        v17 = 0LL;
      }
      freea(p_fPending);
      if ( v17 )
      {
        memcpy_0(v17, *((const void **)this + 121), 4LL * *((unsigned int *)this + 240));
        v19 = v51;
        v20 = *((_DWORD *)this + 240);
LABEL_21:
        if ( v54 )
        {
          LeaveCriticalSection(lpCriticalSection);
          v19 = v51;
        }
        v21 = *(_QWORD *)v19;
        LOBYTE(pData) = 1;
        v22 = (*(__int64 (__fastcall **)(struct CAudioStream *, __int64, _QWORD, WINBOOL *, _QWORD, _DWORD))(v21 + 96))(
                v19,
                v18,
                v20,
                v17,
                0LL,
                (_DWORD)pData);
        v11 = v22;
        if ( v22 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB0D,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v22);
        }
        else
        {
          v23 = CAudioSession::AddStream(this, v51);
          v11 = v23;
          if ( v23 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xB0F,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
              (const char *)(unsigned int)v23);
          }
          else
          {
            v4 = 0;
            v11 = 0;
          }
        }
        goto LABEL_26;
      }
      v32 = 2816LL;
    }
    else
    {
      v32 = 2794LL;
    }
  }
  else
  {
    v32 = 2780LL;
  }
  v11 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v32,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)0x8007000ELL);
  if ( v54 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_26:
  if ( v17 && *(v17 - 4) == 56797 )
    free(v17 - 4);
  if ( v4 )
    goto LABEL_39;
  return v11;
}
