/*
 * XREFs of BuildShrinkAAInfo @ 0x1C0001E70
 * Callers:
 *     <none>
 * Callees:
 *     _ALIGN_MEM @ 0x1C00D2228 (_ALIGN_MEM.c)
 *     BuildRepData @ 0x1C0117040 (BuildRepData.c)
 */

_DWORD *BuildShrinkAAInfo(__int64 a1, __int16 a2, int *a3, int *a4, int a5, int a6, int a7, int *a8, int *a9, ...)
{
  int v9; // ecx
  unsigned int v10; // r14d
  int v11; // r12d
  int v13; // r15d
  unsigned int v14; // r11d
  unsigned int v15; // r8d
  int v16; // eax
  int v17; // ebp
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // esi
  unsigned int v21; // eax
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // r13
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rax
  int v30; // r10d
  unsigned int v31; // r11d
  bool v32; // cf
  int v33; // r10d
  _DWORD *v34; // rax
  _DWORD *v35; // rbx
  int *v36; // rdi
  __int64 v37; // rax
  int v38; // esi
  int v39; // r10d
  _DWORD *v40; // r8
  int *v41; // rcx
  int v42; // eax
  int v43; // edx
  int v44; // r9d
  _WORD *v45; // r8
  __int64 v46; // r11
  int v47; // r13d
  int v48; // edi
  __int64 v49; // r10
  int v50; // eax
  int v51; // ecx
  __int16 v52; // r14
  int v53; // eax
  __int16 v54; // r9
  int v55; // eax
  __int64 v56; // rdi
  int v57; // eax
  __int64 v58; // rcx
  int v59; // edi
  _WORD *v60; // r8
  _WORD *v61; // r9
  int v62; // edx
  int v63; // ecx
  __int16 v65; // ax
  unsigned __int64 v66; // rax
  unsigned int v67; // eax
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  int v74; // [rsp+20h] [rbp-88h]
  int v75; // [rsp+24h] [rbp-84h]
  int v76; // [rsp+28h] [rbp-80h]
  unsigned __int64 v77; // [rsp+30h] [rbp-78h] BYREF
  __int64 v78; // [rsp+38h] [rbp-70h] BYREF
  int v79; // [rsp+40h] [rbp-68h]
  int v80; // [rsp+44h] [rbp-64h]
  int v81; // [rsp+48h] [rbp-60h]
  int v82; // [rsp+4Ch] [rbp-5Ch]
  int v83; // [rsp+50h] [rbp-58h]
  int v84; // [rsp+54h] [rbp-54h]
  unsigned __int64 v85; // [rsp+58h] [rbp-50h]
  __int64 v86; // [rsp+60h] [rbp-48h]
  int v89; // [rsp+E0h] [rbp+38h]
  __int64 v90; // [rsp+F8h] [rbp+50h] BYREF
  va_list va; // [rsp+F8h] [rbp+50h]
  va_list va1; // [rsp+100h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v90 = va_arg(va1, _QWORD);
  v9 = *a4;
  v10 = 0;
  v11 = *a3;
  v81 = 0;
  v13 = 0;
  v82 = 0;
  if ( v9 < v11 || a7 <= a6 )
    return 0LL;
  v14 = a7 - a6;
  v74 = 0;
  v89 = a7 - a6;
  v15 = v9 - v11;
  v16 = 0;
  v79 = v9 - v11;
  if ( v11 >= 0 )
    v16 = v11;
  v84 = v16;
  if ( v9 > a5 )
    v9 = a5;
  v17 = -1;
  v80 = v9;
  v76 = *a8;
  v18 = *a8 - 1;
  v19 = *a9;
  v75 = *a9;
  if ( v18 >= *a9 )
    return 0LL;
  if ( v15 <= v14 )
    return 0LL;
  v20 = v19 - v18;
  v21 = v19 - v18 + 1;
  if ( v20 + 1 < v20 )
    return 0LL;
  v22 = v15;
  v23 = v15 * (unsigned __int64)v21;
  v86 = v15;
  if ( v23 > 0xFFFFFFFF )
    return 0LL;
  v24 = v23 + v14 - 1;
  if ( v24 < (unsigned int)v23 )
    return 0LL;
  v25 = v24 / v14;
  v26 = v24 / v14 + 4;
  if ( v25 + 4 < v25 )
    return 0LL;
  v27 = v15;
  if ( v26 <= v15 )
    v27 = v26;
  if ( (int)ALIGN_MEM(&v77, 2048LL) < 0 )
    return 0LL;
  if ( (int)v27 + 1 < (unsigned int)v27 )
    return 0LL;
  v29 = 2LL * (unsigned int)(v27 + 1);
  if ( v29 > v28 || (int)ALIGN_MEM(&v78, (unsigned int)v29) < 0 )
    return 0LL;
  v32 = (int)v78 + (int)v77 < (unsigned int)v78;
  if ( (int)v78 + (int)v77 >= (unsigned int)v78 )
    v30 = v78 + v77;
  LODWORD(v78) = v30;
  if ( v32 )
    return 0LL;
  v85 = ((unsigned __int64)v31 << 13) / v22;
  if ( (a2 & 0x4A80) != 0 )
  {
    if ( v20 + 4 < v20 )
      return 0LL;
    v66 = 2LL * (v20 + 4);
    if ( v66 > 0xFFFFFFFF || (int)ALIGN_MEM(&v77, (unsigned int)v66) < 0 )
      return 0LL;
    if ( (a2 & 0x200) != 0 )
      LODWORD(v78) = 0;
    v10 = v77;
  }
  if ( (int)ALIGN_MEM((__int64 *)va, (unsigned int)v90) >= 0
    && v10 + v33 >= v10
    && v10 + v33 + (unsigned int)v90 >= v10 + v33
    && v10 + v33 + (unsigned int)v90 + 240 >= v10 + v33 + (unsigned int)v90 )
  {
    v34 = EngAllocMem(1u, v10 + v33 + (unsigned int)v90 + 240, 0x35355448u);
    v35 = v34;
    if ( !v34 )
      return v35;
    v36 = v34 + 60;
    v37 = (unsigned int)v90;
    if ( (_DWORD)v90 )
    {
      *((_QWORD *)v35 + 4) = v36;
      v36 = (int *)((char *)v36 + v37);
    }
    if ( v10 )
    {
      v35[12] = v79;
      v35[13] = v89;
      v35[16] = v84;
      v35[17] = v80;
      v35[18] = v76;
      v35[19] = v75;
      v67 = v20 + 1;
      v38 = a6;
      *((_QWORD *)v35 + 11) = v36;
      *((_QWORD *)v35 + 12) = (char *)v36 + 2 * (int)v67;
      v36 = (int *)((char *)v36 + (int)v10);
      if ( !(unsigned int)BuildRepData(v35 + 12, (unsigned int)v11, (unsigned int)a6) )
      {
LABEL_98:
        EngFreeMem(v35);
        return 0LL;
      }
      v68 = *((_OWORD *)v35 + 4);
      *((_OWORD *)v35 + 7) = *((_OWORD *)v35 + 3);
      v69 = *((_OWORD *)v35 + 5);
      *((_OWORD *)v35 + 8) = v68;
      v70 = *((_OWORD *)v35 + 6);
      v13 = 0;
      *((_OWORD *)v35 + 9) = v69;
      *((_OWORD *)v35 + 10) = v70;
      v71 = *((_OWORD *)v35 + 8);
      *((_OWORD *)v35 + 11) = *((_OWORD *)v35 + 7);
      v72 = *((_OWORD *)v35 + 9);
      *((_OWORD *)v35 + 12) = v71;
      v73 = *((_OWORD *)v35 + 10);
      *((_OWORD *)v35 + 13) = v72;
      *((_OWORD *)v35 + 14) = v73;
    }
    else
    {
      v38 = a6;
    }
    if ( !(_DWORD)v78 )
    {
      v62 = v35[17] - 1;
      v17 = v35[16];
      v63 = v35[19] - 1;
      v13 = v35[18];
LABEL_74:
      *a3 = v17;
      *a4 = v62;
      *a8 = v13;
      *a9 = v63;
      *v35 = v62 - v17 + 1;
      v35[1] = v63 - v13 + 1;
      return v35;
    }
    v39 = v85;
    v40 = v36 + 512;
    *((_QWORD *)v35 + 3) = v36;
    *((_WORD *)v35 + 6) = 1;
    v41 = v36 + 256;
    *((_QWORD *)v35 + 5) = v36 + 512;
    v77 = (unsigned __int64)v36 + 2 * v27 + 2048;
    v42 = -v39;
    v43 = ~v39;
    do
    {
      v42 += v39;
      v43 += v39 + 1;
      *v36 = v42;
      v36[256] = v43;
      ++v36;
    }
    while ( v36 < v41 );
    v44 = v79;
    v45 = (_WORD *)v40 - 1;
    v78 = 0LL;
    LOWORD(v46) = 0;
    v47 = v79;
    v48 = v79;
    if ( v79 )
    {
      while ( 1 )
      {
        LODWORD(v49) = v89;
        --v47;
        v50 = v38 + 1;
        v51 = v48 - v89;
        v52 = 0x4000;
        if ( v48 - v89 <= 0 )
          LODWORD(v49) = v48;
        else
          v50 = v38;
        v38 = v50;
        v53 = v51 + v44;
        if ( v51 > 0 )
        {
          v53 = v48 - v89;
          v52 = 0;
        }
        v83 = v53;
        v54 = v52;
        v55 = v89 - v48;
        if ( v51 > 0 )
          v55 = v43;
        v43 = v55;
        v56 = v55;
        v57 = v75;
        if ( v38 >= v76 - 2 && v38 <= v75 )
        {
          v58 = (__int64)(int)v49 << 13;
          v49 = (v58 + v78) / v86;
          v78 = (v58 + v78) % v86;
          v43 = v56;
          v54 = v52 | 0x8000;
          if ( (int)v49 <= (int)v85 )
            v54 = v52;
          LOWORD(v46) = v49 + v46;
          if ( (v54 & 0x4000) != 0 )
          {
            v78 = (v56 << 13) % v86;
            v46 = (v56 << 13) / v86;
            if ( (int)v49 + (int)v46 > (int)v85 )
              v54 |= 0x8000u;
            else
              v54 &= ~0x8000u;
            v43 = 0;
          }
          v57 = v75;
        }
        if ( v38 >= v76 - 1 && v38 <= v57 )
          break;
        if ( v17 != -1 )
        {
          v81 = v11;
          if ( (unsigned __int64)(v45 + 1) < v77 )
            ++v45;
          *v45 = (0x2000 - v46) | 0x4000;
LABEL_82:
          v47 = 0;
          ++v74;
        }
LABEL_61:
        v44 = v79;
        ++v11;
        v48 = v83;
        if ( !v47 )
          goto LABEL_62;
      }
      if ( v11 < v84 || v11 >= v80 )
      {
        if ( v17 == -1 )
          goto LABEL_61;
        if ( (unsigned __int64)(v45 + 1) < v77 )
          ++v45;
        if ( (v54 & 0x4000) == 0 )
          LOWORD(v49) = 0x2000 - v46 + v49;
        *v45 = v54 | v49 | 0x4000;
        goto LABEL_82;
      }
      v59 = ((v54 & 0x4000) != 0) + v74;
      v74 = v59;
      if ( (unsigned __int64)(v45 + 1) < v77 )
        ++v45;
      *v45 = v54 | v49;
      if ( v17 != -1 )
      {
        v82 = v38;
LABEL_60:
        v81 = v11;
        goto LABEL_61;
      }
      v17 = v11;
      v13 = v38;
      if ( (v54 & 0x4000) != 0 )
      {
        if ( v38 == v76 - 1 )
        {
          *((_WORD *)v35 + 7) = v46;
          *((_WORD *)v35 + 5) = 1;
          v74 = v59 - 1;
          --v45;
LABEL_87:
          v82 = v13;
          goto LABEL_60;
        }
        v65 = 0x2000 - v49;
        v13 = v38 - 1;
      }
      else
      {
        v65 = v46 - v49;
      }
      *((_WORD *)v35 + 7) = v65;
      goto LABEL_87;
    }
LABEL_62:
    v60 = v45 + 1;
    if ( v17 != -1 )
    {
      v61 = (_WORD *)*((_QWORD *)v35 + 5);
      if ( v60 != v61 )
      {
        v62 = v80 - 1;
        if ( v81 < v80 )
          v62 = v81;
        if ( v13 < v76 )
        {
          ++*((_WORD *)v35 + 6);
          v13 = v76;
        }
        v63 = v75 - 1;
        if ( v82 < v75 )
          v63 = v82;
        if ( *((_WORD *)v35 + 5) )
        {
          if ( !*((_WORD *)v35 + 7) )
          {
            *((_WORD *)v35 + 5) = 0;
            ++v17;
          }
        }
        v35[4] = v60 - v61;
        v35[5] = v74;
        *v60 = 0;
        goto LABEL_74;
      }
    }
    goto LABEL_98;
  }
  return 0LL;
}
