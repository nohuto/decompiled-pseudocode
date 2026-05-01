/*
 * XREFs of ?StopActivity@InitializePosition@ShellPositionerTelemetry@@MEAAXXZ @ 0x18006E4C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002F628 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803073FC (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellPositionerTelemetry::InitializePosition::StopActivity(
        ShellPositionerTelemetry::InitializePosition *this)
{
  int *v2; // rdi
  int v3; // eax
  int *v4; // rdi
  __int64 v5; // rdi
  const GUID *v6; // r8
  TraceLoggingHProvider v7; // r10
  WINBOOL v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  int v10; // [rsp+40h] [rbp-C8h] BYREF
  int v11; // [rsp+44h] [rbp-C4h] BYREF
  int v12; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+4Ch] [rbp-BCh] BYREF
  int v14; // [rsp+50h] [rbp-B8h] BYREF
  int v15; // [rsp+54h] [rbp-B4h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-B0h] BYREF
  int v17; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID v19; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-98h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-88h] BYREF
  __int64 v23; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  void *v25; // [rsp+A8h] [rbp-60h]
  int v26; // [rsp+B0h] [rbp-58h]
  int v27; // [rsp+B4h] [rbp-54h]
  int *v28; // [rsp+B8h] [rbp-50h]
  __int64 v29; // [rsp+C0h] [rbp-48h]
  __int64 *v30; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  int *v33; // [rsp+F8h] [rbp-10h]
  __int64 v34; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+108h] [rbp+0h] BYREF
  int *v36; // [rsp+118h] [rbp+10h]
  __int64 v37; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+128h] [rbp+20h] BYREF
  int *v39; // [rsp+138h] [rbp+30h]
  __int64 v40; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+148h] [rbp+40h] BYREF
  int *v42; // [rsp+158h] [rbp+50h]
  __int64 v43; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+168h] [rbp+60h] BYREF
  int *v45; // [rsp+178h] [rbp+70h]
  __int64 v46; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+198h] [rbp+90h] BYREF
  int *v49; // [rsp+1A8h] [rbp+A0h]
  __int64 v50; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+1C8h] [rbp+C0h] BYREF
  int *v53; // [rsp+1D8h] [rbp+D0h]
  __int64 v54; // [rsp+1E0h] [rbp+D8h]
  int *v55; // [rsp+1E8h] [rbp+E0h]
  __int64 v56; // [rsp+1F0h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+1F8h] [rbp+F0h] BYREF

  v23 = -2LL;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v19 = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v8, &v19) && v8 )
    {
      v19 = &qword_18050F8E8;
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    if ( **((_DWORD **)v19 + 1) > 5u )
    {
      v9 = v4[1];
      v33 = &v9;
      v34 = 4LL;
      TlgCreateSz(&pDesc, *((LPCSTR *)v4 + 6));
      v36 = v4 + 14;
      v37 = 4LL;
      TlgCreateSz(&v38, *((LPCSTR *)v4 + 15));
      v10 = *v4;
      v39 = &v10;
      v40 = 4LL;
      TlgCreateWsz(&v41, *((LPCWSTR *)v4 + 2));
      v11 = v4[6];
      v42 = &v11;
      v43 = 4LL;
      TlgCreateSz(&v44, *((LPCSTR *)v4 + 8));
      v12 = v4[18];
      v45 = &v12;
      v46 = 4LL;
      TlgCreateSz(&v47, *((LPCSTR *)v4 + 10));
      TlgCreateWsz(&v48, *((LPCWSTR *)v4 + 11));
      v13 = v4[24];
      v49 = &v13;
      v50 = 4LL;
      TlgCreateSz(&v51, *((LPCSTR *)v4 + 13));
      TlgCreateWsz(&v52, *((LPCWSTR *)v4 + 14));
      v14 = v4[2];
      v53 = &v14;
      v54 = 4LL;
      v15 = v4[15];
      v55 = &v15;
      v56 = 4LL;
      TlgCreateSz(&v57, *((LPCSTR *)v4 + 5));
      TlgWrite(v7, &unk_180465D72, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      (__int64)&SRWLock);
    **((_DWORD **)this + 6) = 2;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_18050F8E8;
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 5u )
    {
      v17 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v28 = &v17;
      v29 = 4LL;
      LODWORD(v18) = GetCurrentThreadId();
      v30 = &v18;
      v31 = 4LL;
      v6 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180465E9F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&EventDescriptor.Level = 517;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v25 = &unk_180465EAA;
      v26 = 55;
      v27 = 1;
      EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, v6, 0LL, 4u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ShellPositionerTelemetry::InitializePosition *)((char *)this + 8));
}
