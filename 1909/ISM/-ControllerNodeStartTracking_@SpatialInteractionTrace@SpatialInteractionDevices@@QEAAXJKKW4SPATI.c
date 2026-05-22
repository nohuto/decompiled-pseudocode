/*
 * XREFs of ?ControllerNodeStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKW4SPATIAL_TRACKING_STATE@@_NKAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x180164DF4
 * Callers:
 *     _lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator() @ 0x1801634B0 (_lambda_0ef360edd2b0e079ee5004fb777ac3fe_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

char __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeStartTracking_(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8)
{
  _QWORD *v8; // rax
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  __int64 v11; // r9
  int v13; // [rsp+38h] [rbp-89h] BYREF
  int v14; // [rsp+3Ch] [rbp-85h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-79h] BYREF
  int *v16; // [rsp+68h] [rbp-59h]
  __int64 v17; // [rsp+70h] [rbp-51h]
  int *v18; // [rsp+78h] [rbp-49h]
  __int64 v19; // [rsp+80h] [rbp-41h]
  int *v20; // [rsp+88h] [rbp-39h]
  __int64 v21; // [rsp+90h] [rbp-31h]
  char *v22; // [rsp+98h] [rbp-29h]
  __int64 v23; // [rsp+A0h] [rbp-21h]
  int *v24; // [rsp+A8h] [rbp-19h]
  __int64 v25; // [rsp+B0h] [rbp-11h]
  int *v26; // [rsp+B8h] [rbp-9h]
  __int64 v27; // [rsp+C0h] [rbp-1h]
  __int64 v28; // [rsp+C8h] [rbp+7h]
  __int64 v29; // [rsp+D0h] [rbp+Fh]
  char *v30; // [rsp+D8h] [rbp+17h]
  __int64 v31; // [rsp+E0h] [rbp+1Fh]
  int v32; // [rsp+110h] [rbp+4Fh] BYREF
  int v33; // [rsp+118h] [rbp+57h] BYREF
  int v34; // [rsp+120h] [rbp+5Fh] BYREF

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v8 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         a1,
         (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  v9 = (const struct _TlgProvider_t *)v8[1];
  if ( *(_DWORD *)v9 > 4u )
  {
    LOBYTE(v8) = TlgKeywordOn(v9, 0x400000000000uLL);
    if ( (_BYTE)v8 )
    {
      v16 = &v32;
      v18 = &v33;
      v20 = &v34;
      v22 = &a6;
      v13 = a5;
      v24 = &v13;
      v14 = *(_DWORD *)(a8 + 16);
      v26 = &v14;
      v30 = &a7;
      v17 = v11;
      v19 = v11;
      v21 = v11;
      v23 = 1LL;
      v25 = v11;
      v27 = v11;
      v28 = a8;
      v29 = 16LL;
      v31 = v11;
      LOBYTE(v8) = TlgWrite(v10, &unk_1801A459E, 0LL, 0LL, 0xAu, &pData);
    }
  }
  return (char)v8;
}
