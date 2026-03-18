/*
 * XREFs of VidSchiReadGlobalConfiguration @ 0x1C0087BD8
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C0086AC0 (VidSchInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     VidSchiReadNodeConfiguration @ 0x1C00888E8 (VidSchiReadNodeConfiguration.c)
 */

unsigned __int64 __fastcall VidSchiReadGlobalConfiguration(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edi
  int NodeConfiguration; // eax
  unsigned int v5; // ecx
  __int64 v6; // r11
  int *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // r9d
  _DWORD *v11; // rax
  int *v12; // rax
  int v13; // r10d
  int *v14; // rax
  unsigned int v15; // eax
  int v16; // edx
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  bool IsEnabled; // al
  int v23; // ecx
  _QWORD *v24; // r8
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // rax
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // edx
  unsigned int v32; // edx
  int v33; // ecx
  unsigned int v34; // edx
  unsigned int v35; // ecx
  bool v36; // cc
  __int64 v37; // rdx
  int v38; // eax
  unsigned __int64 result; // rax
  _DWORD *v40; // rax
  __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v44; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v45; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v46; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v47; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v48; // [rsp+4Ch] [rbp-BCh] BYREF
  int v49; // [rsp+50h] [rbp-B8h] BYREF
  int v50; // [rsp+54h] [rbp-B4h] BYREF
  int v51; // [rsp+58h] [rbp-B0h] BYREF
  int v52; // [rsp+5Ch] [rbp-ACh] BYREF
  int v53; // [rsp+60h] [rbp-A8h] BYREF
  int v54; // [rsp+64h] [rbp-A4h] BYREF
  int v55; // [rsp+68h] [rbp-A0h] BYREF
  int v56; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v57; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v58; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v59; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v60; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v61; // [rsp+80h] [rbp-88h] BYREF
  int v62; // [rsp+84h] [rbp-84h] BYREF
  int v63; // [rsp+88h] [rbp-80h] BYREF
  int v64; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v65; // [rsp+90h] [rbp-78h] BYREF
  int v66; // [rsp+94h] [rbp-74h] BYREF
  int v67; // [rsp+98h] [rbp-70h] BYREF
  int v68; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v69; // [rsp+A0h] [rbp-68h] BYREF
  int v70; // [rsp+A4h] [rbp-64h] BYREF
  int v71; // [rsp+A8h] [rbp-60h] BYREF
  int v72; // [rsp+ACh] [rbp-5Ch] BYREF
  int v73; // [rsp+B0h] [rbp-58h] BYREF
  int v74; // [rsp+B4h] [rbp-54h] BYREF
  int v75; // [rsp+B8h] [rbp-50h] BYREF
  int v76; // [rsp+BCh] [rbp-4Ch] BYREF
  int v77; // [rsp+C0h] [rbp-48h] BYREF
  int v78; // [rsp+C4h] [rbp-44h] BYREF
  int v79; // [rsp+C8h] [rbp-40h] BYREF
  int v80; // [rsp+CCh] [rbp-3Ch] BYREF
  int v81; // [rsp+D0h] [rbp-38h] BYREF
  int v82; // [rsp+D4h] [rbp-34h] BYREF
  int v83; // [rsp+D8h] [rbp-30h] BYREF
  int v84; // [rsp+DCh] [rbp-2Ch] BYREF
  int v85; // [rsp+E0h] [rbp-28h] BYREF
  int v86; // [rsp+E4h] [rbp-24h] BYREF
  int v87; // [rsp+E8h] [rbp-20h] BYREF
  int v88; // [rsp+ECh] [rbp-1Ch] BYREF
  int v89; // [rsp+F0h] [rbp-18h] BYREF
  int v90; // [rsp+F4h] [rbp-14h] BYREF
  int v91; // [rsp+F8h] [rbp-10h] BYREF
  int v92; // [rsp+FCh] [rbp-Ch] BYREF
  int v93; // [rsp+100h] [rbp-8h] BYREF
  int v94; // [rsp+104h] [rbp-4h] BYREF
  int v95; // [rsp+108h] [rbp+0h] BYREF
  int v96; // [rsp+10Ch] [rbp+4h] BYREF
  int v97; // [rsp+110h] [rbp+8h] BYREF
  int v98; // [rsp+114h] [rbp+Ch] BYREF
  int v99; // [rsp+118h] [rbp+10h] BYREF
  int v100; // [rsp+11Ch] [rbp+14h] BYREF
  unsigned int v101; // [rsp+120h] [rbp+18h] BYREF
  int v102; // [rsp+124h] [rbp+1Ch] BYREF
  int v103; // [rsp+128h] [rbp+20h] BYREF
  int v104; // [rsp+12Ch] [rbp+24h] BYREF
  _QWORD v105[224]; // [rsp+138h] [rbp+30h] BYREF

  v78 = 25000;
  v77 = 0;
  v79 = 50000;
  v83 = 0;
  v84 = 0;
  v101 = *(_DWORD *)(a1 + 212);
  v44 = v101;
  v2 = *(_QWORD *)(a1 + 16);
  v80 = 1;
  v3 = 16;
  v81 = 2;
  v82 = 3;
  v85 = 1;
  v86 = 1;
  v87 = 0;
  v90 = 0;
  v88 = 20;
  v89 = 2;
  v50 = 7;
  v92 = 0;
  v93 = 900;
  v94 = 1000;
  v91 = 1;
  v95 = 8;
  v96 = 0;
  v62 = 10;
  v97 = 1;
  v98 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v99 = 16;
  v100 = 100;
  v69 = 64;
  v52 = 0;
  v45 = 25000;
  v46 = 50000;
  v54 = 1;
  v51 = 2;
  v47 = 3;
  v75 = 0;
  v53 = 0;
  v55 = 1;
  v71 = 1;
  v72 = 0;
  v73 = 0;
  v48 = 20;
  v74 = 2;
  v49 = 7;
  v56 = 0;
  v64 = 900;
  v65 = 1000;
  v70 = 1;
  v67 = 8;
  v63 = 0;
  v61 = 10;
  v57 = 1;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v66 = 16;
  v68 = 100;
  v43 = 64;
  v76 = 0;
  if ( *(int *)(v2 + 2452) >= 1300 && *(_BYTE *)(v2 + 2389) )
  {
    v50 = 1;
    v49 = 1;
  }
  memset(v105, 0, sizeof(v105));
  v105[7] = 0LL;
  LODWORD(v105[1]) = 288;
  LODWORD(v105[4]) = 67108868;
  LODWORD(v105[6]) = 4;
  v105[2] = L"AutoSyncToCPUPriority";
  v105[3] = &v52;
  v105[5] = &v77;
  v105[9] = L"QuantumUnit";
  v105[10] = &v45;
  v105[12] = &v78;
  v105[16] = L"PreemptionQuantumUnit";
  v105[17] = &v46;
  v105[19] = &v79;
  v105[23] = L"EnablePreemption";
  v105[24] = &v54;
  v105[26] = &v80;
  v105[30] = L"HwQueuedRenderPacketGroupLimit";
  v105[31] = &v51;
  v105[33] = &v81;
  v105[37] = L"QueuedPresentLimit";
  v105[38] = &v47;
  v105[40] = &v82;
  v105[44] = L"InitDriverFenceId";
  v105[45] = &v75;
  v105[47] = &v83;
  v105[51] = L"CarryOverUsedQuantum";
  LODWORD(v105[8]) = 288;
  LODWORD(v105[11]) = 67108868;
  LODWORD(v105[13]) = 4;
  v105[14] = 0LL;
  LODWORD(v105[15]) = 288;
  LODWORD(v105[18]) = 67108868;
  LODWORD(v105[20]) = 4;
  v105[21] = 0LL;
  LODWORD(v105[22]) = 288;
  LODWORD(v105[25]) = 67108868;
  LODWORD(v105[27]) = 4;
  v105[28] = 0LL;
  LODWORD(v105[29]) = 288;
  LODWORD(v105[32]) = 67108868;
  LODWORD(v105[34]) = 4;
  v105[35] = 0LL;
  LODWORD(v105[36]) = 288;
  LODWORD(v105[39]) = 67108868;
  LODWORD(v105[41]) = 4;
  v105[42] = 0LL;
  LODWORD(v105[43]) = 288;
  LODWORD(v105[46]) = 67108868;
  LODWORD(v105[48]) = 4;
  v105[49] = 0LL;
  LODWORD(v105[50]) = 288;
  v105[52] = &v53;
  v105[54] = &v84;
  v105[58] = L"EnableFlipImmediateSwFlipQueue";
  v105[59] = &v55;
  v105[61] = &v85;
  v105[65] = L"AdjustWorkerThreadPriority";
  v105[66] = &v71;
  v105[68] = &v86;
  v105[72] = L"CountFlipTowardHwLimit";
  v105[73] = &v72;
  v105[75] = &v87;
  v105[79] = L"NumberOfDmaPacketPool";
  v105[80] = &v48;
  v105[82] = &v88;
  v105[86] = L"ProfileLevel";
  v105[87] = &v74;
  v105[89] = &v89;
  v105[93] = L"VSyncIdleTimeout";
  v105[94] = &v49;
  v105[96] = &v50;
  v105[100] = L"CountPresentTowardHwLimit";
  v105[101] = &v73;
  v105[103] = &v90;
  v105[107] = L"EnableContextDelay";
  v105[108] = &v70;
  LODWORD(v105[53]) = 67108868;
  LODWORD(v105[55]) = 4;
  v105[56] = 0LL;
  LODWORD(v105[57]) = 288;
  LODWORD(v105[60]) = 67108868;
  LODWORD(v105[62]) = 4;
  v105[63] = 0LL;
  LODWORD(v105[64]) = 288;
  LODWORD(v105[67]) = 67108868;
  LODWORD(v105[69]) = 4;
  v105[70] = 0LL;
  LODWORD(v105[71]) = 288;
  LODWORD(v105[74]) = 67108868;
  LODWORD(v105[76]) = 4;
  v105[77] = 0LL;
  LODWORD(v105[78]) = 288;
  LODWORD(v105[81]) = 67108868;
  LODWORD(v105[83]) = 4;
  v105[84] = 0LL;
  LODWORD(v105[85]) = 288;
  LODWORD(v105[88]) = 67108868;
  LODWORD(v105[90]) = 4;
  v105[91] = 0LL;
  LODWORD(v105[92]) = 288;
  LODWORD(v105[95]) = 67108868;
  LODWORD(v105[97]) = 4;
  v105[98] = 0LL;
  LODWORD(v105[99]) = 288;
  LODWORD(v105[102]) = 67108868;
  LODWORD(v105[104]) = 4;
  v105[105] = 0LL;
  LODWORD(v105[106]) = 288;
  LODWORD(v105[109]) = 67108868;
  v105[110] = &v91;
  v105[114] = L"LogDriverVSyncCallback";
  v105[115] = &v56;
  v105[117] = &v92;
  v105[121] = L"MaximumAllowedPreemptionDelay";
  v105[122] = &v64;
  v105[124] = &v93;
  v105[128] = L"ContextSchedulingPenaltyDelay";
  v105[129] = &v65;
  v105[131] = &v94;
  v105[135] = L"BackgroundProcessMaximumAllowedPreemptionDelay";
  v105[136] = &v67;
  v105[138] = &v95;
  v105[142] = L"ForceEnableFlipFenceModel";
  v105[143] = &v63;
  v105[145] = &v96;
  v105[149] = L"YieldPercentage";
  v105[150] = &v61;
  v105[152] = &v62;
  v105[156] = L"ForegroundPriorityBoost";
  v105[157] = &v57;
  v105[159] = &v97;
  v105[163] = L"ForceFlipTrueImmediateMode";
  v105[164] = &v58;
  LODWORD(v105[111]) = 4;
  v105[112] = 0LL;
  LODWORD(v105[113]) = 288;
  LODWORD(v105[116]) = 67108868;
  LODWORD(v105[118]) = 4;
  v105[119] = 0LL;
  LODWORD(v105[120]) = 288;
  LODWORD(v105[123]) = 67108868;
  LODWORD(v105[125]) = 4;
  v105[126] = 0LL;
  LODWORD(v105[127]) = 288;
  LODWORD(v105[130]) = 67108868;
  LODWORD(v105[132]) = 4;
  v105[133] = 0LL;
  LODWORD(v105[134]) = 288;
  LODWORD(v105[137]) = 67108868;
  LODWORD(v105[139]) = 4;
  v105[140] = 0LL;
  LODWORD(v105[141]) = 288;
  LODWORD(v105[144]) = 67108868;
  LODWORD(v105[146]) = 4;
  v105[147] = 0LL;
  LODWORD(v105[148]) = 288;
  LODWORD(v105[151]) = 67108868;
  LODWORD(v105[153]) = 4;
  v105[154] = 0LL;
  LODWORD(v105[155]) = 288;
  LODWORD(v105[158]) = 67108868;
  LODWORD(v105[160]) = 4;
  v105[161] = 0LL;
  LODWORD(v105[162]) = 288;
  LODWORD(v105[165]) = 67108868;
  LODWORD(v105[169]) = 288;
  v105[166] = &v98;
  LODWORD(v105[172]) = 67108868;
  v105[170] = L"MaxYieldInterval";
  LODWORD(v105[176]) = 288;
  v105[171] = &v66;
  v105[173] = &v99;
  v105[177] = L"MaxFocusGpuQuantumWithoutPresent";
  v105[178] = &v68;
  v105[180] = &v100;
  v105[184] = L"HistoryLogSize";
  v105[185] = &v43;
  v105[187] = &v69;
  v105[191] = L"HwQueuePacketCap";
  v105[192] = &v44;
  v105[194] = &v101;
  v105[198] = L"FlipDoNotFlipMode";
  v105[199] = &v59;
  v105[201] = &v102;
  v105[205] = L"DdiSuspendMode";
  v105[206] = &v60;
  v105[208] = &v103;
  v105[212] = L"PfnCpuOverride";
  v105[213] = &v76;
  LODWORD(v105[179]) = 67108868;
  LODWORD(v105[183]) = 288;
  LODWORD(v105[186]) = 67108868;
  LODWORD(v105[190]) = 288;
  LODWORD(v105[193]) = 67108868;
  LODWORD(v105[197]) = 288;
  LODWORD(v105[200]) = 67108868;
  LODWORD(v105[204]) = 288;
  LODWORD(v105[207]) = 67108868;
  LODWORD(v105[211]) = 288;
  LODWORD(v105[214]) = 67108868;
  v105[215] = &v104;
  LODWORD(v105[167]) = 4;
  v105[168] = 0LL;
  LODWORD(v105[174]) = 4;
  v105[175] = 0LL;
  LODWORD(v105[181]) = 4;
  v105[182] = 0LL;
  LODWORD(v105[188]) = 4;
  v105[189] = 0LL;
  LODWORD(v105[195]) = 4;
  v105[196] = 0LL;
  LODWORD(v105[202]) = 4;
  v105[203] = 0LL;
  LODWORD(v105[209]) = 4;
  v105[210] = 0LL;
  LODWORD(v105[216]) = 4;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Scheduler", v105, 0LL, 0LL);
  NodeConfiguration = VidSchiReadNodeConfiguration(a1, *(_QWORD *)(a1 + 1968));
  v5 = 0;
  if ( *(_DWORD *)(a1 + 68) )
  {
    v6 = NodeConfiguration;
    do
    {
      if ( v6 < 0 )
        goto LABEL_7;
      v40 = *(_DWORD **)(a1 + 1968);
      v8 = v5;
      if ( v5 < *(_DWORD *)(a1 + 2008) )
        v40 += v5;
      if ( !*v40 )
      {
LABEL_7:
        v7 = *(int **)(a1 + 1968);
        v8 = v5;
        if ( v5 < *(_DWORD *)(a1 + 2008) )
          v7 += v5;
        *v7 = v51;
      }
      v9 = *(_QWORD *)(a1 + 1968);
      v10 = *(_DWORD *)(a1 + 2008);
      v11 = (_DWORD *)(v9 + 4 * v8);
      if ( v5 >= v10 )
        v11 = *(_DWORD **)(a1 + 1968);
      if ( *v11 <= 1u )
      {
        v13 = 1;
      }
      else
      {
        v12 = (int *)(v9 + 4 * v8);
        if ( v5 >= v10 )
          v12 = *(int **)(a1 + 1968);
        v13 = *v12;
      }
      v14 = (int *)(v9 + 4 * v8);
      if ( v5 >= v10 )
        v14 = *(int **)(a1 + 1968);
      ++v5;
      *v14 = v13;
    }
    while ( v5 < *(_DWORD *)(a1 + 68) );
  }
  v15 = v58;
  *(_DWORD *)(a1 + 1936) = (v57 != 0 ? 0x400 : 0) | (v56 != 0 ? 0x100 : 0) | (v55 != 0 ? 0x10 : 0) | (v54 != 0) | (v53 != 0 ? 4 : 0) | (v52 != 0 ? 2 : 0) | *(_DWORD *)(a1 + 1936) & 0xFFFFFAE8;
  if ( v15 <= 2 )
    *(_DWORD *)(a1 + 1948) = v15;
  if ( v59 <= 2 )
    *(_DWORD *)(a1 + 1952) = v59;
  if ( v60 <= 2 )
    *(_DWORD *)(a1 + 1956) = v60;
  v16 = v62;
  if ( (unsigned int)(v61 - 1) <= 0x53 )
    v16 = v61;
  *(_DWORD *)(a1 + 192) = v16;
  v17 = (unsigned int)(v16 + 15);
  v18 = v63 == 0;
  *(_DWORD *)(a1 + 196) = v17;
  v19 = (unsigned int)(10000 * v64);
  *(_BYTE *)(a1 + 57) = !v18;
  *(_QWORD *)(a1 + 2160) = v19;
  *(_QWORD *)(a1 + 2168) = (unsigned int)(10000 * v65);
  *(_QWORD *)(a1 + 2256) = (unsigned int)(10000 * v66);
  *(_QWORD *)(a1 + 2176) = (unsigned int)(10000 * v67);
  *(_QWORD *)(a1 + 2264) = (unsigned int)(10000 * v68);
  v20 = v43;
  *(_QWORD *)(a1 + 2184) = 1000LL;
  *(_QWORD *)(a1 + 2192) = 2500LL;
  *(_QWORD *)(a1 + 2200) = 5000LL;
  *(_QWORD *)(a1 + 2208) = 10000LL;
  *(_QWORD *)(a1 + 2216) = 25000LL;
  *(_QWORD *)(a1 + 2224) = 50000LL;
  *(_QWORD *)(a1 + 2232) = 100000LL;
  *(_QWORD *)(a1 + 2240) = 250000LL;
  *(_QWORD *)(a1 + 2248) = 500000LL;
  if ( (unsigned int)v20 < 0x10 )
  {
    LODWORD(v20) = 16;
LABEL_58:
    v43 = v20;
    goto LABEL_30;
  }
  if ( (unsigned int)v20 > 0x10000 )
  {
    LODWORD(v20) = 0x10000;
    v43 = 0x10000;
    goto LABEL_30;
  }
  if ( (((_DWORD)v20 - 1) & (unsigned int)v20) != 0 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v20, v17);
    *(_QWORD *)(v41 + 24) = v43;
    WdLogEvent5_WdAssertion(v41);
    LODWORD(v20) = v69;
    goto LABEL_58;
  }
