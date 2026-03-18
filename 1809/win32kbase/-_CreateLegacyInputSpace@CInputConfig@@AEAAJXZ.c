/*
 * XREFs of ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C003D900
 * Callers:
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C0041154 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00412CC (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 * Callees:
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C003C428 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     ??0CInputSpaceRegion@@QEAA@XZ @ 0x1C003DC10 (--0CInputSpaceRegion@@QEAA@XZ.c)
 *     RIMFreeQDCActivePathsData @ 0x1C003DCC0 (RIMFreeQDCActivePathsData.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C003DCF0 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x1C003DE68 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C003F0A0 (DrvGetWDDMAdapterInfo.c)
 *     RIMGetQDCActivePathsData @ 0x1C004A680 (RIMGetQDCActivePathsData.c)
 *     ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1C008F948 (-_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace.c)
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C008FE5C (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0094EB0 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0CInputSpace@@QEAA@_N@Z @ 0x1C00A95E8 (--0CInputSpace@@QEAA@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputConfig::_CreateLegacyInputSpace(CInputConfig *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 i; // rbx
  __int64 v7; // rdx
  __int128 v8; // xmm0
  BOOL v9; // ecx
  __int16 v10; // ax
  __int64 v11; // rcx
  int v12; // esi
  unsigned int j; // ebx
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v14; // rsi
  CInputConfig *v15; // rcx
  struct CInputSpaceRegion *v16; // rcx
  __int128 *v17; // r8
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  struct CInputSpaceRegion *v32; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v33[24]; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v35; // [rsp+60h] [rbp-A0h]
  __int16 v36; // [rsp+64h] [rbp-9Ch]
  __int16 v37; // [rsp+66h] [rbp-9Ah]
  _BYTE v38[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v39[560]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v41; // [rsp+2A8h] [rbp+1A8h]

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  CInputSpace::CInputSpace((CInputSpace *)&v40, 1);
  v41 = 0;
  v40 = 0x7FFFFFFFFFFFFFFFLL;
  v5 = RIMGetQDCActivePathsData(v33);
  if ( **(_DWORD **)gpDispInfo )
  {
    for ( i = *(_QWORD *)(gpDispInfo + 104); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        CInputSpaceRegion::CInputSpaceRegion((CInputSpaceRegion *)&v34);
        v7 = *(_QWORD *)(i + 40);
        v8 = *(_OWORD *)(v7 + 28);
        v9 = i == *(_QWORD *)(gpDispInfo + 96);
        v36 = *(_WORD *)(v7 + 64);
        v10 = *(_WORD *)(i + 224);
        v35 = v9;
        v11 = *(_QWORD *)(i + 240);
        v34 = v8;
        v37 = v10;
        DrvGetWDDMAdapterInfo(v11, 1LL, v38, v39);
        v12 = CInputSpace::AddRegion((CInputSpace *)&v40, (const struct CInputSpaceRegion *)&v34, 0LL);
        if ( v12 < 0 )
          goto LABEL_20;
      }
    }
  }
  if ( v5 )
  {
    for ( j = 0; j < *(_DWORD *)v5; ++j )
    {
      v14 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)(*(_QWORD *)(v5 + 8) + 200LL * j);
      InputTraceLogging::InputConfig::DisplayPath(v14);
      v32 = 0LL;
      if ( CInputConfig::_FindRegionForDisplay(
             v15,
             v14,
             (const struct CInputSpace *)&v40,
             (const struct tagQDC_DATA *)v5,
             &v32) )
      {
        v16 = v32;
        if ( *((_BYTE *)v32 + 376) )
        {
          v17 = &v34;
          v18 = 4LL;
          do
          {
            v19 = *(_OWORD *)v16;
            v20 = *((_OWORD *)v16 + 1);
            v16 = (struct CInputSpaceRegion *)((char *)v16 + 128);
            *v17 = v19;
            v21 = *((_OWORD *)v16 - 6);
            v17[1] = v20;
            v22 = *((_OWORD *)v16 - 5);
            v17[2] = v21;
            v23 = *((_OWORD *)v16 - 4);
            v17[3] = v22;
            v24 = *((_OWORD *)v16 - 3);
            v17[4] = v23;
            v25 = *((_OWORD *)v16 - 2);
            v17[5] = v24;
            v26 = *((_OWORD *)v16 - 1);
            v17[6] = v25;
            v17 += 8;
            *(v17 - 1) = v26;
            --v18;
          }
          while ( v18 );
          v27 = *((_QWORD *)v16 + 8);
          v28 = *((_OWORD *)v16 + 1);
          *v17 = *(_OWORD *)v16;
          v29 = *((_OWORD *)v16 + 2);
          v17[1] = v28;
          v30 = *((_OWORD *)v16 + 3);
          v17[2] = v29;
          v17[3] = v30;
          *((_QWORD *)v17 + 8) = v27;
          CInputSpace::AddRegion((CInputSpace *)&v40, (const struct CInputSpaceRegion *)&v34, &v32);
          v16 = v32;
        }
        if ( v16 )
          CInputSpaceRegion::MapToDisplayPath(v16, v14);
      }
    }
  }
  v12 = CInputConfig::_ConfigureInputSpace(this, (struct CInputSpace *)&v40);
LABEL_20:
  RIMFreeQDCActivePathsData(v5);
  if ( v12 < 0 )
    CInputSpace::FreeRegions((CInputSpace *)&v40);
  return 0LL;
}
