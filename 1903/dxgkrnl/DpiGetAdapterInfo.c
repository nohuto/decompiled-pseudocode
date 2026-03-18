/*
 * XREFs of DpiGetAdapterInfo @ 0x1C0167E78
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01427C0 (DpiOpenPnpRegistryKey.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C0168EC0 (DxgkRetrieveStringFromRegistry.c)
 *     DpiFreeAdapterInfo @ 0x1C029C68C (DpiFreeAdapterInfo.c)
 *     DxgkFreeUnicodeString @ 0x1C029D240 (DxgkFreeUnicodeString.c)
 */

__int64 __fastcall DpiGetAdapterInfo(__int64 a1, __int64 a2, _QWORD *a3, _OWORD *a4)
{
  __int64 v8; // r14
  char v9; // r12
  __int64 v10; // rbx
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // ecx
  int v30; // edx
  char v31; // al
  unsigned int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  HANDLE v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  HANDLE v72; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v76; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v78[36]; // [rsp+A0h] [rbp-60h] BYREF

  memset(v78, 0, 0x118uLL);
  v8 = *(_QWORD *)(a1 + 64);
  v9 = 1;
  v10 = *(_QWORD *)(v8 + 40);
  if ( a3 )
  {
    memset(a3, 0, 0x420uLL);
    *a3 = *(_QWORD *)(v8 + 48);
    v11 = 0;
    v12 = 1;
    if ( *(_DWORD *)(v8 + 504) )
      v12 = *(_DWORD *)(v8 + 504);
    *((_DWORD *)a3 + 2) = v12;
    *(_OWORD *)((char *)a3 + 12) = *(_OWORD *)(v8 + 2656);
    *(_QWORD *)((char *)a3 + 28) = *(_QWORD *)(v8 + 2672);
    *((_DWORD *)a3 + 9) = *(_DWORD *)(v8 + 1124);
    *((_DWORD *)a3 + 10) = *(_DWORD *)(v8 + 1128);
    *((_DWORD *)a3 + 11) = *(_DWORD *)(v8 + 1132);
    *((_DWORD *)a3 + 12) = *(_DWORD *)(v8 + 1136);
    *((_DWORD *)a3 + 13) = *(_DWORD *)(v8 + 1140);
    *((_DWORD *)a3 + 14) = *(_DWORD *)(v8 + 1120);
    LOBYTE(v11) = *(_BYTE *)(v8 + 1152) != 0;
    v13 = *((_DWORD *)a3 + 15) & 0xFFFFFFFE | v11;
    *((_DWORD *)a3 + 15) = v13;
    v14 = v13 & 0xFFFFFFFD | (*(_BYTE *)(v8 + 1153) != 0 ? 2 : 0);
    *((_DWORD *)a3 + 15) = v14;
    v15 = v14 & 0xFFFFFFFB | (*(_BYTE *)(v8 + 480) != 0 ? 4 : 0);
    *((_DWORD *)a3 + 15) = v15;
    v16 = v15 & 0xFFFFFFF7 | (*(_BYTE *)(v8 + 2692) != 0 ? 8 : 0);
    *((_DWORD *)a3 + 15) = v16;
    v17 = v16 & 0xFFFFFFEF | (*(_BYTE *)(v8 + 2693) != 0 ? 0x10 : 0);
    *((_DWORD *)a3 + 15) = v17;
    v18 = v17 & 0xFFFFFFDF | (*(_BYTE *)(v8 + 1155) != 0 ? 0x20 : 0);
    *((_DWORD *)a3 + 15) = v18;
    v19 = v18 & 0xFFFFBFFF | (*(_BYTE *)(v8 + 481) != 0 ? 0x4000 : 0);
    *((_DWORD *)a3 + 15) = v19;
    v20 = v19 & 0xFFFFEFFF | (*(_DWORD *)(v8 + 3484) != -1 ? 0x1000 : 0);
    *((_DWORD *)a3 + 15) = v20;
    v21 = v20 & 0xFFFFFFBF | (*(_DWORD *)(v8 + 3224) != -1 ? 0x40 : 0);
    *((_DWORD *)a3 + 15) = v21;
    v22 = v21 & 0xFFFFFF7F | (*(_BYTE *)(v8 + 2740) != 0 ? 0x80 : 0);
    *((_DWORD *)a3 + 15) = v22;
    v23 = v22 & 0xFFFFFEFF | (*(_BYTE *)(v8 + 1159) != 0 ? 0x100 : 0);
    *((_DWORD *)a3 + 15) = v23;
    v24 = v23 & 0xFFFFFDFF | (*(_BYTE *)(v8 + 2695) != 0 ? 0x200 : 0);
    *((_DWORD *)a3 + 15) = v24;
    v25 = v24 & 0xFFFFDFFF | (*(_BYTE *)(v8 + 2694) != 0 ? 0x2000 : 0);
    *((_DWORD *)a3 + 15) = v25;
    v26 = v25 & 0xFFFFFBFF | (*(_BYTE *)(v8 + 2697) != 0 ? 0x400 : 0);
    *((_DWORD *)a3 + 15) = v26;
    v27 = v26 & 0xFFFFF7FF | (*(_BYTE *)(v8 + 2698) != 0 ? 0x800 : 0);
    *((_DWORD *)a3 + 15) = v27;
    v28 = v27 & 0xFFFF7FFF | (*(_BYTE *)(v8 + 2741) != 0 ? 0x8000 : 0);
    *((_DWORD *)a3 + 15) = v28;
    v29 = v28 & 0xFFFEFFFF | (*(_BYTE *)(v8 + 2742) != 0 ? 0x10000 : 0);
    *((_DWORD *)a3 + 15) = v29;
    v30 = v29 ^ (v29 ^ (*(_DWORD *)(v8 + 1300) << 13)) & 0x20000;
    *((_DWORD *)a3 + 15) = v30;
    *((_DWORD *)a3 + 15) = v30 & 0xFFFBFFFF | (*(_BYTE *)(v8 + 1160) != 0 ? 0x40000 : 0);
    if ( !*(_QWORD *)(v10 + 184) || (v31 = 1, !*(_QWORD *)(v10 + 192)) )
      v31 = 0;
    *((_BYTE *)a3 + 64) = v31;
    a3[9] = *(_QWORD *)(v10 + 272);
    a3[10] = *(_QWORD *)(v10 + 280);
    a3[11] = *(_QWORD *)(v10 + 288);
    a3[12] = *(_QWORD *)(v10 + 296);
    a3[13] = *(_QWORD *)(v10 + 304);
    a3[14] = *(_QWORD *)(v10 + 312);
    a3[15] = *(_QWORD *)(v10 + 320);
    a3[16] = *(_QWORD *)(v10 + 328);
    a3[17] = *(_QWORD *)(v10 + 336);
    a3[18] = *(_QWORD *)(v10 + 344);
    a3[19] = *(_QWORD *)(v10 + 352);
    a3[20] = *(_QWORD *)(v10 + 360);
    a3[21] = *(_QWORD *)(v10 + 368);
    a3[22] = *(_QWORD *)(v10 + 376);
    a3[23] = *(_QWORD *)(v10 + 384);
    a3[24] = *(_QWORD *)(v10 + 392);
    a3[25] = *(_QWORD *)(v10 + 400);
    a3[26] = *(_QWORD *)(v10 + 408);
    a3[27] = *(_QWORD *)(v10 + 416);
    a3[28] = *(_QWORD *)(v10 + 424);
    a3[29] = *(_QWORD *)(v10 + 432);
    a3[30] = *(_QWORD *)(v10 + 440);
    a3[31] = *(_QWORD *)(v10 + 448);
    a3[32] = *(_QWORD *)(v10 + 456);
    a3[33] = *(_QWORD *)(v10 + 464);
    a3[34] = *(_QWORD *)(v10 + 472);
    a3[35] = *(_QWORD *)(v10 + 480);
    a3[36] = *(_QWORD *)(v10 + 488);
    a3[37] = *(_QWORD *)(v10 + 504);
    a3[38] = *(_QWORD *)(v10 + 512);
    a3[39] = *(_QWORD *)(v10 + 520);
    a3[40] = *(_QWORD *)(v10 + 528);
    a3[41] = *(_QWORD *)(v10 + 536);
    a3[42] = *(_QWORD *)(v10 + 544);
    a3[43] = *(_QWORD *)(v10 + 552);
    a3[44] = *(_QWORD *)(v10 + 560);
    a3[45] = *(_QWORD *)(v10 + 568);
    a3[46] = *(_QWORD *)(v10 + 576);
    a3[47] = *(_QWORD *)(v10 + 584);
    a3[48] = *(_QWORD *)(v10 + 592);
    a3[49] = *(_QWORD *)(v10 + 600);
    a3[50] = *(_QWORD *)(v10 + 608);
    a3[51] = *(_QWORD *)(v10 + 624);
    v32 = *(_DWORD *)(v10 + 28);
    if ( v32 >= 0x2002 )
    {
      a3[52] = *(_QWORD *)(v10 + 680);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x3001 )
    {
      a3[53] = *(_QWORD *)(v10 + 712);
      a3[54] = *(_QWORD *)(v10 + 720);
      a3[55] = *(_QWORD *)(v10 + 728);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x3004 )
    {
      a3[60] = *(_QWORD *)(v10 + 760);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x3005 )
    {
      a3[57] = *(_QWORD *)(v10 + 704);
      a3[58] = *(_QWORD *)(v10 + 776);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x3000 )
    {
      a3[56] = *(_QWORD *)(v10 + 1360);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x4000 )
    {
      a3[63] = *(_QWORD *)(v10 + 808);
      a3[64] = *(_QWORD *)(v10 + 816);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x300B )
    {
      a3[61] = *(_QWORD *)(v10 + 784);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x4001 )
    {
      a3[65] = *(_QWORD *)(v10 + 824);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x4000 )
    {
      a3[62] = *(_QWORD *)(v10 + 800);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x4002 )
    {
      a3[66] = *(_QWORD *)(v10 + 832);
      a3[67] = *(_QWORD *)(v10 + 840);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x5001 )
    {
      a3[68] = *(_QWORD *)(v10 + 848);
      a3[69] = *(_QWORD *)(v10 + 856);
      a3[70] = *(_QWORD *)(v10 + 864);
      a3[71] = *(_QWORD *)(v10 + 872);
      a3[72] = *(_QWORD *)(v10 + 880);
      a3[73] = *(_QWORD *)(v10 + 888);
      a3[74] = *(_QWORD *)(v10 + 904);
      a3[75] = *(_QWORD *)(v10 + 912);
      a3[76] = *(_QWORD *)(v10 + 896);
      a3[77] = *(_QWORD *)(v10 + 920);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x5006 )
    {
      a3[59] = *(_QWORD *)(v10 + 944);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x5008 )
    {
      a3[78] = *(_QWORD *)(v10 + 952);
      a3[79] = *(_QWORD *)(v10 + 960);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x6000 )
    {
      a3[80] = *(_QWORD *)(v10 + 968);
      a3[81] = *(_QWORD *)(v10 + 976);
      a3[82] = *(_QWORD *)(v10 + 984);
      a3[83] = v8 + 4952;
      a3[85] = v8 + 5080;
      a3[84] = v8 + 5216;
      a3[86] = v8 + 5272;
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x6002 )
    {
      a3[87] = *(_QWORD *)(v10 + 1000);
      a3[88] = *(_QWORD *)(v10 + 1008);
      a3[89] = *(_QWORD *)(v10 + 992);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x7000 )
    {
      a3[90] = *(_QWORD *)(v10 + 1016);
      a3[91] = *(_QWORD *)(v10 + 1024);
      a3[92] = *(_QWORD *)(v10 + 1032);
      a3[93] = *(_QWORD *)(v10 + 1040);
      a3[94] = *(_QWORD *)(v10 + 1048);
      a3[95] = *(_QWORD *)(v10 + 1056);
      a3[96] = *(_QWORD *)(v10 + 1064);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x7002 )
    {
      a3[98] = *(_QWORD *)(v10 + 1072);
      a3[99] = *(_QWORD *)(v10 + 1080);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x7003 )
    {
      a3[100] = *(_QWORD *)(v10 + 1088);
      a3[101] = *(_QWORD *)(v10 + 1096);
      a3[102] = *(_QWORD *)(v10 + 1104);
      a3[103] = *(_QWORD *)(v10 + 1112);
      a3[104] = *(_QWORD *)(v10 + 1120);
      a3[105] = *(_QWORD *)(v10 + 1128);
      a3[106] = *(_QWORD *)(v10 + 1136);
      a3[107] = *(_QWORD *)(v10 + 1144);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x7004 )
    {
      a3[108] = *(_QWORD *)(v10 + 1152);
      a3[109] = *(_QWORD *)(v10 + 1160);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x8000 )
    {
      a3[110] = *(_QWORD *)(v10 + 1168);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x8001 )
    {
      a3[111] = *(_QWORD *)(v10 + 1176);
      a3[112] = *(_QWORD *)(v10 + 1184);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x9000 )
    {
      a3[113] = *(_QWORD *)(v10 + 1192);
      a3[114] = *(_QWORD *)(v10 + 1200);
      a3[115] = *(_QWORD *)(v10 + 1208);
      a3[116] = *(_QWORD *)(v10 + 1216);
      a3[117] = *(_QWORD *)(v10 + 1224);
      a3[118] = *(_QWORD *)(v10 + 1232);
      a3[119] = *(_QWORD *)(v10 + 1240);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x9003 )
    {
      a3[120] = *(_QWORD *)(v10 + 1248);
      a3[121] = *(_QWORD *)(v10 + 1256);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x9005 )
    {
      a3[122] = *(_QWORD *)(v10 + 1264);
      a3[123] = *(_QWORD *)(v10 + 1272);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x9006 )
    {
      a3[97] = *(_QWORD *)(v10 + 1280);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0xA001 )
    {
      a3[124] = *(_QWORD *)(v10 + 1288);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0xA002 )
    {
      a3[125] = *(_QWORD *)(v10 + 1296);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0xA005 )
    {
      a3[126] = *(_QWORD *)(v10 + 1304);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0xA009 )
    {
      a3[127] = *(_QWORD *)(v10 + 1320);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0xB002 )
    {
      a3[128] = *(_QWORD *)(v10 + 1328);
      a3[129] = *(_QWORD *)(v10 + 1336);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0xB003 )
    {
      a3[130] = *(_QWORD *)(v10 + 1344);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0xB004 )
      a3[131] = *(_QWORD *)(v10 + 1352);
  }
  *(_BYTE *)a2 = 0;
  if ( *(_BYTE *)(v8 + 2693) )
  {
    *(_DWORD *)(a2 + 8) = 7471218;
    *(_QWORD *)(a2 + 16) = L"d3d10warp.dll";
    *(_QWORD *)(a2 + 32) = L"d3d10warp.dll";
    *(_QWORD *)(a2 + 120) = L"d3d10warp.dll";
    *(_QWORD *)(a2 + 136) = L"d3d10warp.dll";
    *(_DWORD *)(a2 + 24) = 7471218;
    *(_DWORD *)(a2 + 112) = 1966110;
    *(_DWORD *)(a2 + 128) = 1966110;
LABEL_101:
    LODWORD(v37) = 0;
    *(_QWORD *)(a2 + 96) = *(_QWORD *)(v8 + 4888);
    *(_QWORD *)(a2 + 104) = v8 + 2744;
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(v8 + 2684);
    *(_DWORD *)(a2 + 44) = *(_DWORD *)(v8 + 3480);
    *(_QWORD *)(a2 + 176) = *(_QWORD *)(v8 + 4896);
    *(_QWORD *)(a2 + 184) = *(_QWORD *)(v8 + 4904);
    *(_DWORD *)(a2 + 192) = *(_DWORD *)(v8 + 4912);
    *(_DWORD *)(a2 + 232) = *(unsigned __int16 *)(v8 + 4754);
    *a4 = *(_OWORD *)(v8 + 1000);
    a4[1] = *(_OWORD *)(v8 + 1016);
    a4[2] = *(_OWORD *)(v8 + 1032);
    a4[3] = *(_OWORD *)(v8 + 1048);
    a4[4] = *(_OWORD *)(v8 + 1064);
    a4[5] = *(_OWORD *)(v8 + 1080);
    a4[6] = *(_OWORD *)(v8 + 1096);
    goto LABEL_102;
  }
  if ( *(_BYTE *)(v8 + 2695) )
  {
    *(_DWORD *)(a2 + 8) = 8388736;
    *(_QWORD *)(a2 + 16) = L"DX9NotSupported.dll";
    *(_QWORD *)(a2 + 32) = L"DX9NotSupported.dll";
    *(_DWORD *)(a2 + 24) = 8388736;
    goto LABEL_101;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v8 + 40) + 133LL) || *(_BYTE *)(v8 + 481) )
    goto LABEL_101;
  *(_BYTE *)a2 = 1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v33 = DpiOpenPnpRegistryKey(a1, 2u, 0x20019u, &v72);
  v37 = v33;
  if ( v33 < 0 )
  {
    v58 = WdLogNewEntry5_WdError(v35, v34, v36);
    *(_QWORD *)(v58 + 24) = v37;
    WdLogEvent5_WdError(v58);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverName");
    v38 = DxgkRetrieveStringFromRegistry(v72, &DestinationString);
    v37 = v38;
    if ( v38 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"UserModeDriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(v72, &DestinationString) < 0 )
      {
        v60 = WdLogNewEntry5_WdEvent(v42);
        *(_QWORD *)(v60 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v60);
      }
      memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
      KeyHandle = 0LL;
      *(_QWORD *)&v76.Length = 0LL;
      v76.Buffer = 0LL;
      RtlInitUnicodeString(&v76, L"DX9");
      ObjectAttributes.RootDirectory = v72;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v76;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"DriverName");
        if ( (int)DxgkRetrieveStringFromRegistry(KeyHandle, &DestinationString) < 0 )
        {
          v62 = WdLogNewEntry5_WdEvent(v61);
          *(_QWORD *)(v62 + 24) = DxgkRetrieveStringFromRegistry;
          WdLogEvent5_WdEvent(v62);
        }
        RtlInitUnicodeString(&DestinationString, L"DriverNameWow");
        if ( (int)DxgkRetrieveStringFromRegistry(KeyHandle, &DestinationString) < 0 )
        {
          v64 = WdLogNewEntry5_WdEvent(v63);
          *(_QWORD *)(v64 + 24) = DxgkRetrieveStringFromRegistry;
          WdLogEvent5_WdEvent(v64);
        }
        ZwClose(KeyHandle);
      }
      RtlInitUnicodeString(&DestinationString, L"UserModeDListDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(v72, &DestinationString) < 0 )
      {
        v44 = WdLogNewEntry5_WdEvent(v43);
        *(_QWORD *)(v44 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v44);
      }
      RtlInitUnicodeString(&DestinationString, L"UserModeDListDriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(v72, &DestinationString) < 0 )
      {
        v46 = WdLogNewEntry5_WdEvent(v45);
        *(_QWORD *)(v46 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v46);
      }
      RtlInitUnicodeString(&DestinationString, L"ContentProtectionDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(v72, &DestinationString) < 0 )
      {
        v48 = WdLogNewEntry5_WdEvent(v47);
        *(_QWORD *)(v48 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v48);
      }
      RtlInitUnicodeString(&DestinationString, L"MiracastCompanionDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(v72, &DestinationString) < 0 )
      {
        v50 = WdLogNewEntry5_WdEvent(v49);
        *(_QWORD *)(v50 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v50);
      }
      v51 = WdLogNewEntry5_WdEvent(v49);
      *(_QWORD *)(v51 + 24) = DxgkRetrieveStringFromRegistry;
      WdLogEvent5_WdEvent(v51);
      RtlInitUnicodeString(&DestinationString, L"OpenGLDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(v72, &DestinationString) < 0 )
      {
        v65 = WdLogNewEntry5_WdEvent(v52);
        *(_QWORD *)(v65 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v65);
      }
      RtlInitUnicodeString(&DestinationString, L"OpenGLDriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(v72, &DestinationString) < 0 )
      {
        v66 = WdLogNewEntry5_WdEvent(v53);
        *(_QWORD *)(v66 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v66);
      }
      if ( *(_WORD *)(a2 + 48) && **(_WORD **)(a2 + 56) == 35 )
      {
        Handle = 0LL;
        DxgkFreeUnicodeString(a2 + 48);
        DxgkFreeUnicodeString(a2 + 72);
        RtlInitUnicodeString(&v76, L"OpenGL");
        ObjectAttributes.RootDirectory = v72;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v76;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"DriverName");
          if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
          {
            v68 = WdLogNewEntry5_WdEvent(v67);
            *(_QWORD *)(v68 + 24) = DxgkRetrieveStringFromRegistry;
            WdLogEvent5_WdEvent(v68);
          }
          RtlInitUnicodeString(&DestinationString, L"DriverNameWow");
          if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
          {
            v70 = WdLogNewEntry5_WdEvent(v69);
            *(_QWORD *)(v70 + 24) = DxgkRetrieveStringFromRegistry;
            WdLogEvent5_WdEvent(v70);
          }
        }
      }
      else
      {
        v9 = 0;
        Handle = 0LL;
      }
      if ( *(_QWORD *)(a2 + 56) )
      {
        v78[5] = 0LL;
        LODWORD(v78[1]) = 288;
        LODWORD(v78[4]) = 0x4000000;
        v78[2] = L"OpenGLVersion";
        LODWORD(v78[6]) = 0;
        v78[3] = a2 + 64;
        LODWORD(v78[8]) = 288;
        v78[9] = L"OpenGLFlags";
        v78[10] = a2 + 68;
        v78[16] = L"OpenGLVersionWow";
        v78[17] = a2 + 88;
        v78[23] = L"OpenGLFlagsWow";
        v78[24] = a2 + 92;
        LODWORD(v78[11]) = 0x4000000;
        v78[12] = 0LL;
        LODWORD(v78[13]) = 0;
        LODWORD(v78[15]) = 288;
        LODWORD(v78[18]) = 0x4000000;
        v78[19] = 0LL;
        LODWORD(v78[20]) = 0;
        LODWORD(v78[22]) = 288;
        LODWORD(v78[25]) = 0x4000000;
        v78[26] = 0LL;
        LODWORD(v78[27]) = 0;
        if ( v9 )
        {
          v54 = Handle;
          v55 = 0x40000000LL;
        }
        else
        {
          v54 = *(HANDLE *)(v8 + 536);
          v55 = 0LL;
        }
        if ( (int)RtlQueryRegistryValuesEx(v55, v54, v78, 0LL, 0LL) < 0 )
        {
          v71 = WdLogNewEntry5_WdEvent(v56);
          *(_QWORD *)(v71 + 24) = RtlQueryRegistryValuesEx;
          WdLogEvent5_WdEvent(v71);
        }
      }
      ZwClose(Handle);
      ZwClose(v72);
      goto LABEL_101;
    }
    v59 = WdLogNewEntry5_WdError(v40, v39, v41);
    *(_QWORD *)(v59 + 24) = v37;
    WdLogEvent5_WdError(v59);
    ZwClose(v72);
  }
LABEL_102:
  if ( (int)v37 < 0 )
  {
    DpiFreeAdapterInfo(a2);
    *(_QWORD *)(a2 + 96) = 0LL;
    *(_QWORD *)(a2 + 176) = 0LL;
  }
  return (unsigned int)v37;
}
