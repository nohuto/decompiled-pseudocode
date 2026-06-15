/*
 * XREFs of PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x1800D67E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     MIDL_user_allocate @ 0x180014480 (MIDL_user_allocate.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     _lambda_4a543277d9c921e33bd9dfb8d5328f97_::operator() @ 0x1800CEC50 (_lambda_4a543277d9c921e33bd9dfb8d5328f97_--operator().c)
 */

__int64 PolicyConfigGetDeviceFormatAndSpatialSettings(__int64 a1, __int64 a2, unsigned int a3, ...)
{
  __int64 v5; // r8
  void *v6; // r8
  __int64 v7; // rdx
  int v8; // ebx
  void **v9; // rax
  char v10; // r14
  __int128 v11; // xmm0
  __int64 v12; // rax
  void **v13; // rsi
  void *v14; // rdi
  void *v15; // rcx
  LPVOID *v16; // rsi
  void *v17; // rdi
  void *v18; // rcx
  __int128 v19; // kr00_16
  void *v20; // rcx
  __int64 v21; // rdx
  __int128 v22; // kr10_16
  void *v23; // rcx
  LPVOID *v24; // rsi
  void *v25; // rdi
  void *v26; // rcx
  _OWORD *v27; // rcx
  _OWORD *v28; // rax
  __int64 v29; // rax
  unsigned int v31; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+50h] [rbp-B8h] BYREF
  va_list v33; // [rsp+60h] [rbp-A8h]
  void *Src; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID v35; // [rsp+70h] [rbp-98h] BYREF
  LPVOID *v36; // [rsp+78h] [rbp-90h]
  int v37[2]; // [rsp+80h] [rbp-88h] BYREF
  char v38; // [rsp+88h] [rbp-80h]
  WINBOOL fPending; // [rsp+90h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+98h] [rbp-70h] BYREF
  void *pv; // [rsp+A0h] [rbp-68h] BYREF
  void **p_Src; // [rsp+A8h] [rbp-60h]
  void *v43; // [rsp+B0h] [rbp-58h] BYREF
  char v44; // [rsp+B8h] [rbp-50h]
  __int128 v45; // [rsp+C0h] [rbp-48h] BYREF
  va_list v46; // [rsp+D0h] [rbp-38h]
  char v47; // [rsp+D8h] [rbp-30h]
  struct _TP_TIMER *v48[7]; // [rsp+E0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]
  void **v50; // [rsp+150h] [rbp+48h] BYREF
  va_list va; // [rsp+150h] [rbp+48h]
  void **v52; // [rsp+158h] [rbp+50h] BYREF
  va_list va1; // [rsp+158h] [rbp+50h]
  unsigned int *v54; // [rsp+160h] [rbp+58h]
  void **v55; // [rsp+168h] [rbp+60h] BYREF
  va_list va2; // [rsp+168h] [rbp+60h]
  va_list va3; // [rsp+170h] [rbp+68h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v50 = va_arg(va1, void **);
  va_copy(va2, va1);
  v52 = va_arg(va2, void **);
  v54 = va_arg(va2, unsigned int *);
  va_copy(va3, va2);
  v55 = va_arg(va3, void **);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v6);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v48,
    *((struct _TP_TIMER **)Context + 1),
    v5,
    (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatAndSpatialSettings");
  if ( !v50 )
  {
    v7 = 7428LL;
LABEL_8:
    v8 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80004003LL);
    goto LABEL_62;
  }
  *v50 = 0LL;
  if ( !v52 )
  {
    v7 = 7431LL;
    goto LABEL_8;
  }
  *v52 = 0LL;
  v9 = v55;
  if ( v55 )
  {
    *v55 = 0LL;
    v9 = v55;
  }
  Src = 0LL;
  va_copy((va_list)v32, va);
  va_copy(*((va_list *)&v32 + 1), va1);
  va_copy(v33, va2);
  v10 = 1;
  va_copy(v46, va2);
  v35 = 0LL;
  pv = 0LL;
  v31 = 0;
  LOBYTE(v33) = 1;
  *(_QWORD *)v37 = 0LL;
  v38 = 1;
  v11 = v32;
  *((_QWORD *)&v32 + 1) = 0LL;
  v45 = v11;
  if ( !v9 )
  {
    v36 = &v35;
    *(_QWORD *)&v32 = &Src;
    v8 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, __int64, _QWORD, char *, int *, unsigned int *, _QWORD))(*(_QWORD *)g_PolicyConfig + 272LL))(
           g_PolicyConfig,
           a2,
           a3,
           (char *)&v32 + 8,
           v37,
           &v31,
           0LL);
    if ( (_BYTE)v33 )
    {
      v22 = v32;
      v23 = *(void **)v32;
      if ( *((_QWORD *)&v32 + 1) != *(_QWORD *)v32 )
      {
        if ( v23 )
          CoTaskMemFree(v23);
        *(_QWORD *)v22 = *((_QWORD *)&v22 + 1);
      }
    }
    if ( v38 )
    {
      v24 = v36;
      v25 = *(void **)v37;
      v26 = *v36;
      if ( *(LPVOID *)v37 != *v36 )
      {
        if ( v26 )
          CoTaskMemFree(v26);
        *v24 = v25;
      }
    }
    if ( v8 < 0 )
    {
      v21 = 7475LL;
      goto LABEL_51;
    }
