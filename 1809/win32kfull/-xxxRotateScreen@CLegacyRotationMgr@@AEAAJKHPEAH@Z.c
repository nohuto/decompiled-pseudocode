/*
 * XREFs of ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01C15C4
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00DAC74 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01C1374 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01C1460 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C1C84 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxRotateScreen(CLegacyRotationMgr *this, int a2, int a3, int *a4)
{
  int v6; // ebx
  CLegacyRotationMgr *v7; // rcx
  int v9; // edi
  int v10; // edi
  int v11; // r9d
  int v12; // r9d
  __int64 v13; // rdx
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+4Ch] [rbp-B4h] BYREF
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v22[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+68h] [rbp-98h]
  int v24; // [rsp+6Ch] [rbp-94h]
  int v25; // [rsp+70h] [rbp-90h]
  _QWORD v26[10]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  int *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  int *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v34; // [rsp+120h] [rbp+20h] BYREF
  int *v35; // [rsp+140h] [rbp+40h]
  __int64 v36; // [rsp+148h] [rbp+48h]
  int *v37; // [rsp+150h] [rbp+50h]
  __int64 v38; // [rsp+158h] [rbp+58h]
  int *v39; // [rsp+160h] [rbp+60h]
  __int64 v40; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR v41; // [rsp+170h] [rbp+70h] BYREF
  int *v42; // [rsp+190h] [rbp+90h]
  __int64 v43; // [rsp+198h] [rbp+98h]
  int *v44; // [rsp+1A0h] [rbp+A0h]
  __int64 v45; // [rsp+1A8h] [rbp+A8h]
  int *v46; // [rsp+1B0h] [rbp+B0h]
  __int64 v47; // [rsp+1B8h] [rbp+B8h]
  unsigned __int64 v48; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v49; // [rsp+1C8h] [rbp+C8h]
  int v50; // [rsp+210h] [rbp+110h]
  int v51; // [rsp+228h] [rbp+128h]
  unsigned int v52; // [rsp+23Ch] [rbp+13Ch]
  unsigned int v53; // [rsp+240h] [rbp+140h]

  v14 = a3;
  memset(v26, 0, 0x48uLL);
  v6 = 3;
  EtwActivityIdControl(3u, (LPGUID)&v26[1]);
  v26[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v26[3]) = 18;
  LOBYTE(v26[6]) = -1;
  v15 = 1;
  if ( a4 )
    *a4 = 0;
  if ( (int)DrvQueryDisplayConfig(3221225474LL, &v15, &v48, 0LL) < 0 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    goto LABEL_11;
  v9 = a2 - 1;
  if ( !v9 )
  {
    v6 = 2;
    goto LABEL_12;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v6 = 4;
      goto LABEL_12;
    }
LABEL_11:
    v6 = 1;
  }
LABEL_12:
  if ( v50 != 0x80000000 && v50 != 11 && v50 != 13 )
  {
    if ( v14 )
    {
      v25 = 0;
      v23 = 0;
      v22[0] = 0x1CFFFFFFFALL;
      v24 = v6;
      v22[1] = 0LL;
      DrvDisplayConfigSetDeviceInfo(v22, v26);
    }
    if ( a4 )
      *a4 = 1;
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
      {
        v16 = v51;
        v28 = &v16;
        v30 = &v14;
        v32 = &v17;
        v29 = 4LL;
        v31 = 4LL;
        v17 = 1003;
        v33 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D45AA, 0LL, 0LL, 5u, &pData);
      }
    }
    return 0LL;
  }
  v11 = v51;
  if ( v6 == v51 )
  {
    if ( a4 )
      *a4 = 1;
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
    {
      v18 = v12;
      v35 = &v18;
      v37 = &v14;
      v39 = &v19;
      v36 = 4LL;
      v38 = 4LL;
      v19 = 1001;
      v40 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D45AA, 0LL, 0LL, 5u, &v34);
    }
    return 0LL;
  }
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
  {
    v20 = v11;
    v42 = &v20;
    v44 = &v14;
    v46 = &v21;
    v43 = 4LL;
    v45 = 4LL;
    v21 = 1000;
    v47 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D45AA, 0LL, 0LL, 5u, &v41);
    v11 = v51;
  }
  v13 = v48;
  if ( v6 != v11 )
  {
    if ( (((unsigned __int8)v6 ^ (unsigned __int8)v11) & 1) != 0 && (v48 & 0x20000) != 0 )
    {
      v7 = (CLegacyRotationMgr *)v52;
      v52 = v53;
      v53 = (unsigned int)v7;
    }
    v51 = v6;
    v13 = v48 | 0x200;
    v49 |= 0x200uLL;
  }
  v48 = v13 & 0x802CF19000030F8FuLL;
  return CLegacyRotationMgr::xxxSmoothRotateScreen(
           v7,
           (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)&v48,
           v14,
           (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v26);
}
