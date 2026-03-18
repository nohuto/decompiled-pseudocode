/*
 * XREFs of ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01D5550
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00B6F64 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D52EC (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01D53E0 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D5C04 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
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
  _DWORD v22[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h]
  int v24; // [rsp+68h] [rbp-98h]
  int v25; // [rsp+6Ch] [rbp-94h]
  int v26; // [rsp+70h] [rbp-90h]
  _QWORD v27[10]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  int *v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  int *v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v35; // [rsp+120h] [rbp+20h] BYREF
  int *v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]
  int *v38; // [rsp+150h] [rbp+50h]
  __int64 v39; // [rsp+158h] [rbp+58h]
  int *v40; // [rsp+160h] [rbp+60h]
  __int64 v41; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR v42; // [rsp+170h] [rbp+70h] BYREF
  int *v43; // [rsp+190h] [rbp+90h]
  __int64 v44; // [rsp+198h] [rbp+98h]
  int *v45; // [rsp+1A0h] [rbp+A0h]
  __int64 v46; // [rsp+1A8h] [rbp+A8h]
  int *v47; // [rsp+1B0h] [rbp+B0h]
  __int64 v48; // [rsp+1B8h] [rbp+B8h]
  unsigned __int64 v49; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v50; // [rsp+1C8h] [rbp+C8h]
  int v51; // [rsp+210h] [rbp+110h]
  int v52; // [rsp+228h] [rbp+128h]
  unsigned int v53; // [rsp+23Ch] [rbp+13Ch]
  unsigned int v54; // [rsp+240h] [rbp+140h]

  v14 = a3;
  memset(v27, 0, 0x48uLL);
  v6 = 3;
  EtwActivityIdControl(3u, (LPGUID)&v27[1]);
  v27[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v27[3]) = 18;
  LOBYTE(v27[6]) = -1;
  v15 = 1;
  if ( a4 )
    *a4 = 0;
  if ( (int)DrvQueryDisplayConfig(3221225474LL, &v15, &v49, 0LL) < 0 )
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
  if ( v51 != 0x80000000 && v51 != 11 && v51 != 13 )
  {
    if ( v14 )
    {
      v23 = 0LL;
      v24 = 0;
      v22[0] = -6;
      v22[1] = 28;
      v25 = v6;
      v26 = 0;
      DrvDisplayConfigSetDeviceInfo(v22, v27);
    }
    if ( a4 )
      *a4 = 1;
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
      {
        v16 = v52;
        v29 = &v16;
        v31 = &v14;
        v33 = &v17;
        v30 = 4LL;
        v32 = 4LL;
        v17 = 1003;
        v34 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E6AB1, 0LL, 0LL, 5u, &pData);
      }
    }
    return 0LL;
  }
  v11 = v52;
  if ( v6 == v52 )
  {
    if ( a4 )
      *a4 = 1;
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
    {
      v18 = v12;
      v36 = &v18;
      v38 = &v14;
      v40 = &v19;
      v37 = 4LL;
      v39 = 4LL;
      v19 = 1001;
      v41 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E6AB1, 0LL, 0LL, 5u, &v35);
    }
    return 0LL;
  }
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
  {
    v20 = v11;
    v43 = &v20;
    v45 = &v14;
    v47 = &v21;
    v44 = 4LL;
    v46 = 4LL;
    v21 = 1000;
    v48 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E6AB1, 0LL, 0LL, 5u, &v42);
    v11 = v52;
  }
  v13 = v49;
  if ( v6 != v11 )
  {
    if ( (((unsigned __int8)v6 ^ (unsigned __int8)v11) & 1) != 0 && (v49 & 0x20000) != 0 )
    {
      v7 = (CLegacyRotationMgr *)v53;
      v53 = v54;
      v54 = (unsigned int)v7;
    }
    v52 = v6;
    v13 = v49 | 0x200;
    v50 |= 0x200uLL;
  }
  v49 = v13 & 0x802CF19000030F8FuLL;
  return CLegacyRotationMgr::xxxSmoothRotateScreen(
           v7,
           (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)&v49,
           v14,
           (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v27);
}
