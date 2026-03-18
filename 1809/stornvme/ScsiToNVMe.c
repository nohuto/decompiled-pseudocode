/*
 * XREFs of ScsiToNVMe @ 0x1C0004140
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0004040 (NVMeHwBuildIo.c)
 * Callees:
 *     ScsiModeSenseRequest @ 0x1C0002878 (ScsiModeSenseRequest.c)
 *     ScsiReadCapacityRequest @ 0x1C0003C94 (ScsiReadCapacityRequest.c)
 *     ScsiUnmapRequest @ 0x1C0003E84 (ScsiUnmapRequest.c)
 *     MdlToPrp @ 0x1C0004B10 (MdlToPrp.c)
 *     ScsiSyncCacheRequest @ 0x1C0004DC8 (ScsiSyncCacheRequest.c)
 *     GetSrbScsiData @ 0x1C000526C (GetSrbScsiData.c)
 *     ScsiInquiryRequest @ 0x1C00054AC (ScsiInquiryRequest.c)
 *     __security_check_cookie @ 0x1C0006450 (__security_check_cookie.c)
 *     NVMeSetSenseData @ 0x1C000A840 (NVMeSetSenseData.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0012174 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0012308 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeSplitIoCommand @ 0x1C0012C80 (NVMeSplitIoCommand.c)
 *     ScsiLogSenseRequest @ 0x1C0013CE4 (ScsiLogSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0013D6C (ScsiModeSelectRequest.c)
 *     ScsiReportLunsCommand @ 0x1C0013F3C (ScsiReportLunsCommand.c)
 *     ScsiSanitizeRequest @ 0x1C0014018 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C00141AC (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C00142C0 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C00143D4 (ScsiStartStopUnitRequest.c)
 *     SglToPrp @ 0x1C00144B0 (SglToPrp.c)
 */

