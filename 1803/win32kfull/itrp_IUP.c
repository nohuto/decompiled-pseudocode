/*
 * XREFs of itrp_IUP @ 0x1C02C9AC0
 * Callers:
 *     <none>
 * Callees:
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     ExecutePhaseControl @ 0x1C02C5014 (ExecutePhaseControl.c)
 */

__int64 __fastcall itrp_IUP(__int64 a1, char a2)
{
  __int64 v2; // rbx
  char v4; // al
  __int16 v6; // cx
  int v7; // edi
  int v8; // esi
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // r14
  _WORD *v12; // r13
  unsigned __int16 v13; // di
  unsigned __int16 v14; // bp
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // ax
  int v17; // r12d
  int v18; // r15d
  __int64 v19; // r12
  int v20; // eax
  int v21; // r15d
  unsigned __int16 v22; // ax
  int v23; // ebp
  int v24; // edi
  __int64 v25; // r12
  int v26; // r8d
  char v27; // r9
  __int64 v28; // r13
  __int64 v29; // r11
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdx
  bool v35; // cc
  int v36; // eax
  int v37; // r10d
  __int64 v38; // rsi
  __int64 v39; // r14
  __int64 v40; // rcx
  int v41; // eax
  int v42; // ecx
  char *v43; // r12
  int v44; // edx
  int v45; // r9d
  int v46; // eax
  int v47; // eax
  int v48; // ebx
  int v49; // ebp
  int v50; // eax
  int v51; // r15d
  int v52; // r13d
  int v53; // r11d
  int *v54; // r10
  int v55; // r14d
  __int64 v56; // rbp
  char *v57; // rcx
  _DWORD *v58; // rdi
  unsigned __int64 v59; // rsi
  int v60; // edx
  int v61; // eax
  int v62; // eax
  int v63; // edx
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // r10d
  __int64 v68; // rcx
  __int64 v69; // rdx
  int v70; // eax
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // [rsp+24h] [rbp-D4h]
  __int64 v75; // [rsp+28h] [rbp-D0h]
  __int64 v76; // [rsp+30h] [rbp-C8h]
  __int64 v77; // [rsp+38h] [rbp-C0h]
  __int64 v78; // [rsp+38h] [rbp-C0h]
  int v79; // [rsp+40h] [rbp-B8h]
  __int64 v80; // [rsp+48h] [rbp-B0h]
  __int64 v81; // [rsp+48h] [rbp-B0h]
  __int64 v82; // [rsp+50h] [rbp-A8h]
  int v83; // [rsp+58h] [rbp-A0h]
  int v84; // [rsp+60h] [rbp-98h]
  __int64 v85; // [rsp+68h] [rbp-90h]
  __int64 v86; // [rsp+70h] [rbp-88h]
  __int64 v87; // [rsp+78h] [rbp-80h]
  int v88; // [rsp+78h] [rbp-80h]
  __int64 v89; // [rsp+88h] [rbp-70h]
  unsigned __int64 v90; // [rsp+98h] [rbp-60h]
  __int64 v91; // [rsp+A0h] [rbp-58h]
  __int16 v93; // [rsp+108h] [rbp+10h]
  char v94; // [rsp+110h] [rbp+18h]
  int v95; // [rsp+118h] [rbp+20h]

  v2 = qword_1C0327150;
  v91 = qword_1C0327150;
  v94 = 2;
  v4 = *(_BYTE *)(qword_1C0327180 + 333);
  if ( v4 == 2 )
  {
    if ( qword_1C0327150 != qword_1C0327178 )
    {
      v6 = *(_WORD *)(qword_1C0327180 + 452);
      if ( (v6 & 1) != 0 && (v6 & 2) != 0 && (v6 & 4) != (a2 & 1) && !*(_DWORD *)(qword_1C0327150 + 96) )
        ExecutePhaseControl((__int64)&LocalGS, qword_1C0327150);
    }
  }
  else if ( v4 || qword_1C0327178 != qword_1C0327150 )
  {
    dword_1C03271D0 = 4380;
    return qword_1C03271D8;
  }
  v7 = a2 & 1;
  v93 = v7;
  v82 = *(_QWORD *)(v2 + 72);
  if ( v7 )
  {
    v76 = *(_QWORD *)v2;
    v85 = *(_QWORD *)(v2 + 16);
    if ( *(_BYTE *)(qword_1C0327180 + 397) )
      v75 = *(_QWORD *)(v2 + 16);
    else
      v75 = *(_QWORD *)(v2 + 32);
    v94 = 1;
  }
  else
  {
    v76 = *(_QWORD *)(v2 + 8);
    v85 = *(_QWORD *)(v2 + 24);
    if ( *(_BYTE *)(qword_1C0327180 + 397) )
      v75 = *(_QWORD *)(v2 + 24);
    else
      v75 = *(_QWORD *)(v2 + 40);
  }
  LOWORD(v8) = *(_WORD *)(v2 + 80);
  v84 = 0;
  if ( (__int16)v8 > 0 )
  {
    v9 = 0LL;
    v89 = 0LL;
    while ( 1 )
    {
      v10 = *(__int16 *)(*(_QWORD *)(v2 + 56) + 2 * v9);
      v77 = *(_QWORD *)(v2 + 64);
      v95 = v10;
      v11 = *(__int16 *)(v77 + 2 * v9);
      v86 = v11;
      v87 = qword_1C0327180;
      v12 = *(_WORD **)(qword_1C0327180 + 344);
      v90 = v75 + 4 * v11;
      v13 = v12[4];
      v14 = v12[6];
      v15 = v13;
      if ( v13 <= v14 )
        v15 = v12[6];
      if ( v15 <= 1u )
      {
        v17 = 1;
      }
      else
      {
        v16 = v12[4];
        if ( v13 <= v14 )
          v16 = v12[6];
        v17 = v16;
      }
      v80 = qword_1C0327178;
      if ( qword_1C0327178 == v2 )
      {
        if ( v10 >= (unsigned __int16)v12[8] || v10 < 0 )
          goto LABEL_40;
        v18 = 1;
      }
      else
      {
        if ( v10 >= *(_DWORD *)(qword_1C0327180 + 440) || v10 < 0 )
        {
LABEL_40:
          dword_1C03271D0 = 4370;
          return qword_1C03271D8;
        }
        v18 = 5;
      }
      if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2) )
        goto LABEL_40;
      if ( (__int16)v8 < 1 )
      {
        v19 = v77;
      }
      else
      {
        v35 = (__int16)v8 <= v17;
        v19 = v77;
        if ( v35 )
        {
          v20 = v18 + *(__int16 *)(v77 + 2LL * ((__int16)v8 - 1));
          v21 = v95;
          if ( v95 >= v20 )
            goto LABEL_40;
          goto LABEL_43;
        }
      }
      v21 = v95;
LABEL_43:
      v22 = v13;
      if ( v13 <= v14 )
        v22 = v14;
      if ( v22 <= 1u )
      {
        v23 = 1;
      }
      else
      {
        if ( v13 <= v14 )
          v13 = v14;
        v23 = v13;
      }
      if ( v80 == v2 )
      {
        if ( (int)v11 >= (unsigned __int16)v12[8] || (int)v11 < 0 )
          goto LABEL_40;
        v24 = 1;
      }
      else
      {
        if ( (int)v11 >= *(_DWORD *)(v87 + 440) || (int)v11 < 0 )
          goto LABEL_40;
        v24 = 5;
      }
      if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2)
        || (__int16)v8 >= 1 && (__int16)v8 <= v23 && (int)v11 >= v24 + *(__int16 *)(v19 + 2LL * ((__int16)v8 - 1)) )
      {
        goto LABEL_40;
      }
      v25 = v82;
      v26 = v21;
      v27 = v94;
      v28 = v11;
      v29 = v21;
      v78 = v21;
      if ( ((unsigned __int8)v94 & *(_BYTE *)(v21 + v82)) == 0 )
      {
        v30 = v21;
        do
        {
          if ( v30 > v11 )
            break;
          ++v30;
          ++v26;
        }
        while ( ((unsigned __int8)v94 & *(_BYTE *)(v30 + v82)) == 0 );
      }
      if ( v26 <= (int)v11 )
      {
        v31 = v26;
        v81 = v26;
        v88 = v26;
        while ( 2 )
        {
          v32 = v26;
          do
          {
            v33 = v32 + 1;
            v34 = v26;
            v35 = v32 + 1 <= v28;
            v36 = v26 + 1;
            v37 = v26;
            v32 = v29;
            if ( v35 )
              v32 = v33;
            v26 = v21;
            if ( v35 )
              v26 = v36;
            v38 = v26;
          }
          while ( ((unsigned __int8)v27 & *(_BYTE *)(v32 + v25)) != 0 && v32 != v31 );
          if ( v26 == v88 )
            goto LABEL_118;
          v39 = v26;
          do
          {
            v40 = v39 + 1;
            v39 = v29;
            v41 = v26 + 1;
            v26 = v21;
            if ( v40 <= v28 )
            {
              v39 = v40;
              v26 = v41;
            }
          }
          while ( ((unsigned __int8)v27 & *(_BYTE *)(v39 + v25)) == 0 );
          v42 = *(_DWORD *)(v75 + 4 * v34);
          v43 = (char *)(v75 + 4LL * v26);
          v44 = *(_DWORD *)v43;
          if ( v42 >= *(_DWORD *)v43 )
            v45 = v42 - v44;
          else
            v45 = v44 - v42;
          v46 = v42;
          if ( v42 >= v44 )
            v46 = *(_DWORD *)v43;
          v79 = v46;
          v47 = v37;
          if ( v42 >= v44 )
            v47 = v26;
          v74 = *(_DWORD *)(v76 + 4LL * v47);
          v48 = *(_DWORD *)(v85 + 4LL * v47);
          v49 = v74 - v48;
          v83 = v74 - v48;
          if ( v45 )
          {
            v50 = v26;
            if ( v42 >= v44 )
              v50 = v37;
            v51 = *(_DWORD *)(v85 + 4LL * v50);
            v52 = *(_DWORD *)(v76 + 4LL * v50) - v51;
            v53 = *(_DWORD *)(v76 + 4LL * v50) - v74;
            if ( v45 >= 0x8000 || v53 >= 0x8000 )
            {
              v66 = CompDiv(v45, (__int64)v53 << 16);
              v29 = v78;
              v67 = v66;
              v26 = v38;
              if ( v32 == v39 )
                goto LABEL_115;
              v68 = v86;
              v69 = v76;
              do
              {
                v70 = *(_DWORD *)(v85 + 4 * v32);
                if ( v70 > v48 )
                {
                  if ( v70 < v51 )
                  {
                    v71 = v74 + FixMul(*(_DWORD *)(v75 + 4 * v32) - v79, v67);
                    v68 = v86;
                    v69 = v76;
                  }
                  else
                  {
                    v71 = v52 + v70;
                  }
                }
                else
                {
                  v71 = v49 + v70;
                }
                *(_DWORD *)(v69 + 4 * v32) = v71;
                v72 = v32 + 1;
                v26 = v38 + 1;
                if ( v32 >= v68 )
                {
                  v72 = v29;
                  v26 = v95;
                }
                v32 = v72;
                LODWORD(v38) = v26;
              }
              while ( v72 != v39 );
              v21 = v95;
            }
            else
            {
              v54 = (int *)(v85 + 4 * v38);
              v55 = v45 >> 1;
              v56 = 0LL;
              v57 = (char *)(v75 + 4 * v38);
              v58 = (_DWORD *)(v76 + 4 * v38);
              v59 = (unsigned __int64)(v43 - v57 + 3) >> 2;
              if ( v57 > v43 )
                v59 = 0LL;
              if ( v59 )
              {
                v60 = v48;
                while ( 1 )
                {
                  v61 = *v54;
                  if ( *v54 <= v60 )
                    break;
                  if ( v61 >= v51 )
                    goto LABEL_99;
                  v60 = v48;
                  v62 = v74 + (v55 + v53 * (*(_DWORD *)v57 - v79)) / v45;
LABEL_101:
                  *v58 = v62;
                  ++v54;
                  ++v58;
                  v57 += 4;
                  if ( ++v56 >= v59 )
                  {
                    v43 = (char *)(v75 + 4LL * v26);
                    goto LABEL_103;
                  }
                }
                if ( v61 < v51 )
                {
                  v62 = v83 + v61;
                  goto LABEL_101;
                }
LABEL_99:
                v62 = v52 + v61;
                goto LABEL_101;
              }
LABEL_103:
              if ( v57 != v43 )
              {
                v63 = v48;
                while ( 1 )
                {
                  v64 = *v54;
                  if ( *v54 <= v63 )
                    break;
                  if ( v64 >= v51 )
                    goto LABEL_109;
                  v63 = v48;
                  v65 = v74 + (v55 + v53 * (*(_DWORD *)v57 - v79)) / v45;
LABEL_111:
                  *v58 = v65;
                  v57 += 4;
                  ++v58;
                  ++v54;
                  if ( (unsigned __int64)v57 > v90 )
                  {
                    v57 = (char *)(v75 + 4 * v78);
                    v54 = (int *)(v85 + 4 * v78);
                    v58 = (_DWORD *)(v76 + 4 * v78);
                  }
                  if ( v57 == v43 )
                    goto LABEL_114;
                }
                if ( v64 < v51 )
                {
                  v65 = v83 + v64;
                  goto LABEL_111;
                }
LABEL_109:
                v65 = v52 + v64;
                goto LABEL_111;
              }
LABEL_114:
              v29 = v78;
LABEL_115:
              v21 = v95;
            }
            v28 = v86;
          }
          else
          {
            v26 = v38;
            if ( v32 != v39 )
            {
              do
              {
                v26 = v38 + 1;
                *(_DWORD *)(v76 + 4 * v32) += v49;
                v73 = v32 + 1;
                if ( v32 >= v28 )
                {
                  v73 = v29;
                  v26 = v21;
                }
                LODWORD(v38) = v26;
                v32 = v73;
              }
              while ( v73 != v39 );
            }
          }
          v27 = v94;
          v31 = v81;
          v25 = v82;
LABEL_118:
          if ( v26 == v88 )
          {
            v2 = v91;
            break;
          }
          continue;
        }
      }
      v8 = *(__int16 *)(v2 + 80);
      v9 = v89 + 1;
      ++v84;
      ++v89;
      if ( v84 >= v8 )
      {
        LOWORD(v7) = v93;
        break;
      }
    }
  }
  *(_WORD *)(qword_1C0327180 + 454) |= (v7 ^ 1) + 1;
  return a1;
}
