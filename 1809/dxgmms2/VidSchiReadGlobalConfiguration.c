/*
 * XREFs of VidSchiReadGlobalConfiguration @ 0x1C0082FD0
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C0081ED0 (VidSchInitializeAdapter.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00183C0 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     VidSchiReadNodeConfiguration @ 0x1C0083CD8 (VidSchiReadNodeConfiguration.c)
 */

unsigned __int64 __fastcall VidSchiReadGlobalConfiguration(__int64 a1)
{
  unsigned int v2; // eax
  DXGADAPTER *v3; // rcx
  int v4; // edi
  __int64 v5; // rcx
  int NodeConfiguration; // eax
  unsigned int v7; // ecx
  __int64 v8; // r11
  int *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r9d
  _DWORD *v13; // rax
  int *v14; // rax
  int v15; // r10d
  int *v16; // rax
  unsigned int v17; // eax
  int v18; // edx
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  bool IsEnabled; // al
  int v25; // ecx
  _QWORD *v26; // r8
  __int64 v27; // rdx
  int v28; // ecx
  __int64 v29; // rax
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // edx
  int v34; // r8d
  bool v35; // cf
  unsigned int v36; // edx
  int v37; // ecx
  unsigned int v38; // edx
  DXGADAPTER *v39; // rcx
  bool v40; // cc
  __int64 v41; // rcx
  unsigned int v42; // r8d
  int v43; // eax
  unsigned __int64 result; // rax
  _DWORD *v45; // rax
  __int64 v46; // rax
  unsigned int v47; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v48; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v49; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v50; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v51; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v52; // [rsp+44h] [rbp-BCh] BYREF
  int v53; // [rsp+48h] [rbp-B8h] BYREF
  int v54; // [rsp+4Ch] [rbp-B4h] BYREF
  int v55; // [rsp+50h] [rbp-B0h] BYREF
  int v56; // [rsp+54h] [rbp-ACh] BYREF
  int v57; // [rsp+58h] [rbp-A8h] BYREF
  int v58; // [rsp+5Ch] [rbp-A4h] BYREF
  int v59; // [rsp+60h] [rbp-A0h] BYREF
  int v60; // [rsp+64h] [rbp-9Ch] BYREF
  int v61; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v62; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v63; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v64; // [rsp+74h] [rbp-8Ch] BYREF
  int v65; // [rsp+78h] [rbp-88h] BYREF
  int v66; // [rsp+7Ch] [rbp-84h] BYREF
  int v67; // [rsp+80h] [rbp-80h] BYREF
  int v68; // [rsp+84h] [rbp-7Ch] BYREF
  int v69; // [rsp+88h] [rbp-78h] BYREF
  int v70; // [rsp+8Ch] [rbp-74h] BYREF
  int v71; // [rsp+90h] [rbp-70h] BYREF
  int v72; // [rsp+94h] [rbp-6Ch] BYREF
  int v73; // [rsp+98h] [rbp-68h] BYREF
  int v74; // [rsp+9Ch] [rbp-64h] BYREF
  int v75; // [rsp+A0h] [rbp-60h] BYREF
  int v76; // [rsp+A4h] [rbp-5Ch] BYREF
  int v77; // [rsp+A8h] [rbp-58h] BYREF
  int v78; // [rsp+ACh] [rbp-54h] BYREF
  int v79; // [rsp+B0h] [rbp-50h] BYREF
  int v80; // [rsp+B4h] [rbp-4Ch] BYREF
  int v81; // [rsp+B8h] [rbp-48h] BYREF
  int v82; // [rsp+BCh] [rbp-44h] BYREF
  int v83; // [rsp+C0h] [rbp-40h] BYREF
  int v84; // [rsp+C4h] [rbp-3Ch] BYREF
  int v85; // [rsp+C8h] [rbp-38h] BYREF
  int v86; // [rsp+CCh] [rbp-34h] BYREF
  int v87; // [rsp+D0h] [rbp-30h] BYREF
  int v88; // [rsp+D4h] [rbp-2Ch] BYREF
  int v89; // [rsp+D8h] [rbp-28h] BYREF
  int v90; // [rsp+DCh] [rbp-24h] BYREF
  int v91; // [rsp+E0h] [rbp-20h] BYREF
  int v92; // [rsp+E4h] [rbp-1Ch] BYREF
  int v93; // [rsp+E8h] [rbp-18h] BYREF
  int v94; // [rsp+ECh] [rbp-14h] BYREF
  int v95; // [rsp+F0h] [rbp-10h] BYREF
  int v96; // [rsp+F4h] [rbp-Ch] BYREF
  int v97; // [rsp+F8h] [rbp-8h] BYREF
  int v98; // [rsp+FCh] [rbp-4h] BYREF
  int v99; // [rsp+100h] [rbp+0h] BYREF
  int v100; // [rsp+104h] [rbp+4h] BYREF
  int v101; // [rsp+108h] [rbp+8h] BYREF
  int v102; // [rsp+10Ch] [rbp+Ch] BYREF
  int v103; // [rsp+110h] [rbp+10h] BYREF
  int v104; // [rsp+114h] [rbp+14h] BYREF
  unsigned int v105; // [rsp+118h] [rbp+18h] BYREF
  int v106; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v107; // [rsp+120h] [rbp+20h] BYREF
  int v108; // [rsp+124h] [rbp+24h] BYREF
  _QWORD v109[224]; // [rsp+130h] [rbp+30h] BYREF

  v82 = 25000;
  v81 = 0;
  v83 = 50000;
  v87 = 0;
  v88 = 0;
  v2 = *(_DWORD *)(a1 + 212);
  v84 = 1;
  v104 = 100;
  v72 = 100;
  v3 = *(DXGADAPTER **)(a1 + 16);
  v85 = 2;
  v4 = 16;
  v86 = 3;
  v89 = 1;
  v90 = 1;
  v91 = 0;
  v94 = 0;
  v92 = 20;
  v93 = 2;
  v54 = 7;
  v96 = 0;
  v97 = 900;
  v98 = 1000;
  v95 = 1;
  v99 = 8;
  v100 = 0;
  v66 = 10;
  v101 = 1;
  v102 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v103 = 16;
  v73 = 64;
  v105 = v2;
  v56 = 0;
  v49 = 25000;
  v50 = 50000;
  v58 = 1;
  v55 = 2;
  v51 = 3;
  v79 = 0;
  v57 = 0;
  v59 = 1;
  v75 = 1;
  v76 = 0;
  v77 = 0;
  v52 = 20;
  v78 = 2;
  v53 = 7;
  v60 = 0;
  v68 = 900;
  v69 = 1000;
  v74 = 1;
  v71 = 8;
  v67 = 0;
  v65 = 10;
  v61 = 1;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v70 = 16;
  v47 = 64;
  v80 = 0;
  v48 = v2;
  if ( (int)DXGADAPTER::GetDriverVersion(v3) >= 1300 && *(_BYTE *)(v5 + 2365) )
  {
    v54 = 1;
    v53 = 1;
  }
  memset(v109, 0, sizeof(v109));
  v109[0] = 0LL;
  LODWORD(v109[1]) = 288;
  LODWORD(v109[4]) = 67108868;
  LODWORD(v109[6]) = 4;
  v109[2] = L"AutoSyncToCPUPriority";
  v109[3] = &v56;
  v109[5] = &v81;
  v109[9] = L"QuantumUnit";
  v109[10] = &v49;
  v109[12] = &v82;
  v109[16] = L"PreemptionQuantumUnit";
  v109[17] = &v50;
  v109[19] = &v83;
  v109[23] = L"EnablePreemption";
  v109[24] = &v58;
  v109[26] = &v84;
  v109[30] = L"HwQueuedRenderPacketGroupLimit";
  v109[31] = &v55;
  v109[33] = &v85;
  v109[37] = L"QueuedPresentLimit";
  v109[38] = &v51;
  v109[40] = &v86;
  v109[44] = L"InitDriverFenceId";
  v109[45] = &v79;
  v109[47] = &v87;
  v109[51] = L"CarryOverUsedQuantum";
  v109[7] = 0LL;
  LODWORD(v109[8]) = 288;
  LODWORD(v109[11]) = 67108868;
  LODWORD(v109[13]) = 4;
  v109[14] = 0LL;
  LODWORD(v109[15]) = 288;
  LODWORD(v109[18]) = 67108868;
  LODWORD(v109[20]) = 4;
  v109[21] = 0LL;
  LODWORD(v109[22]) = 288;
  LODWORD(v109[25]) = 67108868;
  LODWORD(v109[27]) = 4;
  v109[28] = 0LL;
  LODWORD(v109[29]) = 288;
  LODWORD(v109[32]) = 67108868;
  LODWORD(v109[34]) = 4;
  v109[35] = 0LL;
  LODWORD(v109[36]) = 288;
  LODWORD(v109[39]) = 67108868;
  LODWORD(v109[41]) = 4;
  v109[42] = 0LL;
  LODWORD(v109[43]) = 288;
  LODWORD(v109[46]) = 67108868;
  LODWORD(v109[48]) = 4;
  v109[49] = 0LL;
  LODWORD(v109[50]) = 288;
  LODWORD(v109[53]) = 67108868;
  v109[52] = &v57;
  v109[54] = &v88;
  v109[58] = L"EnableFlipImmediateSwFlipQueue";
  v109[59] = &v59;
  v109[61] = &v89;
  v109[65] = L"AdjustWorkerThreadPriority";
  v109[66] = &v75;
  v109[68] = &v90;
  v109[72] = L"CountFlipTowardHwLimit";
  v109[73] = &v76;
  v109[75] = &v91;
  v109[79] = L"NumberOfDmaPacketPool";
  v109[80] = &v52;
  v109[82] = &v92;
  v109[86] = L"ProfileLevel";
  v109[87] = &v78;
  v109[89] = &v93;
  v109[93] = L"VSyncIdleTimeout";
  v109[94] = &v53;
  v109[96] = &v54;
  v109[100] = L"CountPresentTowardHwLimit";
  v109[101] = &v77;
  v109[103] = &v94;
  v109[107] = L"EnableContextDelay";
  LODWORD(v109[55]) = 4;
  v109[56] = 0LL;
  LODWORD(v109[57]) = 288;
  LODWORD(v109[60]) = 67108868;
  LODWORD(v109[62]) = 4;
  v109[63] = 0LL;
  LODWORD(v109[64]) = 288;
  LODWORD(v109[67]) = 67108868;
  LODWORD(v109[69]) = 4;
  v109[70] = 0LL;
  LODWORD(v109[71]) = 288;
  LODWORD(v109[74]) = 67108868;
  LODWORD(v109[76]) = 4;
  v109[77] = 0LL;
  LODWORD(v109[78]) = 288;
  LODWORD(v109[81]) = 67108868;
  LODWORD(v109[83]) = 4;
  v109[84] = 0LL;
  LODWORD(v109[85]) = 288;
  LODWORD(v109[88]) = 67108868;
  LODWORD(v109[90]) = 4;
  v109[91] = 0LL;
  LODWORD(v109[92]) = 288;
  LODWORD(v109[95]) = 67108868;
  LODWORD(v109[97]) = 4;
  v109[98] = 0LL;
  LODWORD(v109[99]) = 288;
  LODWORD(v109[102]) = 67108868;
  LODWORD(v109[104]) = 4;
  v109[105] = 0LL;
  LODWORD(v109[106]) = 288;
  v109[108] = &v74;
  v109[110] = &v95;
  v109[114] = L"LogDriverVSyncCallback";
  v109[115] = &v60;
  v109[117] = &v96;
  v109[121] = L"MaximumAllowedPreemptionDelay";
  v109[122] = &v68;
  v109[124] = &v97;
  v109[128] = L"ContextSchedulingPenaltyDelay";
  v109[129] = &v69;
  v109[131] = &v98;
  v109[135] = L"BackgroundProcessMaximumAllowedPreemptionDelay";
  v109[136] = &v71;
  v109[138] = &v99;
  v109[142] = L"ForceEnableFlipFenceModel";
  v109[143] = &v67;
  v109[145] = &v100;
  v109[149] = L"YieldPercentage";
  v109[150] = &v65;
  v109[152] = &v66;
  v109[156] = L"ForegroundPriorityBoost";
  v109[157] = &v61;
  v109[159] = &v101;
  v109[163] = L"ForceFlipTrueImmediateMode";
  v109[164] = &v62;
  LODWORD(v109[109]) = 67108868;
  LODWORD(v109[111]) = 4;
  v109[112] = 0LL;
  LODWORD(v109[113]) = 288;
  LODWORD(v109[116]) = 67108868;
  LODWORD(v109[118]) = 4;
  v109[119] = 0LL;
  LODWORD(v109[120]) = 288;
  LODWORD(v109[123]) = 67108868;
  LODWORD(v109[125]) = 4;
  v109[126] = 0LL;
  LODWORD(v109[127]) = 288;
  LODWORD(v109[130]) = 67108868;
  LODWORD(v109[132]) = 4;
  v109[133] = 0LL;
  LODWORD(v109[134]) = 288;
  LODWORD(v109[137]) = 67108868;
  LODWORD(v109[139]) = 4;
  v109[140] = 0LL;
  LODWORD(v109[141]) = 288;
  LODWORD(v109[144]) = 67108868;
  LODWORD(v109[146]) = 4;
  v109[147] = 0LL;
  LODWORD(v109[148]) = 288;
  LODWORD(v109[151]) = 67108868;
  LODWORD(v109[153]) = 4;
  v109[154] = 0LL;
  LODWORD(v109[155]) = 288;
  LODWORD(v109[158]) = 67108868;
  LODWORD(v109[160]) = 4;
  v109[161] = 0LL;
  LODWORD(v109[162]) = 288;
  LODWORD(v109[165]) = 67108868;
  v109[166] = &v102;
  LODWORD(v109[169]) = 288;
  v109[170] = L"MaxYieldInterval";
  LODWORD(v109[172]) = 67108868;
  v109[171] = &v70;
  v109[173] = &v103;
  v109[177] = L"MaxFocusGpuQuantumWithoutPresent";
  v109[178] = &v72;
  v109[180] = &v104;
  v109[184] = L"HistoryLogSize";
  v109[185] = &v47;
  v109[187] = &v73;
  v109[191] = L"HwQueuePacketCap";
  v109[192] = &v48;
  v109[194] = &v105;
  v109[198] = L"FlipDoNotFlipMode";
  v109[199] = &v63;
  v109[201] = &v106;
  v109[205] = L"DdiSuspendMode";
  v109[206] = &v64;
  v109[208] = &v107;
  v109[212] = L"PfnCpuOverride";
  v109[213] = &v80;
  LODWORD(v109[176]) = 288;
  LODWORD(v109[179]) = 67108868;
  LODWORD(v109[183]) = 288;
  LODWORD(v109[186]) = 67108868;
  LODWORD(v109[190]) = 288;
  LODWORD(v109[193]) = 67108868;
  LODWORD(v109[197]) = 288;
  LODWORD(v109[200]) = 67108868;
  LODWORD(v109[204]) = 288;
  LODWORD(v109[207]) = 67108868;
  LODWORD(v109[211]) = 288;
  LODWORD(v109[214]) = 67108868;
  v109[215] = &v108;
  LODWORD(v109[167]) = 4;
  v109[168] = 0LL;
  LODWORD(v109[174]) = 4;
  v109[175] = 0LL;
  LODWORD(v109[181]) = 4;
  v109[182] = 0LL;
  LODWORD(v109[188]) = 4;
  v109[189] = 0LL;
  LODWORD(v109[195]) = 4;
  v109[196] = 0LL;
  LODWORD(v109[202]) = 4;
  v109[203] = 0LL;
  LODWORD(v109[209]) = 4;
  v109[210] = 0LL;
  LODWORD(v109[216]) = 4;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Scheduler", v109, 0LL, 0LL);
  NodeConfiguration = VidSchiReadNodeConfiguration(a1, *(_QWORD *)(a1 + 1968));
  v7 = 0;
  if ( *(_DWORD *)(a1 + 68) )
  {
    v8 = NodeConfiguration;
    do
    {
      if ( v8 < 0 )
        goto LABEL_7;
      v45 = *(_DWORD **)(a1 + 1968);
      v10 = v7;
      if ( v7 < *(_DWORD *)(a1 + 2008) )
        v45 += v7;
      if ( !*v45 )
      {
LABEL_7:
        v9 = *(int **)(a1 + 1968);
        v10 = v7;
        if ( v7 < *(_DWORD *)(a1 + 2008) )
          v9 += v7;
        *v9 = v55;
      }
      v11 = *(_QWORD *)(a1 + 1968);
      v12 = *(_DWORD *)(a1 + 2008);
      v13 = (_DWORD *)(v11 + 4 * v10);
      if ( v7 >= v12 )
        v13 = *(_DWORD **)(a1 + 1968);
      if ( *v13 <= 1u )
      {
        v15 = 1;
      }
      else
      {
        v14 = (int *)(v11 + 4 * v10);
        if ( v7 >= v12 )
          v14 = *(int **)(a1 + 1968);
        v15 = *v14;
      }
      v16 = (int *)(v11 + 4 * v10);
      if ( v7 >= v12 )
        v16 = *(int **)(a1 + 1968);
      ++v7;
      *v16 = v15;
    }
    while ( v7 < *(_DWORD *)(a1 + 68) );
  }
  v17 = v62;
  *(_DWORD *)(a1 + 1936) = (v61 != 0 ? 0x400 : 0) | (v60 != 0 ? 0x100 : 0) | (v59 != 0 ? 0x10 : 0) | (v58 != 0) | (v57 != 0 ? 4 : 0) | (v56 != 0 ? 2 : 0) | *(_DWORD *)(a1 + 1936) & 0xFFFFFAE8;
  if ( v17 <= 2 )
    *(_DWORD *)(a1 + 1948) = v17;
  if ( v63 <= 2 )
    *(_DWORD *)(a1 + 1952) = v63;
  if ( v64 <= 2 )
    *(_DWORD *)(a1 + 1956) = v64;
  v18 = v66;
  if ( (unsigned int)(v65 - 1) <= 0x53 )
    v18 = v65;
  *(_DWORD *)(a1 + 192) = v18;
  v19 = (unsigned int)(v18 + 15);
  v20 = v67 == 0;
  *(_DWORD *)(a1 + 196) = v19;
  v21 = (unsigned int)(10000 * v68);
  *(_BYTE *)(a1 + 57) = !v20;
  *(_QWORD *)(a1 + 2160) = v21;
  *(_QWORD *)(a1 + 2168) = (unsigned int)(10000 * v69);
  *(_QWORD *)(a1 + 2256) = (unsigned int)(10000 * v70);
  *(_QWORD *)(a1 + 2176) = (unsigned int)(10000 * v71);
  *(_QWORD *)(a1 + 2264) = (unsigned int)(10000 * v72);
  v22 = v47;
  *(_QWORD *)(a1 + 2184) = 1000LL;
  *(_QWORD *)(a1 + 2192) = 2500LL;
  *(_QWORD *)(a1 + 2200) = 5000LL;
  *(_QWORD *)(a1 + 2208) = 10000LL;
  *(_QWORD *)(a1 + 2216) = 25000LL;
  *(_QWORD *)(a1 + 2224) = 50000LL;
  *(_QWORD *)(a1 + 2232) = 100000LL;
  *(_QWORD *)(a1 + 2240) = 250000LL;
  *(_QWORD *)(a1 + 2248) = 500000LL;
  if ( (unsigned int)v22 < 0x10 )
  {
    LODWORD(v22) = 16;
LABEL_58:
    v47 = v22;
    goto LABEL_30;
  }
  if ( (unsigned int)v22 > 0x10000 )
  {
    LODWORD(v22) = 0x10000;
    v47 = 0x10000;
    goto LABEL_30;
  }
  if ( (((_DWORD)v22 - 1) & (unsigned int)v22) != 0 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v22, v19);
    *(_QWORD *)(v46 + 24) = v47;
    WdLogEvent5_WdAssertion(v46);
    LODWORD(v22) = v73;
    goto LABEL_58;
  }