__int64 __fastcall ScsiToNVMe(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  char v4; // r11
  unsigned int started; // r14d
  __int64 v6; // rbx
  unsigned int v8; // r15d
  unsigned __int8 *v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // rax
  bool v16; // r12
  unsigned __int8 v17; // cl
  unsigned __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rax
  _DWORD *v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // r12
  __int16 v28; // ax
  __int64 v29; // r9
  unsigned int v30; // ecx
  unsigned int v31; // r9d
  __int64 v32; // r8
  unsigned __int32 v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rax
  _BYTE *SrbScsiData; // rax
  char v37; // r9
  unsigned int v38; // r8d
  unsigned __int8 v39; // dl
  __int64 v40; // rcx
  _DWORD *v41; // rcx
  __int64 v42; // r8
  int v43; // edx
  unsigned int v44; // ecx
  __int64 v45; // rax
  unsigned __int8 v46; // cl
  __int64 v47; // r12
  unsigned int v48; // eax
  _DWORD *v49; // rax
  unsigned int v50; // r8d
  unsigned int v51; // r8d
  unsigned __int8 v52; // al
  unsigned int v53; // r9d
  int v54; // ecx
  unsigned int v55; // r8d
  unsigned int v56; // ecx
  unsigned int v57; // eax
  unsigned __int8 v58; // al
  unsigned int v59; // eax
  unsigned int v61; // [rsp+30h] [rbp-69h]
  int v62; // [rsp+30h] [rbp-69h]
  int v63; // [rsp+34h] [rbp-65h]
  unsigned int v64; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v65; // [rsp+3Ch] [rbp-5Dh]
  unsigned __int16 v66; // [rsp+40h] [rbp-59h]
  unsigned int v67; // [rsp+44h] [rbp-55h]
  char v68; // [rsp+48h] [rbp-51h]
  __int64 v69; // [rsp+50h] [rbp-49h]
  unsigned __int16 v70; // [rsp+58h] [rbp-41h] BYREF
  __int64 v71; // [rsp+60h] [rbp-39h]
  unsigned int v72; // [rsp+68h] [rbp-31h]
  int v73; // [rsp+6Ch] [rbp-2Dh]
  __int64 v74; // [rsp+70h] [rbp-29h]
  __int64 v75; // [rsp+78h] [rbp-21h] BYREF
  __int64 v76; // [rsp+80h] [rbp-19h]
  int v77; // [rsp+88h] [rbp-11h] BYREF
  __int64 v78; // [rsp+90h] [rbp-9h] BYREF
  __int64 v79; // [rsp+98h] [rbp-1h]
  __int64 v80; // [rsp+A0h] [rbp+7h]
  __int64 v81; // [rsp+A8h] [rbp+Fh]
  __int64 v82; // [rsp+B0h] [rbp+17h]

  v4 = *(_BYTE *)(a2 + 2);
  started = 0;
  LOBYTE(a4) = 0;
  v65 = 0;
  v6 = a2;
  v8 = 0;
  v9 = 0LL;
  if ( v4 == 40 )
  {
    if ( !*(_DWORD *)(a2 + 20) )
    {
      v10 = *(_DWORD *)(a2 + 56);
      if ( v10 )
      {
        a3 = (unsigned int *)(a2 + 120);
        v11 = v10;
        do
        {
          v12 = *a3;
          if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 <= *(_DWORD *)(v6 + 16) )
          {
            v13 = v6 + v12;
            a2 = (unsigned int)(*(_DWORD *)(v6 + v12) - 64);
            if ( *(_DWORD *)(v6 + v12) == 64 )
            {
              v8 = *(unsigned __int8 *)(v13 + 10);
              LOBYTE(a4) = 1;
              v65 = v8;
              if ( (_BYTE)v8 )
                v9 = (unsigned __int8 *)(v13 + 24);
            }
            else
            {
              a2 = (unsigned int)(*(_DWORD *)(v6 + v12) - 65);
              if ( *(_DWORD *)(v6 + v12) == 65 )
              {
                v8 = *(unsigned __int8 *)(v13 + 10);
                v15 = (unsigned __int8 *)(v13 + 24);
                v65 = v8;
                LOBYTE(a4) = 1;
                if ( !(_BYTE)v8 )
                  v15 = v9;
                v9 = v15;
              }
              else if ( *(_DWORD *)(v6 + v12) == 66 )
              {
                v14 = (unsigned __int8 *)(v13 + 32);
                v65 = *(_DWORD *)(v13 + 12);
                v8 = v65;
                a4 = 1LL;
                if ( !v65 )
                  v14 = v9;
                v9 = v14;
              }
            }
          }
          ++a3;
          --v11;
        }
        while ( v11 );
        if ( (_BYTE)a4 )
          goto LABEL_21;
      }
    }
  }
  else if ( !v4 )
  {
    v8 = *(unsigned __int8 *)(a2 + 10);
    v65 = v8;
    if ( (_BYTE)v8 )
      v9 = (unsigned __int8 *)(a2 + 72);
    goto LABEL_21;
  }
  v8 = 0;
  v65 = 0;
