/*
 * XREFs of ?StartActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x18010B2B4
 * Callers:
 *     ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x18010FBC0 (-CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18005F014 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180064040 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::TelemetryCloseHolographicDevice::StartActivity(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  RTL_SRWLOCK *v10; // rcx
  const struct _TlgProvider_t *v11; // rdi
  DWORD CurrentThreadId; // eax
  const char *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  const GUID *v16; // r9
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  PSRWLOCK *v19; // [rsp+68h] [rbp-19h]
  __int64 v20; // [rsp+70h] [rbp-11h]
  const char *v21; // [rsp+78h] [rbp-9h]
  int v22; // [rsp+80h] [rbp-1h]
  int v23; // [rsp+84h] [rbp+3h]
  const WCHAR *v24; // [rsp+88h] [rbp+7h]
  int v25; // [rsp+90h] [rbp+Fh]
  int v26; // [rsp+94h] [rbp+13h]
  __int64 v27; // [rsp+98h] [rbp+17h]
  __int64 v28; // [rsp+A0h] [rbp+1Fh]

  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    SRWLock);
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v9 > 5u
    && (*(_QWORD *)(v9 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v9 + 24) & 0x400000000000LL) == *(_QWORD *)(v9 + 24) )
  {
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  }
  else
  {
    *(_QWORD *)(v8 + 8) = 0LL;
  }
  v10 = SRWLock[0];
  *(_DWORD *)v8 = 1;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  v11 = (const struct _TlgProvider_t *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v11 > 5u
    && (*((_QWORD *)v11 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v11 + 3) & 0x400000000000LL) == *((_QWORD *)v11 + 3) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v20 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v19 = SRWLock;
    if ( a3 )
    {
      if ( a3 == 1 )
        v13 = "SpatialGraph";
      else
        v13 = "(unknown)";
    }
    else
    {
      v13 = "Display";
    }
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v21 = v13;
    v22 = v14 + 1;
    LODWORD(v13) = 0;
    v23 = 0;
    if ( a2 )
    {
      v13 = (const char *)-1LL;
      do
        ++v13;
      while ( a2[(_QWORD)v13] );
    }
    v26 = 0;
    v27 = a4;
    if ( !a2 )
      a2 = &sourceString;
    v28 = 16LL;
    v24 = a2;
    v25 = 2 * (_DWORD)v13 + 2;
    v15 = *(_QWORD *)(a1 + 48);
    if ( !*(_BYTE *)(v15 + 4)
      || (v16 = (const GUID *)(v15 + 24), !*(_DWORD *)(v15 + 24))
      && !*(_DWORD *)(v15 + 28)
      && !*(_DWORD *)(v15 + 32)
      && !*(_DWORD *)(v15 + 36) )
    {
      v16 = 0LL;
    }
    TlgWrite(v11, &unk_18016C3C8, (LPCGUID)(v15 + 8), v16, 6u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
