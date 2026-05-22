/*
 * XREFs of ?StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x18010E888
 * Callers:
 *     ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@USpatialGraphSettings@234@@Z @ 0x180115FDC (-RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV-$share.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18005F014 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180064040 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x18010DCA0 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::StartActivity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 v8; // rdi
  RTL_SRWLOCK *v9; // rcx
  const struct _TlgProvider_t *v10; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v12; // r8
  const GUID *v13; // r9
  DWORD v14; // [rsp+38h] [rbp-39h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  DWORD *v17; // [rsp+68h] [rbp-9h]
  int v18; // [rsp+70h] [rbp-1h]
  int v19; // [rsp+74h] [rbp+3h]
  __int64 v20; // [rsp+78h] [rbp+7h]
  int v21; // [rsp+80h] [rbp+Fh]
  int v22; // [rsp+84h] [rbp+13h]
  __int64 v23; // [rsp+88h] [rbp+17h]
  int v24; // [rsp+90h] [rbp+1Fh]
  int v25; // [rsp+94h] [rbp+23h]
  PSRWLOCK *p_SRWLock; // [rsp+98h] [rbp+27h]
  int v27; // [rsp+A0h] [rbp+2Fh]
  int v28; // [rsp+A4h] [rbp+33h]

  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v8 = *(_QWORD *)(a1 + 48);
  if ( **((_DWORD **)HolographicDriverClientContinuousTrace::Instance() + 1) <= 5u )
    *(_QWORD *)(v8 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  v9 = SRWLock;
  *(_DWORD *)v8 = 1;
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  v10 = (const struct _TlgProvider_t *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
  if ( *(_DWORD *)v10 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v14 = CurrentThreadId;
    v17 = &v14;
    v21 = 16;
    v24 = 16;
    p_SRWLock = &SRWLock;
    v18 = 4;
    v20 = a2;
    v23 = a3;
    LODWORD(SRWLock) = a4;
    v27 = 4;
    v12 = *(_QWORD *)(a1 + 48);
    if ( !*(_BYTE *)(v12 + 4)
      || (v13 = (const GUID *)(v12 + 24), !*(_DWORD *)(v12 + 24))
      && !*(_DWORD *)(v12 + 28)
      && !*(_DWORD *)(v12 + 32)
      && !*(_DWORD *)(v12 + 36) )
    {
      v13 = 0LL;
    }
    TlgWrite(v10, &unk_18016D257, (LPCGUID)(v12 + 8), v13, 6u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
