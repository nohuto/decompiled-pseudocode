/*
 * XREFs of ?InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z @ 0x18009D31C
 * Callers:
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@@Z @ 0x18009ECC0 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatia.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x1800A0388 (-get@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersC.c)
 */

void __fastcall RawInputProvidersContinuousTracing::InputReportProcessed_(
        RawInputProvidersContinuousTracing *this,
        int a2,
        int a3,
        struct InputInfo *a4)
{
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-C0h] BYREF
  int *v12; // [rsp+68h] [rbp-A0h]
  __int64 v13; // [rsp+70h] [rbp-98h]
  char *v14; // [rsp+78h] [rbp-90h]
  __int64 v15; // [rsp+80h] [rbp-88h]
  int *v16; // [rsp+88h] [rbp-80h]
  __int64 v17; // [rsp+90h] [rbp-78h]
  int *v18; // [rsp+98h] [rbp-70h]
  __int64 v19; // [rsp+A0h] [rbp-68h]
  char *v20; // [rsp+A8h] [rbp-60h]
  __int64 v21; // [rsp+B0h] [rbp-58h]
  char *v22; // [rsp+B8h] [rbp-50h]
  __int64 v23; // [rsp+C0h] [rbp-48h]
  char *v24; // [rsp+C8h] [rbp-40h]
  __int64 v25; // [rsp+D0h] [rbp-38h]
  char *v26; // [rsp+D8h] [rbp-30h]
  __int64 v27; // [rsp+E0h] [rbp-28h]
  char *v28; // [rsp+E8h] [rbp-20h]
  __int64 v29; // [rsp+F0h] [rbp-18h]
  char *v30; // [rsp+F8h] [rbp-10h]
  __int64 v31; // [rsp+100h] [rbp-8h]
  char *v32; // [rsp+108h] [rbp+0h]
  __int64 v33; // [rsp+110h] [rbp+8h]
  char *v34; // [rsp+118h] [rbp+10h]
  __int64 v35; // [rsp+120h] [rbp+18h]
  char *v36; // [rsp+128h] [rbp+20h]
  __int64 v37; // [rsp+130h] [rbp+28h]
  char *v38; // [rsp+138h] [rbp+30h]
  __int64 v39; // [rsp+140h] [rbp+38h]
  char *v40; // [rsp+148h] [rbp+40h]
  __int64 v41; // [rsp+150h] [rbp+48h]
  char *v42; // [rsp+158h] [rbp+50h]
  __int64 v43; // [rsp+160h] [rbp+58h]
  char *v44; // [rsp+168h] [rbp+60h]
  __int64 v45; // [rsp+170h] [rbp+68h]
  char *v46; // [rsp+178h] [rbp+70h]
  __int64 v47; // [rsp+180h] [rbp+78h]
  char *v48; // [rsp+188h] [rbp+80h]
  __int64 v49; // [rsp+190h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+198h] [rbp+90h] BYREF
  int *v51; // [rsp+1B8h] [rbp+B0h]
  __int64 v52; // [rsp+1C0h] [rbp+B8h]
  int *v53; // [rsp+1C8h] [rbp+C0h]
  __int64 v54; // [rsp+1D0h] [rbp+C8h]
  int v55; // [rsp+200h] [rbp+F8h] BYREF
  int v56; // [rsp+208h] [rbp+100h] BYREF

  v56 = a3;
  v55 = a2;
  if ( a3 >= 0 )
  {
    v7 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
                                             this,
                                             lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_)
                                         + 8);
    if ( *(_DWORD *)v7 > 5u && TlgKeywordOn(v7, 2uLL) )
    {
      v13 = 4LL;
      v12 = &v55;
      v14 = (char *)a4 + 72;
      v9 = *((_DWORD *)a4 + 17);
      v16 = &v9;
      v10 = *((_DWORD *)a4 + 16);
      v18 = &v10;
      v20 = (char *)a4 + 784;
      v22 = (char *)a4 + 704;
      v24 = (char *)a4 + 728;
      v26 = (char *)a4 + 771;
      v28 = (char *)a4 + 760;
      v30 = (char *)a4 + 772;
      v32 = (char *)a4 + 752;
      v34 = (char *)a4 + 756;
      v36 = (char *)a4 + 770;
      v38 = (char *)a4 + 744;
      v40 = (char *)a4 + 748;
      v42 = (char *)a4 + 816;
      v44 = (char *)a4 + 804;
      v46 = (char *)a4 + 817;
      v48 = (char *)a4 + 788;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 1LL;
      v23 = 1LL;
      v25 = 4LL;
      v27 = 1LL;
      v29 = 4LL;
      v31 = 1LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 1LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 1LL;
      v45 = 4LL;
      v47 = 1LL;
      v49 = 4LL;
      TlgWrite(v8, &unk_18019C827, 0LL, 0LL, 0x15u, &v11);
    }
  }
  else
  {
    v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
                                             this,
                                             lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_)
                                         + 8);
    if ( *(_DWORD *)v5 > 2u )
    {
      if ( TlgKeywordOn(v5, 2uLL) )
      {
        v51 = &v55;
        v53 = &v56;
        v52 = 4LL;
        v54 = 4LL;
        TlgWrite(v6, &unk_18019C964, 0LL, 0LL, 4u, &pData);
      }
    }
  }
}
