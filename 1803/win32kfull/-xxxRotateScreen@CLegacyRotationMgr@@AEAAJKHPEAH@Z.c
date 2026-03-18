/*
 * XREFs of ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01A032C
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00BDB94 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A00DC (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01A01D0 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A09AC (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxRotateScreen(CLegacyRotationMgr *this, int a2, int a3, int *a4)
{
  int v6; // ebx
  CLegacyRotationMgr *v7; // rcx
  int v9; // edi
  int v10; // edi
  const GUID *v11; // r8
  const GUID *v12; // r9
  const GUID *v13; // r9
  const GUID *v14; // r8
  const GUID *v15; // r9
  const GUID *v16; // r8
  __int64 v17; // rdx
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v26[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+68h] [rbp-98h]
  int v28; // [rsp+6Ch] [rbp-94h]
  int v29; // [rsp+70h] [rbp-90h]
  _QWORD v30[10]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  int *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  int *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v38; // [rsp+120h] [rbp+20h] BYREF
  int *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  int *v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  int *v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR v45; // [rsp+170h] [rbp+70h] BYREF
  int *v46; // [rsp+190h] [rbp+90h]
  __int64 v47; // [rsp+198h] [rbp+98h]
  int *v48; // [rsp+1A0h] [rbp+A0h]
  __int64 v49; // [rsp+1A8h] [rbp+A8h]
  int *v50; // [rsp+1B0h] [rbp+B0h]
  __int64 v51; // [rsp+1B8h] [rbp+B8h]
  unsigned __int64 v52; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v53; // [rsp+1C8h] [rbp+C8h]
  int v54; // [rsp+210h] [rbp+110h]
  int v55; // [rsp+228h] [rbp+128h]
  unsigned int v56; // [rsp+23Ch] [rbp+13Ch]
  unsigned int v57; // [rsp+240h] [rbp+140h]

  v18 = a3;
  memset(v30, 0, 0x48uLL);
  v6 = 3;
  EtwActivityIdControl(3u, (LPGUID)&v30[1]);
  v30[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v30[3]) = 18;
  LOBYTE(v30[6]) = -1;
  v19 = 1;
  if ( a4 )
    *a4 = 0;
  if ( (int)DrvQueryDisplayConfig(3221225474LL, &v19, &v52, 0LL) < 0 )
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
  if ( v54 != 0x80000000 && v54 != 11 && v54 != 13 )
  {
    if ( v18 )
    {
      v29 = 0;
      v27 = 0;
      v26[0] = 0x1CFFFFFFFALL;
      v28 = v6;
      v26[1] = 0LL;
      DrvDisplayConfigSetDeviceInfo(v26, v30);
    }
    if ( a4 )
      *a4 = 1;
    if ( (unsigned int)hProvider > 5 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
      {
        v20 = v55;
        v32 = &v20;
        v34 = &v18;
        v36 = &v21;
        v33 = 4LL;
        v35 = 4LL;
        v21 = 1003;
        v37 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E2EB0, v11, v12, 5u, &pData);
      }
    }
    return 0LL;
  }
  LODWORD(v13) = v55;
  if ( v6 == v55 )
  {
    if ( a4 )
      *a4 = 1;
    if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
    {
      v22 = (int)v15;
      v39 = &v22;
      v41 = &v18;
      v43 = &v23;
      v40 = 4LL;
      v42 = 4LL;
      v23 = 1001;
      v44 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E2EB0, v14, v15, 5u, &v38);
    }
    return 0LL;
  }
  if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
  {
    v24 = (int)v13;
    v46 = &v24;
    v48 = &v18;
    v50 = &v25;
    v47 = 4LL;
    v49 = 4LL;
    v25 = 1000;
    v51 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E2EB0, v16, v13, 5u, &v45);
    LODWORD(v13) = v55;
  }
  v17 = v52;
  if ( v6 != (_DWORD)v13 )
  {
    if ( (((unsigned __int8)v6 ^ (unsigned __int8)v13) & 1) != 0 && (v52 & 0x20000) != 0 )
    {
      v7 = (CLegacyRotationMgr *)v56;
      v56 = v57;
      v57 = (unsigned int)v7;
    }
    v55 = v6;
    v17 = v52 | 0x200;
    v53 |= 0x200uLL;
  }
  v52 = v17 & 0x802CF01000030F8FuLL;
  return CLegacyRotationMgr::xxxSmoothRotateScreen(
           v7,
           (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)&v52,
           v18,
           (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v30);
}
