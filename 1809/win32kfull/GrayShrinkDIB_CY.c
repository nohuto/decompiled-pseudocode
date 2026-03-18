/*
 * XREFs of GrayShrinkDIB_CY @ 0x1C024E1D0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C0008FDC (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C024A3E0 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C024E8D4 (MappingBGRF.c)
 */

__int64 __fastcall GrayShrinkDIB_CY(_OWORD *a1)
{
  __int64 v1; // rax
  int *v2; // rdx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rdx
  int *v16; // r13
  int v17; // r8d
  size_t v18; // r15
  char *v19; // rsi
  char *v20; // rbx
  char *v21; // r14
  char *v22; // r12
  int v23; // ecx
  int *v24; // rcx
  int v25; // eax
  char *v26; // rdi
  void *FixupScan; // rax
  char *v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // r12d
  int v31; // eax
  int v32; // edx
  unsigned __int8 *v33; // rdi
  void *v34; // rax
  char *v35; // r15
  _DWORD *v36; // r9
  __int16 v37; // ax
  int v38; // r10d
  int v39; // edx
  int *v40; // rcx
  int v41; // r8d
  int v42; // eax
  int v43; // eax
  __int64 v44; // rax
  _WORD *v45; // r8
  char *v46; // rbx
  __int64 v47; // r10
  _DWORD *v48; // r11
  __int64 v49; // rdx
  __int64 v50; // rax
  __int16 v51; // ax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 i; // rcx
  __int64 v55; // rdx
  __int64 v56; // rax
  _WORD *v57; // rdx
  char *v58; // r8
  signed __int64 v59; // rsi
  int v60; // ecx
  __int16 v61; // ax
  __int64 v62; // rax
  int v64; // [rsp+58h] [rbp-B0h]
  int v65; // [rsp+5Ch] [rbp-ACh]
  int v66; // [rsp+60h] [rbp-A8h]
  size_t Size; // [rsp+68h] [rbp-A0h]
  char *v68; // [rsp+70h] [rbp-98h]
  unsigned __int8 *v69; // [rsp+78h] [rbp-90h]
  __int16 *v70; // [rsp+80h] [rbp-88h]
  __int64 v71; // [rsp+88h] [rbp-80h]
  char *v72; // [rsp+90h] [rbp-78h]
  char *v73; // [rsp+98h] [rbp-70h]
  char *v74; // [rsp+A0h] [rbp-68h]
  int v75[34]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v76; // [rsp+130h] [rbp+28h]
  int v77; // [rsp+138h] [rbp+30h]
  int v78; // [rsp+144h] [rbp+3Ch]
  void (__fastcall *v79)(int *, __int64, _WORD *); // [rsp+168h] [rbp+60h]
  void (__fastcall *v80)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B8h] [rbp+B0h]
  __int64 v81; // [rsp+1C0h] [rbp+B8h]
  void (__fastcall *v82)(__int64, void *, char *, char *, int); // [rsp+1C8h] [rbp+C0h]
  __int64 v83; // [rsp+1D8h] [rbp+D0h]
  __int64 v84; // [rsp+1E0h] [rbp+D8h]
  __int64 v85; // [rsp+1E8h] [rbp+E0h]
  __int64 v86; // [rsp+228h] [rbp+120h]
  __int64 v87; // [rsp+230h] [rbp+128h]
  __int64 v88; // [rsp+240h] [rbp+138h]
  __int64 v89; // [rsp+248h] [rbp+140h]
  __int64 v90; // [rsp+250h] [rbp+148h]
  int v91; // [rsp+258h] [rbp+150h]
  int v92; // [rsp+25Ch] [rbp+154h]
  int v93; // [rsp+260h] [rbp+158h]
  __int64 v94; // [rsp+268h] [rbp+160h]
  __int64 v95; // [rsp+270h] [rbp+168h]
  __int64 v96; // [rsp+278h] [rbp+170h]
  int v97; // [rsp+280h] [rbp+178h]
  void *v98; // [rsp+2C0h] [rbp+1B8h]
  __int64 v99; // [rsp+2C8h] [rbp+1C0h]
  __int64 v100; // [rsp+2D0h] [rbp+1C8h]
  __int64 v101; // [rsp+2D8h] [rbp+1D0h]
  __int64 v102; // [rsp+2E0h] [rbp+1D8h]
  _WORD *v103; // [rsp+2E8h] [rbp+1E0h]
  int v104; // [rsp+2F8h] [rbp+1F0h]

  v1 = 4LL;
  v2 = v75;
  do
  {
    v3 = a1[1];
    *(_OWORD *)v2 = *a1;
    v4 = a1[2];
    *((_OWORD *)v2 + 1) = v3;
    v5 = a1[3];
    *((_OWORD *)v2 + 2) = v4;
    v6 = a1[4];
    *((_OWORD *)v2 + 3) = v5;
    v7 = a1[5];
    *((_OWORD *)v2 + 4) = v6;
    v8 = a1[6];
    *((_OWORD *)v2 + 5) = v7;
    v9 = a1[7];
    a1 += 8;
    *((_OWORD *)v2 + 6) = v8;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v9;
    --v1;
  }
  while ( v1 );
  v10 = *((_QWORD *)a1 + 10);
  v11 = a1[1];
  *(_OWORD *)v2 = *a1;
  v12 = a1[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = a1[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = a1[4];
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v10;
  v15 = v84;
  v16 = *(int **)(v84 + 32);
  v17 = *(unsigned __int16 *)(v84 + 14);
  v71 = *(_QWORD *)(v84 + 24);
  v18 = 4 * v77;
  v19 = (char *)(v16 + 512);
  Size = v18;
  v72 = (char *)(v16 + 512);
  v20 = (char *)v16 + v18 + 2048;
  v21 = &v20[v18];
  v73 = v20;
  v22 = &v20[v18 + v18];
  v74 = &v20[v18];
  v69 = (unsigned __int8 *)v22;
  v23 = 0;
  v68 = &v22[v77];
  if ( v17 )
  {
    v24 = v16;
    v25 = -v17;
    do
    {
      v25 += v17;
      *v24++ = v25;
    }
    while ( v24 < v16 + 256 );
    v26 = &v20[v18 + v18];
    FixupScan = GetFixupScan((__int64)v75, v98);
    v82(v83, FixupScan, v26, v68, 1);
    v28 = &v20[v18];
    do
    {
      v29 = (unsigned __int8)*v26++;
      *(_DWORD *)v28 = v16[v29];
      v28 += 4;
    }
    while ( v28 < v22 );
    v15 = v84;
    v23 = 0;
    if ( !*(_WORD *)(v84 + 10) )
      v75[0] |= 0x20u;
  }
  v30 = 0;
  v70 = *(__int16 **)(v15 + 40);
  v31 = *(unsigned __int16 *)(v15 + 12);
  v32 = *(_DWORD *)(v15 + 16);
  v64 = v31;
  if ( v32 )
  {
    LOBYTE(v23) = v31 == 1;
    v65 = v23;
    do
    {
      v33 = v69;
      v66 = v32 - 1;
      v34 = GetFixupScan((__int64)v75, v98);
      v82(v83, v34, (char *)v69, v68, 1);
      v35 = &v21[v18];
      v36 = v21;
      v37 = *v70++;
      if ( (v37 & 0x4000) != 0 )
      {
        v38 = v37 & 0x3FFF;
        v39 = -v38;
        v40 = v16;
        v41 = *(_DWORD *)(v71 + 4) + ((v37 >> 15) & 1) - v38;
        v42 = v38 - (*(_DWORD *)(v71 + 4) + ((v37 >> 15) & 1));
        do
        {
          v39 += v38;
          v42 += v41;
          *v40 = v39;
          v40[256] = v42;
          ++v40;
        }
        while ( v40 < v16 + 256 );
        v43 = v64--;
        if ( v43 <= 0 )
        {
          v45 = v103;
          v46 = (char *)(v20 - v19);
          v47 = v19 - v21;
          do
          {
            v48 = (_DWORD *)((char *)v36 + v47);
            *v36 += v16[*v33];
            v49 = (unsigned int)((6 * *(_DWORD *)((char *)v36 + v47 + (_QWORD)v46)
                                - *v36
                                - *(_DWORD *)((char *)v36 + v47)) >> 7);
            if ( (v49 & 0xFF0000) != 0 )
              v49 = ~WORD1(v49);
            *v45 = v49;
            ++v36;
            v45 = (_WORD *)((char *)v45 + v104);
            v50 = *v33++;
            *v48 = v16[v50 + 256];
          }
          while ( v36 < (_DWORD *)v35 );
          v51 = v75[0];
          if ( SLOBYTE(v75[0]) < 0 )
          {
            v79(v75, v49, v45);
            v51 = v75[0];
          }
          if ( (v51 & 0x800) != 0 )
          {
            AlphaBlendBGRF(v75);
            LOBYTE(v51) = v75[0];
          }
          if ( (v51 & 0x10) != 0 )
          {
            MappingBGRF(v99, v100, v87, v94);
            v52 = v97 + v94;
            if ( v52 == v95 )
              v52 = v96;
            v94 = v52;
          }
          v80(v75, v101, v102, v76, v86, v88, v88 + v92, v93, v81);
          v53 = v91 + v88;
          if ( v53 == v89 )
            v53 = v90;
          v76 += v78;
          ++v30;
          v88 = v53;
        }
        else
        {
          do
          {
            *v36 += v16[*v33];
            v44 = *v33++;
            *(_DWORD *)((char *)v36++ + v19 - v21) = v16[v44 + 256];
          }
          while ( v36 < (_DWORD *)v35 );
          if ( v65 )
          {
            memmove(v20, v21, Size);
            v65 = 0;
          }
        }
        v21 = v19;
        for ( i = 0LL; i < 2; ++i )
          (&v72)[i] = (&v73)[i];
        v20 = v73;
        v74 = v19;
        v19 = v72;
      }
      else
      {
        v55 = v71 + (((unsigned __int64)(unsigned __int16)v37 >> 5) & 0x400);
        do
        {
          v56 = *v33++;
          *v36++ += *(_DWORD *)(v55 + 4 * v56);
        }
        while ( v36 < (_DWORD *)v35 );
      }
      v32 = v66;
      v18 = Size;
    }
    while ( v66 );
  }
  if ( v76 != v85 )
  {
    v57 = v103;
    v58 = &v20[v18];
    v59 = v19 - v20;
    do
    {
      v60 = (5 * *(_DWORD *)v20 - *(_DWORD *)&v20[v59]) >> 7;
      if ( (v60 & 0xFF0000) != 0 )
        LOWORD(v60) = ~HIWORD(v60);
      *v57 = v60;
      v20 += 4;
      v57 = (_WORD *)((char *)v57 + v104);
    }
    while ( v20 < v58 );
    v61 = v75[0];
    if ( SLOBYTE(v75[0]) < 0 )
    {
      ((void (__fastcall *)(int *, _WORD *))v79)(v75, v57);
      v61 = v75[0];
    }
    if ( (v61 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v75);
      LOBYTE(v61) = v75[0];
    }
    if ( (v61 & 0x10) != 0 )
    {
      MappingBGRF(v99, v100, v87, v94);
      v62 = v97 + v94;
      if ( v62 == v95 )
        v62 = v96;
      v94 = v62;
    }
    v80(v75, v101, v102, v76, v86, v88, v88 + v92, v93, v81);
    ++v30;
  }
  return v30;
}