LABEL_21:
  v16 = 0;
  v68 = 0;
  if ( v4 == 40 )
    v17 = *(_BYTE *)(*(unsigned int *)(v6 + 52) + v6 + 10);
  else
    v17 = *(_BYTE *)(v6 + 7);
  v73 = v17;
  if ( v8 < 6 || !v9 )
  {
    LOBYTE(a4) = 32;
    goto LABEL_160;
  }
  if ( *v9 != 0xA0 )
  {
    a2 = *(_QWORD *)(a1 + 8LL * v17 + 1640);
    if ( !a2 || !*(_DWORD *)(a2 + 52) )
    {
      LOBYTE(a4) = 37;
LABEL_160:
      LOBYTE(a2) = 8;
      NVMeSetSenseData(v6, a2, a3, a4);
      return 3238002695LL;
    }
  }
  v18 = 0x1C0000000uLL;
  switch ( *v9 )
  {
    case 0u:
    case 0x2Fu:
    case 0x8Fu:
      *(_BYTE *)(v6 + 3) = 1;
      goto LABEL_148;
    case 0x12u:
      started = ScsiInquiryRequest(a1, v6, v9);
      goto LABEL_148;
    case 0x15u:
    case 0x55u:
      started = ScsiModeSelectRequest(a1, v6, v9);
      goto LABEL_148;
    case 0x1Au:
    case 0x5Au:
      started = ScsiModeSenseRequest(a1, v6, v9);
      goto LABEL_148;
    case 0x1Bu:
      started = ScsiStartStopUnitRequest(a1, v6, v9);
      goto LABEL_148;
    case 0x25u:
    case 0x9Eu:
      started = ScsiReadCapacityRequest(a1, v6, v9, v8);
      goto LABEL_148;
    case 0x28u:
    case 0x2Au:
    case 0x88u:
    case 0x8Au:
      if ( v4 == 40 )
        v19 = *(_QWORD *)(v6 + 104);
      else
        v19 = *(_QWORD *)(v6 + 56);
      if ( (v19 & 0xFFF) != 0 )
        v19 = v19 - (v19 & 0xFFF) + 4096;
      if ( v4 == 40 )
      {
        v20 = 60LL;
        v61 = *(unsigned __int8 *)(*(unsigned int *)(v6 + 52) + v6 + 10);
        v21 = *(unsigned __int8 *)(*(unsigned int *)(v6 + 52) + v6 + 10);
        v67 = v61;
      }
      else
      {
        v61 = *(unsigned __int8 *)(v6 + 7);
        v21 = *(unsigned __int8 *)(v6 + 7);
        v67 = v61;
        v20 = 16LL;
      }
      v22 = a1 + 8 * (v21 + 205);
      v23 = *(_QWORD *)v22;
      v24 = (_DWORD *)(v20 + v6);
      v74 = v20 + v6;
      v71 = v22;
      v25 = *(unsigned int *)(v23 + 52);
      v72 = v25;
      if ( !(_DWORD)v25
        || !*(_QWORD *)(v23 + 56)
        || ((v66 = *(_WORD *)(v23 + 92), v4 != 40) ? (v26 = *(_DWORD *)(v6 + 12)) : (v26 = *(_DWORD *)(v6 + 24)),
            (v26 & 0xC0) == 0 || !*v24 || (((_DWORD)v25 - 1) & *v24) != 0) )
      {
        LOBYTE(v22) = 36;
        LOBYTE(v24) = 6;
        NVMeSetSenseData(v6, v24, v25, v22);
        started = -1056964602;
        goto LABEL_148;
      }
      *(_BYTE *)(v19 + 4253) = *(_BYTE *)(v19 + 4253) & 0xFC | 2;
      if ( *(_BYTE *)(v6 + 2) == 40 )
        v27 = *(_QWORD *)(v6 + 104);
      else
        v27 = *(_QWORD *)(v6 + 56);
      if ( (v27 & 0xFFF) != 0 )
        v27 = v27 - (v27 & 0xFFF) + 4096;
      if ( (*(_BYTE *)(v27 + 4253) & 1) != 0 )
      {
        v28 = *(_WORD *)(a1 + 312);
        goto LABEL_100;
      }
      if ( *(_BYTE *)(a1 + 16) )
      {
        v28 = *(_WORD *)(*(_QWORD *)(a1 + 752) + 40LL);
        goto LABEL_100;
      }
      v64 = 0;
      v76 = 0LL;
      v77 = 0;
      v75 = 0x1400000002LL;
      StorPortExtendedFunction(15LL, a1, v6, &v75);
      v70 = v76;
      if ( (_WORD)v77 == 0xFFFF && BYTE2(v77) == 0xFF )
        StorPortExtendedFunction(17LL, a1, &v77, v29);
      StorPortExtendedFunction(56LL, a1, &v77, &v64);
      v30 = *(unsigned __int16 *)(a1 + 194);
      v31 = v64;
      if ( v64 >= v30 )
      {
        v31 = v64 % v30;
        v64 %= v30;
      }
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 224) + 48LL * v31 + 40) )
      {
        v32 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 24LL * v70 + 16);
        v33 = _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 184), 1u);
        v8 = v65;
        v34 = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 8LL * (v33 % *(_DWORD *)(v32 + 180)));
        *(_QWORD *)(*(_QWORD *)(a1 + 224) + 48LL * v31 + 40) = v34;
        ++*(_WORD *)(v34 + 52);
        v31 = v64;
        v61 = v67;
      }
      if ( !*(_BYTE *)(a1 + 3728) )
      {
        v35 = v31;
LABEL_74:
        v28 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 224) + 48 * v35 + 40) + 40LL);
        goto LABEL_99;
      }
      SrbScsiData = (_BYTE *)GetSrbScsiData(v6, (unsigned int)&v70, 0, 0, 0LL);
      if ( *SrbScsiData != 40
        && *SrbScsiData != 42
        && (unsigned __int8)*SrbScsiData != 136
        && (unsigned __int8)*SrbScsiData != 138 )
      {
        v35 = v64;
        goto LABEL_74;
      }
      v37 = *(_BYTE *)(v6 + 2);
      if ( v37 == 40 )
      {
        v38 = *(_DWORD *)(v6 + 56);
        if ( v38 )
        {
          v39 = 0;
          do
          {
            v40 = *(unsigned int *)(v6 + 4LL * v39 + 120);
            if ( (unsigned int)v40 >= 0x80 && (unsigned int)v40 < *(_DWORD *)(v6 + 16) )
            {
              v41 = (_DWORD *)(v6 + v40);
              if ( *v41 == 128 )
                goto LABEL_88;
            }
          }
          while ( ++v39 < v38 );
        }
      }
      v41 = 0LL;
      if ( v37 == 40 )
      {
LABEL_88:
        v42 = 60LL;
        goto LABEL_90;
      }
      v42 = 16LL;
