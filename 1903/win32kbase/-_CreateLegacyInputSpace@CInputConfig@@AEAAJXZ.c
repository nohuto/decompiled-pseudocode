/*
 * XREFs of ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00658F8
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00657A4 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C0067758 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     DrvGetWDDMAdapterInfo @ 0x1C003ECE0 (DrvGetWDDMAdapterInfo.c)
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0063418 (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1C0063704 (-_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C006388C (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C00643C8 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C0065B08 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 *     ??0CInputSpaceRegion@@QEAA@XZ @ 0x1C0065B78 (--0CInputSpaceRegion@@QEAA@XZ.c)
 *     RIMFreeQDCActivePathsData @ 0x1C0065C28 (RIMFreeQDCActivePathsData.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C0065C58 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x1C0065DD4 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     RIMGetQDCActivePathsData @ 0x1C0065EDC (RIMGetQDCActivePathsData.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int128 *v18; // r8
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  struct CInputSpaceRegion *v32; // [rsp+30h] [rbp-D0h] BYREF
  int v33; // [rsp+38h] [rbp-C8h]
  _QWORD v34[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v35; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v36; // [rsp+60h] [rbp-A0h]
  __int16 v37; // [rsp+64h] [rbp-9Ch]
  __int16 v38; // [rsp+66h] [rbp-9Ah]
  struct _LUID v39; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v40[140]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v42; // [rsp+2A8h] [rbp+1A8h]

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  v32 = 0LL;
  v33 = 0;
  CInputSpace::CInputSpace((CInputSpace *)&v41, (const struct INPUT_SPACE *)&v32, 1);
  v42 = 0;
  v41 = 0x7FFFFFFFFFFFFFFFLL;
  v34[0] = 0LL;
  v34[1] = 0LL;
  v5 = RIMGetQDCActivePathsData(v34);
  if ( **(_DWORD **)gpDispInfo )
  {
    for ( i = *(_QWORD *)(gpDispInfo + 104); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        CInputSpaceRegion::CInputSpaceRegion((CInputSpaceRegion *)&v35);
        v7 = *(_QWORD *)(i + 40);
        v8 = *(_OWORD *)(v7 + 28);
        v9 = i == *(_QWORD *)(gpDispInfo + 96);
        v37 = *(_WORD *)(v7 + 64);
        v10 = *(_WORD *)(i + 224);
        v36 = v9;
        v11 = *(_QWORD *)(i + 240);
        v35 = v8;
        v38 = v10;
        DrvGetWDDMAdapterInfo(v11, 1, &v39, v40);
        v12 = CInputSpace::AddRegion((CInputSpace *)&v41, (const struct CInputSpaceRegion *)&v35, 0LL);
        if ( v12 < 0 )
          goto LABEL_17;
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
             (const struct CInputSpace *)&v41,
             (const struct tagQDC_DATA *)v5,
             &v32) )
      {
        v16 = v32;
        if ( *((_BYTE *)v32 + 376) )
        {
          v18 = &v35;
          v19 = 4LL;
          do
          {
            v20 = *(_OWORD *)v16;
            v21 = *((_OWORD *)v16 + 1);
            v16 = (struct CInputSpaceRegion *)((char *)v16 + 128);
            *v18 = v20;
            v22 = *((_OWORD *)v16 - 6);
            v18[1] = v21;
            v23 = *((_OWORD *)v16 - 5);
            v18[2] = v22;
            v24 = *((_OWORD *)v16 - 4);
            v18[3] = v23;
            v25 = *((_OWORD *)v16 - 3);
            v18[4] = v24;
            v26 = *((_OWORD *)v16 - 2);
            v18[5] = v25;
            v27 = *((_OWORD *)v16 - 1);
            v18[6] = v26;
            v18 += 8;
            *(v18 - 1) = v27;
            --v19;
          }
          while ( v19 );
          v28 = *((_QWORD *)v16 + 8);
          v29 = *((_OWORD *)v16 + 1);
          *v18 = *(_OWORD *)v16;
          v30 = *((_OWORD *)v16 + 2);
          v18[1] = v29;
          v31 = *((_OWORD *)v16 + 3);
          v18[2] = v30;
          v18[3] = v31;
          *((_QWORD *)v18 + 8) = v28;
          CInputSpace::AddRegion((CInputSpace *)&v41, (const struct CInputSpaceRegion *)&v35, &v32);
          v16 = v32;
        }
        if ( v16 )
          CInputSpaceRegion::MapToDisplayPath(v16, v14);
      }
    }
  }
  v12 = CInputConfig::_ConfigureInputSpace(this, (struct CInputSpace *)&v41);
LABEL_17:
  RIMFreeQDCActivePathsData(v5);
  if ( v12 < 0 )
    CInputSpace::FreeRegions((CInputSpace *)&v41);
  return 0LL;
}
