/*
 * XREFs of SHA256Transform @ 0x180048CBC
 * Callers:
 *     SHA256Update @ 0x180048B98 (SHA256Update.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

__int64 __fastcall SHA256Transform(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  int v7; // r11d
  int v8; // ebx
  int v9; // r15d
  int v10; // r12d
  int v11; // r13d
  int v12; // edi
  int v13; // esi
  int v14; // r9d
  __int64 v15; // r14
  int v16; // r8d
  int v17; // r12d
  __int64 v18; // r14
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r14
  int v22; // r8d
  int v23; // r15d
  int v24; // esi
  int v25; // r8d
  __int64 v26; // r14
  int v27; // r8d
  int v28; // ebx
  int v29; // edi
  int v30; // r8d
  __int64 v31; // r14
  int v32; // r8d
  int v33; // r11d
  int v34; // r13d
  int v35; // r8d
  __int64 v36; // r14
  int v37; // r8d
  __int64 v38; // r14
  int v39; // r8d
  int v40; // r8d
  __int64 v41; // r14
  int v42; // r8d
  int v43; // r8d
  __int64 result; // rax
  bool v45; // cf
  _DWORD *v46; // r14
  unsigned int v47; // edx
  int v48; // r14d
  unsigned int v49; // esi
  __int64 v50; // r9
  __int64 v51; // rbx
  unsigned int v52; // ecx
  int v53; // edx
  int v54; // r12d
  int v55; // r10d
  int v56; // ecx
  int v57; // r8d
  int v58; // eax
  __int64 v59; // r11
  unsigned int v60; // ecx
  int v61; // edx
  __int64 v62; // rbx
  int v63; // r8d
  int v64; // r15d
  int v65; // r14d
  unsigned int v66; // r8d
  unsigned int v67; // ecx
  __int64 v68; // r9
  int v69; // edx
  __int64 v70; // r11
  int v71; // edi
  int v72; // edx
  int v73; // esi
  __int64 v74; // rbx
  __int64 v75; // r9
  int v76; // r13d
  unsigned int v77; // edx
  unsigned int v78; // ecx
  int v79; // edx
  __int64 v80; // r11
  int v81; // edx
  __int64 v82; // r9
  int v83; // edx
  __int64 v84; // r9
  unsigned int v85; // r8d
  unsigned int v86; // ecx
  int v87; // edx
  __int64 v88; // r9
  int v89; // edx
  int v90; // [rsp+0h] [rbp-80h]
  int v91; // [rsp+0h] [rbp-80h]
  int v92; // [rsp+4h] [rbp-7Ch]
  int v93; // [rsp+4h] [rbp-7Ch]
  int v94; // [rsp+8h] [rbp-78h]
  int v95; // [rsp+10h] [rbp-70h]
  unsigned int v96; // [rsp+18h] [rbp-68h]
  _DWORD v98[4]; // [rsp+30h] [rbp-50h]
  _BYTE v99[48]; // [rsp+40h] [rbp-40h] BYREF

  v3 = a2 - (_QWORD)v99;
  v4 = v99;
  v5 = 2LL;
  do
  {
    *(v4 - 2) = __ROR8__(_byteswap_uint64(*(_QWORD *)((char *)v4 + v3)), 32);
    *(v4 - 1) = __ROR8__(_byteswap_uint64(*(_QWORD *)((char *)v4 + v3 + 8)), 32);
    *v4 = __ROR8__(_byteswap_uint64(*(_QWORD *)((char *)v4 + v3 + 16)), 32);
    v6 = *(_QWORD *)((char *)v4 + v3 + 24);
    v4 += 4;
    *(v4 - 3) = __ROR8__(_byteswap_uint64(v6), 32);
    --v5;
  }
  while ( v5 );
  v7 = *a1;
  v8 = a1[1];
  v9 = a1[2];
  v10 = a1[3];
  v11 = a1[4];
  v12 = a1[5];
  v13 = a1[6];
  v14 = a1[7];
  v15 = 0LL;
  do
  {
    v16 = v14
        + v98[v15]
        + SHA256Magic[v15]
        + (v11 & v12 ^ v13 & ~v11)
        + (__ROR4__(v11, 6) ^ __ROR4__(v11, 11) ^ __ROR4__(v11, 25));
    v17 = v16 + v10;
    v18 = (unsigned int)(v15 + 1);
    v19 = v16 + (__ROR4__(v7, 13) ^ __ROR4__(v7, 22) ^ __ROR4__(v7, 2)) + (v7 & v8 ^ v9 & (v7 ^ v8));
    v20 = v98[v18]
        + SHA256Magic[v18]
        + (v17 & v11 ^ v12 & ~v17)
        + (__ROR4__(v17, 6) ^ __ROR4__(v17, 11) ^ __ROR4__(v17, 25));
    v21 = (unsigned int)(v18 + 1);
    v22 = v13 + v20;
    v23 = v22 + v9;
    v24 = v22 + (__ROR4__(v19, 13) ^ __ROR4__(v19, 22) ^ __ROR4__(v19, 2)) + (v7 & v8 ^ v19 & (v7 ^ v8));
    v25 = v98[v21]
        + SHA256Magic[v21]
        + (v23 & v17 ^ v11 & ~v23)
        + (__ROR4__(v23, 6) ^ __ROR4__(v23, 11) ^ __ROR4__(v23, 25));
    v26 = (unsigned int)(v21 + 1);
    v27 = v12 + v25;
    v28 = v27 + v8;
    v29 = v27 + (__ROR4__(v24, 2) ^ __ROR4__(v24, 13) ^ __ROR4__(v24, 22)) + (v7 & v24 ^ v19 & (v7 ^ v24));
    v30 = v98[v26]
        + SHA256Magic[v26]
        + (v28 & v23 ^ v17 & ~v28)
        + (__ROR4__(v28, 6) ^ __ROR4__(v28, 11) ^ __ROR4__(v28, 25));
    v31 = (unsigned int)(v26 + 1);
    v32 = v11 + v30;
    v33 = v32 + v7;
    v34 = v32 + (__ROR4__(v29, 2) ^ __ROR4__(v29, 13) ^ __ROR4__(v29, 22)) + (v29 & v24 ^ v19 & (v29 ^ v24));
    v35 = v17
        + v98[v31]
        + SHA256Magic[v31]
        + (v33 & v28 ^ v23 & ~v33)
        + (__ROR4__(v33, 6) ^ __ROR4__(v33, 11) ^ __ROR4__(v33, 25));
    v14 = v35 + v19;
    v36 = (unsigned int)(v31 + 1);
    v90 = v14;
    v10 = v35 + (__ROR4__(v34, 2) ^ __ROR4__(v34, 13) ^ __ROR4__(v34, 22)) + (v34 & v29 ^ v24 & (v34 ^ v29));
    v37 = v98[v36]
        + SHA256Magic[v36]
        + (v33 & v14 ^ v28 & ~v14)
        + (__ROR4__(v14, 6) ^ __ROR4__(v14, 11) ^ __ROR4__(v35 + v19, 25));
    v38 = (unsigned int)(v36 + 1);
    v39 = v23 + v37;
    v13 = v39 + v24;
    v9 = v39 + (__ROR4__(v10, 2) ^ __ROR4__(v10, 13) ^ __ROR4__(v10, 22)) + (v10 & v34 ^ v29 & (v10 ^ v34));
    v40 = v28
        + v98[v38]
        + SHA256Magic[v38]
        + (v13 & v14 ^ v33 & ~v13)
        + (__ROR4__(v13, 6) ^ __ROR4__(v13, 11) ^ __ROR4__(v13, 25));
    v12 = v40 + v29;
    v41 = (unsigned int)(v38 + 1);
    v8 = v40 + (__ROR4__(v9, 2) ^ __ROR4__(v9, 13) ^ __ROR4__(v9, 22)) + (v9 & v10 ^ v34 & (v9 ^ v10));
    v42 = v98[v41]
        + SHA256Magic[v41]
        + (v12 & v13 ^ v14 & ~v12)
        + (__ROR4__(v12, 6) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 25));
    v15 = (unsigned int)(v41 + 1);
    v43 = v33 + v42;
    v11 = v43 + v34;
    result = v43 + (__ROR4__(v8, 2) ^ (unsigned int)(__ROR4__(v8, 13) ^ __ROR4__(v8, 22)));
    v7 = result + (v8 & v9 ^ v10 & (v8 ^ v9));
  }
  while ( (unsigned int)v15 < 0x10 );
  v96 = v15;
  v45 = (unsigned int)v15 < 0x40;
  v46 = a1;
  v92 = v8;
  v95 = result + (v8 & v9 ^ v10 & (v8 ^ v9));
  v94 = v12;
  if ( v45 )
  {
    v47 = v96;
    v48 = v13;
    do
    {
      v49 = v47 + 1;
      v50 = v47 & 0xF;
      v51 = ((_BYTE)v47 + 1) & 0xF;
      v52 = v98[((_BYTE)v47 - 2) & 0xF];
      v98[v50] += v98[((_BYTE)v96 - 7) & 0xF]
                + ((v98[v51] >> 3) ^ __ROR4__(v98[v51], 7) ^ __ROR4__(v98[v51], 18))
                + ((v52 >> 10) ^ __ROR4__(v52, 17) ^ __ROR4__(v52, 19));
      v53 = v90
          + v98[v50]
          + SHA256Magic[v47]
          + (v11 & v12 ^ v48 & ~v11)
          + (__ROR4__(v11, 6) ^ __ROR4__(v11, 11) ^ __ROR4__(v11, 25));
      v54 = v53 + v10;
      LODWORD(v50) = v7 ^ v92;
      v55 = v7 & v92;
      v56 = __ROR4__(v7, 13) ^ __ROR4__(v7, 22);
      v57 = v7 & v92 ^ v9 & (v7 ^ v92);
      v58 = __ROR4__(v7, 2);
      v59 = ((_BYTE)v49 + 1) & 0xF;
      v91 = v53 + (v56 ^ v58) + v57;
      v60 = v98[((_BYTE)v49 - 2) & 0xF];
      v61 = v98[v51]
          + v98[((_BYTE)v49 - 7) & 0xF]
          + ((v60 >> 10) ^ __ROR4__(v60, 17) ^ __ROR4__(v60, 19))
          + (__ROR4__(v98[v59], 7) ^ __ROR4__(v98[v59], 18) ^ (v98[v59] >> 3));
      v98[v51] = v61;
      v62 = v49 + 2;
      v63 = v48
          + v61
          + SHA256Magic[v49]
          + (v54 & v11 ^ v94 & ~v54)
          + (__ROR4__(v54, 6) ^ __ROR4__(v54, 11) ^ __ROR4__(v54, 25));
      v64 = v63 + v9;
      v65 = v63 + (__ROR4__(v91, 13) ^ __ROR4__(v91, 22) ^ __ROR4__(v91, 2)) + (v55 ^ v91 & v50);
      v66 = v98[((_BYTE)v49 - 1) & 0xF];
      v67 = v98[((_BYTE)v49 + 2) & 0xF];
      v98[v59] += v98[((_BYTE)v49 - 6) & 0xF]
                + ((v67 >> 3) ^ __ROR4__(v67, 7) ^ __ROR4__(v67, 18))
                + ((v66 >> 10) ^ __ROR4__(v66, 17) ^ __ROR4__(v66, 19));
      v68 = ((_BYTE)v49 + 2) & 0xF;
      v69 = v94
          + v98[v59]
          + SHA256Magic[v49 + 1]
          + (v64 & v54 ^ v11 & ~v64)
          + (__ROR4__(v64, 6) ^ __ROR4__(v64, 11) ^ __ROR4__(v64, 25));
      v70 = v49 + 3;
      v93 = v69 + v92;
      v71 = v69 + (__ROR4__(v65, 2) ^ __ROR4__(v65, 13) ^ __ROR4__(v65, 22)) + (v95 & v65 ^ v91 & (v95 ^ v65));
      v98[v68] += v98[((_BYTE)v62 - 7) & 0xF]
                + ((v98[v70 & 0xF] >> 3) ^ __ROR4__(v98[v70 & 0xF], 7) ^ __ROR4__(v98[v70 & 0xF], 18))
                + ((v98[((_BYTE)v62 - 2) & 0xF] >> 10) ^ __ROR4__(v98[((_BYTE)v62 - 2) & 0xF], 17) ^ __ROR4__(v98[((_BYTE)v62 - 2) & 0xF], 19));
      v72 = v11
          + v98[v68]
          + SHA256Magic[v62]
          + (v93 & v64 ^ v54 & ~v93)
          + (__ROR4__(v93, 6) ^ __ROR4__(v93, 11) ^ __ROR4__(v93, 25));
      v73 = v72 + v95;
      v74 = (unsigned int)(v70 + 1);
      v75 = v70 & 0xF;
      v76 = v72 + (__ROR4__(v71, 2) ^ __ROR4__(v71, 13) ^ __ROR4__(v71, 22)) + (v71 & v65 ^ v91 & (v71 ^ v65));
      v77 = v98[((_BYTE)v70 - 2) & 0xF];
      v78 = v98[((_BYTE)v70 + 1) & 0xF];
      v98[v75] += v98[((_BYTE)v70 - 7) & 0xF]
                + ((v78 >> 3) ^ __ROR4__(v78, 7) ^ __ROR4__(v78, 18))
                + ((v77 >> 10) ^ __ROR4__(v77, 17) ^ __ROR4__(v77, 19));
      v79 = SHA256Magic[v70] + (v73 & v93 ^ v64 & ~v73) + (__ROR4__(v73, 6) ^ __ROR4__(v73, 11) ^ __ROR4__(v73, 25));
      v80 = (unsigned int)(v70 + 2);
      v81 = v54 + v98[v75] + v79;
      v90 = v81 + v91;
      v10 = v81 + (__ROR4__(v76, 2) ^ __ROR4__(v76, 13) ^ __ROR4__(v76, 22)) + (v76 & v71 ^ v65 & (v76 ^ v71));
      v82 = v74 & 0xF;
      v98[v82] += v98[((_BYTE)v74 - 7) & 0xF]
                + ((v98[v80 & 0xF] >> 3) ^ __ROR4__(v98[v80 & 0xF], 7) ^ __ROR4__(v98[v80 & 0xF], 18))
                + ((v98[((_BYTE)v74 - 2) & 0xF] >> 10) ^ __ROR4__(v98[((_BYTE)v74 - 2) & 0xF], 17) ^ __ROR4__(v98[((_BYTE)v74 - 2) & 0xF], 19));
      v83 = v64
          + v98[v82]
          + SHA256Magic[v74]
          + (v73 & v90 ^ v93 & ~v90)
          + (__ROR4__(v90, 6) ^ __ROR4__(v90, 11) ^ __ROR4__(v90, 25));
      v48 = v83 + v65;
      v84 = v80 & 0xF;
      v9 = v83 + (__ROR4__(v10, 2) ^ __ROR4__(v10, 13) ^ __ROR4__(v10, 22)) + (v10 & v76 ^ v71 & (v10 ^ v76));
      v85 = v98[((_BYTE)v80 + 1) & 0xF];
      v86 = v98[((_BYTE)v80 - 2) & 0xF];
      v98[v84] += v98[((_BYTE)v80 - 7) & 0xF]
                + ((v85 >> 3) ^ __ROR4__(v85, 7) ^ __ROR4__(v85, 18))
                + ((v86 >> 10) ^ __ROR4__(v86, 17) ^ __ROR4__(v86, 19));
      v87 = v93
          + v98[v84]
          + SHA256Magic[v80]
          + (v48 & v90 ^ v73 & ~v48)
          + (__ROR4__(v48, 6) ^ __ROR4__(v48, 11) ^ __ROR4__(v48, 25));
      v12 = v87 + v71;
      v94 = v12;
      v88 = ((_BYTE)v80 + 1) & 0xF;
      v96 = v80 + 2;
      v92 = v87 + (__ROR4__(v9, 2) ^ __ROR4__(v9, 13) ^ __ROR4__(v9, 22)) + (v9 & v10 ^ v76 & (v9 ^ v10));
      v98[v88] += v98[((_BYTE)v80 - 6) & 0xF]
                + ((v98[v96 & 0xF] >> 3) ^ __ROR4__(v98[v96 & 0xF], 7) ^ __ROR4__(v98[v96 & 0xF], 18))
                + ((v98[((_BYTE)v80 - 1) & 0xF] >> 10) ^ __ROR4__(v98[((_BYTE)v80 - 1) & 0xF], 17) ^ __ROR4__(v98[((_BYTE)v80 - 1) & 0xF], 19));
      v8 = v92;
      v89 = v73
          + v98[v88]
          + SHA256Magic[(unsigned int)(v80 + 1)]
          + (v12 & v48 ^ v90 & ~v12)
          + (__ROR4__(v12, 6) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 25));
      v11 = v89 + v76;
      result = v89 + (__ROR4__(v92, 2) ^ (unsigned int)(__ROR4__(v92, 13) ^ __ROR4__(v92, 22)));
      v47 = v80 + 2;
      v7 = result + (v92 & v9 ^ v10 & (v92 ^ v9));
      v95 = v7;
    }
    while ( v96 < 0x40 );
    v14 = v90;
    v13 = v48;
    v46 = a1;
  }
  *v46 += v7;
  v46[1] += v8;
  v46[2] += v9;
  v46[3] += v10;
  v46[4] += v11;
  v46[5] += v12;
  v46[6] += v13;
  v46[7] += v14;
  return result;
}