LABEL_90:
      v43 = *(_DWORD *)(a1 + 3740);
      if ( (v43 & 0x80u) != 0 || *(_DWORD *)(v42 + v6) <= *(_DWORD *)(a1 + 3736) && v41 && (v41[2] & 2) == 0 )
      {
        if ( (v43 & 0x40) != 0 )
          v44 = *(unsigned __int16 *)(a1 + 266);
        else
          v44 = *(unsigned __int16 *)(a1 + 268);
        v28 = *(_WORD *)(136LL * (unsigned __int16)(v64 % v44) + *(_QWORD *)(a1 + 752) + 40);
      }
      else
      {
        v28 = *(_WORD *)(136LL
                       * (unsigned __int16)(*(_WORD *)(a1 + 268)
                                          + v64 % (unsigned __int16)(*(_WORD *)(a1 + 266) - *(_WORD *)(a1 + 268)))
                       + *(_QWORD *)(a1 + 752)
                       + 40);
      }
LABEL_99:
      v22 = v71;
LABEL_100:
      *(_WORD *)(v27 + 4244) = v28;
      if ( v61 < *(_DWORD *)(a1 + 184) && *(_QWORD *)v22 )
        v67 = *(_DWORD *)(*(_QWORD *)v22 + 16LL);
      else
        v67 = 0;
      if ( *(_BYTE *)(v6 + 2) == 40 )
      {
        v45 = *(unsigned int *)(v6 + 52);
        v69 = v6 + 60;
        v46 = *(_BYTE *)(v45 + v6 + 10);
      }
      else
      {
        v46 = *(_BYTE *)(v6 + 7);
        v69 = v6 + 16;
      }
      v47 = v46;
      switch ( *v9 )
      {
        case 0x28u:
          goto LABEL_120;
        case 0x2Au:
          goto LABEL_111;
        case 0x88u:
LABEL_120:
          *(_BYTE *)(v19 + 4096) = 2;
          break;
        case 0x8Au:
LABEL_111:
          *(_BYTE *)(v19 + 4096) = 1;
          if ( (*(_BYTE *)(a1 + 3704) & 3) == 3 && *(unsigned __int8 *)(a1 + 3705) == v46 )
          {
            if ( *(_WORD *)(a1 + 3708) )
            {
              v78 = 1LL;
              v79 = 0LL;
              v80 = 0LL;
              v81 = 0LL;
              v82 = 0LL;
              if ( !(unsigned int)StorPortExtendedFunction(28LL, a1, v6, &v78)
                && (v79 & 0x100) != 0
                && (unsigned int)(HIDWORD(v79) - 1) <= 0xFFFE
                && HIDWORD(v79) <= *(unsigned __int16 *)(a1 + 3708)
                && WORD2(v79) )
              {
                v48 = *(_DWORD *)(v19 + 4144) & 0xFF1FFFFF;
                *(_WORD *)(v19 + 4150) = WORD2(v79);
                *(_DWORD *)(v19 + 4144) = v48 | 0x100000;
              }
            }
          }
          break;
      }
      *(_DWORD *)(v19 + 4096) &= 0xFFFFFCFF;
      *(_DWORD *)(v19 + 4100) = v67;
      v49 = (_DWORD *)v69;
      *(_QWORD *)(v19 + 4112) = 0LL;
      v50 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v47 + 1640) + 52LL);
      v51 = (v50 + *v49 - 1) / v50;
      if ( v8 == 16 )
      {
        HIBYTE(v63) = v9[2];
        HIBYTE(v62) = v9[6];
        BYTE2(v63) = v9[3];
        BYTE2(v62) = v9[7];
        BYTE1(v63) = v9[4];
        BYTE1(v62) = v9[8];
        v52 = v9[9];
        LOBYTE(v63) = v9[5];
      }
      else
      {
        HIBYTE(v62) = v9[2];
        BYTE2(v62) = v9[3];
        BYTE1(v62) = v9[4];
        v52 = v9[5];
        v63 = 0;
      }
      v53 = v72;
      LOBYTE(v62) = v52;
      *(_DWORD *)(v19 + 4136) = v62;
      *(_WORD *)(v19 + 4144) = v51 - 1;
      *(_DWORD *)(v19 + 4144) &= 0xC3FFFFFF;
      *(_DWORD *)(v19 + 4140) = v63;
      v54 = *(_DWORD *)(v19 + 4144) & 0x3FFFFFFF | ((v9[1] & 8) << 27);
      *(_BYTE *)(v19 + 4148) = 0;
      *(_DWORD *)(v19 + 4144) = v54;
      *(_QWORD *)(v19 + 4152) = 0LL;
      v55 = *(_DWORD *)(a1 + 48);
      if ( (v55 < v53 || v55 % v53) && !v66 )
      {
        v16 = 0;
      }
      else
      {
        v69 = 0LL;
        v69 = *(_QWORD *)(v19 + 4136);
        v56 = (unsigned __int16)v54 + 1;
        if ( v66 )
          v57 = v66;
        else
          v57 = v55 / v53;
        v16 = v69 / v57 != (v69 + v56 - 1LL) / v57;
      }
