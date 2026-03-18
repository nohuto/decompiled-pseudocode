/*
 * XREFs of ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C0051408
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00512B4 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C0052EE8 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     DrvGetWDDMAdapterInfo @ 0x1C003F580 (DrvGetWDDMAdapterInfo.c)
 *     RIMGetQDCActivePathsData @ 0x1C0046020 (RIMGetQDCActivePathsData.c)
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C0051618 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 *     ??0CInputSpaceRegion@@QEAA@XZ @ 0x1C0051688 (--0CInputSpaceRegion@@QEAA@XZ.c)
 *     RIMFreeQDCActivePathsData @ 0x1C0051738 (RIMFreeQDCActivePathsData.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C0051768 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x1C00518E4 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C00A0D78 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1C00A28A8 (-_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace.c)
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00A3370 (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00A8074 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputConfig::_CreateLegacyInputSpace(CInputConfig *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int *v7; // rdi
  __int64 i; // rbx
  __int64 v9; // rdx
  __int128 v10; // xmm0
  BOOL v11; // ecx
  __int16 v12; // ax
  __int64 v13; // rcx
  int v14; // esi
  unsigned int j; // ebx
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v16; // rsi
  CInputConfig *v17; // rcx
  struct CInputSpaceRegion *v18; // rcx
  __int128 *v20; // r8
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  struct CInputSpaceRegion *v34; // [rsp+30h] [rbp-D0h] BYREF
  int v35; // [rsp+38h] [rbp-C8h]
  _QWORD v36[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v37; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v38; // [rsp+60h] [rbp-A0h]
  __int16 v39; // [rsp+64h] [rbp-9Ch]
  __int16 v40; // [rsp+66h] [rbp-9Ah]
  struct _LUID v41; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v42[140]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v44; // [rsp+2A8h] [rbp+1A8h]

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  v34 = 0LL;
  v35 = 0;
  CInputSpace::CInputSpace((CInputSpace *)&v43, (const struct INPUT_SPACE *)&v34, 1);
  v44 = 0;
  v43 = 0x7FFFFFFFFFFFFFFFLL;
  v36[0] = 0LL;
  v36[1] = 0LL;
  v7 = RIMGetQDCActivePathsData((unsigned int *)v36, v5, v6);
  if ( **(_DWORD **)gpDispInfo )
  {
    for ( i = *(_QWORD *)(gpDispInfo + 104); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        CInputSpaceRegion::CInputSpaceRegion((CInputSpaceRegion *)&v37);
        v9 = *(_QWORD *)(i + 40);
        v10 = *(_OWORD *)(v9 + 28);
        v11 = i == *(_QWORD *)(gpDispInfo + 96);
        v39 = *(_WORD *)(v9 + 64);
        v12 = *(_WORD *)(i + 224);
        v38 = v11;
        v13 = *(_QWORD *)(i + 240);
        v37 = v10;
        v40 = v12;
        DrvGetWDDMAdapterInfo(v13, 1, &v41, v42);
        v14 = CInputSpace::AddRegion((CInputSpace *)&v43, (const struct CInputSpaceRegion *)&v37, 0LL);
        if ( v14 < 0 )
          goto LABEL_17;
      }
    }
  }
  if ( v7 )
  {
    for ( j = 0; j < *v7; ++j )
    {
      v16 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)(*((_QWORD *)v7 + 1) + 200LL * j);
      InputTraceLogging::InputConfig::DisplayPath(v16);
      v34 = 0LL;
      if ( CInputConfig::_FindRegionForDisplay(
             v17,
             v16,
             (const struct CInputSpace *)&v43,
             (const struct tagQDC_DATA *)v7,
             &v34) )
      {
        v18 = v34;
        if ( *((_BYTE *)v34 + 376) )
        {
          v20 = &v37;
          v21 = 4LL;
          do
          {
            v22 = *(_OWORD *)v18;
            v23 = *((_OWORD *)v18 + 1);
            v18 = (struct CInputSpaceRegion *)((char *)v18 + 128);
            *v20 = v22;
            v24 = *((_OWORD *)v18 - 6);
            v20[1] = v23;
            v25 = *((_OWORD *)v18 - 5);
            v20[2] = v24;
            v26 = *((_OWORD *)v18 - 4);
            v20[3] = v25;
            v27 = *((_OWORD *)v18 - 3);
            v20[4] = v26;
            v28 = *((_OWORD *)v18 - 2);
            v20[5] = v27;
            v29 = *((_OWORD *)v18 - 1);
            v20[6] = v28;
            v20 += 8;
            *(v20 - 1) = v29;
            --v21;
          }
          while ( v21 );
          v30 = *((_QWORD *)v18 + 8);
          v31 = *((_OWORD *)v18 + 1);
          *v20 = *(_OWORD *)v18;
          v32 = *((_OWORD *)v18 + 2);
          v20[1] = v31;
          v33 = *((_OWORD *)v18 + 3);
          v20[2] = v32;
          v20[3] = v33;
          *((_QWORD *)v20 + 8) = v30;
          CInputSpace::AddRegion((CInputSpace *)&v43, (const struct CInputSpaceRegion *)&v37, &v34);
          v18 = v34;
        }
        if ( v18 )
          CInputSpaceRegion::MapToDisplayPath(v18, v16);
      }
    }
  }
  v14 = CInputConfig::_ConfigureInputSpace(this, (struct CInputSpace *)&v43);
LABEL_17:
  RIMFreeQDCActivePathsData(v7);
  if ( v14 < 0 )
    CInputSpace::FreeRegions((CInputSpace *)&v43);
  return 0LL;
}