LABEL_30:
  *(_DWORD *)(a1 + 208) = v20;
  v21 = 14;
  if ( v44 <= 0xE )
  {
    v21 = v44;
    if ( !v44 )
      v21 = 1;
  }
  v44 = v21;
  *(_DWORD *)(a1 + 212) = v21;
  if ( !v70 || (IsEnabled = TdrIsEnabled(), v23 = 512, !IsEnabled) )
    v23 = 0;
  v24 = (_QWORD *)(a1 + 2072);
  v25 = 0LL;
  *(_DWORD *)(a1 + 1936) = v23 | *(_DWORD *)(a1 + 1936) & 0xFFFFFDFF;
  do
  {
    v26 = 1;
    if ( v45 > 1 )
      v26 = v45;
    v27 = (unsigned int)(v26 * *(_DWORD *)((char *)&gulQuantumMultiplierTableByPriorityClass + v25));
    v28 = 1;
    if ( v46 > 1 )
      v28 = v46;
    *(v24 - 6) = v27;
    v29 = *(_DWORD *)((char *)&gulPreemptionQuantumMultiplierTableByPriorityClass + v25);
    v25 += 4LL;
    *v24++ = (unsigned int)(v28 * v29);
  }
  while ( v25 < 24 );
  v30 = 1;
  v31 = *(_DWORD *)(a1 + 1936);
  if ( v47 > 1 )
    v30 = v47;
  *(_DWORD *)(a1 + 1960) = v30;
  v32 = (v72 != 0 ? 0x40 : 0) | (v71 != 0 ? 0x20 : 0) | v31 & 0xFFFFFF9F;
  v33 = -(v73 != 0);
  *(_DWORD *)(a1 + 5784) = v74;
  v34 = v33 & 0x80 | v32 & 0xFFFFFF7F;
  v35 = v49;
  v36 = v48 <= 0x10;
  *(_DWORD *)(a1 + 1936) = v34;
  if ( !v36 )
    v3 = v48;
  v37 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 2020) = v3;
  *(_DWORD *)(a1 + 1808) = v35;
  if ( *(int *)(v37 + 2452) < 1300 )
  {
    if ( v35 >= 4 )
    {
      v42 = v35;
      if ( v35 > 0xFFFFFFFD )
        v42 = -3;
      *(_DWORD *)(a1 + 1808) = v42;
    }
    else
    {
      *(_DWORD *)(a1 + 1808) = 4;
    }
  }
  v38 = v75;
  *(_DWORD *)(a1 + 2152) = v75;
  *(_DWORD *)(a1 + 2144) = v38;
  *(_DWORD *)(a1 + 2136) = v38;
  *(_DWORD *)(a1 + 2128) = v38;
  *(_DWORD *)(a1 + 2120) = v38;
  if ( !v76 )
  {
    result = *(_QWORD *)(v37 + 2456);
    if ( (*(_DWORD *)result & 0x800) == 0 )
      return result;
LABEL_49:
    *(_DWORD *)(a1 + 216) = 1;
    return result;
  }
  result = (unsigned int)(v76 - 1);
  if ( v76 == 1 )
    goto LABEL_49;
  result = (unsigned int)(v76 - 2);
  if ( v76 == 2 )
  {
    *(_DWORD *)(a1 + 216) = 2;
  }
  else if ( v76 == 3 )
  {
    *(_DWORD *)(a1 + 216) = 0;
  }
  return result;
}
