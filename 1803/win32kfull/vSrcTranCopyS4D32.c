/*
 * XREFs of vSrcTranCopyS4D32 @ 0x1C00AD2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS4D32(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  __int64 v12; // r11
  __int64 v13; // rax
  int v14; // ecx
  int v15; // r12d
  int v16; // r13d
  unsigned int v17; // ebp
  int v18; // eax
  int v19; // esi
  int v20; // r15d
  char v22; // cl
  __int64 v23; // r9
  unsigned int v24; // r8d
  unsigned int v25; // eax
  int v26; // r10d
  __int64 result; // rax
  _BYTE *v28; // rdx
  unsigned int *v29; // rcx
  char *v30; // r8
  char *v31; // rdi
  unsigned int *v32; // rax
  __int64 v33; // rsi
  char v34; // bl
  unsigned __int8 v35; // r9
  unsigned __int8 v36; // bl
  unsigned int v37; // ebx
  unsigned int v38; // r10d
  unsigned int v39; // r8d
  __int64 v40; // r11
  _DWORD *v41; // rcx
  unsigned int v42; // ebp
  unsigned int v43; // r9d
  char *v44; // rcx
  unsigned int v45; // r8d
  unsigned int v46; // r9d
  int v47; // ebp
  char *v48; // rcx
  unsigned int v49; // r10d
  unsigned int v50; // r8d
  __int64 v51; // r11
  _DWORD *v52; // rcx
  unsigned int v53; // ebx
  unsigned int v54; // r9d
  char *v55; // rcx
  unsigned int v56; // r8d
  unsigned int v57; // r9d
  int v58; // ebx
  char *v59; // rcx
  unsigned __int8 v60; // r9
  unsigned int v61; // r10d
  unsigned int v62; // r8d
  __int64 v63; // r11
  char *v64; // rcx
  unsigned int v65; // r9d
  unsigned int v66; // ebx
  char *v67; // rcx
  unsigned int v68; // r8d
  unsigned int v69; // r9d
  int v70; // ebx
  char *v71; // rcx
  int v72; // r8d
  unsigned __int8 v73; // al
  unsigned int v74; // r10d
  unsigned int v75; // edx
  __int64 v76; // r11
  unsigned int v77; // r9d
  unsigned int v78; // edx
  int v79; // r9d
  char *v80; // rax
  unsigned int v81; // r8d
  unsigned int v82; // r8d
  unsigned int v83; // r9d
  char *v84; // rax
  int *v85; // rcx
  unsigned int v86; // [rsp+0h] [rbp-58h]
  unsigned int v87; // [rsp+4h] [rbp-54h]
  int v88; // [rsp+8h] [rbp-50h]
  unsigned int *v89; // [rsp+10h] [rbp-48h]
  __int64 v90; // [rsp+18h] [rbp-40h]
  _BYTE *v92; // [rsp+60h] [rbp+8h]
  char v93; // [rsp+68h] [rbp+10h]
  char v94; // [rsp+78h] [rbp+20h]
  int v95; // [rsp+80h] [rbp+28h]
  int v96; // [rsp+88h] [rbp+30h]
  unsigned int v97; // [rsp+A0h] [rbp+48h]
  int v98; // [rsp+B0h] [rbp+58h]

  v12 = a3;
  v13 = *(_QWORD *)(a11 + 128);
  if ( !v13 )
    v13 = *(_QWORD *)(*(_QWORD *)(a11 + 48) + 1800LL);
  v14 = *(_DWORD *)(v13 + 24);
  if ( (v14 & 2) != 0 )
  {
    v85 = *(int **)(v13 + 112);
    v19 = *v85;
    v18 = v85[6];
    v16 = v85[1];
    v17 = v85[7];
    v20 = v85[2];
    v15 = v85[8];
    v98 = *v85;
  }
  else
  {
    LOBYTE(v15) = 0;
    v16 = 65280;
    LOBYTE(v17) = 8;
    if ( (v14 & 4) != 0 )
    {
      LOBYTE(v18) = 0;
      v19 = 255;
      v98 = 255;
      v20 = 16711680;
      LOBYTE(v15) = 16;
    }
    else
    {
      LOBYTE(v18) = 16;
      v19 = 16711680;
      v98 = 16711680;
      v20 = 255;
    }
  }
  v22 = v18;
  v23 = a5;
  v93 = v18;
  v24 = a6 & 0xFFFFFFFE;
  v96 = a6 - (a6 & 0xFFFFFFFE);
  v25 = a9 & v16;
  v97 = (a9 & v19) >> v22;
  v86 = v25 >> v17;
  v94 = v17;
  v87 = (a9 & v20) >> v15;
  v88 = ((a5 + 1) & 0xFFFFFFFE) - a5;
  v26 = (int)(v24 - ((a5 + 1) & 0xFFFFFFFE)) / 2;
  v95 = v26;
  result = (unsigned int)(a2 / 2);
  v28 = (_BYTE *)((int)result + a1);
  v29 = (unsigned int *)(a4 + 4 * v23);
  v89 = v29;
  v92 = v28;
  if ( a8 )
  {
    v90 = v12;
    v30 = (char *)&unk_1C02D6EC0;
    do
    {
      v31 = v28;
      v32 = v29;
      if ( v88 )
      {
        v73 = *v28 & 0xF;
        if ( v73 )
        {
          if ( v73 == 15 )
          {
            *v29 = a9;
          }
          else
          {
            v74 = *v29;
            v75 = (*v29 & v19) >> v93;
            if ( (int)(v97 - v75) < 0 )
              v30 = (char *)&unk_1C02D6F00;
            v76 = 4LL * v73;
            v77 = (v75 << 16) + (v97 - v75) * *(_DWORD *)&v30[v76];
            v78 = (v74 & v16) >> v17;
            v79 = v19 & (HIWORD(v77) << v93);
            if ( (int)(v86 - v78) < 0 )
              v80 = (char *)&unk_1C02D6F00;
            else
              v80 = (char *)&unk_1C02D6EC0;
            v81 = v74 & v20;
            v26 = v95;
            v82 = v81 >> v15;
            v83 = v16 & (((v78 << 16) + (v86 - v78) * *(_DWORD *)&v80[v76]) >> 16 << v17) | v79;
            v84 = (char *)&unk_1C02D6F00;
            if ( (int)(v87 - v82) >= 0 )
              v84 = (char *)&unk_1C02D6EC0;
            v29 = v89;
            v28 = v92;
            *v89 = v20 & (((v82 << 16) + (v87 - v82) * *(_DWORD *)&v84[v76]) >> 16 << v15) | v83;
          }
        }
        v32 = v29 + 1;
        v31 = v28 + 1;
      }
      if ( v26 > 0 )
      {
        v33 = (unsigned int)v26;
        do
        {
          v34 = *v31;
          v35 = (unsigned __int8)*v31 >> 4;
          if ( v35 )
          {
            if ( v35 == 15 )
            {
              v17 = a9;
            }
            else
            {
              v38 = *v32;
              v39 = (*v32 & v98) >> v93;
              v40 = 4LL * v35;
              v41 = &unk_1C02D6F00;
              if ( (int)(v97 - v39) >= 0 )
                v41 = &unk_1C02D6EC0;
              v42 = v98 & (((v39 << 16) + (v97 - v39) * v41[v35]) >> 16 << v93);
              v43 = (v38 & v16) >> v94;
              v44 = (char *)&unk_1C02D6F00;
              if ( (int)(v86 - v43) >= 0 )
                v44 = (char *)&unk_1C02D6EC0;
              v45 = (v43 << 16) + (v86 - v43) * *(_DWORD *)&v44[v40];
              v46 = (v38 & v20) >> v15;
              v47 = v16 & (HIWORD(v45) << v94) | v42;
              v48 = (char *)&unk_1C02D6F00;
              if ( (int)(v87 - v46) >= 0 )
                v48 = (char *)&unk_1C02D6EC0;
              v17 = v20 & (((v46 << 16) + (v87 - v46) * *(_DWORD *)&v48[v40]) >> 16 << v15) | v47;
            }
            *v32 = v17;
            LOBYTE(v17) = v94;
          }
          v36 = v34 & 0xF;
          if ( v36 )
          {
            if ( v36 == 15 )
            {
              v37 = a9;
            }
            else
            {
              v49 = v32[1];
              v50 = (v49 & v98) >> v93;
              v51 = 4LL * v36;
              v52 = &unk_1C02D6F00;
              if ( (int)(v97 - v50) >= 0 )
                v52 = &unk_1C02D6EC0;
              v53 = v98 & (((v50 << 16) + (v97 - v50) * v52[v36]) >> 16 << v93);
              v54 = (v49 & v16) >> v17;
              v55 = (char *)&unk_1C02D6F00;
              if ( (int)(v86 - v54) >= 0 )
                v55 = (char *)&unk_1C02D6EC0;
              v56 = (v54 << 16) + (v86 - v54) * *(_DWORD *)&v55[v51];
              v57 = (v49 & v20) >> v15;
              v58 = v16 & (HIWORD(v56) << v17) | v53;
              v59 = (char *)&unk_1C02D6F00;
              if ( (int)(v87 - v57) >= 0 )
                v59 = (char *)&unk_1C02D6EC0;
              v37 = v20 & (((v57 << 16) + (v87 - v57) * *(_DWORD *)&v59[v51]) >> 16 << v15) | v58;
            }
            v32[1] = v37;
          }
          v32 += 2;
          ++v31;
          --v33;
        }
        while ( v33 );
        v19 = v98;
        v28 = v92;
        v29 = v89;
      }
      if ( v96 )
      {
        v60 = (unsigned __int8)*v31 >> 4;
        if ( v60 )
        {
          if ( v60 == 15 )
          {
            v28 = v92;
            v29 = v89;
            *v32 = a9;
          }
          else
          {
            v61 = *v32;
            v62 = (*v32 & v19) >> v93;
            v63 = 4LL * v60;
            v64 = (char *)&unk_1C02D6F00;
            if ( (int)(v97 - v62) >= 0 )
              v64 = (char *)&unk_1C02D6EC0;
            v65 = (v61 & v16) >> v17;
            v66 = v19 & (((v62 << 16) + (v97 - v62) * *(_DWORD *)&v64[v63]) >> 16 << v93);
            v67 = (char *)&unk_1C02D6F00;
            if ( (int)(v86 - v65) >= 0 )
              v67 = (char *)&unk_1C02D6EC0;
            v68 = (v65 << 16) + (v86 - v65) * *(_DWORD *)&v67[v63];
            v69 = (v61 & v20) >> v15;
            v70 = v16 & (HIWORD(v68) << v17) | v66;
            v71 = (char *)&unk_1C02D6F00;
            if ( (int)(v87 - v69) >= 0 )
              v71 = (char *)&unk_1C02D6EC0;
            v72 = (v87 - v69) * *(_DWORD *)&v71[v63];
            v28 = v92;
            v29 = v89;
            *v32 = v20 & (((v69 << 16) + v72) >> 16 << v15) | v70;
          }
        }
      }
      result = (unsigned int)(a8 - 1);
      v28 += v90;
      v29 = (unsigned int *)((char *)v29 + a7);
      v26 = v95;
      v30 = (char *)&unk_1C02D6EC0;
      a8 = result;
      v92 = v28;
      v89 = v29;
    }
    while ( (_DWORD)result );
  }
  return result;
}
