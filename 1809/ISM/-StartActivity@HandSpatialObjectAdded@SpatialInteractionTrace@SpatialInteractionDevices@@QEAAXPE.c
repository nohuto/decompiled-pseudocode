/*
 * XREFs of ?StartActivity@HandSpatialObjectAdded@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WAEBU_GUID@@@Z @ 0x1800BD028
 * Callers:
 *     ?OnSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectWatcher@Holographic@34@AEBU_GUID@@@Z @ 0x1800BECA0 (-OnSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@E.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18005F014 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180064040 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::HandSpatialObjectAdded::StartActivity(
        SpatialInteractionDevices::SpatialInteractionTrace::HandSpatialObjectAdded *this,
        const wchar_t *a2,
        const struct _GUID *a3)
{
  __int64 v6; // rsi
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r8
  const GUID *v11; // r9
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  PSRWLOCK *v14; // [rsp+68h] [rbp+7h]
  __int64 v15; // [rsp+70h] [rbp+Fh]
  const wchar_t *v16; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  const struct _GUID *v19; // [rsp+88h] [rbp+27h]
  __int64 v20; // [rsp+90h] [rbp+2Fh]

  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v6 = *((_QWORD *)this + 6);
  if ( **((_DWORD **)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1) <= 4u )
    *(_QWORD *)(v6 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  v7 = SRWLock[0];
  *(_DWORD *)v6 = 1;
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v8 > 4u )
  {
    LODWORD(v9) = GetCurrentThreadId();
    v15 = 4LL;
    LODWORD(SRWLock[0]) = v9;
    v14 = SRWLock;
    LODWORD(v9) = 0;
    if ( a2 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a2[v9] );
    }
    v18 = 0;
    v19 = a3;
    if ( !a2 )
      a2 = &sourceString;
    v20 = 16LL;
    v16 = a2;
    v17 = 2 * v9 + 2;
    v10 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v10 + 4)
      || (v11 = (const GUID *)(v10 + 24), !*(_DWORD *)(v10 + 24))
      && !*(_DWORD *)(v10 + 28)
      && !*(_DWORD *)(v10 + 32)
      && !*(_DWORD *)(v10 + 36) )
    {
      v11 = 0LL;
    }
    TlgWrite(v8, &unk_18016A930, (LPCGUID)(v10 + 8), v11, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((SpatialInteractionDevices::SpatialInteractionTrace::HandSpatialObjectAdded *)((char *)this + 8));
}
