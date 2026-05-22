/*
 * XREFs of ?StartActivity@OpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x18010ACF8
 * Callers:
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x1801162B8 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING_.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18005F014 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180064040 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::OpenHolographicDevice::StartActivity(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4)
{
  __int64 v8; // r14
  RTL_SRWLOCK *v9; // rcx
  const struct _TlgProvider_t *v10; // r14
  DWORD CurrentThreadId; // eax
  const char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  const GUID *v15; // r9
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  PSRWLOCK *v18; // [rsp+60h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-11h]
  const char *v20; // [rsp+70h] [rbp-9h]
  int v21; // [rsp+78h] [rbp-1h]
  int v22; // [rsp+7Ch] [rbp+3h]
  const WCHAR *v23; // [rsp+80h] [rbp+7h]
  int v24; // [rsp+88h] [rbp+Fh]
  int v25; // [rsp+8Ch] [rbp+13h]
  __int64 v26; // [rsp+90h] [rbp+17h]
  __int64 v27; // [rsp+98h] [rbp+1Fh]

  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    SRWLock);
  v8 = *(_QWORD *)(a1 + 48);
  if ( **((_DWORD **)HolographicDriverClientTrace::Instance() + 1) <= 5u )
    *(_QWORD *)(v8 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  v9 = SRWLock[0];
  *(_DWORD *)v8 = 1;
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  v10 = (const struct _TlgProvider_t *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v10 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v19 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v18 = SRWLock;
    if ( a3 )
    {
      if ( a3 == 1 )
        v12 = "SpatialGraph";
      else
        v12 = "(unknown)";
    }
    else
    {
      v12 = "Display";
    }
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v20 = v12;
    v21 = v13 + 1;
    LODWORD(v12) = 0;
    v22 = 0;
    if ( a2 )
    {
      v12 = (const char *)-1LL;
      do
        ++v12;
      while ( a2[(_QWORD)v12] );
    }
    v25 = 0;
    v26 = a4;
    if ( !a2 )
      a2 = &sourceString;
    v27 = 16LL;
    v23 = a2;
    v24 = 2 * (_DWORD)v12 + 2;
    v14 = *(_QWORD *)(a1 + 48);
    if ( !*(_BYTE *)(v14 + 4)
      || (v15 = (const GUID *)(v14 + 24), !*(_DWORD *)(v14 + 24))
      && !*(_DWORD *)(v14 + 28)
      && !*(_DWORD *)(v14 + 32)
      && !*(_DWORD *)(v14 + 36) )
    {
      v15 = 0LL;
    }
    TlgWrite(v10, &unk_18016BEE4, (LPCGUID)(v14 + 8), v15, 6u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
