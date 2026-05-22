/*
 * XREFs of ?SpatialInteractionEyeGaze_CombinedGaze_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXMMMMMM@Z @ 0x1800F1924
 * Callers:
 *     ??$SpatialInteractionEyeGaze_CombinedGaze@AEAMAEAMAEAMAEAMAEAMAEAM@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAXAEAM00000@Z @ 0x1800F03C8 (--$SpatialInteractionEyeGaze_CombinedGaze@AEAMAEAMAEAMAEAMAEAMAEAM@SpatialInteractionTraceContin.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800E70A4 (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::SpatialInteractionEyeGaze_CombinedGaze_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  __int64 v9; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-51h] BYREF
  float *v11; // [rsp+58h] [rbp-31h]
  __int64 v12; // [rsp+60h] [rbp-29h]
  float *v13; // [rsp+68h] [rbp-21h]
  __int64 v14; // [rsp+70h] [rbp-19h]
  float *v15; // [rsp+78h] [rbp-11h]
  __int64 v16; // [rsp+80h] [rbp-9h]
  float *v17; // [rsp+88h] [rbp-1h]
  __int64 v18; // [rsp+90h] [rbp+7h]
  float *v19; // [rsp+98h] [rbp+Fh]
  __int64 v20; // [rsp+A0h] [rbp+17h]
  float *v21; // [rsp+A8h] [rbp+1Fh]
  __int64 v22; // [rsp+B0h] [rbp+27h]
  float v23; // [rsp+E0h] [rbp+57h] BYREF
  float v24; // [rsp+E8h] [rbp+5Fh] BYREF
  float v25; // [rsp+F0h] [rbp+67h] BYREF

  v25 = a4;
  v24 = a3;
  v23 = a2;
  v7 = (const struct _TlgProvider_t *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v7 > 4u )
  {
    if ( TlgKeywordOn(v7, 2uLL) )
    {
      v12 = v9;
      v11 = &v23;
      v13 = &v24;
      v15 = &v25;
      v17 = &a5;
      v19 = &a6;
      v21 = &a7;
      v14 = v9;
      v16 = v9;
      v18 = v9;
      v20 = v9;
      v22 = v9;
      TlgWrite(v8, &unk_18019FC6C, 0LL, 0LL, 8u, &pData);
    }
  }
}
