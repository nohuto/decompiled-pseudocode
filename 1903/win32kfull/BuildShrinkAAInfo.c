/*
 * XREFs of BuildShrinkAAInfo @ 0x1C0002200
 * Callers:
 *     <none>
 * Callees:
 *     _ALIGN_MEM @ 0x1C0038A60 (_ALIGN_MEM.c)
 *     BuildRepData @ 0x1C00F2060 (BuildRepData.c)
 */

_DWORD *BuildShrinkAAInfo(__int64 a1, __int64 a2, int *a3, int *a4, int a5, int a6, int a7, int *a8, int *a9, ...)
{
  int v9; // eax
  int v10; // ecx
  int v11; // r15d
  unsigned int v12; // r14d
  unsigned int v13; // r12d
  int v14; // edx
  int v15; // r13d
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ebp
  unsigned int v19; // eax
  unsigned __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // r10d
  unsigned int v24; // r10d
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int16 v27; // r11
  unsigned int v28; // ecx
  unsigned int v29; // esi
  int v30; // r10d
  unsigned int v31; // eax
  unsigned int v32; // ecx
  _DWORD *v33; // rax
  _DWORD *v34; // rbx
  int *v35; // rdi
  __int16 v36; // r10
  __int64 v37; // rax
  int v38; // esi
  int v39; // r9d
  _DWORD *v40; // r8
  int *v41; // rcx
  __int64 v42; // rax
  int v43; // ebp
  int v44; // eax
  _WORD *v45; // r8
  __int16 v46; // r11
  unsigned int v47; // eax
  int v48; // edi
  int v49; // edx
  int v50; // ecx
  int v51; // ecx
  __int64 v52; // r9
  int v53; // edx
  int v54; // ecx
  __int64 v55; // rdx
  __int16 v56; // r11
  __int64 v57; // rax
  _WORD *v58; // r8
  _WORD *v59; // r9
  int v60; // r10d
  int v61; // edx
  int v62; // eax
  int v63; // ecx
  int v65; // ecx
  __int16 v66; // ax
  __int64 v67; // rcx
  unsigned __int64 v68; // rcx
  __int16 v69; // r11
  __int64 v70; // rax
  int v71; // eax
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  unsigned int v78; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v79; // [rsp+24h] [rbp-84h] BYREF
  int v80; // [rsp+28h] [rbp-80h]
  int v81; // [rsp+2Ch] [rbp-7Ch]
  __int64 v82; // [rsp+30h] [rbp-78h]
  int v83; // [rsp+38h] [rbp-70h]
  int v84; // [rsp+3Ch] [rbp-6Ch]
  int v85; // [rsp+40h] [rbp-68h]
  int v86; // [rsp+44h] [rbp-64h]
  unsigned int v87; // [rsp+48h] [rbp-60h]
  __int64 v88; // [rsp+50h] [rbp-58h]
  int v89; // [rsp+58h] [rbp-50h]
  int v90; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v91; // [rsp+60h] [rbp-48h]
  unsigned __int64 v92; // [rsp+68h] [rbp-40h]
  int v95; // [rsp+D8h] [rbp+30h]
  __int64 v96; // [rsp+F8h] [rbp+50h] BYREF
  va_list va; // [rsp+F8h] [rbp+50h]
  va_list va1; // [rsp+100h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v96 = va_arg(va1, _QWORD);
  v9 = *a3;
  v10 = *a4;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  LODWORD(v82) = v9;
  if ( v10 < v9 )
    return 0LL;
  v11 = a6;
  if ( a7 <= a6 )
    return 0LL;
  v95 = 0;
  v12 = v10 - v9;
  v13 = a7 - v11;
  LODWORD(v88) = v10 - v9;
  v14 = 0;
  if ( v9 >= 0 )
    v14 = v9;
  if ( v10 > a5 )
    v10 = a5;
  v15 = -1;
  v83 = v10;
  v89 = v14;
  v90 = *a8;
  v16 = v90 - 1;
  v81 = v90 - 1;
  v17 = *a9;
  v80 = v17;
  if ( v90 - 1 >= v17 )
    return 0LL;
  if ( v12 <= v13 )
    return 0LL;
  v18 = v17 - v16;
  v19 = v17 - v16 + 1;
  if ( v18 + 1 < v18 )
    return 0LL;
  v20 = v12 * (unsigned __int64)v19;
  if ( v20 > 0xFFFFFFFF )
    return 0LL;
  v21 = v20 + v13 - 1;
  if ( v21 < (unsigned int)v20 )
    return 0LL;
  v22 = v21 / v13;
  if ( v22 + 4 < v22 )
    return 0LL;
  v23 = v12;
  if ( v22 + 4 <= v12 )
    v23 = v22 + 4;
  v87 = v23;
  if ( (int)ALIGN_MEM(&v78, 2048LL) < 0 )
    return 0LL;
  v25 = v24 + 1;
  if ( (unsigned int)v25 < v24 )
    return 0LL;
  v26 = 2 * v25;
  if ( v26 > 0xFFFFFFFF )
    return 0LL;
  if ( (int)ALIGN_MEM(&v79, (unsigned int)v26) < 0 )
    return 0LL;
  v28 = v79;
  v79 += v78;
  if ( v79 < v28 )
    return 0LL;
  v91 = ((unsigned __int64)v13 << 13) / v12;
  if ( (v27 & 0x4A80) != 0 )
  {
    v67 = v18 + 4;
    if ( (unsigned int)v67 < v18 )
      return 0LL;
    v68 = 2 * v67;
    if ( v68 > 0xFFFFFFFF || (int)ALIGN_MEM(&v78, (unsigned int)v68) < 0 )
      return 0LL;
    v29 = v78;
    if ( (v69 & 0x200) != 0 )
      v79 = 0;
  }
  else
  {
    v29 = 0;
  }
  if ( (int)ALIGN_MEM((__int64 *)va, (unsigned int)v96) >= 0 )
  {
    v31 = v29 + v30;
    if ( v29 + v30 >= v29 )
    {
      v32 = v31 + v96;
      if ( v31 + (unsigned int)v96 >= v31 && v32 + 240 >= v32 )
      {
        v33 = EngAllocMem(1u, v32 + 240, 0x35355448u);
        v34 = v33;
        if ( !v33 )
          return v34;
        v35 = v33 + 60;
        v36 = 0;
        v37 = (unsigned int)v96;
        if ( (_DWORD)v96 )
        {
          *((_QWORD *)v34 + 4) = v35;
          v35 = (int *)((char *)v35 + v37);
        }
        if ( v29 )
        {
          v34[12] = v88;
          v34[16] = v89;
          v34[17] = v83;
          v34[18] = v90;
          v34[19] = v80;
          *((_QWORD *)v34 + 11) = v35;
          v34[13] = v13;
          *((_QWORD *)v34 + 12) = (char *)v35 + 2 * (int)(v18 + 1);
          v70 = (int)v29;
          v38 = v82;
          v35 = (int *)((char *)v35 + v70);
          v71 = BuildRepData(v34 + 12, (unsigned int)v82, (unsigned int)v11);
          v36 = 0;
          if ( !v71 )
          {
LABEL_97:
            EngFreeMem(v34);
            return 0LL;
          }
          v72 = *((_OWORD *)v34 + 4);
          *((_OWORD *)v34 + 7) = *((_OWORD *)v34 + 3);
          v73 = *((_OWORD *)v34 + 5);
          *((_OWORD *)v34 + 8) = v72;
          v74 = *((_OWORD *)v34 + 6);
          v12 = v88;
          *((_OWORD *)v34 + 9) = v73;
          *((_OWORD *)v34 + 10) = v74;
          v75 = *((_OWORD *)v34 + 8);
          *((_OWORD *)v34 + 11) = *((_OWORD *)v34 + 7);
          v76 = *((_OWORD *)v34 + 9);
          *((_OWORD *)v34 + 12) = v75;
          v77 = *((_OWORD *)v34 + 10);
          *((_OWORD *)v34 + 13) = v76;
          *((_OWORD *)v34 + 14) = v77;
        }
        else
        {
          v38 = v82;
        }
        if ( !v79 )
        {
          v61 = v34[17] - 1;
          v15 = v34[16];
          v63 = v34[19] - 1;
          v60 = v34[18];
LABEL_69:
          *a3 = v15;
          *a4 = v61;
          *a8 = v60;
          *a9 = v63;
          *v34 = v61 - v15 + 1;
          v34[1] = v63 - v60 + 1;
          return v34;
        }
        v39 = v91;
        v40 = v35 + 512;
        *((_QWORD *)v34 + 3) = v35;
        *((_WORD *)v34 + 6) = 1;
        v41 = v35 + 256;
        v42 = v87;
        *((_QWORD *)v34 + 5) = v35 + 512;
        v43 = ~v39;
        v92 = (unsigned __int64)v35 + 2 * v42 + 2048;
        v44 = -v39;
        do
        {
          v44 += v39;
          v43 += v39 + 1;
          *v35 = v44;
          v35[256] = v43;
          ++v35;
        }
        while ( v35 < v41 );
        v45 = (_WORD *)v40 - 1;
        v88 = 0LL;
        v46 = 0;
        v47 = v12;
        v82 = 0LL;
        v48 = v12;
        if ( v12 )
        {
          v49 = -v12;
          v87 = -v12;
          v50 = -v12;
          do
          {
            --v47;
            v51 = v13 + v50;
            LODWORD(v52) = v48;
            v78 = v47;
            v48 -= v13;
            v79 = v51;
            if ( v48 > 0 )
            {
              LODWORD(v52) = v13;
            }
            else
            {
              v43 = v51;
              v48 += v12;
              v36 = 0x4000;
              v79 = v49 + v51;
              ++v11;
            }
            v53 = v81;
            v54 = v80;
            if ( v11 >= v81 - 1 && v11 <= v80 )
            {
              v55 = (((__int64)(int)v52 << 13) + v88) % v12;
              v52 = (((__int64)(int)v52 << 13) + v88) / v12;
              v88 = v55;
              v56 = v36 | 0x8000;
              if ( (int)v52 <= (int)v91 )
                v56 = v36;
              v82 = (unsigned int)(v52 + v82);
              v36 = v56;
              if ( (v56 & 0x4000) != 0 )
              {
                v57 = v43;
                v43 = 0;
                v88 = (v57 << 13) % v12;
                v82 = (v57 << 13) / v12;
                v36 = v56 | 0x8000;
                if ( (int)v82 + (int)v52 <= (int)v91 )
                  v36 = v56 & 0x7FFF;
              }
              v53 = v81;
              v54 = v80;
              v46 = v82;
              v47 = v78;
            }
            if ( v11 < v53 || v11 > v54 )
            {
              if ( v15 != -1 )
              {
                v84 = v38;
                if ( (unsigned __int64)(v45 + 1) < v92 )
                  ++v45;
                *v45 = (0x2000 - v46) | 0x4000;
                goto LABEL_76;
              }
            }
            else
            {
              if ( v38 >= v89 && v38 < v83 )
              {
                v95 += (v36 & 0x4000) != 0;
                if ( (unsigned __int64)(v45 + 1) < v92 )
                  ++v45;
                *v45 = v36 | v52;
                if ( v15 != -1 )
                {
                  v86 = v11;
LABEL_54:
                  v47 = v78;
                  v84 = v38;
                  goto LABEL_55;
                }
                v65 = v11;
                v15 = v38;
                v85 = v11;
                if ( (v36 & 0x4000) != 0 )
                {
                  if ( v11 == v81 )
                  {
                    *((_WORD *)v34 + 7) = v46;
                    *((_WORD *)v34 + 5) = 1;
                    --v95;
                    --v45;
LABEL_80:
                    v86 = v65;
                    goto LABEL_54;
                  }
                  v65 = v11 - 1;
                  v66 = 0x2000;
                  v85 = v11 - 1;
                }
                else
                {
                  v66 = v46;
                }
                *((_WORD *)v34 + 7) = v66 - v52;
                goto LABEL_80;
              }
              if ( v15 != -1 )
              {
                if ( (unsigned __int64)(v45 + 1) < v92 )
                  ++v45;
                if ( (v36 & 0x4000) == 0 )
                  LOWORD(v52) = 0x2000 - v46 + v52;
                *v45 = v36 | v52 | 0x4000;
LABEL_76:
                v36 = 0;
                v47 = 0;
                ++v95;
                goto LABEL_56;
              }
            }
LABEL_55:
            v36 = 0;
LABEL_56:
            v49 = v87;
            ++v38;
            v50 = v79;
          }
          while ( v47 );
        }
        v58 = v45 + 1;
        if ( v15 != -1 )
        {
          v59 = (_WORD *)*((_QWORD *)v34 + 5);
          if ( v58 != v59 )
          {
            v60 = v85;
            v61 = v83 - 1;
            v62 = v90;
            if ( v84 < v83 )
              v61 = v84;
            if ( v85 < v90 )
            {
              ++*((_WORD *)v34 + 6);
              v60 = v62;
            }
            v63 = v80 - 1;
            if ( v86 < v80 )
              v63 = v86;
            if ( *((_WORD *)v34 + 5) )
            {
              if ( !*((_WORD *)v34 + 7) )
              {
                *((_WORD *)v34 + 5) = 0;
                ++v15;
              }
            }
            v34[4] = v58 - v59;
            v34[5] = v95;
            *v58 = 0;
            goto LABEL_69;
          }
        }
        goto LABEL_97;
      }
    }
  }
  return 0LL;
}
