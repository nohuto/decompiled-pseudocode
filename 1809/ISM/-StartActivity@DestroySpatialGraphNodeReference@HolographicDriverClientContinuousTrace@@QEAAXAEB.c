/*
 * XREFs of ?StartActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18010EE18
 * Callers:
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x180115D18 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18005F014 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180064040 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x18010DCA0 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::StartActivity(
        HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference *this,
        const struct _GUID *a2,
        const struct SPATIAL_NODE_ID *a3)
{
  __int64 v6; // rdi
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v10; // r8
  const GUID *v11; // r9
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  PSRWLOCK *v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  const struct _GUID *v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  const struct SPATIAL_NODE_ID *v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]

  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v6 = *((_QWORD *)this + 6);
  if ( **((_DWORD **)HolographicDriverClientContinuousTrace::Instance() + 1) <= 5u )
    *(_QWORD *)(v6 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  v7 = SRWLock[0];
  *(_DWORD *)v6 = 1;
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
  if ( *(_DWORD *)v8 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v16 = 0;
    v19 = 0;
    v22 = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v14 = SRWLock;
    v18 = 16;
    v21 = 16;
    v15 = 4;
    v17 = a2;
    v20 = a3;
    v10 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v10 + 4)
      || (v11 = (const GUID *)(v10 + 24), !*(_DWORD *)(v10 + 24))
      && !*(_DWORD *)(v10 + 28)
      && !*(_DWORD *)(v10 + 32)
      && !*(_DWORD *)(v10 + 36) )
    {
      v11 = 0LL;
    }
    TlgWrite(v8, &unk_18016D0D7, (LPCGUID)(v10 + 8), v11, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference *)((char *)this + 8));
}
