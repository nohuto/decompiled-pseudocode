/*
 * XREFs of ?StartActivity@DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z @ 0x1800AB034
 * Callers:
 *     _lambda_a518e9677c20752b15edab298cff80bd_::operator() @ 0x1800AF714 (_lambda_a518e9677c20752b15edab298cff80bd_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18005F014 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180064040 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved::StartActivity(
        SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved *this,
        int a2,
        int a3)
{
  __int64 v4; // rdi
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *v6; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v8; // r8
  const GUID *v9; // r9
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  PSRWLOCK *v12; // [rsp+60h] [rbp+7h]
  int v13; // [rsp+68h] [rbp+Fh]
  int v14; // [rsp+6Ch] [rbp+13h]
  int *v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  int *v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]
  int v21; // [rsp+C8h] [rbp+6Fh] BYREF
  int v22; // [rsp+D0h] [rbp+77h] BYREF

  v22 = a3;
  v21 = a2;
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v4 = *((_QWORD *)this + 6);
  if ( **((_DWORD **)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1) <= 4u )
    *(_QWORD *)(v4 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  v5 = SRWLock[0];
  *(_DWORD *)v4 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v6 > 4u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v14 = 0;
    v17 = 0;
    v20 = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v12 = SRWLock;
    v15 = &v21;
    v18 = &v22;
    v13 = 4;
    v16 = 4;
    v19 = 4;
    v8 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v8 + 4)
      || (v9 = (const GUID *)(v8 + 24), !*(_DWORD *)(v8 + 24))
      && !*(_DWORD *)(v8 + 28)
      && !*(_DWORD *)(v8 + 32)
      && !*(_DWORD *)(v8 + 36) )
    {
      v9 = 0LL;
    }
    TlgWrite(v6, &unk_1801694E6, (LPCGUID)(v8 + 8), v9, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved *)((char *)this + 8));
}
