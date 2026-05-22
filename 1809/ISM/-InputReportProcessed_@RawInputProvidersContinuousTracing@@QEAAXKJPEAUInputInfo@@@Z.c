/*
 * XREFs of ?InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z @ 0x1800607E0
 * Callers:
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@@Z @ 0x180062B90 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatia.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ @ 0x1800605FC (-Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersContinuousTracing::InputReportProcessed_(
        RawInputProvidersContinuousTracing *this,
        int a2,
        int a3,
        struct InputInfo *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // [rsp+38h] [rbp-D0h] BYREF
  int v8; // [rsp+3Ch] [rbp-CCh] BYREF
  EVENT_DATA_DESCRIPTOR v9; // [rsp+48h] [rbp-C0h] BYREF
  int *v10; // [rsp+68h] [rbp-A0h]
  __int64 v11; // [rsp+70h] [rbp-98h]
  char *v12; // [rsp+78h] [rbp-90h]
  __int64 v13; // [rsp+80h] [rbp-88h]
  int *v14; // [rsp+88h] [rbp-80h]
  __int64 v15; // [rsp+90h] [rbp-78h]
  int *v16; // [rsp+98h] [rbp-70h]
  __int64 v17; // [rsp+A0h] [rbp-68h]
  char *v18; // [rsp+A8h] [rbp-60h]
  __int64 v19; // [rsp+B0h] [rbp-58h]
  char *v20; // [rsp+B8h] [rbp-50h]
  __int64 v21; // [rsp+C0h] [rbp-48h]
  char *v22; // [rsp+C8h] [rbp-40h]
  __int64 v23; // [rsp+D0h] [rbp-38h]
  char *v24; // [rsp+D8h] [rbp-30h]
  __int64 v25; // [rsp+E0h] [rbp-28h]
  char *v26; // [rsp+E8h] [rbp-20h]
  __int64 v27; // [rsp+F0h] [rbp-18h]
  char *v28; // [rsp+F8h] [rbp-10h]
  __int64 v29; // [rsp+100h] [rbp-8h]
  char *v30; // [rsp+108h] [rbp+0h]
  __int64 v31; // [rsp+110h] [rbp+8h]
  char *v32; // [rsp+118h] [rbp+10h]
  __int64 v33; // [rsp+120h] [rbp+18h]
  char *v34; // [rsp+128h] [rbp+20h]
  __int64 v35; // [rsp+130h] [rbp+28h]
  char *v36; // [rsp+138h] [rbp+30h]
  __int64 v37; // [rsp+140h] [rbp+38h]
  char *v38; // [rsp+148h] [rbp+40h]
  __int64 v39; // [rsp+150h] [rbp+48h]
  char *v40; // [rsp+158h] [rbp+50h]
  __int64 v41; // [rsp+160h] [rbp+58h]
  char *v42; // [rsp+168h] [rbp+60h]
  __int64 v43; // [rsp+170h] [rbp+68h]
  char *v44; // [rsp+178h] [rbp+70h]
  __int64 v45; // [rsp+180h] [rbp+78h]
  char *v46; // [rsp+188h] [rbp+80h]
  __int64 v47; // [rsp+190h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+198h] [rbp+90h] BYREF
  int *v49; // [rsp+1B8h] [rbp+B0h]
  __int64 v50; // [rsp+1C0h] [rbp+B8h]
  int *v51; // [rsp+1C8h] [rbp+C0h]
  __int64 v52; // [rsp+1D0h] [rbp+C8h]
  int v53; // [rsp+200h] [rbp+F8h] BYREF
  int v54; // [rsp+208h] [rbp+100h] BYREF

  v54 = a3;
  v53 = a2;
  if ( a3 >= 0 )
  {
    v6 = *((_QWORD *)RawInputProvidersContinuousTracing::Instance() + 1);
    if ( *(_DWORD *)v6 > 5u && (*(_BYTE *)(v6 + 16) & 2) != 0 && (*(_QWORD *)(v6 + 24) & 2LL) == *(_QWORD *)(v6 + 24) )
    {
      v11 = 4LL;
      v10 = &v53;
      v12 = (char *)a4 + 528;
      v7 = *((_DWORD *)a4 + 131);
      v14 = &v7;
      v8 = *((_DWORD *)a4 + 130);
      v16 = &v8;
      v18 = (char *)a4 + 1224;
      v20 = (char *)a4 + 1144;
      v22 = (char *)a4 + 1168;
      v24 = (char *)a4 + 1211;
      v26 = (char *)a4 + 1200;
      v28 = (char *)a4 + 1212;
      v30 = (char *)a4 + 1192;
      v32 = (char *)a4 + 1196;
      v34 = (char *)a4 + 1210;
      v36 = (char *)a4 + 1184;
      v38 = (char *)a4 + 1188;
      v40 = (char *)a4 + 1256;
      v42 = (char *)a4 + 1244;
      v44 = (char *)a4 + 1257;
      v46 = (char *)a4 + 1228;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 1LL;
      v21 = 1LL;
      v23 = 4LL;
      v25 = 1LL;
      v27 = 4LL;
      v29 = 1LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 1LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 1LL;
      v43 = 4LL;
      v45 = 1LL;
      v47 = 4LL;
      TlgWrite((TraceLoggingHProvider)v6, &unk_180167E20, 0LL, 0LL, 0x15u, &v9);
    }
  }
  else
  {
    v5 = *((_QWORD *)RawInputProvidersContinuousTracing::Instance() + 1);
    if ( *(_DWORD *)v5 > 2u && (*(_BYTE *)(v5 + 16) & 2) != 0 && (*(_QWORD *)(v5 + 24) & 2LL) == *(_QWORD *)(v5 + 24) )
    {
      v49 = &v53;
      v51 = &v54;
      v50 = 4LL;
      v52 = 4LL;
      TlgWrite((TraceLoggingHProvider)v5, &unk_180167D7E, 0LL, 0LL, 4u, &pData);
    }
  }
}