LABEL_148:
      if ( !*(_BYTE *)(v6 + 3) )
      {
        if ( (*(_DWORD *)(a1 + 52) & 8) != 0 )
          v59 = MdlToPrp(a1, v6);
        else
          v59 = SglToPrp(a1, v6);
        if ( v59 )
          ++*(_DWORD *)(a1 + 3768);
        started = v59;
        if ( v59 )
        {
          *(_BYTE *)(v6 + 3) = 4;
        }
        else if ( v16 )
        {
          NVMeSplitIoCommand(a1, v6);
          return 0LL;
        }
      }
      return started;
    case 0x35u:
      started = ScsiSyncCacheRequest(a1, v6, a3);
      goto LABEL_148;
    case 0x42u:
      started = ScsiUnmapRequest(a1, v6);
      goto LABEL_148;
    case 0x48u:
      started = ScsiSanitizeRequest(a1, v6, v9);
      goto LABEL_148;
    case 0x4Du:
      started = ScsiLogSenseRequest(a1, v6, v9);
      goto LABEL_148;
    case 0x9Bu:
      if ( (v9[1] & 0x1F) != 0x1C )
        goto LABEL_145;
      v58 = v9[14];
      if ( v58 )
      {
        if ( (unsigned __int8)(v58 - 16) > 0xDFu )
        {
LABEL_145:
          *(_BYTE *)(v6 + 3) = 6;
          goto LABEL_147;
        }
        started = NVMeGetDeviceTelemetryData(a1, v6, v9);
      }
      else
      {
        started = NVMeGetDeviceTelemetryHeader(a1, v6, a3);
      }
      goto LABEL_148;
    case 0xA0u:
      started = ScsiReportLunsCommand(a1, v6, a3);
      goto LABEL_148;
    case 0xA2u:
      started = ScsiSecurityProtocolInRequest(a1, v6, v9);
      goto LABEL_148;
    case 0xB5u:
      started = ScsiSecurityProtocolOutRequest(a1, v6, v9);
      goto LABEL_148;
    default:
      LOBYTE(a4) = 32;
      LOBYTE(v18) = 6;
      NVMeSetSenseData(v6, v18, a3, a4);
LABEL_147:
      started = -1056964601;
      goto LABEL_148;
  }
}
