/*
 * XREFs of SymCryptSha256AppendBlocks_ul1 @ 0x1401AF9B4
 * Callers:
 *     SymCryptSha256AppendBlocks @ 0x1401AF590 (SymCryptSha256AppendBlocks.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptSha256AppendBlocks_ul1(int *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  int v4; // edi
  int v6; // ebx
  int v8; // r11d
  int v9; // r9d
  int v10; // r15d
  int v11; // esi
  int v12; // r14d
  int v13; // r8d
  unsigned int *v14; // r12
  int v15; // r8d
  int v16; // r10d
  int v17; // ecx
  int v18; // r9d
  int v19; // r8d
  int v20; // r11d
  int v21; // r14d
  unsigned __int32 v22; // r8d
  int v23; // ebx
  int v24; // esi
  int v25; // edx
  int v26; // edi
  int v27; // r15d
  int v28; // r8d
  int v29; // r10d
  int v30; // ecx
  int v31; // eax
  int v32; // r9d
  int v33; // r8d
  int v34; // r14d
  int v35; // r11d
  int v36; // r8d
  int v37; // esi
  int v38; // ebx
  int v39; // r8d
  int v40; // r15d
  int v41; // edi
  int v42; // r8d
  int v43; // r9d
  int v44; // r10d
  unsigned __int32 v45; // r8d
  unsigned __int32 v46; // r11d
  int v47; // r8d
  int v48; // ebx
  int v49; // r14d
  unsigned __int32 v50; // r8d
  unsigned __int32 v51; // edi
  int v52; // r13d
  int v53; // r8d
  int v54; // r10d
  int v55; // r9d
  int v56; // r8d
  int v57; // esi
  unsigned __int32 v58; // r11d
  int v59; // r8d
  int v60; // ebx
  int v61; // r14d
  int v62; // r15d
  int v63; // r8d
  int v64; // r13d
  unsigned __int32 v65; // r12d
  int v66; // edi
  unsigned __int32 v67; // r8d
  unsigned __int32 v68; // r9d
  int v69; // edi
  unsigned __int32 v70; // r8d
  int v71; // r10d
  unsigned __int32 v72; // edx
  unsigned __int32 v73; // r15d
  int v74; // r12d
  unsigned __int32 v75; // r13d
  int v76; // r11d
  unsigned __int32 v77; // r9d
  unsigned __int32 v78; // edi
  int v79; // ebx
  unsigned __int32 v80; // r8d
  unsigned __int32 v81; // r10d
  int v82; // esi
  unsigned __int32 v83; // r15d
  unsigned __int32 v84; // r12d
  int v85; // r14d
  unsigned __int32 v86; // r8d
  unsigned __int32 v87; // r11d
  int v88; // r15d
  unsigned __int32 v89; // edi
  unsigned __int32 v90; // ebx
  int v91; // r8d
  unsigned __int32 v92; // r10d
  unsigned __int32 v93; // esi
  int v94; // r9d
  unsigned __int32 v95; // r12d
  unsigned __int32 v96; // r14d
  unsigned __int32 v97; // r10d
  unsigned __int32 v98; // r10d
  unsigned __int32 v99; // r11d
  unsigned __int32 v100; // r15d
  int v101; // r11d
  unsigned __int32 v102; // ebx
  unsigned __int32 v103; // esi
  int v104; // eax
  unsigned __int32 v105; // r14d
  unsigned __int32 v106; // eax
  int v107; // r8d
  unsigned __int32 v108; // r15d
  bool v109; // zf
  int v111; // [rsp+0h] [rbp-100h]
  unsigned __int32 v112; // [rsp+0h] [rbp-100h]
  _DWORD *v113; // [rsp+8h] [rbp-F8h]
  int v114; // [rsp+10h] [rbp-F0h]
  unsigned __int32 v115; // [rsp+10h] [rbp-F0h]
  unsigned __int32 v116; // [rsp+20h] [rbp-E0h]
  unsigned __int32 v117; // [rsp+28h] [rbp-D8h]
  unsigned __int32 v118; // [rsp+2Ch] [rbp-D4h]
  unsigned __int32 v119; // [rsp+30h] [rbp-D0h]
  unsigned __int32 v120; // [rsp+40h] [rbp-C0h]
  unsigned __int32 v121; // [rsp+50h] [rbp-B0h]
  unsigned __int32 v122; // [rsp+54h] [rbp-ACh]
  unsigned __int32 v123; // [rsp+58h] [rbp-A8h]
  unsigned __int32 v124; // [rsp+60h] [rbp-A0h]
  unsigned __int32 v125; // [rsp+70h] [rbp-90h]
  int v126; // [rsp+80h] [rbp-80h]
  int v127; // [rsp+80h] [rbp-80h]
  int v128; // [rsp+90h] [rbp-70h]
  unsigned __int32 v129; // [rsp+A0h] [rbp-60h]
  unsigned __int32 v130; // [rsp+B0h] [rbp-50h]
  unsigned __int32 v131; // [rsp+C0h] [rbp-40h]
  unsigned __int32 v132; // [rsp+D0h] [rbp-30h]
  unsigned __int32 v133; // [rsp+E0h] [rbp-20h]
  int v134; // [rsp+E4h] [rbp-1Ch]
  int v135; // [rsp+E8h] [rbp-18h]
  int v136; // [rsp+ECh] [rbp-14h]
  int v137; // [rsp+F0h] [rbp-10h]
  int v138; // [rsp+F4h] [rbp-Ch]
  int v139; // [rsp+F8h] [rbp-8h]
  int v140; // [rsp+FCh] [rbp-4h]
  unsigned __int32 v141; // [rsp+100h] [rbp+0h]
  int v142; // [rsp+104h] [rbp+4h]
  __int64 v143; // [rsp+110h] [rbp+10h]
  unsigned __int64 v144; // [rsp+118h] [rbp+18h]
  unsigned __int64 v146; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v147; // [rsp+130h] [rbp+30h]

  v4 = *a1;
  v6 = a1[1];
  v8 = a1[2];
  v9 = a1[3];
  v10 = a1[4];
  v11 = a1[5];
  v12 = a1[6];
  v13 = a1[7];
  v147 = a4;
  if ( a3 >= 0x40 )
  {
    v142 = *a1;
    v14 = (unsigned int *)(a2 + 8);
    v144 = a3 >> 6;
    v134 = a1[1];
    v135 = a1[2];
    v146 = -64LL * (a3 >> 6) + a3;
    v136 = a1[3];
    v137 = a1[4];
    v138 = a1[5];
    v139 = a1[6];
    v140 = a1[7];
    v143 = a2 + 8;
    do
    {
      v125 = _byteswap_ulong(*(v14 - 2));
      v15 = v125
          + 1116352408
          + (__ROR4__(v10, 11) ^ __ROR4__(v10, 25) ^ __ROR4__(v10, 6))
          + (v12 ^ v10 & (v12 ^ v11))
          + v13;
      v16 = v9 + v15;
      v17 = (v9 + v15) & (v10 ^ v11);
      v18 = v15 + (__ROR4__(v4, 2) ^ __ROR4__(v4, 13) ^ __ROR4__(v4, 22)) + (v6 & v8 | v4 & (v6 | v8));
      v117 = _byteswap_ulong(*(v14 - 1));
      v19 = v117 + (__ROR4__(v16, 11) ^ __ROR4__(v16, 25) ^ __ROR4__(v16, 6)) + (v11 ^ v17) + v12 + 1899447441;
      v20 = v19 + v8;
      v21 = v19 + (__ROR4__(v18, 2) ^ __ROR4__(v18, 13) ^ __ROR4__(v18, 22)) + (v4 & v6 | v18 & (v4 | v6));
      v129 = _byteswap_ulong(*v14);
      v22 = v11
          - 1245643825
          + (__ROR4__(v20, 11) ^ __ROR4__(v20, 25) ^ __ROR4__(v20, 6))
          + (v10 ^ v20 & (v16 ^ v10))
          + v129;
      v23 = v22 + v6;
      v24 = v22 + (__ROR4__(v21, 2) ^ __ROR4__(v21, 13) ^ __ROR4__(v21, 22)) + (v18 & v4 | v21 & (v18 | v4));
      v131 = _byteswap_ulong(v14[1]);
      v25 = v10
          + (__ROR4__(v23, 11) ^ __ROR4__(v23, 25) ^ __ROR4__(v23, 6))
          + (v16 ^ v23 & (v16 ^ v20))
          + v131
          - 373957723;
      v26 = v25 + v4;
      v132 = _byteswap_ulong(v14[2]);
      v27 = v25 + (__ROR4__(v24, 2) ^ __ROR4__(v24, 13) ^ __ROR4__(v24, 22)) + (v21 & v18 | v24 & (v21 | v18));
      v28 = v132
          + (__ROR4__(v26, 11) ^ __ROR4__(v26, 25) ^ __ROR4__(v26, 6))
          + (v20 ^ v26 & (v20 ^ v23))
          + v16
          + 961987163;
      v29 = v18 + v28;
      v30 = v23 ^ (v18 + v28) & (v26 ^ v23);
      v31 = __ROR4__(v18 + v28, 11);
      v32 = (__ROR4__(v27, 2) ^ __ROR4__(v27, 13) ^ __ROR4__(v27, 22)) + v28 + (v21 & v24 | v27 & (v21 | v24));
      v133 = _byteswap_ulong(v14[3]);
      v33 = v20 + 1508970993 + v30 + (__ROR4__(v29, 6) ^ v31 ^ __ROR4__(v29, 25)) + v133;
      v34 = v33 + v21;
      v35 = (__ROR4__(v32, 2) ^ __ROR4__(v32, 13) ^ __ROR4__(v32, 22)) + v33 + (v27 & v24 | v32 & (v27 | v24));
      v124 = _byteswap_ulong(v14[4]);
      v36 = v23
          - 1841331548
          + (v26 ^ v34 & (v29 ^ v26))
          + (__ROR4__(v34, 6) ^ __ROR4__(v34, 11) ^ __ROR4__(v34, 25))
          + v124;
      v37 = v36 + v24;
      v38 = (__ROR4__(v35, 2) ^ __ROR4__(v35, 13) ^ __ROR4__(v35, 22)) + v36 + (v32 & v27 | v35 & (v32 | v27));
      v141 = _byteswap_ulong(v14[5]);
      v39 = v26
          - 1424204075
          + (v29 ^ v37 & (v34 ^ v29))
          + (__ROR4__(v37, 6) ^ __ROR4__(v37, 11) ^ __ROR4__(v37, 25))
          + v141;
      v40 = v39 + v27;
      v41 = (__ROR4__(v38, 2) ^ __ROR4__(v38, 13) ^ __ROR4__(v38, 22)) + v39 + (v35 & v32 | v38 & (v35 | v32));
      v130 = _byteswap_ulong(v14[6]);
      v42 = v29
          - 670586216
          + (v34 ^ v40 & (v34 ^ v37))
          + (__ROR4__(v40, 6) ^ __ROR4__(v40, 11) ^ __ROR4__(v40, 25))
          + v130;
      v43 = v42 + v32;
      v44 = (__ROR4__(v41, 2) ^ __ROR4__(v41, 13) ^ __ROR4__(v41, 22)) + v42 + (v38 & v35 | v41 & (v38 | v35));
      v118 = _byteswap_ulong(v14[7]);
      v45 = v34
          + (v37 ^ v43 & (v40 ^ v37))
          + 310598401
          + (__ROR4__(v43, 6) ^ __ROR4__(v43, 11) ^ __ROR4__(v43, 25))
          + v118;
      v46 = v45 + v35;
      v126 = (__ROR4__(v44, 2) ^ __ROR4__(v44, 13) ^ __ROR4__(v44, 22)) + v45 + (v44 & (v41 | v38) | v41 & v38);
      v116 = _byteswap_ulong(v14[8]);
      v47 = v37
          + 607225278
          + (v40 ^ v46 & (v43 ^ v40))
          + (__ROR4__(v46, 6) ^ __ROR4__(v46, 11) ^ __ROR4__(v46, 25))
          + v116;
      v48 = v47 + v38;
      v49 = (__ROR4__(v126, 2) ^ __ROR4__(v126, 13) ^ __ROR4__(v126, 22)) + v47 + (v44 & v41 | v126 & (v44 | v41));
      v119 = _byteswap_ulong(v14[9]);
      v50 = v40
          + (v43 ^ v48 & (v46 ^ v43))
          + 1426881987
          + (__ROR4__(v48, 6) ^ __ROR4__(v48, 11) ^ __ROR4__(v48, 25))
          + v119;
      v51 = v50 + v41;
      v52 = (__ROR4__(v49, 2) ^ __ROR4__(v49, 13) ^ __ROR4__(v49, 22)) + v50 + (v126 & v44 | v49 & (v126 | v44));
      v120 = _byteswap_ulong(v14[10]);
      v53 = v43
          + 1925078388
          + (v46 ^ v51 & (v48 ^ v46))
          + (__ROR4__(v51, 6) ^ __ROR4__(v51, 11) ^ __ROR4__(v51, 25))
          + v120;
      v54 = v53 + v44;
      v55 = (__ROR4__(v52, 2) ^ __ROR4__(v52, 13) ^ __ROR4__(v52, 22)) + v53 + (v126 & v49 | v52 & (v126 | v49));
      v121 = _byteswap_ulong(v14[11]);
      v56 = v46
          - 2132889090
          + (v48 ^ v54 & (v51 ^ v48))
          + (__ROR4__(v54, 6) ^ __ROR4__(v54, 11) ^ __ROR4__(v54, 25))
          + v121;
      v57 = v56 + v126;
      v58 = _byteswap_ulong(v14[12]);
      v123 = v58;
      v114 = (__ROR4__(v55, 2) ^ __ROR4__(v55, 13) ^ __ROR4__(v55, 22)) + (v52 & v49 | v55 & (v52 | v49)) + v56;
      v59 = v48
          - 1680079193
          + v58
          + (__ROR4__(v56 + v126, 11) ^ __ROR4__(v57, 25) ^ __ROR4__(v57, 6))
          + (v51 ^ v57 & (v54 ^ v51));
      v60 = v114;
      v61 = v59 + v49;
      v62 = (__ROR4__(v114, 2) ^ __ROR4__(v114, 13) ^ __ROR4__(v114, 22)) + v59 + (v55 & v52 | v114 & (v55 | v52));
      v122 = _byteswap_ulong(v14[13]);
      v63 = v51
          - 1046744716
          + (v54 ^ v61 & (v57 ^ v54))
          + (__ROR4__(v61, 6) ^ __ROR4__(v61, 11) ^ __ROR4__(v61, 25))
          + v122;
      v64 = v63 + v52;
      v65 = v118;
      v113 = (_DWORD *)&xmmword_14035B440 + 2;
      v66 = (__ROR4__(v62, 2) ^ __ROR4__(v62, 13) ^ __ROR4__(v62, 22)) + v63 + (v114 & v55 | v62 & (v114 | v55));
      v111 = v66;
      while ( 1 )
      {
        v125 += v65
              + ((v58 >> 10) ^ __ROR4__(v58, 17) ^ __ROR4__(v58, 19))
              + ((v117 >> 3) ^ __ROR4__(v117, 7) ^ __ROR4__(v117, 18));
        v67 = v125
            + v54
            + *(v113 - 2)
            + (v57 ^ v64 & (v57 ^ v61))
            + (__ROR4__(v64, 6) ^ __ROR4__(v64, 11) ^ __ROR4__(v64, 25));
        v68 = v67 + v55;
        v69 = v67 + (__ROR4__(v66, 2) ^ __ROR4__(v66, 13) ^ __ROR4__(v66, 22)) + (v62 & v60 | (v62 | v60) & v66);
        v117 += ((v122 >> 10) ^ __ROR4__(v122, 17) ^ __ROR4__(v122, 19))
              + v116
              + ((v129 >> 3) ^ __ROR4__(v129, 7) ^ __ROR4__(v129, 18));
        v70 = v117
            + v57
            + *(v113 - 1)
            + (v61 ^ v68 & (v64 ^ v61))
            + (__ROR4__(v68, 6) ^ __ROR4__(v68, 11) ^ __ROR4__(v68, 25));
        v115 = v70 + v60;
        v71 = v70 + (__ROR4__(v69, 2) ^ __ROR4__(v69, 13) ^ __ROR4__(v69, 22)) + (v111 & v62 | v69 & (v111 | v62));
        v129 += ((v125 >> 10) ^ __ROR4__(v125, 17) ^ __ROR4__(v125, 19))
              + v119
              + ((v131 >> 3) ^ __ROR4__(v131, 7) ^ __ROR4__(v131, 18));
        v72 = v129
            + *v113
            + (v64 ^ (v70 + v60) & (v68 ^ v64))
            + v61
            + (__ROR4__(v70 + v60, 6) ^ __ROR4__(v115, 11) ^ __ROR4__(v115, 25));
        v73 = v72 + v62;
        v74 = v72 + (__ROR4__(v71, 2) ^ __ROR4__(v71, 13) ^ __ROR4__(v71, 22)) + (v69 & v111 | v71 & (v69 | v111));
        v131 += ((v117 >> 10) ^ __ROR4__(v117, 17) ^ __ROR4__(v117, 19))
              + v120
              + ((v132 >> 3) ^ __ROR4__(v132, 7) ^ __ROR4__(v132, 18));
        v75 = v131
            + v113[1]
            + (v68 ^ v73 & (v68 ^ (v70 + v60)))
            + (__ROR4__(v73, 6) ^ __ROR4__(v73, 11) ^ __ROR4__(v73, 25))
            + v64;
        v112 = v75 + v111;
        v76 = (__ROR4__(v74, 2) ^ __ROR4__(v74, 13) ^ __ROR4__(v74, 22)) + v75 + (v71 & v69 | v74 & (v71 | v69));
        v132 += ((v133 >> 3) ^ __ROR4__(v133, 7) ^ __ROR4__(v133, 18))
              + v121
              + ((v129 >> 10) ^ __ROR4__(v129, 17) ^ __ROR4__(v129, 19));
        v77 = v132
            + v113[2]
            + (v115 ^ v112 & (v73 ^ v115))
            + (__ROR4__(v112, 6) ^ __ROR4__(v112, 11) ^ __ROR4__(v112, 25))
            + v68;
        v78 = v77 + v69;
        v79 = (__ROR4__(v76, 2) ^ __ROR4__(v76, 13) ^ __ROR4__(v76, 22)) + v77 + (v71 & v74 | v76 & (v71 | v74));
        v133 += ((v124 >> 3) ^ __ROR4__(v124, 7) ^ __ROR4__(v124, 18))
              + v123
              + ((v131 >> 10) ^ __ROR4__(v131, 17) ^ __ROR4__(v131, 19));
        v80 = v133
            + v113[3]
            + (v73 ^ v78 & (v112 ^ v73))
            + (__ROR4__(v78, 6) ^ __ROR4__(v78, 11) ^ __ROR4__(v78, 25))
            + v115;
        v81 = v80 + v71;
        v82 = (__ROR4__(v79, 2) ^ __ROR4__(v79, 13) ^ __ROR4__(v79, 22)) + v80 + (v76 & v74 | v79 & (v76 | v74));
        v124 += ((v132 >> 10) ^ __ROR4__(v132, 17) ^ __ROR4__(v132, 19))
              + v122
              + ((v141 >> 3) ^ __ROR4__(v141, 7) ^ __ROR4__(v141, 18));
        v83 = v124
            + v113[4]
            + (v112 ^ v81 & (v78 ^ v112))
            + (__ROR4__(v81, 6) ^ __ROR4__(v81, 11) ^ __ROR4__(v81, 25))
            + v73;
        v84 = v83 + v74;
        v85 = (__ROR4__(v82, 2) ^ __ROR4__(v82, 13) ^ __ROR4__(v82, 22)) + v83 + (v79 & v76 | v82 & (v79 | v76));
        v141 += v125
              + ((v133 >> 10) ^ __ROR4__(v133, 17) ^ __ROR4__(v133, 19))
              + ((v130 >> 3) ^ __ROR4__(v130, 7) ^ __ROR4__(v130, 18));
        v86 = v141
            + v113[5]
            + (v78 ^ v84 & (v81 ^ v78))
            + (__ROR4__(v84, 6) ^ __ROR4__(v84, 11) ^ __ROR4__(v84, 25))
            + v112;
        v87 = v86 + v76;
        v88 = (__ROR4__(v85, 2) ^ __ROR4__(v85, 13) ^ __ROR4__(v85, 22)) + v86 + (v82 & v79 | v85 & (v82 | v79));
        v130 += v117
              + ((v124 >> 10) ^ __ROR4__(v124, 17) ^ __ROR4__(v124, 19))
              + ((v118 >> 3) ^ __ROR4__(v118, 7) ^ __ROR4__(v118, 18));
        v89 = v130
            + v113[6]
            + (v81 ^ v87 & (v81 ^ v84))
            + (__ROR4__(v87, 6) ^ __ROR4__(v87, 11) ^ __ROR4__(v87, 25))
            + v78;
        v90 = v89 + v79;
        v91 = (__ROR4__(v88, 2) ^ __ROR4__(v88, 13) ^ __ROR4__(v88, 22)) + v89 + (v85 & v82 | v88 & (v85 | v82));
        v118 += v129
              + ((v141 >> 10) ^ __ROR4__(v141, 17) ^ __ROR4__(v141, 19))
              + ((v116 >> 3) ^ __ROR4__(v116, 7) ^ __ROR4__(v116, 18));
        v92 = v118
            + v113[7]
            + (v84 ^ v90 & (v87 ^ v84))
            + (__ROR4__(v90, 6) ^ __ROR4__(v90, 11) ^ __ROR4__(v90, 25))
            + v81;
        v93 = v92 + v82;
        v94 = (__ROR4__(v91, 2) ^ __ROR4__(v91, 13) ^ __ROR4__(v91, 22)) + v92 + (v88 & v85 | v91 & (v88 | v85));
        v116 += v131
              + ((v130 >> 10) ^ __ROR4__(v130, 17) ^ __ROR4__(v130, 19))
              + ((v119 >> 3) ^ __ROR4__(v119, 7) ^ __ROR4__(v119, 18));
        v95 = v116
            + v113[8]
            + (v87 ^ v93 & (v90 ^ v87))
            + (__ROR4__(v93, 6) ^ __ROR4__(v93, 11) ^ __ROR4__(v93, 25))
            + v84;
        v96 = v95 + v85;
        v97 = v95 + (v91 & v88 | v94 & (v91 | v88));
        v65 = v118;
        v98 = (__ROR4__(v94, 2) ^ __ROR4__(v94, 13) ^ __ROR4__(v94, 22)) + v97;
        v119 += v132
              + ((v118 >> 10) ^ __ROR4__(v118, 17) ^ __ROR4__(v118, 19))
              + ((v120 >> 3) ^ __ROR4__(v120, 7) ^ __ROR4__(v120, 18));
        v99 = v119
            + v113[9]
            + (v90 ^ v96 & (v93 ^ v90))
            + (__ROR4__(v96, 6) ^ __ROR4__(v96, 11) ^ __ROR4__(v96, 25))
            + v87;
        v100 = v99 + v88;
        v101 = (__ROR4__(v98, 2) ^ __ROR4__(v98, 13) ^ __ROR4__(v98, 22)) + (v94 & v91 | v98 & (v94 | v91)) + v99;
        v120 += v133
              + ((v116 >> 10) ^ __ROR4__(v116, 17) ^ __ROR4__(v116, 19))
              + ((v121 >> 3) ^ __ROR4__(v121, 7) ^ __ROR4__(v121, 18));
        v102 = v120
             + v113[10]
             + (v93 ^ v100 & (v96 ^ v93))
             + (__ROR4__(v100, 6) ^ __ROR4__(v100, 11) ^ __ROR4__(v100, 25))
             + v90;
        v128 = v102 + v91;
        v121 += v124
              + ((v119 >> 10) ^ __ROR4__(v119, 17) ^ __ROR4__(v119, 19))
              + ((v123 >> 3) ^ __ROR4__(v123, 7) ^ __ROR4__(v123, 18));
        v103 = v121
             + v113[11]
             + (v96 ^ (v102 + v91) & (v100 ^ v96))
             + (__ROR4__(v102 + v91, 6) ^ __ROR4__(v102 + v91, 11) ^ __ROR4__(v102 + v91, 25))
             + v93;
        v104 = v103 + v94;
        v55 = (v94 & v98 | v101 & (v94 | v98)) + v102 + (__ROR4__(v101, 2) ^ __ROR4__(v101, 13) ^ __ROR4__(v101, 22));
        v127 = v104;
        v60 = v103 + (__ROR4__(v55, 2) ^ __ROR4__(v55, 13) ^ __ROR4__(v55, 22)) + (v101 & v98 | v55 & (v101 | v98));
        v57 = v104;
        v123 += v141
              + ((v120 >> 10) ^ __ROR4__(v120, 17) ^ __ROR4__(v120, 19))
              + ((v122 >> 3) ^ __ROR4__(v122, 7) ^ __ROR4__(v122, 18));
        v105 = v123
             + v113[12]
             + (v100 ^ v104 & (v128 ^ v100))
             + (__ROR4__(v104, 6) ^ __ROR4__(v104, 11) ^ __ROR4__(v104, 25))
             + v96;
        v106 = v105 + (__ROR4__(v60, 2) ^ __ROR4__(v60, 13) ^ __ROR4__(v60, 22));
        v61 = v98 + v105;
        v107 = v106 + (v55 & v101 | v60 & (v55 | v101));
        v122 += v130
              + ((v125 >> 3) ^ __ROR4__(v125, 7) ^ __ROR4__(v125, 18))
              + ((v121 >> 10) ^ __ROR4__(v121, 17) ^ __ROR4__(v121, 19));
        v54 = v128;
        v108 = v122
             + v113[13]
             + (v128 ^ v61 & (v127 ^ v128))
             + (__ROR4__(v61, 6) ^ __ROR4__(v61, 11) ^ __ROR4__(v61, 25))
             + v100;
        v64 = v101 + v108;
        v58 = v123;
        v66 = v108 + (__ROR4__(v107, 2) ^ __ROR4__(v107, 13) ^ __ROR4__(v107, 22)) + (v60 & v55 | v107 & (v60 | v55));
        v111 = v66;
        v113 += 16;
        if ( (__int64)v113 >= (__int64)((_DWORD *)&_xmm + 2) )
          break;
        v62 = v107;
      }
      v4 = v142 + v66;
      v9 = v136 + v55;
      v8 = v60 + v135;
      v11 = v61 + v138;
      v6 = v107 + v134;
      v12 = v127 + v139;
      v142 = v4;
      v14 = (unsigned int *)(v143 + 64);
      v10 = v64 + v137;
      v109 = v144-- == 1;
      v134 = v6;
      *a1 = v4;
      v135 = v8;
      a1[2] = v8;
      v136 = v9;
      a1[3] = v9;
      v137 = v10;
      a1[4] = v10;
      v138 = v11;
      a1[5] = v11;
      v139 = v12;
      a1[6] = v12;
      v140 += v128;
      v13 = v140;
      a1[7] = v140;
      a1[1] = v6;
      v143 += 64LL;
    }
    while ( !v109 );
    a3 = v146;
    a4 = v147;
  }
  *a4 = a3;
  return 0LL;
}
