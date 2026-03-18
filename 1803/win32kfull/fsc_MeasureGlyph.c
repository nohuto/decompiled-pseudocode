/*
 * XREFs of fsc_MeasureGlyph @ 0x1C02B6BE8
 * Callers:
 *     fs_FindBitMapSize @ 0x1C02B0CCC (fs_FindBitMapSize.c)
 * Callees:
 *     FindExtrema @ 0x1C02B5F88 (FindExtrema.c)
 *     fsc_CheckYReversal @ 0x1C02B62BC (fsc_CheckYReversal.c)
 *     fsc_CheckYReversalInSpline @ 0x1C02B6368 (fsc_CheckYReversalInSpline.c)
 *     FixPointers @ 0x1C02C2CD0 (FixPointers.c)
 *     GetIxEstimate @ 0x1C02C2DFC (GetIxEstimate.c)
 *     fsc_AddXReversal @ 0x1C02C3150 (fsc_AddXReversal.c)
 *     fsc_AddYReversal @ 0x1C02C3194 (fsc_AddYReversal.c)
 */

__int64 __fastcall fsc_MeasureGlyph(_QWORD *a1, __int64 a2, int *a3, char a4, __int16 a5, __int16 a6, __int16 a7)
{
  char v7; // r15
  int *v8; // r14
  __int64 v9; // rsi
  _QWORD *v10; // r12
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // ebx
  __int16 v15; // ax
  __int16 v16; // cx
  __int16 v17; // dx
  __int16 v18; // ax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r9
  unsigned __int16 v23; // ax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r10
  __int64 v27; // rax
  __int64 v28; // r14
  unsigned int *v29; // r12
  int *v30; // r15
  char *v31; // r13
  int *v32; // r9
  char v33; // al
  int v34; // r11d
  unsigned int v35; // r10d
  __int64 v36; // rcx
  char v37; // al
  unsigned __int16 v38; // r14
  int v39; // ecx
  unsigned int v40; // r14d
  __int16 v41; // r15
  unsigned __int16 v42; // r14
  __int16 v43; // r12
  __int16 v44; // r13
  __int64 v45; // r9
  __int64 v46; // rax
  unsigned int v47; // r15d
  signed int *v48; // rax
  int v49; // ecx
  signed int v50; // ecx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned int *v54; // r14
  unsigned int *v55; // r11
  unsigned __int8 *v56; // r15
  unsigned int v57; // r12d
  int v58; // esi
  __int64 v59; // r13
  unsigned int v60; // ecx
  unsigned __int8 v61; // r10
  unsigned int v62; // eax
  int v63; // ecx
  int i; // eax
  int v65; // r10d
  __int16 v66; // ax
  int v67; // r10d
  int IxEstimate; // esi
  __int64 v69; // r9
  unsigned int v70; // edx
  __int64 v71; // r8
  __int64 v72; // rdx
  int v73; // r10d
  int v74; // r9d
  int v75; // r11d
  unsigned int v76; // ecx
  unsigned int v77; // r8d
  __int16 v78; // r10
  bool v79; // zf
  int v80; // edx
  _WORD v81[2]; // [rsp+58h] [rbp-51h] BYREF
  char v82; // [rsp+5Ch] [rbp-4Dh]
  unsigned int v83; // [rsp+60h] [rbp-49h]
  unsigned int v84; // [rsp+64h] [rbp-45h]
  unsigned int v85; // [rsp+68h] [rbp-41h]
  unsigned int v86; // [rsp+6Ch] [rbp-3Dh]
  _WORD v87[2]; // [rsp+70h] [rbp-39h] BYREF
  _WORD v88[2]; // [rsp+74h] [rbp-35h] BYREF
  __int16 v89; // [rsp+78h] [rbp-31h]
  unsigned __int16 v90; // [rsp+7Ah] [rbp-2Fh]
  __int16 v91; // [rsp+7Ch] [rbp-2Dh]
  int v92; // [rsp+80h] [rbp-29h]
  signed int *v93; // [rsp+88h] [rbp-21h]
  int *v94; // [rsp+90h] [rbp-19h]
  __int64 v95; // [rsp+98h] [rbp-11h]
  __int64 v96; // [rsp+A0h] [rbp-9h]

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  result = FindExtrema((__int64)a1, a2);
  v14 = 0;
  if ( !(_DWORD)result )
  {
    v15 = *(_WORD *)(v12 + 8) & -a5;
    *(_WORD *)(v12 + 8) = v15;
    v16 = v15;
    v17 = *(_WORD *)(v12 + 6);
    v18 = *(_WORD *)(v9 + 10);
    if ( v17 != v18 )
    {
      v13 = *(unsigned __int16 *)(v9 + 12);
      if ( v16 != (_WORD)v13 )
      {
        if ( a6 <= 0 )
        {
          *(_WORD *)(v9 + 8) = a6 + v16;
        }
        else
        {
          LOWORD(v13) = a6 + v13;
          *(_WORD *)(v9 + 12) = v13;
        }
        if ( a7 <= 0 )
          *(_WORD *)(v9 + 6) = v17 - a7;
        else
          *(_WORD *)(v9 + 10) = v18 - a7;
      }
    }
    v19 = *v8;
    v20 = *((_QWORD *)v8 + 3);
    v96 = v20;
    if ( (unsigned int)v19 < 0x38 )
    {
      return 6656LL;
    }
    else
    {
      v85 = 0;
      *(_QWORD *)v20 = v20 + 40;
      v21 = 0x7FFFLL;
      *(_QWORD *)(v20 + 8) = v20 + 40;
      v22 = 0LL;
      *(_DWORD *)(v20 + 40) = 0x7FFF;
      *(_QWORD *)(v20 + 48) = 0LL;
      *(_QWORD *)(v20 + 16) = v20 + 56;
      *(_QWORD *)(v20 + 24) = v20 + v19;
      v23 = 0;
      *(_QWORD *)(v20 + 32) = v20;
      v90 = 0;
      if ( *(_WORD *)v10 )
      {
        do
        {
          v24 = v23;
          v13 = *(unsigned __int16 *)(v10[1] + 2LL * v23);
          v25 = v10[2];
          v89 = v13;
          v21 = *(unsigned __int16 *)(v25 + 2 * v24);
          v91 = v21;
          if ( (_WORD)v13 != (_WORD)v21 )
          {
            v26 = v10[4];
            v27 = (__int16)v13;
            v13 = v10[3];
            v28 = a1[5];
            v95 = v27;
            v29 = (unsigned int *)(v26 + 4 * v27);
            v30 = (int *)(v13 + 4 * v27);
            v93 = (signed int *)(__int16)v21;
            v31 = (char *)(v28 + v27);
            LOBYTE(v27) = *(_BYTE *)((__int16)v21 + v28);
            v32 = (int *)(v13 + 4LL * (__int16)v21);
            v94 = v32;
            if ( (v27 & 1) != 0 )
            {
              v21 = *(unsigned int *)(v26 + 4LL * (__int16)v21);
              LODWORD(v13) = *v32++;
              v33 = *v31;
              v34 = *v30;
              v35 = *v29;
              v94 = v32;
              v83 = v21;
              v86 = v34;
              v84 = v35;
              v82 = v33;
            }
            else
            {
              v34 = *v32;
              v36 = (__int16)v21 - 1;
              v86 = *v32;
              v21 = *(unsigned int *)(v26 + 4 * v36);
              v35 = *(_DWORD *)(v26 + 4LL * (_QWORD)v93);
              v37 = *(_BYTE *)(v36 + v28);
              LODWORD(v13) = *(_DWORD *)(v13 + 4 * v36);
              v83 = v21;
              v84 = v35;
              if ( (v37 & 1) == 0 )
              {
                LODWORD(v13) = (v34 + (int)v13 + 1) >> 1;
                v21 = (unsigned int)((int)(v35 + v21 + 1) >> 1);
                v83 = v21;
              }
              v82 = 0;
              --v30;
              --v29;
              --v31;
              v33 = 0;
            }
            v81[0] = 0;
            v38 = 0;
            v87[0] = 0;
            v88[0] = 1;
            if ( v30 >= v32 )
              goto LABEL_105;
            do
            {
              if ( (v33 & 1) != 0 )
              {
                result = fsc_CheckYReversal(v20, v21, v35, v81, v88, v87);
                if ( (_DWORD)result )
                  return result;
                v34 = v86;
                v35 = v84;
                ++v30;
                ++v29;
                v13 = v86;
                v21 = v84;
                ++v31;
              }
              else
              {
                ++v29;
                ++v30;
                v39 = *v29;
                ++v31;
                v40 = *v30;
                v83 = *v29;
                if ( (*v31 & 1) != 0 )
                {
                  ++v30;
                  ++v29;
                  ++v31;
                }
                else
                {
                  v40 = (int)(v34 + v40 + 1) >> 1;
                  v39 = (int)(v35 + v39 + 1) >> 1;
                  v83 = v39;
                }
                result = fsc_CheckYReversalInSpline(v20, v81, v88, v87, v13, v21, v34, v35, v40, v39);
                if ( (_DWORD)result )
                  return result;
                v21 = v83;
                v35 = v84;
                v13 = v40;
                v34 = v86;
              }
              v83 = v21;
              if ( v30 == v94 )
              {
                v33 = v82;
              }
              else
              {
                v33 = *v31;
                v34 = *v30;
                v35 = *v29;
                v82 = *v31;
                v86 = v34;
                v84 = v35;
              }
            }
            while ( v30 < v94 );
            v41 = v87[0];
            v38 = v81[0];
            while ( v41 > 0 )
            {
              if ( !v38 )
                v38 = 1;
              result = fsc_AddYReversal(v20, v21, v38);
              if ( (_DWORD)result )
                return result;
              v21 = v83;
              v38 = -v38;
              --v41;
            }
            if ( v88[0] != v38 )
            {
LABEL_105:
              result = fsc_AddYReversal(v20, v83, v38);
              if ( (_DWORD)result )
                return result;
            }
            v7 = a4;
            if ( (a4 & 2) != 0 )
            {
              v10 = a1;
              v22 = v85;
            }
            else
            {
              v13 = 1LL;
              v42 = 0;
              v43 = v89;
              v21 = 0LL;
              v44 = v91;
              v81[0] = 0;
              v45 = 4LL;
              v46 = a1[3];
              v47 = *(_DWORD *)(v46 + 4LL * (_QWORD)v93);
              v48 = (signed int *)(v46 + 4 * v95);
              do
              {
                if ( v43 > v91 )
                  break;
                v49 = *v48++;
                if ( v49 <= (int)v47 )
                {
                  if ( v49 >= (int)v47 )
                    LOWORD(v21) = v21 + 1;
                  else
                    v42 = -1;
                }
                else
                {
                  v42 = 1;
                }
                ++v43;
                v47 = v49;
              }
              while ( !v42 );
              v9 = a2;
              v81[0] = v21;
              LOWORD(v92) = v42;
              if ( v43 <= v91 )
              {
                while ( 1 )
                {
                  v50 = *v48++;
                  v84 = v50;
                  v93 = v48;
                  if ( v42 == 1 )
                  {
                    if ( v50 <= (int)v47 )
                    {
                      result = fsc_AddXReversal(v20, v47, 1LL, 4LL);
                      if ( (_DWORD)result )
                        return result;
                      v42 = -1;
                      v13 = 1LL;
LABEL_56:
                      v50 = v84;
                      v45 = 4LL;
                      v48 = v93;
                    }
                  }
                  else if ( v50 >= (int)v47 )
                  {
                    result = fsc_AddXReversal(v20, v47, 0xFFFFFFFFLL, 4LL);
                    if ( (_DWORD)result )
                      return result;
                    v13 = 1LL;
                    v42 = 1;
                    goto LABEL_56;
                  }
                  ++v43;
                  v47 = v50;
                  if ( v43 > v44 )
                  {
                    v21 = v81[0];
                    break;
                  }
                }
              }
              while ( (__int16)v21 > 0 )
              {
                if ( !v42 )
                {
                  v42 = 1;
                  v92 = 1;
                }
                result = fsc_AddXReversal(v20, v47, v42, v45);
                if ( (_DWORD)result )
                  return result;
                v21 = v81[0];
                v42 = -v42;
                LOWORD(v21) = --v81[0];
                v13 = 1LL;
              }
              if ( (_WORD)v92 != v42 )
              {
                result = fsc_AddXReversal(v20, v47, v42, v45);
                if ( (_DWORD)result )
                  return result;
              }
              v7 = a4;
              v10 = a1;
              if ( (a4 & 4) != 0 )
              {
                v51 = a1[3];
                v52 = a1[4];
                v53 = a1[5];
                v13 = v44;
                v84 = *(_DWORD *)(v51 + 4LL * v44);
                LOBYTE(v13) = *(_BYTE *)(v53 + v44);
                v86 = *(_DWORD *)(v52 + 4LL * v44);
                v54 = (unsigned int *)(v52 + 4 * v95);
                v55 = (unsigned int *)(v51 + 4 * v95);
                v21 = (unsigned int)v89;
                v56 = (unsigned __int8 *)(v53 + v95);
                LODWORD(v52) = v44 - (_DWORD)v21;
                v22 = (unsigned int)v52 + v85 + 2;
                v85 += v52 + 2;
                if ( v89 <= v44 )
                {
                  v57 = v84;
                  v58 = v86;
                  v59 = (unsigned __int16)(v44 - v89 + 1);
                  do
                  {
                    v60 = *v55++;
                    v21 = *v54++;
                    v61 = *v56++;
                    v86 = v60;
                    v83 = v21;
                    if ( ((unsigned __int8)v13 & v61 & 1) == 0 )
                    {
                      v62 = v22 + 1;
                      if ( (((unsigned __int8)v13 | v61) & 1) != 0 )
                        v62 = v22;
                      v84 = v62;
                      v13 = v60 - v57;
                      v63 = 0;
                      if ( (int)abs32(v13) <= (int)abs32(v21 - v58) )
                        v13 = (unsigned int)(v21 - v58);
                      for ( i = abs32(v13); i > 1600; i >>= 1 )
                        v63 = 2 * v63 + 2;
                      v21 = v83;
                      v22 = v84 + v63;
                      v60 = v86;
                    }
                    LOBYTE(v13) = v61;
                    v57 = v60;
                    v58 = v21;
                    --v59;
                  }
                  while ( v59 );
                  v20 = v96;
                  v9 = a2;
                  v10 = a1;
                  v85 = v22;
                }
                v7 = a4;
              }
              else
              {
                v22 = v85;
              }
            }
          }
          v23 = v90 + 1;
          v90 = v23;
        }
        while ( v23 < *(_WORD *)v10 );
        v8 = a3;
      }
      if ( (v7 & 6) == 4
        && (v22 = (unsigned int)v22 + 2 * (unsigned int)((*(_QWORD *)(v20 + 16) - v20 - 56) >> 4),
            v85 = v22,
            (int)v22 > 0x3FFF) )
      {
        return 4869LL;
      }
      else
      {
        v65 = *(__int16 *)(v9 + 6) - *(__int16 *)(v9 + 10);
        v66 = ((*(__int16 *)(v9 + 12) - *(__int16 *)(v9 + 8) + 31) >> 3) & 0xFFFC;
        *(_WORD *)v9 = v66;
        *(_DWORD *)(v9 + 36) = v65 * v66;
        if ( v20 != *(_QWORD *)(v20 + 32) )
          FixPointers(v20, v21, v13, v22);
        IxEstimate = GetIxEstimate(*(_QWORD *)v20, v21, v13, v22);
        v70 = (v67 + 7) & 0xFFFFFFF8;
        v71 = (IxEstimate + 7) & 0xFFFFFFF8;
        if ( (v7 & 4) != 0 )
          v72 = 8 * ((_DWORD)v71 + 4 * v70 + v70);
        else
          v72 = 4 * ((unsigned int)v71 + 10 * v70);
        v8[1] = v72;
        if ( (v7 & 2) != 0 )
        {
          v73 = v85;
          v74 = 0;
        }
        else
        {
          if ( v20 != *(_QWORD *)(v20 + 32) )
            FixPointers(v20, v72, v71, v69);
          v74 = GetIxEstimate(*(_QWORD *)(v20 + 8), v72, v71, v69);
          v76 = (v75 + 7) & 0xFFFFFFF8;
          v77 = (v74 + 7) & 0xFFFFFFF8;
          v79 = v78 == 0;
          v73 = v85;
          if ( v79 )
            v80 = 4 * (v77 + 10 * v76);
          else
            v80 = 8 * (v77 + ((v85 + 7) & 0xFFFFFFF8) + 5 * v76);
          v14 = v80;
        }
        v8[2] = v14;
        v8[3] = IxEstimate;
        v8[4] = v74;
        v8[5] = v73;
        *v8 = *(_DWORD *)(v20 + 16) - v20;
        return 0LL;
      }
    }
  }
  return result;
}
