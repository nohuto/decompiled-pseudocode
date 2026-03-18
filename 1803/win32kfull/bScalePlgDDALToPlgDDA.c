/*
 * XREFs of bScalePlgDDALToPlgDDA @ 0x1C02A7874
 * Callers:
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02A6578 (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall bScalePlgDDALToPlgDDA(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rcx
  signed __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  signed __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  signed __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  signed __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  signed __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  signed __int64 v26; // rcx
  CCHAR MostSignificantBit; // al
  __int64 v28; // rax
  __int64 v29; // rcx
  signed __int64 v30; // rcx
  CCHAR v31; // al
  __int64 v32; // rax
  __int64 v33; // rcx
  signed __int64 v34; // rcx
  CCHAR v35; // al
  __int64 v36; // rax
  __int64 v37; // rcx
  signed __int64 v38; // rcx
  CCHAR v39; // al
  __int64 v40; // rax
  __int64 v41; // rcx
  signed __int64 v42; // rcx
  CCHAR v43; // al
  __int64 v44; // rax
  __int64 v45; // rcx
  signed __int64 v46; // rcx
  CCHAR v47; // al
  __int64 v48; // rax
  __int64 v49; // rcx
  signed __int64 v50; // rcx
  CCHAR v51; // al
  __int64 v52; // rax
  __int64 v53; // rcx
  signed __int64 v54; // rcx
  CCHAR v55; // al
  __int64 v56; // rax
  __int64 v57; // rcx
  signed __int64 v58; // rcx
  CCHAR v59; // al
  __int64 v60; // rax
  __int64 v61; // rcx
  signed __int64 v62; // rcx
  CCHAR v63; // al
  __int64 v64; // rax
  __int64 v65; // rcx
  signed __int64 v66; // rcx
  CCHAR v67; // al
  __int64 v68; // rax
  __int64 v69; // rcx
  signed __int64 v70; // rcx
  CCHAR v71; // al
  __int64 v72; // rax
  __int64 v73; // rcx
  signed __int64 v74; // rcx
  CCHAR v75; // al
  __int64 v76; // rax
  __int64 v77; // rcx
  signed __int64 v78; // rcx
  CCHAR v79; // al
  __int64 v80; // rax
  __int64 v81; // rcx
  signed __int64 v82; // rcx
  CCHAR v83; // al
  __int64 v84; // rax
  __int64 v85; // rcx
  signed __int64 v86; // rcx
  CCHAR v87; // al
  __int64 v88; // rax
  __int64 v89; // rcx
  signed __int64 v90; // rcx
  CCHAR v91; // al
  __int64 v92; // rax
  __int64 v93; // rcx
  signed __int64 v94; // rcx
  CCHAR v95; // al
  __int64 v96; // rax
  __int64 v97; // rcx
  signed __int64 v98; // rcx
  CCHAR v99; // al
  __int64 v100; // rax
  __int64 v101; // rcx
  signed __int64 v102; // rcx
  CCHAR v103; // al
  __int64 v104; // rax
  __int64 v105; // rcx
  signed __int64 v106; // rcx
  CCHAR v107; // al
  __int64 v108; // rax
  __int64 v109; // rcx
  signed __int64 v110; // rcx
  CCHAR v111; // al
  __int64 v112; // rax

  memset(a2, 0, 0x18CuLL);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 280);
  if ( (unsigned __int64)(v4 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[1] = v4;
  if ( v5 <= 0x7FFFFFFF )
    LODWORD(v6) = *(_DWORD *)(a1 + 16);
  else
    v6 = *(__int64 *)(a1 + 16) >> (RtlFindMostSignificantBit(v5) - 30);
  a2[2] = v6;
  v7 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int64)(v7 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[3] = v7;
  if ( v5 <= 0x7FFFFFFF )
    LODWORD(v8) = *(_DWORD *)(a1 + 32);
  else
    v8 = *(__int64 *)(a1 + 32) >> (RtlFindMostSignificantBit(v5) - 30);
  a2[4] = v8;
  v9 = *(_QWORD *)(a1 + 40);
  if ( (unsigned __int64)(v9 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[5] = v9;
  if ( v5 <= 0x7FFFFFFF )
    LODWORD(v10) = *(_DWORD *)(a1 + 48);
  else
    v10 = *(__int64 *)(a1 + 48) >> (RtlFindMostSignificantBit(v5) - 30);
  a2[6] = v10;
  v11 = *(_QWORD *)(a1 + 56);
  if ( (unsigned __int64)(v11 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[7] = v11;
  if ( v5 <= 0x7FFFFFFF )
    LODWORD(v12) = *(_DWORD *)(a1 + 64);
  else
    v12 = *(__int64 *)(a1 + 64) >> (RtlFindMostSignificantBit(v5) - 30);
  a2[8] = v12;
  v13 = *(_QWORD *)(a1 + 72);
  if ( (unsigned __int64)(v13 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[9] = v13;
  v14 = *(_QWORD *)(a1 + 664);
  if ( v14 <= 0x7FFFFFFF )
    LODWORD(v15) = *(_DWORD *)(a1 + 80);
  else
    v15 = *(__int64 *)(a1 + 80) >> (RtlFindMostSignificantBit(v14) - 30);
  a2[10] = v15;
  v16 = *(_QWORD *)(a1 + 88);
  if ( (unsigned __int64)(v16 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[11] = v16;
  v17 = *(_QWORD *)(a1 + 688);
  if ( v17 <= 0x7FFFFFFF )
    LODWORD(v18) = *(_DWORD *)(a1 + 96);
  else
    v18 = *(__int64 *)(a1 + 96) >> (RtlFindMostSignificantBit(v17) - 30);
  a2[12] = v18;
  v19 = *(_QWORD *)(a1 + 104);
  if ( (unsigned __int64)(v19 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[13] = v19;
  v20 = *(_QWORD *)(a1 + 688);
  if ( v20 <= 0x7FFFFFFF )
    LODWORD(v21) = *(_DWORD *)(a1 + 112);
  else
    v21 = *(__int64 *)(a1 + 112) >> (RtlFindMostSignificantBit(v20) - 30);
  a2[14] = v21;
  v22 = *(_QWORD *)(a1 + 120);
  if ( (unsigned __int64)(v22 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[15] = v22;
  v23 = *(_QWORD *)(a1 + 664);
  if ( v23 <= 0x7FFFFFFF )
    LODWORD(v24) = *(_DWORD *)(a1 + 128);
  else
    v24 = *(__int64 *)(a1 + 128) >> (RtlFindMostSignificantBit(v23) - 30);
  a2[16] = v24;
  v25 = *(_QWORD *)(a1 + 264);
  if ( (unsigned __int64)(v25 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[33] = v25;
  v26 = *(_QWORD *)(a1 + 280);
  if ( v26 <= 0x7FFFFFFF )
  {
    a2[34] = *(_DWORD *)(a1 + 272);
    LODWORD(v28) = *(_DWORD *)(a1 + 280);
  }
  else
  {
    MostSignificantBit = RtlFindMostSignificantBit(v26);
    a2[34] = *(__int64 *)(a1 + 272) >> (MostSignificantBit - 30);
    v28 = *(__int64 *)(a1 + 280) >> (MostSignificantBit - 30);
  }
  a2[35] = v28;
  v29 = *(_QWORD *)(a1 + 288);
  if ( (unsigned __int64)(v29 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[36] = v29;
  v30 = *(_QWORD *)(a1 + 304);
  if ( v30 <= 0x7FFFFFFF )
  {
    a2[37] = *(_DWORD *)(a1 + 296);
    LODWORD(v32) = *(_DWORD *)(a1 + 304);
  }
  else
  {
    v31 = RtlFindMostSignificantBit(v30);
    a2[37] = *(__int64 *)(a1 + 296) >> (v31 - 30);
    v32 = *(__int64 *)(a1 + 304) >> (v31 - 30);
  }
  a2[38] = v32;
  v33 = *(_QWORD *)(a1 + 312);
  if ( (unsigned __int64)(v33 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[39] = v33;
  v34 = *(_QWORD *)(a1 + 328);
  if ( v34 <= 0x7FFFFFFF )
  {
    a2[40] = *(_DWORD *)(a1 + 320);
    LODWORD(v36) = *(_DWORD *)(a1 + 328);
  }
  else
  {
    v35 = RtlFindMostSignificantBit(v34);
    a2[40] = *(__int64 *)(a1 + 320) >> (v35 - 30);
    v36 = *(__int64 *)(a1 + 328) >> (v35 - 30);
  }
  a2[41] = v36;
  v37 = *(_QWORD *)(a1 + 336);
  if ( (unsigned __int64)(v37 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[42] = v37;
  v38 = *(_QWORD *)(a1 + 352);
  if ( v38 <= 0x7FFFFFFF )
  {
    a2[43] = *(_DWORD *)(a1 + 344);
    LODWORD(v40) = *(_DWORD *)(a1 + 352);
  }
  else
  {
    v39 = RtlFindMostSignificantBit(v38);
    a2[43] = *(__int64 *)(a1 + 344) >> (v39 - 30);
    v40 = *(__int64 *)(a1 + 352) >> (v39 - 30);
  }
  a2[44] = v40;
  v41 = *(_QWORD *)(a1 + 360);
  if ( (unsigned __int64)(v41 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[45] = v41;
  v42 = *(_QWORD *)(a1 + 376);
  if ( v42 <= 0x7FFFFFFF )
  {
    a2[46] = *(_DWORD *)(a1 + 368);
    LODWORD(v44) = *(_DWORD *)(a1 + 376);
  }
  else
  {
    v43 = RtlFindMostSignificantBit(v42);
    a2[46] = *(__int64 *)(a1 + 368) >> (v43 - 30);
    v44 = *(__int64 *)(a1 + 376) >> (v43 - 30);
  }
  a2[47] = v44;
  v45 = *(_QWORD *)(a1 + 384);
  if ( (unsigned __int64)(v45 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[48] = v45;
  v46 = *(_QWORD *)(a1 + 400);
  if ( v46 <= 0x7FFFFFFF )
  {
    a2[49] = *(_DWORD *)(a1 + 392);
    LODWORD(v48) = *(_DWORD *)(a1 + 400);
  }
  else
  {
    v47 = RtlFindMostSignificantBit(v46);
    a2[49] = *(__int64 *)(a1 + 392) >> (v47 - 30);
    v48 = *(__int64 *)(a1 + 400) >> (v47 - 30);
  }
  a2[50] = v48;
  v49 = *(_QWORD *)(a1 + 408);
  if ( (unsigned __int64)(v49 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[51] = v49;
  v50 = *(_QWORD *)(a1 + 424);
  if ( v50 <= 0x7FFFFFFF )
  {
    a2[52] = *(_DWORD *)(a1 + 416);
    LODWORD(v52) = *(_DWORD *)(a1 + 424);
  }
  else
  {
    v51 = RtlFindMostSignificantBit(v50);
    a2[52] = *(__int64 *)(a1 + 416) >> (v51 - 30);
    v52 = *(__int64 *)(a1 + 424) >> (v51 - 30);
  }
  a2[53] = v52;
  v53 = *(_QWORD *)(a1 + 432);
  if ( (unsigned __int64)(v53 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[54] = v53;
  v54 = *(_QWORD *)(a1 + 448);
  if ( v54 <= 0x7FFFFFFF )
  {
    a2[55] = *(_DWORD *)(a1 + 440);
    LODWORD(v56) = *(_DWORD *)(a1 + 448);
  }
  else
  {
    v55 = RtlFindMostSignificantBit(v54);
    a2[55] = *(__int64 *)(a1 + 440) >> (v55 - 30);
    v56 = *(__int64 *)(a1 + 448) >> (v55 - 30);
  }
  a2[56] = v56;
  v57 = *(_QWORD *)(a1 + 456);
  if ( (unsigned __int64)(v57 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[57] = v57;
  v58 = *(_QWORD *)(a1 + 472);
  if ( v58 <= 0x7FFFFFFF )
  {
    a2[58] = *(_DWORD *)(a1 + 464);
    LODWORD(v60) = *(_DWORD *)(a1 + 472);
  }
  else
  {
    v59 = RtlFindMostSignificantBit(v58);
    a2[58] = *(__int64 *)(a1 + 464) >> (v59 - 30);
    v60 = *(__int64 *)(a1 + 472) >> (v59 - 30);
  }
  a2[59] = v60;
  v61 = *(_QWORD *)(a1 + 480);
  if ( (unsigned __int64)(v61 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[60] = v61;
  v62 = *(_QWORD *)(a1 + 496);
  if ( v62 <= 0x7FFFFFFF )
  {
    a2[61] = *(_DWORD *)(a1 + 488);
    LODWORD(v64) = *(_DWORD *)(a1 + 496);
  }
  else
  {
    v63 = RtlFindMostSignificantBit(v62);
    a2[61] = *(__int64 *)(a1 + 488) >> (v63 - 30);
    v64 = *(__int64 *)(a1 + 496) >> (v63 - 30);
  }
  a2[62] = v64;
  v65 = *(_QWORD *)(a1 + 504);
  if ( (unsigned __int64)(v65 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[63] = v65;
  v66 = *(_QWORD *)(a1 + 520);
  if ( v66 <= 0x7FFFFFFF )
  {
    a2[64] = *(_DWORD *)(a1 + 512);
    LODWORD(v68) = *(_DWORD *)(a1 + 520);
  }
  else
  {
    v67 = RtlFindMostSignificantBit(v66);
    a2[64] = *(__int64 *)(a1 + 512) >> (v67 - 30);
    v68 = *(__int64 *)(a1 + 520) >> (v67 - 30);
  }
  a2[65] = v68;
  v69 = *(_QWORD *)(a1 + 528);
  if ( (unsigned __int64)(v69 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[66] = v69;
  v70 = *(_QWORD *)(a1 + 544);
  if ( v70 <= 0x7FFFFFFF )
  {
    a2[67] = *(_DWORD *)(a1 + 536);
    LODWORD(v72) = *(_DWORD *)(a1 + 544);
  }
  else
  {
    v71 = RtlFindMostSignificantBit(v70);
    a2[67] = *(__int64 *)(a1 + 536) >> (v71 - 30);
    v72 = *(__int64 *)(a1 + 544) >> (v71 - 30);
  }
  a2[68] = v72;
  v73 = *(_QWORD *)(a1 + 552);
  if ( (unsigned __int64)(v73 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[69] = v73;
  v74 = *(_QWORD *)(a1 + 568);
  if ( v74 <= 0x7FFFFFFF )
  {
    a2[70] = *(_DWORD *)(a1 + 560);
    LODWORD(v76) = *(_DWORD *)(a1 + 568);
  }
  else
  {
    v75 = RtlFindMostSignificantBit(v74);
    a2[70] = *(__int64 *)(a1 + 560) >> (v75 - 30);
    v76 = *(__int64 *)(a1 + 568) >> (v75 - 30);
  }
  a2[71] = v76;
  v77 = *(_QWORD *)(a1 + 576);
  if ( (unsigned __int64)(v77 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[72] = v77;
  v78 = *(_QWORD *)(a1 + 592);
  if ( v78 <= 0x7FFFFFFF )
  {
    a2[73] = *(_DWORD *)(a1 + 584);
    LODWORD(v80) = *(_DWORD *)(a1 + 592);
  }
  else
  {
    v79 = RtlFindMostSignificantBit(v78);
    a2[73] = *(__int64 *)(a1 + 584) >> (v79 - 30);
    v80 = *(__int64 *)(a1 + 592) >> (v79 - 30);
  }
  a2[74] = v80;
  v81 = *(_QWORD *)(a1 + 600);
  if ( (unsigned __int64)(v81 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[75] = v81;
  v82 = *(_QWORD *)(a1 + 616);
  if ( v82 <= 0x7FFFFFFF )
  {
    a2[76] = *(_DWORD *)(a1 + 608);
    LODWORD(v84) = *(_DWORD *)(a1 + 616);
  }
  else
  {
    v83 = RtlFindMostSignificantBit(v82);
    a2[76] = *(__int64 *)(a1 + 608) >> (v83 - 30);
    v84 = *(__int64 *)(a1 + 616) >> (v83 - 30);
  }
  a2[77] = v84;
  v85 = *(_QWORD *)(a1 + 624);
  if ( (unsigned __int64)(v85 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[78] = v85;
  v86 = *(_QWORD *)(a1 + 640);
  if ( v86 <= 0x7FFFFFFF )
  {
    a2[79] = *(_DWORD *)(a1 + 632);
    LODWORD(v88) = *(_DWORD *)(a1 + 640);
  }
  else
  {
    v87 = RtlFindMostSignificantBit(v86);
    a2[79] = *(__int64 *)(a1 + 632) >> (v87 - 30);
    v88 = *(__int64 *)(a1 + 640) >> (v87 - 30);
  }
  a2[80] = v88;
  v89 = *(_QWORD *)(a1 + 648);
  if ( (unsigned __int64)(v89 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[81] = v89;
  v90 = *(_QWORD *)(a1 + 664);
  if ( v90 <= 0x7FFFFFFF )
  {
    a2[82] = *(_DWORD *)(a1 + 656);
    LODWORD(v92) = *(_DWORD *)(a1 + 664);
  }
  else
  {
    v91 = RtlFindMostSignificantBit(v90);
    a2[82] = *(__int64 *)(a1 + 656) >> (v91 - 30);
    v92 = *(__int64 *)(a1 + 664) >> (v91 - 30);
  }
  a2[83] = v92;
  v93 = *(_QWORD *)(a1 + 672);
  if ( (unsigned __int64)(v93 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[84] = v93;
  v94 = *(_QWORD *)(a1 + 688);
  if ( v94 <= 0x7FFFFFFF )
  {
    a2[85] = *(_DWORD *)(a1 + 680);
    LODWORD(v96) = *(_DWORD *)(a1 + 688);
  }
  else
  {
    v95 = RtlFindMostSignificantBit(v94);
    a2[85] = *(__int64 *)(a1 + 680) >> (v95 - 30);
    v96 = *(__int64 *)(a1 + 688) >> (v95 - 30);
  }
  a2[86] = v96;
  v97 = *(_QWORD *)(a1 + 696);
  if ( (unsigned __int64)(v97 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[87] = v97;
  v98 = *(_QWORD *)(a1 + 712);
  if ( v98 <= 0x7FFFFFFF )
  {
    a2[88] = *(_DWORD *)(a1 + 704);
    LODWORD(v100) = *(_DWORD *)(a1 + 712);
  }
  else
  {
    v99 = RtlFindMostSignificantBit(v98);
    a2[88] = *(__int64 *)(a1 + 704) >> (v99 - 30);
    v100 = *(__int64 *)(a1 + 712) >> (v99 - 30);
  }
  a2[89] = v100;
  v101 = *(_QWORD *)(a1 + 720);
  if ( (unsigned __int64)(v101 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[90] = v101;
  v102 = *(_QWORD *)(a1 + 736);
  if ( v102 <= 0x7FFFFFFF )
  {
    a2[91] = *(_DWORD *)(a1 + 728);
    LODWORD(v104) = *(_DWORD *)(a1 + 736);
  }
  else
  {
    v103 = RtlFindMostSignificantBit(v102);
    a2[91] = *(__int64 *)(a1 + 728) >> (v103 - 30);
    v104 = *(__int64 *)(a1 + 736) >> (v103 - 30);
  }
  a2[92] = v104;
  v105 = *(_QWORD *)(a1 + 744);
  if ( (unsigned __int64)(v105 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[93] = v105;
  v106 = *(_QWORD *)(a1 + 760);
  if ( v106 <= 0x7FFFFFFF )
  {
    a2[94] = *(_DWORD *)(a1 + 752);
    LODWORD(v108) = *(_DWORD *)(a1 + 760);
  }
  else
  {
    v107 = RtlFindMostSignificantBit(v106);
    a2[94] = *(__int64 *)(a1 + 752) >> (v107 - 30);
    v108 = *(__int64 *)(a1 + 760) >> (v107 - 30);
  }
  a2[95] = v108;
  v109 = *(_QWORD *)(a1 + 768);
  if ( (unsigned __int64)(v109 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[96] = v109;
  v110 = *(_QWORD *)(a1 + 784);
  if ( v110 <= 0x7FFFFFFF )
  {
    a2[97] = *(_DWORD *)(a1 + 776);
    LODWORD(v112) = *(_DWORD *)(a1 + 784);
  }
  else
  {
    v111 = RtlFindMostSignificantBit(v110);
    a2[97] = *(__int64 *)(a1 + 776) >> (v111 - 30);
    v112 = *(__int64 *)(a1 + 784) >> (v111 - 30);
  }
  a2[98] = v112;
  return 1LL;
}
