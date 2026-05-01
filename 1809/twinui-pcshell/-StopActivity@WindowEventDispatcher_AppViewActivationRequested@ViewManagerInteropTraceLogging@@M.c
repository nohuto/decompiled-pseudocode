/*
 * XREFs of ?StopActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x180059450
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800EFCD4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?zInternalStop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180117E9C (-zInternalStop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::StopActivity(
        ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested *this)
{
  int *v2; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rsi
  char v6; // di
  RTL_SRWLOCK *v7; // rsi
  PSRWLOCK *p_SRWLock; // rax
  __int64 v9; // rdi
  int v10; // ecx
  const GUID *v11; // r8
  REGHANDLE v12; // rcx
  char *v13; // rbx
  __int64 *v14; // rcx
  __int64 v15; // rax
  const CHAR *v16; // rdx
  const CHAR *v17; // rdx
  const WCHAR *v18; // rdx
  const CHAR *v19; // rdx
  const CHAR *v20; // rdx
  const CHAR *v21; // rdx
  int v22; // ecx
  const CHAR *v23; // rdx
  TraceLoggingHProvider v24; // r10
  int UserDataCount; // [rsp+28h] [rbp-E0h]
  DWORD CurrentThreadId; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL v27; // [rsp+3Ch] [rbp-CCh] BYREF
  int v28; // [rsp+40h] [rbp-C8h] BYREF
  int v29; // [rsp+44h] [rbp-C4h] BYREF
  int v30; // [rsp+48h] [rbp-C0h] BYREF
  int v31; // [rsp+4Ch] [rbp-BCh] BYREF
  int v32; // [rsp+50h] [rbp-B8h] BYREF
  int v33; // [rsp+54h] [rbp-B4h] BYREF
  int v34; // [rsp+58h] [rbp-B0h] BYREF
  WINBOOL fPending; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID v37; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-98h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp-90h] BYREF
  PSRWLOCK v40; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  void *v43; // [rsp+A8h] [rbp-60h]
  int v44; // [rsp+B0h] [rbp-58h]
  int v45; // [rsp+B4h] [rbp-54h]
  __int64 *v46; // [rsp+B8h] [rbp-50h]
  __int64 v47; // [rsp+C0h] [rbp-48h]
  DWORD *p_CurrentThreadId; // [rsp+C8h] [rbp-40h]
  __int64 v49; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  int *v51; // [rsp+F8h] [rbp-10h]
  __int64 v52; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+108h] [rbp+0h] BYREF
  int *v54; // [rsp+118h] [rbp+10h]
  __int64 v55; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+128h] [rbp+20h] BYREF
  int *v57; // [rsp+138h] [rbp+30h]
  __int64 v58; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+148h] [rbp+40h] BYREF
  int *v60; // [rsp+158h] [rbp+50h]
  __int64 v61; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+168h] [rbp+60h] BYREF
  int *v63; // [rsp+178h] [rbp+70h]
  __int64 v64; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+198h] [rbp+90h] BYREF
  int *v67; // [rsp+1A8h] [rbp+A0h]
  __int64 v68; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+1C8h] [rbp+C0h] BYREF
  int *v71; // [rsp+1D8h] [rbp+D0h]
  __int64 v72; // [rsp+1E0h] [rbp+D8h]
  int *v73; // [rsp+1E8h] [rbp+E0h]
  __int64 v74; // [rsp+1F0h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+1F8h] [rbp+F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  CurrentThreadId = 0;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v37 = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v27, &v37) && v27 )
    {
      v37 = &qword_18050FB08;
      qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
      qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
    }
    if ( **((_DWORD **)v37 + 1) > 5u )
    {
      v16 = (const CHAR *)*((_QWORD *)v4 + 6);
      v28 = v4[1];
      v51 = &v28;
      v52 = 4LL;
      TlgCreateSz(&pDesc, v16);
      v17 = (const CHAR *)*((_QWORD *)v4 + 15);
      v54 = v4 + 14;
      v55 = 4LL;
      TlgCreateSz(&v56, v17);
      v18 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v29 = *v4;
      v57 = &v29;
      v58 = 4LL;
      TlgCreateWsz(&v59, v18);
      v19 = (const CHAR *)*((_QWORD *)v4 + 8);
      v30 = v4[6];
      v60 = &v30;
      v61 = 4LL;
      TlgCreateSz(&v62, v19);
      v20 = (const CHAR *)*((_QWORD *)v4 + 10);
      v31 = v4[18];
      v63 = &v31;
      v64 = 4LL;
      TlgCreateSz(&v65, v20);
      TlgCreateWsz(&v66, *((LPCWSTR *)v4 + 11));
      v21 = (const CHAR *)*((_QWORD *)v4 + 13);
      v32 = v4[24];
      v67 = &v32;
      v68 = 4LL;
      TlgCreateSz(&v69, v21);
      TlgCreateWsz(&v70, *((LPCWSTR *)v4 + 14));
      v22 = v4[2];
      v23 = (const CHAR *)*((_QWORD *)v4 + 5);
      v71 = &v33;
      v34 = v4[15];
      v33 = v22;
      v73 = &v34;
      v72 = 4LL;
      v74 = 4LL;
      TlgCreateSz(&v75, v23);
      TlgWrite(v24, &unk_18045C3CF, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v5 )
    {
      v7 = v5 + 31;
      AcquireSRWLockExclusive(v7);
      p_SRWLock = &v40;
      v40 = v7;
      v6 = 1;
    }
    else
    {
      v6 = 2;
      SRWLock = 0LL;
      v7 = 0LL;
      p_SRWLock = &SRWLock;
    }
    *p_SRWLock = 0LL;
    if ( (v6 & 2) != 0 )
    {
      v6 &= ~2u;
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    if ( (v6 & 1) != 0 && v40 )
      ReleaseSRWLockExclusive(v40);
    **((_DWORD **)this + 6) = 2;
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_18050FB08;
      qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
      qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
    }
    v9 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u )
    {
      v10 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v46 = &v36;
      LODWORD(v36) = v10;
      v47 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v49 = 4LL;
      v11 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v9 + 8);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18045C316 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v12 = *(_QWORD *)(v9 + 32);
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v43 = &unk_18045C321;
      UserData.Reserved = 2;
      v44 = 85;
      v45 = 1;
      EventWriteTransfer(v12, &EventDescriptor, v11, 0LL, 4u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v13 = (char *)this + 8;
    if ( *((_DWORD *)v13 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"internal\\sdk\\inc\\wil\\Result.h",
        (const char *)0x8007029CLL,
        UserDataCount);
    v14 = *(__int64 **)v13;
    *((_DWORD *)v13 + 6) = 0;
    while ( 1 )
    {
      v15 = *v14;
      if ( !*v14 )
        break;
      if ( (char *)v15 == v13 )
      {
        *v14 = *((_QWORD *)v13 + 2);
        break;
      }
      v14 = (__int64 *)(v15 + 16);
      *(_QWORD *)v13 = v15 + 16;
    }
    *(_QWORD *)v13 = 0LL;
  }
}
