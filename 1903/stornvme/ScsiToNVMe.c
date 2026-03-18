/*
 * XREFs of ScsiToNVMe @ 0x1C0003070
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0002F70 (NVMeHwBuildIo.c)
 * Callees:
 *     ScsiInquiryRequest @ 0x1C0001328 (ScsiInquiryRequest.c)
 *     ScsiUnmapRequest @ 0x1C0001A10 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C0001BC0 (ScsiModeSenseRequest.c)
 *     GetSrbScsiData @ 0x1C0002D68 (GetSrbScsiData.c)
 *     ScsiReadCapacityRequest @ 0x1C0002E4C (ScsiReadCapacityRequest.c)
 *     ScsiSyncCacheRequest @ 0x1C00037BC (ScsiSyncCacheRequest.c)
 *     __security_check_cookie @ 0x1C0004D50 (__security_check_cookie.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     MdlToPrp @ 0x1C0010A1C (MdlToPrp.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0011204 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C00113F0 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeSplitIoCommand @ 0x1C0011E50 (NVMeSplitIoCommand.c)
 *     ScsiLogSenseRequest @ 0x1C0012F4C (ScsiLogSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0012FD4 (ScsiModeSelectRequest.c)
 *     ScsiReportLunsCommand @ 0x1C001319C (ScsiReportLunsCommand.c)
 *     ScsiSanitizeRequest @ 0x1C0013278 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C001340C (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0013510 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0013614 (ScsiStartStopUnitRequest.c)
 *     NVMeSetSenseData @ 0x1C00189CC (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiToNVMe(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // r10
  unsigned int v5; // r13d
  char v6; // r11
  __int64 v7; // rdi
  __int64 v8; // r12
  unsigned int v9; // r15d
  unsigned __int8 *v10; // r14
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int8 v16; // cl
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r13
  _DWORD *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned int v23; // r10d
  unsigned __int16 v24; // r11
  int v25; // eax
  int v26; // ecx
  __int64 v27; // rsi
  unsigned int v28; // r9d
  __int64 v29; // rcx
  int v30; // r9d
  __int16 v31; // ax
  _DWORD *v32; // r13
  unsigned __int8 v33; // cl
  __int64 v34; // rsi
  int v35; // ecx
  unsigned int v36; // r9d
  unsigned int v37; // r8d
  unsigned int v38; // r8d
  unsigned __int8 v39; // al
  int v40; // ecx
  unsigned int v41; // ecx
  unsigned int started; // ebx
  char v43; // r8
  __int64 v44; // r15
  _DWORD *ScatterGatherList; // rax
  _QWORD *v46; // r12
  _QWORD *v47; // rbx
  unsigned int v48; // r9d
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // r14
  _QWORD *v52; // rax
  bool v53; // zf
  int v55; // edi
  _QWORD *v56; // rax
  int v57; // ecx
  unsigned __int8 *v58; // rax
  unsigned __int8 *v59; // rax
  unsigned __int8 v60; // al
  __int64 v61; // r8
  __int64 v62; // rdx
  _BYTE *SrbScsiData; // rax
  char v64; // r8
  unsigned int v65; // r9d
  unsigned __int8 v66; // dl
  __int64 v67; // rcx
  _DWORD *v68; // rcx
  __int64 v69; // rax
  int v70; // edx
  unsigned int v71; // ecx
  int v72; // ecx
  unsigned int v73; // eax
  unsigned int v74; // eax
  unsigned __int16 v75; // [rsp+30h] [rbp-79h]
  unsigned int v76; // [rsp+34h] [rbp-75h]
  unsigned int v77; // [rsp+38h] [rbp-71h]
  unsigned int v78; // [rsp+38h] [rbp-71h]
  unsigned int v79; // [rsp+3Ch] [rbp-6Dh]
  int v80; // [rsp+40h] [rbp-69h]
  int v81; // [rsp+48h] [rbp-61h]
  int v82; // [rsp+4Ch] [rbp-5Dh]
  int v83; // [rsp+50h] [rbp-59h] BYREF
  __int64 v84; // [rsp+58h] [rbp-51h]
  char v85; // [rsp+60h] [rbp-49h]
  __int64 v86; // [rsp+68h] [rbp-41h]
  __int64 v87; // [rsp+70h] [rbp-39h]
  int v88; // [rsp+78h] [rbp-31h]
  char v89[4]; // [rsp+7Ch] [rbp-2Dh] BYREF
  _DWORD *v90; // [rsp+80h] [rbp-29h]
  int v91; // [rsp+88h] [rbp-21h]
  int v92; // [rsp+8Ch] [rbp-1Dh]
  __int64 v93; // [rsp+90h] [rbp-19h]
  _DWORD v94[12]; // [rsp+98h] [rbp-11h] BYREF

  v4 = *(_BYTE *)(a2 + 2);
  v5 = 0;
  v6 = 0;
  v87 = a2;
  v86 = a1;
  v7 = a2;
  v77 = 0;
  v8 = a1;
  v9 = 0;
  v10 = 0LL;
  v11 = v4;
  if ( v4 == 40 && !*(_DWORD *)(v7 + 20) )
  {
    v12 = *(_DWORD *)(v7 + 56);
    if ( v12 )
    {
      v13 = (unsigned int *)(v7 + 120);
      a4 = v12;
      do
      {
        v14 = *v13;
        if ( (unsigned int)v14 >= 0x80 && (unsigned int)v14 <= *(_DWORD *)(v7 + 16) )
        {
          a3 = *(unsigned int *)(v7 + v14);
          v15 = v7 + v14;
          if ( (_DWORD)a3 == 64 )
          {
            v9 = *(unsigned __int8 *)(v15 + 10);
            v6 = 1;
            v77 = v9;
            if ( (_BYTE)v9 )
              v10 = (unsigned __int8 *)(v15 + 24);
          }
          else
          {
            a3 = (unsigned int)(a3 - 65);
            if ( (_DWORD)a3 )
            {
              a3 = (unsigned int)(a3 - 1);
              if ( !(_DWORD)a3 )
              {
                v9 = *(_DWORD *)(v15 + 12);
                v58 = (unsigned __int8 *)(v15 + 32);
                v77 = v9;
                v6 = 1;
                if ( !v9 )
                  v58 = v10;
                v10 = v58;
              }
            }
            else
            {
              v9 = *(unsigned __int8 *)(v15 + 10);
              v59 = (unsigned __int8 *)(v15 + 24);
              v77 = v9;
              v6 = 1;
              if ( !(_BYTE)v9 )
                v59 = v10;
              v10 = v59;
            }
          }
        }
        ++v13;
        --a4;
      }
      while ( a4 );
      v11 = 40LL;
    }
  }
  if ( (_BYTE)v11 )
  {
    if ( !v6 )
    {
      v9 = 0;
      v77 = 0;
    }
  }
  else
  {
    v9 = *(unsigned __int8 *)(v7 + 10);
    LOBYTE(v11) = 0;
    v77 = v9;
    if ( (_BYTE)v9 )
      v10 = (unsigned __int8 *)(v7 + 72);
  }
  LOBYTE(v83) = 0;
  v85 = 0;
  if ( (_BYTE)v11 == 40 )
    v16 = *(_BYTE *)(*(unsigned int *)(v7 + 52) + v7 + 10);
  else
    v16 = *(_BYTE *)(v7 + 7);
  v88 = v16;
  if ( !*(_QWORD *)(v8 + 8LL * v16 + 1648) || v9 < 6 || !v10 )
  {
    LOBYTE(a4) = 32;
    LOBYTE(v11) = 8;
    NVMeSetSenseData(v7, v11, a3, a4);
    return 3238002695LL;
  }
  if ( *v10 != 40 )
  {
    switch ( *v10 )
    {
      case 0u:
      case 0x2Fu:
      case 0x8Fu:
        *(_BYTE *)(v7 + 3) = 1;
        started = 0;
        goto LABEL_62;
      case 0x12u:
        started = ScsiInquiryRequest(v8, v7, (__int64)v10, a4);
        goto LABEL_62;
      case 0x15u:
      case 0x55u:
        started = ScsiModeSelectRequest(v8, v7, v10);
        goto LABEL_62;
      case 0x1Au:
      case 0x5Au:
        started = ScsiModeSenseRequest(v8, v7, v10);
        goto LABEL_62;
      case 0x1Bu:
        started = ScsiStartStopUnitRequest(v8, v7, v10);
        goto LABEL_62;
      case 0x25u:
      case 0x9Eu:
        started = ScsiReadCapacityRequest(v8, v7, v10, v9);
        goto LABEL_62;
      case 0x2Au:
      case 0x88u:
      case 0x8Au:
        goto LABEL_21;
      case 0x35u:
        started = ScsiSyncCacheRequest(v8, v7);
        goto LABEL_62;
      case 0x42u:
        started = ScsiUnmapRequest(v8, v7);
        goto LABEL_62;
      case 0x48u:
        started = ScsiSanitizeRequest(v8, v7, v10);
        goto LABEL_62;
      case 0x4Du:
        started = ScsiLogSenseRequest(v8, v7, v10);
        goto LABEL_62;
      case 0x9Bu:
        if ( (v10[1] & 0x1F) != 0x1C )
          goto LABEL_136;
        v60 = v10[14];
        if ( v60 )
        {
          if ( (unsigned __int8)(v60 - 16) > 0xDFu )
          {
LABEL_136:
            *(_BYTE *)(v7 + 3) = 6;
            started = -1056964601;
          }
          else
          {
            started = NVMeGetDeviceTelemetryData(v8, v7, v10);
          }
        }
        else
        {
          started = NVMeGetDeviceTelemetryHeader(v8, v7);
        }
        break;
      case 0xA0u:
        started = ScsiReportLunsCommand(v8, v7);
        goto LABEL_62;
      case 0xA2u:
        started = ScsiSecurityProtocolInRequest(v8, v7, v10);
        goto LABEL_62;
      case 0xB5u:
        started = ScsiSecurityProtocolOutRequest(v8, v7, v10);
        goto LABEL_62;
      default:
        LOBYTE(a4) = 32;
        LOBYTE(v11) = 6;
        NVMeSetSenseData(v7, v11, 0x1C0000000uLL, a4);
        started = -1056964601;
        goto LABEL_62;
    }
    goto LABEL_62;
  }
LABEL_21:
  if ( (_BYTE)v11 == 40 )
    v17 = *(_QWORD *)(v7 + 104);
  else
    v17 = *(_QWORD *)(v7 + 56);
  if ( (v17 & 0xFFF) != 0 )
    v17 = v17 - (v17 & 0xFFF) + 4096;
  if ( (_BYTE)v11 == 40 )
  {
    v18 = 60LL;
    v19 = *(unsigned __int8 *)(*(unsigned int *)(v7 + 52) + v7 + 10);
  }
  else
  {
    v19 = *(unsigned __int8 *)(v7 + 7);
    v18 = 16LL;
  }
  v20 = (_DWORD *)(v7 + v18);
  v90 = v20;
  v21 = v8 + 8 * (v19 + 206);
  v22 = *(_QWORD *)v21;
  v84 = v21;
  v23 = *(_DWORD *)(v22 + 52);
  v76 = v23;
  if ( v23 && *(_QWORD *)(v22 + 56) )
  {
    v24 = *(_WORD *)(v22 + 92);
    v75 = v24;
    v25 = (_BYTE)v11 == 40 ? *(_DWORD *)(v7 + 24) : *(_DWORD *)(v7 + 12);
    if ( (v25 & 0xC0) != 0 )
    {
      v26 = *v20;
      if ( v26 )
      {
        if ( ((v23 - 1) & v26) == 0 )
        {
          *(_BYTE *)(v17 + 4253) = *(_BYTE *)(v17 + 4253) & 0xFC | 2;
          if ( *(_BYTE *)(v7 + 2) == 40 )
            v27 = *(_QWORD *)(v7 + 104);
          else
            v27 = *(_QWORD *)(v7 + 56);
          if ( (v27 & 0xFFF) != 0 )
            v27 = v27 - (v27 & 0xFFF) + 4096;
          if ( (*(_BYTE *)(v27 + 4253) & 1) != 0 )
          {
            v31 = *(_WORD *)(v8 + 320);
            v30 = 0;
            goto LABEL_47;
          }
          if ( *(_BYTE *)(v8 + 16) )
          {
            v30 = 0;
            v31 = *(_WORD *)(*(_QWORD *)(v8 + 760) + 40LL);
            goto LABEL_47;
          }
          v92 = 20;
          v79 = 0;
          v93 = 0LL;
          v94[0] = 0;
          v91 = 2;
          StorPortExtendedFunction(15LL, v8, v7);
          LOWORD(v83) = 0;
          StorPortExtendedFunction(56LL, v8, v94);
          v28 = 0;
          if ( !*(_WORD *)(v8 + 202) )
          {
            v28 = 0 % 0u;
            v79 = 0 % 0u;
          }
          if ( !*(_QWORD *)(*(_QWORD *)(v8 + 232) + 48LL * v28 + 40) )
          {
            v61 = *(_QWORD *)(*(_QWORD *)(v8 + 248) + 24LL * (unsigned __int16)v83 + 16);
            v9 = v77;
            v62 = *(_QWORD *)(*(_QWORD *)(v61 + 192)
                            + 8LL
                            * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v61 + 184), 1u)
                             % *(_DWORD *)(v61 + 180)));
            *(_QWORD *)(*(_QWORD *)(v8 + 232) + 48LL * v28 + 40) = v62;
            ++*(_WORD *)(v62 + 52);
            v28 = v79;
          }
          if ( !*(_BYTE *)(v8 + 3736) )
          {
            v29 = 6LL * v28;
            v30 = 0;
            v31 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 232) + 8 * v29 + 40) + 40LL);
LABEL_46:
            v21 = v84;
            v23 = v76;
            v24 = v75;
LABEL_47:
            *(_WORD *)(v27 + 4244) = v31;
            if ( (unsigned int)v19 < *(_DWORD *)(v8 + 192) && *(_QWORD *)v21 )
              v80 = *(_DWORD *)(*(_QWORD *)v21 + 16LL);
            else
              v80 = v30;
            if ( *(_BYTE *)(v7 + 2) == 40 )
            {
              v32 = (_DWORD *)(v7 + 60);
              v33 = *(_BYTE *)(*(unsigned int *)(v7 + 52) + v7 + 10);
            }
            else
            {
              v33 = *(_BYTE *)(v7 + 7);
              v32 = (_DWORD *)(v7 + 16);
            }
            v34 = v33;
            v35 = *v10;
            if ( v35 == 40 )
              goto LABEL_53;
            v57 = v35 - 42;
            if ( v57 )
            {
              v72 = v57 - 94;
              if ( !v72 )
              {
LABEL_53:
                *(_BYTE *)(v17 + 4096) = 2;
LABEL_54:
                *(_DWORD *)(v17 + 4096) &= 0xFFFFFCFF;
                *(_DWORD *)(v17 + 4100) = v80;
                *(_QWORD *)(v17 + 4112) = 0LL;
                v36 = *(_DWORD *)(*(_QWORD *)(v8 + 8 * v34 + 1648) + 52LL);
                v37 = *v32 + v36 - 1;
                if ( v36 == 512 )
                  v38 = v37 >> 9;
                else
                  v38 = v37 / v36;
                v5 = 0;
                if ( v9 == 16 )
                {
                  LOBYTE(v82) = v10[5];
                  HIBYTE(v81) = v10[6];
                  HIBYTE(v82) = v10[2];
                  BYTE2(v81) = v10[7];
                  BYTE2(v82) = v10[3];
                  BYTE1(v81) = v10[8];
                  v39 = v10[9];
                  BYTE1(v82) = v10[4];
                }
                else
                {
                  HIBYTE(v81) = v10[2];
                  BYTE2(v81) = v10[3];
                  BYTE1(v81) = v10[4];
                  v39 = v10[5];
                  v82 = 0;
                }
                LOBYTE(v81) = v39;
                *(_DWORD *)(v17 + 4136) = v81;
                *(_WORD *)(v17 + 4144) = v38 - 1;
                *(_DWORD *)(v17 + 4144) &= 0xC3FFFFFF;
                *(_DWORD *)(v17 + 4140) = v82;
                v40 = *(_DWORD *)(v17 + 4144) & 0x3FFFFFFF | ((v10[1] & 8) << 27);
                *(_BYTE *)(v17 + 4148) = 0;
                *(_DWORD *)(v17 + 4144) = v40;
                *(_QWORD *)(v17 + 4152) = 0LL;
                v41 = *(_DWORD *)(v8 + 48);
                if ( v41 >= v23 && !(v41 % v23) || v24 )
                {
                  v84 = *(_QWORD *)(v17 + 4136);
                  if ( v24 )
                    v74 = v24;
                  else
                    v74 = v41 / v23;
                  LOBYTE(v83) = v84 / v74 != (v84 + (unsigned int)(unsigned __int16)*(_DWORD *)(v17 + 4144) + 1 - 1LL)
                                           / v74;
                }
                else
                {
                  LOBYTE(v83) = 0;
                }
                started = 0;
                goto LABEL_62;
              }
              if ( v72 != 2 )
                goto LABEL_54;
            }
            *(_BYTE *)(v17 + 4096) = 1;
            if ( (*(_BYTE *)(v8 + 3712) & 3) == 3
              && *(unsigned __int8 *)(v8 + 3713) == (_DWORD)v34
              && *(_WORD *)(v8 + 3716) )
            {
              memset(&v94[2], 0, 0x28uLL);
              LOWORD(v94[2]) = 1;
              if ( (unsigned int)StorPortExtendedFunction(28LL, v8, v7)
                || (v94[4] & 0x100) == 0
                || (unsigned int)(v94[5] - 1) > 0xFFFE
                || v94[5] > (unsigned int)*(unsigned __int16 *)(v8 + 3716) )
              {
                v24 = v75;
                v23 = v76;
              }
              else
              {
                v23 = v76;
                v24 = v75;
                if ( LOWORD(v94[5]) )
                {
                  v73 = *(_DWORD *)(v17 + 4144) & 0xFF1FFFFF;
                  *(_WORD *)(v17 + 4150) = v94[5];
                  *(_DWORD *)(v17 + 4144) = v73 | 0x100000;
                }
              }
            }
            goto LABEL_54;
          }
          SrbScsiData = (_BYTE *)GetSrbScsiData(v7, &v83, 0LL, 0LL, 0LL);
          if ( *SrbScsiData != 40
            && *SrbScsiData != 42
            && (unsigned __int8)*SrbScsiData != 136
            && (unsigned __int8)*SrbScsiData != 138 )
          {
            v31 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 232) + 48LL * v79 + 40) + 40LL);
            goto LABEL_46;
          }
          v64 = *(_BYTE *)(v7 + 2);
          if ( v64 == 40 && (v65 = *(_DWORD *)(v7 + 56)) != 0 )
          {
            v66 = 0;
            while ( 1 )
            {
              v67 = *(unsigned int *)(v7 + 4LL * v66 + 120);
              if ( (unsigned int)v67 >= 0x80 && (unsigned int)v67 < *(_DWORD *)(v7 + 16) )
              {
                v68 = (_DWORD *)(v7 + v67);
                if ( *v68 == 128 )
                  break;
              }
              if ( ++v66 >= v65 )
                goto LABEL_163;
            }
            v30 = 0;
          }
          else
          {
LABEL_163:
            v30 = 0;
            v68 = 0LL;
            if ( v64 != 40 )
            {
              v69 = 16LL;
              goto LABEL_157;
            }
          }
          v69 = 60LL;
LABEL_157:
          v70 = *(_DWORD *)(v8 + 3748);
          if ( (v70 & 0x80u) != 0 || *(_DWORD *)(v7 + v69) <= *(_DWORD *)(v8 + 3744) && v68 && (v68[2] & 2) == 0 )
          {
            if ( (v70 & 0x40) != 0 )
              v71 = *(unsigned __int16 *)(v8 + 274);
            else
              v71 = *(unsigned __int16 *)(v8 + 276);
            v31 = *(_WORD *)(136LL * (unsigned __int16)(v79 % v71) + *(_QWORD *)(v8 + 760) + 40);
          }
          else
          {
            v31 = *(_WORD *)(136LL
                           * (unsigned __int16)(*(_WORD *)(v8 + 276)
                                              + v79 % (unsigned __int16)(*(_WORD *)(v8 + 274) - *(_WORD *)(v8 + 276)))
                           + *(_QWORD *)(v8 + 760)
                           + 40);
          }
          goto LABEL_46;
        }
      }
    }
  }
  LOBYTE(a4) = 36;
  LOBYTE(v11) = 6;
  NVMeSetSenseData(v7, v11, v21, a4);
  v5 = 0;
  started = -1056964602;
LABEL_62:
  if ( !*(_BYTE *)(v7 + 3) )
  {
    if ( (*(_DWORD *)(v8 + 52) & 8) != 0 )
    {
      started = MdlToPrp(v8, v7);
      if ( started )
        ++*(_DWORD *)(v8 + 3776);
    }
    else
    {
      v43 = 0;
      if ( *(_BYTE *)(v7 + 2) == 40 )
        v44 = *(_QWORD *)(v7 + 104);
      else
        v44 = *(_QWORD *)(v7 + 56);
      if ( (v44 & 0xFFF) != 0 )
        v44 = v44 - (v44 & 0xFFF) + 4096;
      if ( (*(_BYTE *)(v44 + 4253) & 6) == 2 )
      {
        ScatterGatherList = *(_DWORD **)(v44 + 4216);
        if ( !ScatterGatherList )
        {
          ScatterGatherList = (_DWORD *)StorPortGetScatterGatherList(v8, v7);
          v43 = 0;
          *(_QWORD *)(v44 + 4216) = ScatterGatherList;
        }
        v46 = (_QWORD *)(v44 + 4120);
        v47 = (_QWORD *)(v44 + 4120);
        v48 = 0;
        v78 = 0;
        if ( !*ScatterGatherList )
          goto LABEL_82;
        do
        {
          if ( v43 )
          {
            memset((void *)v44, 0, 0x1000uLL);
            v48 = v78;
            v43 = 0;
          }
          v49 = *(_QWORD *)(v44 + 4216);
          v50 = *(_QWORD *)(v49 + 24LL * v48 + 16);
          v51 = *(unsigned int *)(v49 + 24LL * v48 + 24);
          if ( v51 + v50 % 4096 > 4096 )
          {
            if ( (_DWORD)v51 )
            {
              do
              {
                v55 = v50 & 0xFFF;
                if ( v43 )
                {
                  memset((void *)v44, 0, 0x1000uLL);
                  v43 = 0;
                }
                *v47 = v50;
                if ( (unsigned int)(v55 + v51) <= 0x1000 )
                  break;
                LODWORD(v51) = v55 + v51 - 4096;
                v50 += (unsigned int)(4096 - v55);
                if ( v47 == v46 )
                  v43 = 1;
                ++v5;
                v56 = v47 + 1;
                v53 = v47 == v46;
                v47 = (_QWORD *)v44;
                if ( !v53 )
                  v47 = v56;
              }
              while ( (_DWORD)v51 );
              v48 = v78;
            }
          }
          else
          {
            *v47 = v50;
          }
          if ( v47 == v46 )
            v43 = 1;
          ++v48;
          v52 = v47 + 1;
          v78 = v48;
          ++v5;
          v53 = v47 == v46;
          v47 = (_QWORD *)v44;
          if ( !v53 )
            v47 = v52;
        }
        while ( v48 < **(_DWORD **)(v44 + 4216) );
        v7 = v87;
        if ( v5 >= 2 )
        {
          v8 = v86;
          if ( v5 == 2 )
            *(_QWORD *)(v44 + 4128) = *(_QWORD *)v44;
          else
            *(_QWORD *)(v44 + 4128) = StorPortGetPhysicalAddress(v86, v87, v44, v89);
        }
        else
        {
LABEL_82:
          v8 = v86;
        }
      }
      started = 0;
    }
    if ( started )
    {
      *(_BYTE *)(v7 + 3) = 4;
    }
    else if ( (_BYTE)v83 )
    {
      NVMeSplitIoCommand(v8, v7);
    }
  }
  return started;
}
