/*
 * XREFs of ?HandStateRead_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXU_GUID@@_J_N2H22@Z @ 0x1800F4BE8
 * Callers:
 *     ?ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ @ 0x1800F6150 (-ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800E6E74 (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::HandStateRead_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        struct _GUID *a2,
        __int64 a3,
        char a4,
        bool a5,
        char a6,
        bool a7,
        bool a8)
{
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-69h] BYREF
  struct _GUID *v12; // [rsp+58h] [rbp-49h]
  __int64 v13; // [rsp+60h] [rbp-41h]
  __int64 *v14; // [rsp+68h] [rbp-39h]
  __int64 v15; // [rsp+70h] [rbp-31h]
  char *v16; // [rsp+78h] [rbp-29h]
  __int64 v17; // [rsp+80h] [rbp-21h]
  bool *v18; // [rsp+88h] [rbp-19h]
  __int64 v19; // [rsp+90h] [rbp-11h]
  char *v20; // [rsp+98h] [rbp-9h]
  __int64 v21; // [rsp+A0h] [rbp-1h]
  bool *v22; // [rsp+A8h] [rbp+7h]
  __int64 v23; // [rsp+B0h] [rbp+Fh]
  bool *v24; // [rsp+B8h] [rbp+17h]
  __int64 v25; // [rsp+C0h] [rbp+1Fh]
  __int64 v26; // [rsp+F8h] [rbp+57h] BYREF
  char v27; // [rsp+100h] [rbp+5Fh] BYREF

  v27 = a4;
  v26 = a3;
  v9 = (const struct _TlgProvider_t *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v9 > 5u )
  {
    if ( TlgKeywordOn(v9, 2uLL) )
    {
      v12 = a2;
      v14 = &v26;
      v16 = &v27;
      v18 = &a5;
      v20 = &a6;
      v22 = &a7;
      v24 = &a8;
      v13 = 16LL;
      v15 = 8LL;
      v17 = 1LL;
      v19 = 1LL;
      v21 = 4LL;
      v23 = 1LL;
      v25 = 1LL;
      TlgWrite(v10, &unk_18019FDE1, 0LL, 0LL, 9u, &pData);
    }
  }
}
