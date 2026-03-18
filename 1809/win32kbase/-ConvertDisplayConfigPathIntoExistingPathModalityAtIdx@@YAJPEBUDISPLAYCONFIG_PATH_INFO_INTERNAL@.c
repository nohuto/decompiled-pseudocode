/*
 * XREFs of ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C01007CC
 * Callers:
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C0100D00 (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01037AC (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0103CBC (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 * Callees:
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x1C0100C80 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 *     ?ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0100DB8 (-ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@P.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C01033F0 (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_.c)
 */

__int64 __fastcall ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        bool a5,
        struct D3DKMT_GETPATHSMODALITY *a6,
        bool *a7)
{
  wchar_t *v7; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  char *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  int TargetVirtualization; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned __int8 v22; // r10
  __int64 v23; // rdx
  unsigned __int8 v24; // r9
  bool v25; // al
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // esi
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // ebx
  __int64 v38; // r8
  __int64 v39; // rax
  unsigned __int8 v40; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 v41[15]; // [rsp+41h] [rbp-27h] BYREF

  v7 = gpGraphicsDeviceList;
  v9 = (unsigned int)a3;
  v10 = a1;
  while ( 1 )
  {
    if ( !v7 )
      goto LABEL_60;
    if ( (*((_DWORD *)v7 + 40) & 0x800000) != 0
      && *((_DWORD *)v7 + 62) == *(_DWORD *)(a1 + 16)
      && *((_DWORD *)v7 + 63) == *(_DWORD *)(a1 + 20) )
    {
      break;
    }
    v7 = (wchar_t *)*((_QWORD *)v7 + 16);
  }
  v11 = (char *)a6 + 272 * (unsigned int)a2;
  *((_QWORD *)v11 + 6) = *(_QWORD *)a1;
  *((_QWORD *)v11 + 7) = *(_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x8004700000000000uLL) != 0x8004700000000000uLL || (v12 & 0x7FD30E6FFF7CF070LL) != 0 )
  {
    v13 = WdLogNewEntry5_WdError(0x8004700000000000uLL, v12, a3);
    *(_QWORD *)(v13 + 24) = *(_QWORD *)v10;
LABEL_61:
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v14 = *(_QWORD *)(a1 + 8);
  if ( (v14 & 0xFFFFFE7FFF7DF470uLL) != 0 || (v12 & v14) != v14 )
  {
    v13 = WdLogNewEntry5_WdError(v14, v12, a3);
    *(_QWORD *)(v13 + 24) = *(_QWORD *)v10;
    *(_QWORD *)(v13 + 32) = *(_QWORD *)(v10 + 8);
    goto LABEL_61;
  }
  TargetVirtualization = GetTargetVirtualization(
                           *(struct _LUID *)(v10 + 16),
                           *(_DWORD *)(v10 + 28),
                           v41,
                           &v40,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v11 + 34,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v11 + 35,
                           (enum _D3DKMT_DISPLAY_TARGET_USAGE *)(v11 + 260));
  v19 = TargetVirtualization;
  if ( TargetVirtualization < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v20 + 24) = v19;
    WdLogEvent5_WdError(v20);
    return (unsigned int)v19;
  }
  v22 = v40;
  v23 = *((_QWORD *)v11 + 6) | 0x800000000000LL;
  v24 = v41[0];
  a3 = 2LL;
  *((_QWORD *)v11 + 6) = v23;
  *((_QWORD *)v11 + 8) = *((_QWORD *)v7 + 31);
  *((_DWORD *)v11 + 18) = *(_DWORD *)(v10 + 24);
  *((_DWORD *)v11 + 19) = *(_DWORD *)(v10 + 28);
  *((_DWORD *)v11 + 58) = *(_DWORD *)(v10 + 156);
  a1 = 0x8000000000000LL;
  a2 = v23 | 0x8000000000000LL;
  v11[177] = (v22 == 0 ? 2 : 0) | (v24 == 0);
  *((_QWORD *)v11 + 6) = a2;
  if ( a5 )
  {
    *((_DWORD *)v11 + 70) |= 0x80u;
    v25 = !v22 && v24;
    v11[312] = v25;
  }
  if ( (*(_QWORD *)v10 & 0x8000000000000LL) != 0 && v11[177] != *(_BYTE *)(v10 + 101) )
    goto LABEL_60;
  *((_QWORD *)v11 + 34) = 0LL;
  if ( (*(_BYTE *)v10 & 0x87) != 0 )
  {
    *((_DWORD *)v11 + 20) = (unsigned __int16)*(_DWORD *)(v10 + 72);
    *((_DWORD *)v11 + 21) = *(_DWORD *)(v10 + 64);
    *((_DWORD *)v11 + 22) = *(_DWORD *)(v10 + 68);
    *((_DWORD *)v11 + 23) = *(_DWORD *)(v10 + 56);
    *((_DWORD *)v11 + 24) = *(_DWORD *)(v10 + 60);
    *((_DWORD *)v11 + 25) = *(_DWORD *)(v10 + 48);
    *((_DWORD *)v11 + 26) = *(_DWORD *)(v10 + 52);
    *((_DWORD *)v11 + 27) = *(_DWORD *)(v10 + 40);
    *((_DWORD *)v11 + 28) = *(_DWORD *)(v10 + 44);
    *((_QWORD *)v11 + 15) = *(_QWORD *)(v10 + 32);
    *((_DWORD *)v11 + 32) ^= (*((_DWORD *)v11 + 32) ^ *(_DWORD *)(v10 + 76)) & 7;
    *((_DWORD *)v11 + 32) = *((_DWORD *)v11 + 32) & 7 | (*(_DWORD *)(v10 + 72) >> 13) & 0x1F8;
  }
  a1 = a2;
  if ( (a2 & 2) != 0 && !*((_DWORD *)v11 + 26) )
  {
LABEL_60:
    v13 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v13 + 24) = v9;
    goto LABEL_61;
  }
  v26 = *(_QWORD *)v10;
  if ( (*(_QWORD *)v10 & 0x20000LL) != 0 )
  {
    *((_QWORD *)v11 + 25) = *(_QWORD *)(v10 + 124);
    if ( !a4 || v24 && v22 )
      v27 = 0LL;
    else
      v27 = 0x20000000000000LL;
    a1 = v27 | a2;
    *((_QWORD *)v11 + 6) = v27 | a2;
    v26 = *(_QWORD *)v10;
  }
  if ( (v26 & 0x800) != 0 )
  {
    *((_QWORD *)v11 + 24) = *(_QWORD *)(v10 + 116);
    v26 = *(_QWORD *)v10;
  }
  if ( (v26 & 0x100) != 0 )
  {
    *((_DWORD *)v11 + 36) = *(_DWORD *)(v10 + 88);
    *((_DWORD *)v11 + 37) = *(_DWORD *)(v10 + 92);
    *((_DWORD *)v11 + 38) = *(_DWORD *)(v10 + 88);
    *((_DWORD *)v11 + 39) = *(_DWORD *)(v10 + 92);
    v28 = *(_DWORD *)(v10 + 96);
    *((_DWORD *)v11 + 42) = 0;
    *((_DWORD *)v11 + 43) = 0;
    *((_DWORD *)v11 + 41) = v28;
    a1 |= 0x100uLL;
    LOBYTE(v28) = *(_BYTE *)(v10 + 100);
    *((_QWORD *)v11 + 6) = a1;
    v11[176] = v28;
    v26 = *(_QWORD *)v10;
  }
  if ( (v26 & 0x8000000000LL) != 0 )
  {
    v29 = *(_DWORD *)(v10 + 96);
    a1 |= 0x8000000000uLL;
    *((_QWORD *)v11 + 6) = a1;
    *((_DWORD *)v11 + 41) = v29;
    v26 = *(_QWORD *)v10;
  }
  if ( (v26 & 0x10000000000LL) != 0 )
  {
    v11[176] = *(_BYTE *)(v10 + 100);
    *((_QWORD *)v11 + 6) = a1 | 0x10000000000LL;
    v26 = *(_QWORD *)v10;
  }
  if ( (v26 & 0x800000) != 0 )
  {
    *(_OWORD *)(v11 + 216) = *(_OWORD *)(v10 + 140);
    v26 = *(_QWORD *)v10;
  }
  if ( (v26 & 0x200) != 0 )
  {
    if ( *(_DWORD *)(v10 + 104) == 1 )
    {
      LODWORD(a3) = 1;
    }
    else if ( *(_DWORD *)(v10 + 104) != 2 )
    {
      if ( *(_DWORD *)(v10 + 104) == 3 )
      {
        LODWORD(a3) = 3;
      }
      else if ( *(_DWORD *)(v10 + 104) == 4 )
      {
        LODWORD(a3) = 4;
      }
      else
      {
        LODWORD(a3) = 0;
      }
    }
    *((_DWORD *)v11 + 45) = a3;
  }
  v32 = ConvertDisplayConfigScalingToPathModalityForPath(
          (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v10,
          (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v11 + 48),
          a7);
  if ( v32 >= 0 )
  {
    *((_DWORD *)v11 + 60) = 0;
    if ( (*(_BYTE *)v10 & 8) != 0
      && (v37 = ConvertDisplayConfigWireFormatToPathModalityForPath(
                  (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v10,
                  (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v11 + 48)),
          v37 < 0) )
    {
      v39 = WdLogNewEntry5_WdError(v36, v35, v38);
      *(_QWORD *)(v39 + 24) = v9;
      WdLogEvent5_WdError(v39);
      return (unsigned int)v37;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v34 = WdLogNewEntry5_WdError(v31, v30, v33);
    *(_QWORD *)(v34 + 24) = v9;
    WdLogEvent5_WdError(v34);
    return (unsigned int)v32;
  }
}