LABEL_30:
  *(_DWORD *)(a1 + 208) = v22;
  v23 = 14;
  if ( v48 <= 0xE )
  {
    v23 = v48;
    if ( !v48 )
      v23 = 1;
  }
  v48 = v23;
  *(_DWORD *)(a1 + 212) = v23;
  if ( !v74 || (IsEnabled = TdrIsEnabled(), v25 = 512, !IsEnabled) )
    v25 = 0;
  v26 = (_QWORD *)(a1 + 2072);
  v27 = 0LL;
  *(_DWORD *)(a1 + 1936) = v25 | *(_DWORD *)(a1 + 1936) & 0xFFFFFDFF;
  do
  {
    v28 = 1;
    if ( v49 > 1 )
      v28 = v49;
    v29 = (unsigned int)(v28 * *(_DWORD *)((char *)&gulQuantumMultiplierTableByPriorityClass + v27));
    v30 = 1;
    if ( v50 > 1 )
      v30 = v50;
    *(v26 - 6) = v29;
    v31 = *(_DWORD *)((char *)&gulPreemptionQuantumMultiplierTableByPriorityClass + v27);
    v27 += 4LL;
    *v26++ = (unsigned int)(v30 * v31);
  }
  while ( v27 < 24 );
  v32 = 1;
  v33 = *(_DWORD *)(a1 + 1936);
  if ( v51 > 1 )
    v32 = v51;
  v34 = v53;
  *(_DWORD *)(a1 + 1960) = v32;
  v35 = v75 != 0;
  *(_DWORD *)(a1 + 1808) = v34;
  v36 = (v76 != 0 ? 0x40 : 0) | (v35 ? 0x20 : 0) | v33 & 0xFFFFFF9F;
  v37 = -(v77 != 0);
  *(_DWORD *)(a1 + 5784) = v78;
  v38 = v37 & 0x80 | v36 & 0xFFFFFF7F;
  v39 = *(DXGADAPTER **)(a1 + 16);
  v40 = v52 <= 0x10;
  *(_DWORD *)(a1 + 1936) = v38;
  if ( !v40 )
    v4 = v52;
  *(_DWORD *)(a1 + 2020) = v4;
  if ( (int)DXGADAPTER::GetDriverVersion(v39) < 1300 )
  {
    if ( v42 >= 4 )
    {
      if ( v42 > 0xFFFFFFFD )
        *(_DWORD *)(a1 + 1808) = -3;
    }
    else
    {
      *(_DWORD *)(a1 + 1808) = 4;
    }
  }
  v43 = v79;
  *(_DWORD *)(a1 + 2152) = v79;
  *(_DWORD *)(a1 + 2144) = v43;
  *(_DWORD *)(a1 + 2136) = v43;
  *(_DWORD *)(a1 + 2128) = v43;
  *(_DWORD *)(a1 + 2120) = v43;
  if ( !v80 )
  {
    result = *(_QWORD *)(v41 + 4112);
    if ( (*(_DWORD *)result & 0x800) == 0 )
      return result;
LABEL_49:
    *(_DWORD *)(a1 + 216) = 1;
    return result;
  }
  result = (unsigned int)(v80 - 1);
  if ( v80 == 1 )
    goto LABEL_49;
  result = (unsigned int)(v80 - 2);
  if ( v80 == 2 )
  {
    *(_DWORD *)(a1 + 216) = 2;
  }
  else if ( v80 == 3 )
  {
    *(_DWORD *)(a1 + 216) = 0;
  }
  return result;
}