LABEL_41:
    *v50 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    if ( *v50 )
    {
      memcpy_0(*v50, Src, *((unsigned __int16 *)Src + 8) + 18LL);
      *v52 = MIDL_user_allocate(0x48uLL);
      v27 = *v52;
      if ( *v52 )
      {
        v28 = v35;
        *v27 = *(_OWORD *)v35;
        v27[1] = v28[1];
        v27[2] = v28[2];
        v27[3] = v28[3];
        *((_QWORD *)v27 + 8) = *((_QWORD *)v28 + 8);
        v29 = v31;
        if ( v54 )
          *v54 = v31;
        if ( v55 )
        {
          *v55 = MIDL_user_allocate(834 * v29);
          if ( !*v55 )
          {
            v21 = 7496LL;
            goto LABEL_50;
          }
          memcpy_0(*v55, pv, 834LL * v31);
        }
        v10 = 0;
        v8 = 0;
        goto LABEL_54;
      }
      v21 = 7485LL;
    }
    else
    {
      v21 = 7481LL;
    }
LABEL_50:
    v8 = -2147024882;
    goto LABEL_51;
  }
  v43 = 0LL;
  *(_QWORD *)&v32 = &pv;
  v36 = &v35;
  p_Src = &Src;
  v12 = *(_QWORD *)g_PolicyConfig;
  v44 = 1;
  v8 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, __int64, _QWORD, void **, int *, unsigned int *, char *))(v12 + 272))(
         g_PolicyConfig,
         a2,
         a3,
         &v43,
         v37,
         &v31,
         (char *)&v32 + 8);
  if ( v44 )
  {
    v13 = p_Src;
    v14 = v43;
    v15 = *p_Src;
    if ( v43 != *p_Src )
    {
      if ( v15 )
        CoTaskMemFree(v15);
      *v13 = v14;
    }
  }
  if ( v38 )
  {
    v16 = v36;
    v17 = *(void **)v37;
    v18 = *v36;
    if ( *(LPVOID *)v37 != *v36 )
    {
      if ( v18 )
        CoTaskMemFree(v18);
      *v16 = v17;
    }
  }
  if ( (_BYTE)v33 )
  {
    v19 = v32;
    v20 = *(void **)v32;
    if ( *((_QWORD *)&v32 + 1) != *(_QWORD *)v32 )
    {
      if ( v20 )
        CoTaskMemFree(v20);
      *(_QWORD *)v19 = *((_QWORD *)&v19 + 1);
    }
  }
  if ( v8 >= 0 )
    goto LABEL_41;
  v21 = 7467LL;
LABEL_51:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    v21,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)v8);
LABEL_54:
  if ( pv )
    CoTaskMemFree(pv);
  if ( v35 )
    CoTaskMemFree(v35);
  if ( Src )
    CoTaskMemFree(Src);
  if ( v10 )
  {
    v47 = 0;
    lambda_4a543277d9c921e33bd9dfb8d5328f97_::operator()((__int64)&v45);
  }
LABEL_62:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v48);
  return (unsigned int)v8;
}
