/*
 * XREFs of PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x1800E1C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     MIDL_user_allocate @ 0x180042BF0 (MIDL_user_allocate.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     _lambda_4a543277d9c921e33bd9dfb8d5328f97_::operator() @ 0x1800DD324 (_lambda_4a543277d9c921e33bd9dfb8d5328f97_--operator().c)
 */

__int64 PolicyConfigGetDeviceFormatAndSpatialSettings(__int64 a1, __int64 a2, unsigned int a3, ...)
{
  __int64 v5; // r8
  void *v6; // r8
  __int64 v7; // rdx
  int v8; // ebx
  void **v9; // rax
  char v10; // di
  __int128 v11; // xmm0
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  __int64 v15; // rdx
  void *v16; // rcx
  void *v17; // rcx
  _OWORD *v18; // rcx
  _OWORD *v19; // rax
  __int64 v20; // rax
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 *Src; // [rsp+50h] [rbp-B8h] BYREF
  void *Src_8[2]; // [rsp+58h] [rbp-B0h] BYREF
  va_list v28; // [rsp+68h] [rbp-A0h]
  LPVOID v29; // [rsp+70h] [rbp-98h] BYREF
  void *pv; // [rsp+78h] [rbp-90h] BYREF
  LPVOID *v31; // [rsp+80h] [rbp-88h]
  int v32[2]; // [rsp+88h] [rbp-80h] BYREF
  char v33; // [rsp+90h] [rbp-78h]
  WINBOOL fPending; // [rsp+98h] [rbp-70h] BYREF
  LPVOID Context; // [rsp+A0h] [rbp-68h] BYREF
  void **p_Src; // [rsp+A8h] [rbp-60h]
  void *v37; // [rsp+B0h] [rbp-58h] BYREF
  char v38; // [rsp+B8h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-48h] BYREF
  va_list v40; // [rsp+D0h] [rbp-38h]
  char v41; // [rsp+D8h] [rbp-30h]
  struct _TP_TIMER *v42[7]; // [rsp+E0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]
  void **v44; // [rsp+150h] [rbp+48h] BYREF
  va_list va; // [rsp+150h] [rbp+48h]
  void **v46; // [rsp+158h] [rbp+50h] BYREF
  va_list va1; // [rsp+158h] [rbp+50h]
  _DWORD *v48; // [rsp+160h] [rbp+58h]
  void **v49; // [rsp+168h] [rbp+60h] BYREF
  va_list va2; // [rsp+168h] [rbp+60h]
  va_list va3; // [rsp+170h] [rbp+68h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v44 = va_arg(va1, void **);
  va_copy(va2, va1);
  v46 = va_arg(va2, void **);
  v48 = va_arg(va2, _DWORD *);
  va_copy(va3, va2);
  v49 = va_arg(va3, void **);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v6);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v42,
    *((struct _TP_TIMER **)Context + 1),
    v5,
    (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatAndSpatialSettings");
  if ( !v44 )
  {
    v7 = 5469LL;
LABEL_8:
    v8 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80004003LL);
    goto LABEL_52;
  }
  *v44 = 0LL;
  if ( !v46 )
  {
    v7 = 5472LL;
    goto LABEL_8;
  }
  *v46 = 0LL;
  v9 = v49;
  if ( v49 )
  {
    *v49 = 0LL;
    v9 = v49;
  }
  Src = 0LL;
  va_copy((va_list)Src_8[0], va);
  va_copy((va_list)Src_8[1], va1);
  va_copy(v28, va2);
  v10 = 1;
  va_copy(v40, va2);
  v29 = 0LL;
  pv = 0LL;
  LODWORD(v25) = 0;
  LOBYTE(v28) = 1;
  *(_QWORD *)v32 = 0LL;
  v33 = 1;
  v11 = *(_OWORD *)Src_8;
  Src_8[1] = 0LL;
  v39 = v11;
  if ( !v9 )
  {
    v31 = &v29;
    Src_8[0] = &Src;
    v8 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, void **, int *, __int64 *, _QWORD))(*(_QWORD *)g_PolicyConfig + 272LL))(
           g_PolicyConfig,
           a2,
           a3,
           &Src_8[1],
           v32,
           &v25,
           0LL);
    if ( (_BYTE)v28 )
    {
      v16 = *(void **)Src_8[0];
      *(_QWORD *)Src_8[0] = Src_8[1];
      if ( v16 )
        CoTaskMemFree(v16);
    }
    if ( v33 )
    {
      v17 = *v31;
      *v31 = *(LPVOID *)v32;
      if ( v17 )
        CoTaskMemFree(v17);
    }
    if ( v8 < 0 )
    {
      v15 = 5516LL;
      goto LABEL_41;
    }
LABEL_31:
    *v44 = MIDL_user_allocate(Src[8] + 18LL);
    if ( *v44 )
    {
      memcpy_0(*v44, Src, Src[8] + 18LL);
      *v46 = MIDL_user_allocate(0x48uLL);
      v18 = *v46;
      if ( *v46 )
      {
        v19 = v29;
        *v18 = *(_OWORD *)v29;
        v18[1] = v19[1];
        v18[2] = v19[2];
        v18[3] = v19[3];
        *((_QWORD *)v18 + 8) = *((_QWORD *)v19 + 8);
        v20 = (unsigned int)v25;
        if ( v48 )
          *v48 = v25;
        if ( v49 )
        {
          *v49 = MIDL_user_allocate(834 * v20);
          if ( !*v49 )
          {
            v15 = 5537LL;
            goto LABEL_40;
          }
          memcpy_0(*v49, pv, 834LL * (unsigned int)v25);
        }
        v10 = 0;
        v8 = 0;
        goto LABEL_44;
      }
      v15 = 5526LL;
    }
    else
    {
      v15 = 5522LL;
    }
LABEL_40:
    v8 = -2147024882;
    goto LABEL_41;
  }
  v37 = 0LL;
  Src_8[0] = &pv;
  v31 = &v29;
  p_Src = (void **)&Src;
  v38 = 1;
  v8 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, void **, int *, __int64 *, void **))(*(_QWORD *)g_PolicyConfig + 272LL))(
         g_PolicyConfig,
         a2,
         a3,
         &v37,
         v32,
         &v25,
         &Src_8[1]);
  if ( v38 )
  {
    v12 = *p_Src;
    *p_Src = v37;
    if ( v12 )
      CoTaskMemFree(v12);
  }
  if ( v33 )
  {
    v13 = *v31;
    *v31 = *(LPVOID *)v32;
    if ( v13 )
      CoTaskMemFree(v13);
  }
  if ( (_BYTE)v28 )
  {
    v14 = *(void **)Src_8[0];
    *(_QWORD *)Src_8[0] = Src_8[1];
    if ( v14 )
      CoTaskMemFree(v14);
  }
  if ( v8 >= 0 )
    goto LABEL_31;
  v15 = 5508LL;
LABEL_41:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)v8);
LABEL_44:
  v21 = pv;
  pv = 0LL;
  if ( v21 )
    CoTaskMemFree(v21);
  v22 = v29;
  v29 = 0LL;
  if ( v22 )
    CoTaskMemFree(v22);
  v23 = Src;
  Src = 0LL;
  if ( v23 )
    CoTaskMemFree(v23);
  if ( v10 )
  {
    v41 = 0;
    lambda_4a543277d9c921e33bd9dfb8d5328f97_::operator()((__int64)&v39);
  }
LABEL_52:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v42);
  return (unsigned int)v8;
}
