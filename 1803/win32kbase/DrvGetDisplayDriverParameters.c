/*
 * XREFs of DrvGetDisplayDriverParameters @ 0x1C0051310
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C0043200 (DrvEnumDisplaySettings.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C004FF68 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C001C5F0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x1C0051738 (-DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00CFE64 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 */

__int64 __fastcall DrvGetDisplayDriverParameters(__int64 a1, struct _devicemodeW *a2, int a3, __int64 a4)
{
  NTSTATUS v7; // r14d
  int v8; // r15d
  DWORD *p_dmBitsPerPel; // rcx
  DWORD *p_dmPelsWidth; // rdx
  PCWSTR *p_Name; // rcx
  __int64 v12; // r9
  wchar_t **v13; // r8
  const WCHAR *v14; // rax
  unsigned int v15; // edi
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // r9d
  WORD dmDriverExtra; // cx
  _OWORD *v23; // rdx
  __int128 v24; // xmm0
  _OWORD *v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // xmm0_8
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+88h] [rbp-78h]
  int v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  DWORD *v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+A8h] [rbp-58h]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  int v37; // [rsp+B8h] [rbp-48h]
  __int64 v38; // [rsp+C0h] [rbp-40h]
  int v39; // [rsp+C8h] [rbp-38h]
  __int64 v40; // [rsp+D0h] [rbp-30h]
  DWORD *p_dmPelsHeight; // [rsp+D8h] [rbp-28h]
  int v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  int v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  DWORD *p_dmDisplayFrequency; // [rsp+110h] [rbp+10h]
  int v49; // [rsp+118h] [rbp+18h]
  __int64 v50; // [rsp+120h] [rbp+20h]
  int v51; // [rsp+128h] [rbp+28h]
  __int64 v52; // [rsp+130h] [rbp+30h]
  int v53; // [rsp+138h] [rbp+38h]
  __int64 v54; // [rsp+140h] [rbp+40h]
  union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *p_dmDisplayFlags; // [rsp+148h] [rbp+48h]
  int v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  int v58; // [rsp+160h] [rbp+60h]
  __int64 v59; // [rsp+168h] [rbp+68h]
  int v60; // [rsp+170h] [rbp+70h]
  __int64 v61; // [rsp+178h] [rbp+78h]
  DWORD *p_dmPanningWidth; // [rsp+180h] [rbp+80h]
  int v63; // [rsp+188h] [rbp+88h]
  __int64 v64; // [rsp+190h] [rbp+90h]
  int v65; // [rsp+198h] [rbp+98h]
  __int64 v66; // [rsp+1A0h] [rbp+A0h]
  int v67; // [rsp+1A8h] [rbp+A8h]
  __int64 v68; // [rsp+1B0h] [rbp+B0h]
  DWORD *p_dmPanningHeight; // [rsp+1B8h] [rbp+B8h]
  int v70; // [rsp+1C0h] [rbp+C0h]
  __int64 v71; // [rsp+1C8h] [rbp+C8h]
  int v72; // [rsp+1D0h] [rbp+D0h]
  __int64 v73; // [rsp+1D8h] [rbp+D8h]
  int v74; // [rsp+1E0h] [rbp+E0h]
  __int64 v75; // [rsp+1E8h] [rbp+E8h]
  DWORD *p_dmDisplayOrientation; // [rsp+1F0h] [rbp+F0h]
  int v77; // [rsp+1F8h] [rbp+F8h]
  __int64 v78; // [rsp+200h] [rbp+100h]
  int v79; // [rsp+208h] [rbp+108h]
  __int64 v80; // [rsp+210h] [rbp+110h]
  int v81; // [rsp+218h] [rbp+118h]
  __int64 v82; // [rsp+220h] [rbp+120h]
  DWORD *p_dmDisplayFixedOutput; // [rsp+228h] [rbp+128h]
  int v84; // [rsp+230h] [rbp+130h]
  __int64 v85; // [rsp+238h] [rbp+138h]
  int v86; // [rsp+240h] [rbp+140h]
  __int64 v87; // [rsp+248h] [rbp+148h]
  int v88; // [rsp+250h] [rbp+150h]
  __int64 v89; // [rsp+258h] [rbp+158h]
  union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *p_dmOrientation; // [rsp+260h] [rbp+160h]
  int v91; // [rsp+268h] [rbp+168h]
  __int64 v92; // [rsp+270h] [rbp+170h]
  int v93; // [rsp+278h] [rbp+178h]
  __int64 v94; // [rsp+280h] [rbp+180h]
  int v95; // [rsp+288h] [rbp+188h]
  __int64 v96; // [rsp+290h] [rbp+190h]
  LONG *p_y; // [rsp+298h] [rbp+198h]
  int v98; // [rsp+2A0h] [rbp+1A0h]
  __int64 v99; // [rsp+2A8h] [rbp+1A8h]
  int v100; // [rsp+2B0h] [rbp+1B0h]
  __int64 v101; // [rsp+2B8h] [rbp+1B8h]
  int v102; // [rsp+2C0h] [rbp+1C0h]
  __int64 v103; // [rsp+2C8h] [rbp+1C8h]
  int *v104; // [rsp+2D0h] [rbp+1D0h]
  int v105; // [rsp+2D8h] [rbp+1D8h]
  __int64 v106; // [rsp+2E0h] [rbp+1E0h]
  int v107; // [rsp+2E8h] [rbp+1E8h]
  int (*v108)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2F0h] [rbp+1F0h]
  int v109; // [rsp+2F8h] [rbp+1F8h]
  __int64 v110; // [rsp+300h] [rbp+200h]
  struct _devicemodeW *v111; // [rsp+308h] [rbp+208h]
  int v112; // [rsp+310h] [rbp+210h]
  int *v113; // [rsp+318h] [rbp+218h]
  int v114; // [rsp+320h] [rbp+220h]
  __int64 v115; // [rsp+328h] [rbp+228h]
  int v116; // [rsp+330h] [rbp+230h]
  _BYTE v117[40]; // [rsp+338h] [rbp+238h] BYREF

  v28 = 0;
  v29 = 0;
  v7 = 0;
  v8 = 1;
  if ( a3 )
  {
    memset(a2, 0, sizeof(struct _devicemodeW));
  }
  else
  {
    p_dmBitsPerPel = &a2->dmBitsPerPel;
    p_dmPelsWidth = &a2->dmPelsWidth;
    if ( a4 )
    {
      *p_dmBitsPerPel = *(_DWORD *)(a4 + 168);
      dmDriverExtra = a2->dmDriverExtra;
      *p_dmPelsWidth = *(_DWORD *)(a4 + 172);
      a2->dmPelsHeight = *(_DWORD *)(a4 + 176);
      a2->dmDisplayFrequency = *(_DWORD *)(a4 + 184);
      a2->dmDisplayFlags = *(_DWORD *)(a4 + 180);
      a2->dmPanningWidth = *(_DWORD *)(a4 + 212);
      a2->dmPanningHeight = *(_DWORD *)(a4 + 216);
      a2->dmPosition.x = *(_DWORD *)(a4 + 76);
      a2->dmPosition.y = *(_DWORD *)(a4 + 80);
      a2->dmDisplayOrientation = *(_DWORD *)(a4 + 84);
      a2->dmDisplayFixedOutput = *(_DWORD *)(a4 + 88);
      if ( dmDriverExtra >= *(_WORD *)(a4 + 70) )
        dmDriverExtra = *(_WORD *)(a4 + 70);
      a2->dmDriverExtra = dmDriverExtra;
      memmove(&a2[1], (const void *)(a4 + 220), dmDriverExtra);
      if ( (*(_DWORD *)(a4 + 72) & 0x20) != 0 )
        v28 = 1;
      goto LABEL_13;
    }
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Name = 0LL;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 0;
    v31 = 0LL;
    v33 = 0LL;
    p_dmDisplayFixedOutput = &a2->dmDisplayFixedOutput;
    p_dmOrientation = (union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)&a2->dmOrientation;
    QueryTable.EntryContext = p_dmBitsPerPel;
    v34 = p_dmPelsWidth;
    p_y = &a2->dmPosition.y;
    QueryTable.Flags = 288;
    QueryTable.DefaultType = 0x4000000;
    v32 = 288;
    v35 = 0x4000000;
    v36 = 0LL;
    v37 = 0;
    v38 = 0LL;
    v39 = 288;
    v40 = 0LL;
    p_dmPelsHeight = &a2->dmPelsHeight;
    v42 = 0x4000000;
    v43 = 0LL;
    v44 = 0;
    v45 = 0LL;
    v46 = 288;
    v47 = 0LL;
    p_dmDisplayFrequency = &a2->dmDisplayFrequency;
    v49 = 0x4000000;
    v50 = 0LL;
    v51 = 0;
    v52 = 0LL;
    v53 = 288;
    v54 = 0LL;
    p_dmDisplayFlags = (union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *)&a2->dmDisplayFlags;
    v56 = 0x4000000;
    v57 = 0LL;
    v58 = 0;
    v59 = 0LL;
    v60 = 288;
    v61 = 0LL;
    p_dmPanningWidth = &a2->dmPanningWidth;
    v63 = 0x4000000;
    v64 = 0LL;
    v65 = 0;
    v66 = 0LL;
    v67 = 288;
    v68 = 0LL;
    p_dmPanningHeight = &a2->dmPanningHeight;
    v70 = 0x4000000;
    v71 = 0LL;
    v72 = 0;
    v73 = 0LL;
    v74 = 288;
    v75 = 0LL;
    p_dmDisplayOrientation = &a2->dmDisplayOrientation;
    v77 = 0x4000000;
    v78 = 0LL;
    v79 = 0;
    v80 = 0LL;
    v81 = 288;
    v82 = 0LL;
    v84 = 0x4000000;
    v85 = 0LL;
    v86 = 0;
    v87 = 0LL;
    v88 = 288;
    v89 = 0LL;
    v91 = 0x4000000;
    v92 = 0LL;
    v93 = 0;
    v94 = 0LL;
    v95 = 288;
    v96 = 0LL;
    v98 = 0x4000000;
    v99 = 0LL;
    v105 = 0x4000000;
    v104 = &v28;
    v100 = 0;
    v108 = DrvDriverExtraCallback;
    v101 = 0LL;
    v113 = &v29;
    v102 = 288;
    v103 = 0LL;
    v106 = 0LL;
    v107 = 0;
    v109 = 0;
    v110 = 0LL;
    v111 = a2;
    v112 = 4;
    v114 = 0x10000;
    v115 = 0LL;
    v116 = 0;
    memset(v117, 0, sizeof(v117));
    if ( !a2->dmDriverExtra )
    {
      v108 = 0LL;
      v109 = 0;
      v110 = 0LL;
      a2->dmDriverExtra = 0;
    }
    if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu
      || (*(_DWORD *)(a1 + 160) & 8) == 0
      || (v23 = *(_OWORD **)(a1 + 272)) == 0LL )
    {
      p_Name = &QueryTable.Name;
      v12 = 13LL;
      v13 = off_1C0172AD0;
      do
      {
        v14 = *v13++;
        *p_Name = v14;
        p_Name += 7;
        --v12;
      }
      while ( v12 );
      v15 = 1;
      while ( 1 )
      {
        RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                       (unsigned __int16 *)a1,
                                                       v8,
                                                       0LL,
                                                       0LL,
                                                       0,
                                                       0LL,
                                                       gProtocolType);
        v17 = (WCHAR *)RegistryHandleFromDeviceMap;
        if ( RegistryHandleFromDeviceMap )
        {
          v7 = RtlQueryRegistryValues(0x40000000u, RegistryHandleFromDeviceMap, &QueryTable, 0LL, 0LL);
          ZwClose(v17);
          if ( v7 >= 0 )
          {
            if ( v28
              && !a2->dmBitsPerPel
              && !a2->dmPelsWidth
              && !a2->dmPelsHeight
              && !a2->dmDisplayFrequency
              && !a2->dmDisplayFlags
              && !gbBaseVideo )
            {
              DrvLogDisplayDriverEvent(6LL, v18, v19);
            }
            goto LABEL_13;
          }
        }
        else
        {
          v7 = -1073741823;
        }
        ++v15;
        v8 = 0;
        if ( v15 > 2 )
          return (unsigned int)v7;
      }
    }
    *(_OWORD *)a2->dmDeviceName = *v23;
    *(_OWORD *)&a2->dmDeviceName[8] = v23[1];
    *(_OWORD *)&a2->dmDeviceName[16] = v23[2];
    *(_OWORD *)&a2->dmDeviceName[24] = v23[3];
    *(_OWORD *)&a2->dmSpecVersion = v23[4];
    *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4) = (union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C)v23[5];
    *(_OWORD *)&a2->dmYResolution = v23[6];
    v24 = v23[7];
    v25 = v23 + 8;
    *(_OWORD *)&a2->dmFormName[5] = v24;
    *(_OWORD *)&a2->dmFormName[13] = *v25;
    *(_OWORD *)&a2->dmFormName[21] = v25[1];
    *(_OWORD *)&a2->dmFormName[29] = v25[2];
    *(_OWORD *)&a2->dmPelsHeight = v25[3];
    *(_OWORD *)&a2->dmICMIntent = v25[4];
    *(_QWORD *)&a2->dmReserved2 = *((_QWORD *)v25 + 10);
    a2->dmPanningHeight = *((_DWORD *)v25 + 22);
    memmove(&a2[1], (const void *)(*(_QWORD *)(a1 + 272) + 220LL), a2->dmDriverExtra);
  }
LABEL_13:
  *(_DWORD *)&a2->dmSpecVersion = 67175425;
  a2->dmSize = 220;
  DrvGetDisplayDriverDpiSetting(a2);
  v20 = 410910848;
  a2->dmFields = 410910848;
  if ( v28 )
  {
    v20 = 410910880;
    a2->dmFields = 410910880;
  }
  if ( a2->dmDisplayFixedOutput )
  {
    v20 |= 0x20000000u;
    a2->dmFields = v20;
  }
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    v26 = *(_QWORD *)(*(_QWORD *)gpDispInfo + 24LL);
    v27 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)gpDispInfo + 24LL), 8).m128i_u64[0];
    a2->dmBitsPerPel = *((unsigned __int8 *)gpsi + 7003);
    a2->dmFields = v20;
    a2->dmPelsWidth = v27 - v26;
    a2->dmPelsHeight = HIDWORD(v27) - HIDWORD(v26);
  }
  return (unsigned int)v7;
}
