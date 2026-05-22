/*
 * XREFs of ?SpatialObjectStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@JW4SPATIAL_TRACKING_STATE@@AEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x1800EDCA8
 * Callers:
 *     _lambda_2610a4571c07b034f8353f9aca44fe5c_::operator() @ 0x1800EAF44 (_lambda_2610a4571c07b034f8353f9aca44fe5c_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

char __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectStartTracking_(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5)
{
  _QWORD *v7; // rax
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  __int64 v10; // r10
  int v12; // [rsp+38h] [rbp-41h] BYREF
  int v13; // [rsp+3Ch] [rbp-3Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-31h] BYREF
  __int64 v15; // [rsp+68h] [rbp-11h]
  __int64 v16; // [rsp+70h] [rbp-9h]
  int *v17; // [rsp+78h] [rbp-1h]
  __int64 v18; // [rsp+80h] [rbp+7h]
  int *v19; // [rsp+88h] [rbp+Fh]
  __int64 v20; // [rsp+90h] [rbp+17h]
  int *v21; // [rsp+98h] [rbp+1Fh]
  __int64 v22; // [rsp+A0h] [rbp+27h]
  __int64 v23; // [rsp+A8h] [rbp+2Fh]
  __int64 v24; // [rsp+B0h] [rbp+37h]
  int v25; // [rsp+E8h] [rbp+6Fh] BYREF

  v25 = a3;
  v7 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         a1,
         (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  v8 = (const struct _TlgProvider_t *)v7[1];
  if ( *(_DWORD *)v8 > 4u )
  {
    LOBYTE(v7) = TlgKeywordOn(v8, 2uLL);
    if ( (_BYTE)v7 )
    {
      v17 = &v25;
      v19 = &v12;
      v15 = a2;
      v13 = *(_DWORD *)(a5 + 16);
      v21 = &v13;
      v16 = 16LL;
      v18 = v10;
      v12 = a4;
      v20 = v10;
      v22 = v10;
      v23 = a5;
      v24 = 16LL;
      LOBYTE(v7) = TlgWrite(v9, &unk_18019F8C8, 0LL, 0LL, 7u, &pData);
    }
  }
  return (char)v7;
}
