/*
 * XREFs of ScsiToNVMe @ 0x1C0003140
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0003040 (NVMeHwBuildIo.c)
 * Callees:
 *     ScsiInquiryRequest @ 0x1C0001328 (ScsiInquiryRequest.c)
 *     ScsiUnmapRequest @ 0x1C0001A10 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C0001BC0 (ScsiModeSenseRequest.c)
 *     GetSrbScsiData @ 0x1C0002E38 (GetSrbScsiData.c)
 *     ScsiReadCapacityRequest @ 0x1C0002F1C (ScsiReadCapacityRequest.c)
 *     ScsiSyncCacheRequest @ 0x1C0003D1C (ScsiSyncCacheRequest.c)
 *     __security_check_cookie @ 0x1C00052B0 (__security_check_cookie.c)
 *     MdlToPrp @ 0x1C001094C (MdlToPrp.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0011134 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0011320 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeSplitIoCommand @ 0x1C0011D80 (NVMeSplitIoCommand.c)
 *     ScsiLogSenseRequest @ 0x1C0012E9C (ScsiLogSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0012F24 (ScsiModeSelectRequest.c)
 *     ScsiReportLunsCommand @ 0x1C00130EC (ScsiReportLunsCommand.c)
 *     ScsiSanitizeRequest @ 0x1C00131C8 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C001335C (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0013460 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0013564 (ScsiStartStopUnitRequest.c)
 *     NVMeSetSenseData @ 0x1C001891C (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiToNVMe(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  char v4; // r11
  __int64 v5; // rdi
  __int64 v6; // r15
  unsigned int v7; // esi
  unsigned __int8 *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int8 *v13; // rax
  unsigned __int8 *v14; // rax
  bool v15; // r13
  unsigned __int8 v16; // cl
  unsigned __int64 v17; // rdx
  unsigned int started; // ebx
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rax
  _DWORD *v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // r13
  __int16 v28; // ax
  unsigned int v29; // r12d
  unsigned int v30; // r9d
  __int64 v31; // r8
  __int64 v32; // rdx
  _BYTE *SrbScsiData; // rax
  char v34; // r9
  unsigned int v35; // r8d
  unsigned __int8 v36; // dl
  __int64 v37; // rcx
  _DWORD *v38; // rcx
  __int64 v39; // r8
  int v40; // edx
  unsigned int v41; // ecx
  int v42; // r13d
  __int64 v43; // rax
  unsigned __int8 v44; // cl
  __int64 v45; // r12
  unsigned int v46; // eax
  _DWORD *v47; // rax
  unsigned int v48; // r8d
  unsigned int v49; // r8d
  unsigned __int8 v50; // al
  unsigned int v51; // r9d
  int v52; // ecx
  unsigned int v53; // r8d
  unsigned int v54; // ecx
  unsigned int v55; // eax
  unsigned __int8 v56; // al
  char v57; // bl
  unsigned int v58; // r14d
  __int64 v59; // rsi
  _DWORD *ScatterGatherList; // rax
  _QWORD *v61; // r11
  _QWORD *v62; // r8
  unsigned int v63; // r12d
  _QWORD *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // r9
  __int64 v68; // r10
  int v69; // edx
  _QWORD *v70; // rax
  __int64 v71; // rcx
  _QWORD *v72; // rax
  bool v73; // zf
  _QWORD *v74; // rax
  __int64 PhysicalAddress; // rax
  unsigned int v77; // [rsp+30h] [rbp-79h]
  int v78; // [rsp+38h] [rbp-71h]
  int v79; // [rsp+3Ch] [rbp-6Dh]
  unsigned int v80; // [rsp+40h] [rbp-69h]
  unsigned __int16 v81; // [rsp+44h] [rbp-65h]
  unsigned int v82; // [rsp+48h] [rbp-61h] BYREF
  __int64 v83; // [rsp+50h] [rbp-59h]
  char v84; // [rsp+58h] [rbp-51h]
  unsigned int v85; // [rsp+5Ch] [rbp-4Dh]
  unsigned int v86; // [rsp+60h] [rbp-49h]
  int v87; // [rsp+64h] [rbp-45h]
  _BYTE v88[8]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v89; // [rsp+70h] [rbp-39h]
  __int64 v90; // [rsp+78h] [rbp-31h]
  int v91; // [rsp+80h] [rbp-29h]
  int v92; // [rsp+84h] [rbp-25h]
  __int64 v93; // [rsp+88h] [rbp-21h]
  int v94; // [rsp+90h] [rbp-19h] BYREF
  __int64 v95; // [rsp+98h] [rbp-11h]
  __int64 v96; // [rsp+A0h] [rbp-9h]
  __int64 v97; // [rsp+A8h] [rbp-1h]
  __int64 v98; // [rsp+B0h] [rbp+7h]
  __int64 v99; // [rsp+B8h] [rbp+Fh]

  v4 = *(_BYTE *)(a2 + 2);
  LOBYTE(a4) = 0;
  v89 = a1;
  v80 = 0;
  v5 = a2;
  v6 = a1;
  v7 = 0;
  v8 = 0LL;
  if ( v4 == 40 )
  {
    if ( *(_DWORD *)(a2 + 20) )
      goto LABEL_20;
    v9 = *(_DWORD *)(a2 + 56);
    if ( !v9 )
      goto LABEL_20;
    a3 = (unsigned int *)(a2 + 120);
    v10 = v9;
    do
    {
      v11 = *a3;
      if ( (unsigned int)v11 >= 0x80 && (unsigned int)v11 <= *(_DWORD *)(v5 + 16) )
      {
        v12 = v5 + v11;
        a2 = (unsigned int)(*(_DWORD *)(v5 + v11) - 64);
        if ( *(_DWORD *)(v5 + v11) == 64 )
        {
          v7 = *(unsigned __int8 *)(v12 + 10);
          LOBYTE(a4) = 1;
          v80 = v7;
          if ( (_BYTE)v7 )
            v8 = (unsigned __int8 *)(v12 + 24);
        }
        else
        {
          a2 = (unsigned int)(*(_DWORD *)(v5 + v11) - 65);
          if ( *(_DWORD *)(v5 + v11) == 65 )
          {
            v7 = *(unsigned __int8 *)(v12 + 10);
            v14 = (unsigned __int8 *)(v12 + 24);
            v80 = v7;
            LOBYTE(a4) = 1;
            if ( !(_BYTE)v7 )
              v14 = v8;
            v8 = v14;
          }
          else if ( *(_DWORD *)(v5 + v11) == 66 )
          {
            v7 = *(_DWORD *)(v12 + 12);
            v13 = (unsigned __int8 *)(v12 + 32);
            v80 = v7;
            a4 = 1LL;
            if ( !v7 )
              v13 = v8;
            v8 = v13;
          }
        }
      }
      ++a3;
      --v10;
    }
    while ( v10 );
    if ( !(_BYTE)a4 )
      goto LABEL_20;
  }
  else
  {
    if ( v4 )
    {
LABEL_20:
      v7 = 0;
      v80 = 0;
      goto LABEL_21;
    }
    v7 = *(unsigned __int8 *)(a2 + 10);
    v80 = v7;
    if ( (_BYTE)v7 )
      v8 = (unsigned __int8 *)(a2 + 72);
  }
LABEL_21:
  v15 = 0;
  v84 = 0;
  if ( v4 == 40 )
    v16 = *(_BYTE *)(*(unsigned int *)(v5 + 52) + v5 + 10);
  else
    v16 = *(_BYTE *)(v5 + 7);
  v87 = v16;
  if ( v7 < 6 || !v8 )
  {
    LOBYTE(a4) = 32;
    goto LABEL_190;
  }
  if ( *v8 != 0xA0 && !*(_QWORD *)(v6 + 8LL * v16 + 1648) )
  {
    LOBYTE(a4) = 37;
LABEL_190:
    LOBYTE(a2) = 8;
    NVMeSetSenseData(v5, a2, a3, a4);
    return 3238002695LL;
  }
  v17 = 0x1C0000000uLL;
  switch ( *v8 )
  {
    case 0u:
    case 0x2Fu:
    case 0x8Fu:
      *(_BYTE *)(v5 + 3) = 1;
      started = 0;
      goto LABEL_144;
    case 0x12u:
      started = ScsiInquiryRequest(v6, v5, (__int64)v8, a4);
      goto LABEL_144;
    case 0x15u:
    case 0x55u:
      started = ScsiModeSelectRequest(v6, v5, v8);
      goto LABEL_144;
    case 0x1Au:
    case 0x5Au:
      started = ScsiModeSenseRequest(v6, v5, v8);
      goto LABEL_144;
    case 0x1Bu:
      started = ScsiStartStopUnitRequest(v6, v5, v8);
      goto LABEL_144;
    case 0x25u:
    case 0x9Eu:
      started = ScsiReadCapacityRequest(v6, v5, v8, v7);
      goto LABEL_144;
    case 0x28u:
    case 0x2Au:
    case 0x88u:
    case 0x8Au:
      if ( v4 == 40 )
        v19 = *(_QWORD *)(v5 + 104);
      else
        v19 = *(_QWORD *)(v5 + 56);
      if ( (v19 & 0xFFF) != 0 )
        v19 = v19 - (v19 & 0xFFF) + 4096;
      if ( v4 == 40 )
      {
        v20 = 60LL;
        v82 = *(unsigned __int8 *)(*(unsigned int *)(v5 + 52) + v5 + 10);
        v21 = v82;
        v85 = v82;
      }
      else
      {
        v82 = *(unsigned __int8 *)(v5 + 7);
        v21 = v82;
        v85 = v82;
        v20 = 16LL;
      }
      v22 = v6 + 8 * (v21 + 206);
      v23 = *(_QWORD *)v22;
      v24 = (_DWORD *)(v5 + v20);
      v90 = v5 + v20;
      v83 = v22;
      v25 = *(unsigned int *)(v23 + 52);
      v86 = v25;
      if ( !(_DWORD)v25
        || !*(_QWORD *)(v23 + 56)
        || ((v81 = *(_WORD *)(v23 + 92), v4 != 40) ? (v26 = *(_DWORD *)(v5 + 12)) : (v26 = *(_DWORD *)(v5 + 24)),
            (v26 & 0xC0) == 0 || !*v24 || (((_DWORD)v25 - 1) & *v24) != 0) )
      {
        LOBYTE(v22) = 36;
        LOBYTE(v24) = 6;
        NVMeSetSenseData(v5, v24, v25, v22);
        started = -1056964602;
        goto LABEL_144;
      }
      *(_BYTE *)(v19 + 4253) = *(_BYTE *)(v19 + 4253) & 0xFC | 2;
      if ( *(_BYTE *)(v5 + 2) == 40 )
        v27 = *(_QWORD *)(v5 + 104);
      else
        v27 = *(_QWORD *)(v5 + 56);
      if ( (v27 & 0xFFF) != 0 )
        v27 = v27 - (v27 & 0xFFF) + 4096;
      if ( (*(_BYTE *)(v27 + 4253) & 1) != 0 )
      {
        v28 = *(_WORD *)(v6 + 320);
        v29 = v82;
        goto LABEL_96;
      }
      if ( *(_BYTE *)(v6 + 16) )
      {
        v29 = v82;
        v28 = *(_WORD *)(*(_QWORD *)(v6 + 760) + 40LL);
        goto LABEL_96;
      }
      v77 = 0;
      v93 = 0LL;
      v94 = 0;
      v92 = 20;
      v91 = 2;
      StorPortExtendedFunction(15LL, v6, v5);
      StorPortExtendedFunction(56LL, v6, &v94);
      v30 = 0;
      if ( !*(_WORD *)(v6 + 202) )
      {
        v30 = 0 % 0u;
        v77 = 0 % 0u;
      }
      if ( *(_QWORD *)(*(_QWORD *)(v6 + 232) + 48LL * v30 + 40) )
      {
        v29 = v82;
      }
      else
      {
        v31 = *(_QWORD *)(*(_QWORD *)(v6 + 248) + 16LL);
        v7 = v80;
        v29 = v85;
        v32 = *(_QWORD *)(*(_QWORD *)(v31 + 192)
                        + 8LL
                        * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 184), 1u)
                         % *(_DWORD *)(v31 + 180)));
        *(_QWORD *)(*(_QWORD *)(v6 + 232) + 48LL * v30 + 40) = v32;
        ++*(_WORD *)(v32 + 52);
        v30 = v77;
      }
      if ( !*(_BYTE *)(v6 + 3736) )
      {
        v28 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 232) + 48LL * v30 + 40) + 40LL);
        goto LABEL_95;
      }
      SrbScsiData = (_BYTE *)GetSrbScsiData(v5, &v82, 0LL, 0LL, 0LL);
      if ( *SrbScsiData != 40
        && *SrbScsiData != 42
        && (unsigned __int8)*SrbScsiData != 136
        && (unsigned __int8)*SrbScsiData != 138 )
      {
        v28 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 232) + 48LL * v77 + 40) + 40LL);
        goto LABEL_95;
      }
      v34 = *(_BYTE *)(v5 + 2);
      if ( v34 != 40 )
        goto LABEL_83;
      v35 = *(_DWORD *)(v5 + 56);
      if ( !v35 )
        goto LABEL_83;
      v36 = 0;
      break;
    case 0x35u:
      started = ScsiSyncCacheRequest(v6, v5, a3);
      goto LABEL_144;
    case 0x42u:
      started = ScsiUnmapRequest(v6, v5);
      goto LABEL_144;
    case 0x48u:
      started = ScsiSanitizeRequest(v6, v5, v8);
      goto LABEL_144;
    case 0x4Du:
      started = ScsiLogSenseRequest(v6, v5, v8);
      goto LABEL_144;
    case 0x9Bu:
      if ( (v8[1] & 0x1F) != 0x1C )
        goto LABEL_141;
      v56 = v8[14];
      if ( v56 )
      {
        if ( (unsigned __int8)(v56 - 16) > 0xDFu )
        {
LABEL_141:
          *(_BYTE *)(v5 + 3) = 6;
          goto LABEL_143;
        }
        started = NVMeGetDeviceTelemetryData(v6, v5, v8);
      }
      else
      {
        started = NVMeGetDeviceTelemetryHeader(v6, v5, a3);
      }
      goto LABEL_144;
    case 0xA0u:
      started = ScsiReportLunsCommand(v6, v5, a3);
      goto LABEL_144;
    case 0xA2u:
      started = ScsiSecurityProtocolInRequest(v6, v5, v8);
      goto LABEL_144;
    case 0xB5u:
      started = ScsiSecurityProtocolOutRequest(v6, v5, v8);
      goto LABEL_144;
    default:
      LOBYTE(a4) = 32;
      LOBYTE(v17) = 6;
      NVMeSetSenseData(v5, v17, a3, a4);
LABEL_143:
      started = -1056964601;
      goto LABEL_144;
  }
  do
  {
    v37 = *(unsigned int *)(v5 + 4LL * v36 + 120);
    if ( (unsigned int)v37 >= 0x80 && (unsigned int)v37 < *(_DWORD *)(v5 + 16) )
    {
      v38 = (_DWORD *)(v5 + v37);
      if ( *v38 == 128 )
        goto LABEL_84;
    }
    ++v36;
  }
  while ( v36 < v35 );
LABEL_83:
  v38 = 0LL;
  if ( v34 == 40 )
  {
LABEL_84:
    v39 = 60LL;
    goto LABEL_86;
  }
  v39 = 16LL;
LABEL_86:
  v40 = *(_DWORD *)(v6 + 3748);
  if ( (v40 & 0x80u) != 0 || *(_DWORD *)(v5 + v39) <= *(_DWORD *)(v6 + 3744) && v38 && (v38[2] & 2) == 0 )
  {
    if ( (v40 & 0x40) != 0 )
      v41 = *(unsigned __int16 *)(v6 + 274);
    else
      v41 = *(unsigned __int16 *)(v6 + 276);
    v28 = *(_WORD *)(136LL * (unsigned __int16)(v77 % v41) + *(_QWORD *)(v6 + 760) + 40);
  }
  else
  {
    v28 = *(_WORD *)(136LL
                   * (unsigned __int16)(*(_WORD *)(v6 + 276)
                                      + v77 % (unsigned __int16)(*(_WORD *)(v6 + 274) - *(_WORD *)(v6 + 276)))
                   + *(_QWORD *)(v6 + 760)
                   + 40);
  }
LABEL_95:
  v22 = v83;
LABEL_96:
  *(_WORD *)(v27 + 4244) = v28;
  if ( v29 < *(_DWORD *)(v6 + 192) && *(_QWORD *)v22 )
    v42 = *(_DWORD *)(*(_QWORD *)v22 + 16LL);
  else
    v42 = 0;
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v43 = *(unsigned int *)(v5 + 52);
    v83 = v5 + 60;
    v44 = *(_BYTE *)(v43 + v5 + 10);
  }
  else
  {
    v44 = *(_BYTE *)(v5 + 7);
    v83 = v5 + 16;
  }
  v45 = v44;
  if ( *v8 == 40 )
    goto LABEL_116;
  if ( *v8 != 42 )
  {
    if ( *v8 != 136 )
    {
      if ( *v8 != 138 )
        goto LABEL_117;
      goto LABEL_107;
    }
LABEL_116:
    *(_BYTE *)(v19 + 4096) = 2;
    goto LABEL_117;
  }
LABEL_107:
  *(_BYTE *)(v19 + 4096) = 1;
  if ( (*(_BYTE *)(v6 + 3712) & 3) == 3 && *(unsigned __int8 *)(v6 + 3713) == v44 )
  {
    if ( *(_WORD *)(v6 + 3716) )
    {
      v96 = 0LL;
      v97 = 0LL;
      v98 = 0LL;
      v99 = 0LL;
      v95 = 1LL;
      if ( !(unsigned int)StorPortExtendedFunction(28LL, v6, v5)
        && (v96 & 0x100) != 0
        && (unsigned int)(HIDWORD(v96) - 1) <= 0xFFFE
        && HIDWORD(v96) <= *(unsigned __int16 *)(v6 + 3716)
        && WORD2(v96) )
      {
        v46 = *(_DWORD *)(v19 + 4144) & 0xFF1FFFFF;
        *(_WORD *)(v19 + 4150) = WORD2(v96);
        *(_DWORD *)(v19 + 4144) = v46 | 0x100000;
      }
    }
  }
LABEL_117:
  *(_DWORD *)(v19 + 4096) &= 0xFFFFFCFF;
  v47 = (_DWORD *)v83;
  *(_QWORD *)(v19 + 4112) = 0LL;
  *(_DWORD *)(v19 + 4100) = v42;
  v48 = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v45 + 1648) + 52LL);
  v49 = (v48 + *v47 - 1) / v48;
  if ( v7 == 16 )
  {
    HIBYTE(v79) = v8[2];
    HIBYTE(v78) = v8[6];
    BYTE2(v79) = v8[3];
    BYTE2(v78) = v8[7];
    BYTE1(v79) = v8[4];
    BYTE1(v78) = v8[8];
    v50 = v8[9];
    LOBYTE(v79) = v8[5];
  }
  else
  {
    HIBYTE(v78) = v8[2];
    BYTE2(v78) = v8[3];
    BYTE1(v78) = v8[4];
    v50 = v8[5];
    v79 = 0;
  }
  v51 = v86;
  LOBYTE(v78) = v50;
  *(_DWORD *)(v19 + 4136) = v78;
  *(_WORD *)(v19 + 4144) = v49 - 1;
  *(_DWORD *)(v19 + 4144) &= 0xC3FFFFFF;
  *(_DWORD *)(v19 + 4140) = v79;
  v52 = *(_DWORD *)(v19 + 4144) & 0x3FFFFFFF | ((v8[1] & 8) << 27);
  *(_BYTE *)(v19 + 4148) = 0;
  *(_DWORD *)(v19 + 4144) = v52;
  *(_QWORD *)(v19 + 4152) = 0LL;
  v53 = *(_DWORD *)(v6 + 48);
  if ( (v53 < v51 || v53 % v51) && !v81 )
  {
    v15 = 0;
    started = 0;
  }
  else
  {
    v83 = *(_QWORD *)(v19 + 4136);
    v54 = (unsigned __int16)v52 + 1;
    if ( v81 )
      v55 = v81;
    else
      v55 = v53 / v51;
    started = 0;
    v15 = v83 / v55 != (v83 + v54 - 1LL) / v55;
  }
LABEL_144:
  if ( !*(_BYTE *)(v5 + 3) )
  {
    if ( (*(_DWORD *)(v6 + 52) & 8) != 0 )
    {
      started = MdlToPrp(v6, v5);
      if ( started )
        ++*(_DWORD *)(v6 + 3776);
    }
    else
    {
      v57 = 0;
      v58 = 0;
      if ( *(_BYTE *)(v5 + 2) == 40 )
        v59 = *(_QWORD *)(v5 + 104);
      else
        v59 = *(_QWORD *)(v5 + 56);
      if ( (v59 & 0xFFF) != 0 )
        v59 = v59 - (v59 & 0xFFF) + 4096;
      if ( (*(_BYTE *)(v59 + 4253) & 6) == 2 )
      {
        ScatterGatherList = *(_DWORD **)(v59 + 4216);
        if ( !ScatterGatherList )
        {
          ScatterGatherList = (_DWORD *)StorPortGetScatterGatherList(v6, v5);
          *(_QWORD *)(v59 + 4216) = ScatterGatherList;
        }
        v61 = (_QWORD *)(v59 + 4120);
        v62 = (_QWORD *)(v59 + 4120);
        v63 = 0;
        if ( *ScatterGatherList )
        {
          do
          {
            if ( v57 )
            {
              v64 = (_QWORD *)v59;
              v65 = 64LL;
              do
              {
                *v64 = 0LL;
                v64[1] = 0LL;
                v64[2] = 0LL;
                v64 += 8;
                *(v64 - 5) = 0LL;
                *(v64 - 4) = 0LL;
                *(v64 - 3) = 0LL;
                *(v64 - 2) = 0LL;
                *(v64 - 1) = 0LL;
                --v65;
              }
              while ( v65 );
              v57 = 0;
            }
            v66 = *(_QWORD *)(v59 + 4216);
            v67 = *(_QWORD *)(v66 + 24LL * v63 + 16);
            v68 = *(unsigned int *)(v66 + 24LL * v63 + 24);
            if ( v68 + v67 % 4096 > 4096 )
            {
              while ( (_DWORD)v68 )
              {
                v69 = v67 & 0xFFF;
                if ( v57 )
                {
                  v70 = (_QWORD *)v59;
                  v71 = 64LL;
                  v57 = 0;
                  do
                  {
                    *v70 = 0LL;
                    v70[1] = 0LL;
                    v70[2] = 0LL;
                    v70 += 8;
                    *(v70 - 5) = 0LL;
                    *(v70 - 4) = 0LL;
                    *(v70 - 3) = 0LL;
                    *(v70 - 2) = 0LL;
                    *(v70 - 1) = 0LL;
                    --v71;
                  }
                  while ( v71 );
                }
                *v62 = v67;
                if ( (unsigned int)(v69 + v68) <= 0x1000 )
                  break;
                LODWORD(v68) = v69 + v68 - 4096;
                v67 += (unsigned int)(4096 - v69);
                v72 = v62 + 1;
                if ( v62 == v61 )
                  v57 = 1;
                ++v58;
                v73 = v62 == v61;
                v62 = (_QWORD *)v59;
                if ( !v73 )
                  v62 = v72;
              }
            }
            else
            {
              *v62 = v67;
            }
            v74 = v62 + 1;
            if ( v62 == v61 )
              v57 = 1;
            ++v58;
            ++v63;
            v73 = v62 == v61;
            v62 = (_QWORD *)v59;
            if ( !v73 )
              v62 = v74;
          }
          while ( v63 < **(_DWORD **)(v59 + 4216) );
          v6 = v89;
          if ( v58 >= 2 )
          {
            if ( v58 == 2 )
              PhysicalAddress = *(_QWORD *)v59;
            else
              PhysicalAddress = StorPortGetPhysicalAddress(v89, v5, v59, v88);
            *(_QWORD *)(v59 + 4128) = PhysicalAddress;
          }
        }
      }
      started = 0;
    }
    if ( started )
    {
      *(_BYTE *)(v5 + 3) = 4;
    }
    else if ( v15 )
    {
      NVMeSplitIoCommand(v6, v5);
      return 0LL;
    }
  }
  return started;
}
