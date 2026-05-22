/*
 * XREFs of ?SetHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKKGEG@Z @ 0x1801683F8
 * Callers:
 *     wil::details::ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___::operator() @ 0x180163924 (wil--details--ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800E6E74 (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::SetHapticsFeedback_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // rdx
  const struct _TlgProvider_t *v9; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-51h] BYREF
  int *v11; // [rsp+58h] [rbp-31h]
  __int64 v12; // [rsp+60h] [rbp-29h]
  int *v13; // [rsp+68h] [rbp-21h]
  __int64 v14; // [rsp+70h] [rbp-19h]
  int *v15; // [rsp+78h] [rbp-11h]
  __int64 v16; // [rsp+80h] [rbp-9h]
  char *v17; // [rsp+88h] [rbp-1h]
  __int64 v18; // [rsp+90h] [rbp+7h]
  char *v19; // [rsp+98h] [rbp+Fh]
  __int64 v20; // [rsp+A0h] [rbp+17h]
  char *v21; // [rsp+A8h] [rbp+1Fh]
  __int64 v22; // [rsp+B0h] [rbp+27h]
  int v23; // [rsp+E0h] [rbp+57h] BYREF
  int v24; // [rsp+E8h] [rbp+5Fh] BYREF
  int v25; // [rsp+F0h] [rbp+67h] BYREF

  v25 = a4;
  v24 = a3;
  v23 = a2;
  v7 = (const struct _TlgProvider_t *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v7 > 5u )
  {
    if ( TlgKeywordOn(v7, 2uLL) )
    {
      v12 = 4LL;
      v11 = &v23;
      v13 = &v24;
      v15 = &v25;
      v17 = &a5;
      v19 = &a6;
      v21 = &a7;
      v14 = 4LL;
      v16 = 4LL;
      v18 = v8;
      v20 = 1LL;
      v22 = v8;
      TlgWrite(v9, &unk_1801A49B9, 0LL, 0LL, 8u, &pData);
    }
  }
}
