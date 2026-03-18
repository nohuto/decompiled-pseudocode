/*
 * XREFs of GrayShrinkDIB_CY @ 0x1C0238C40
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00D5270 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0234D70 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0239330 (MappingBGRF.c)
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
  size_t v18; // r12
  char *v19; // rsi
  char *v20; // rbx
  char *v21; // r14
  char *v22; // r15
  int v23; // ecx
  int *v24; // rcx
  int v25; // eax
  char *v26; // rdi
  __int64 FixupScan; // rax
  char *v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // r15d
  int v31; // eax
  int v32; // edx
  unsigned __int8 *v33; // rdi
  __int64 v34; // rax
  char *v35; // r12
  _DWORD *v36; // r9
  __int16 v37; // ax
  int v38; // r10d
  int v39; // edx
  int *v40; // rcx
  int v41; // r8d
  int v42; // eax
  int v43; // eax
  int v44; // eax
  _WORD *v45; // r8
  char *v46; // rbx
  __int64 v47; // r10
  _DWORD *v48; // r11
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rax
  __int16 v52; // ax
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 i; // rcx
  __int64 v56; // rdx
  __int64 v57; // rax
  _WORD *v58; // rdx
  char *v59; // r8
  signed __int64 v60; // rsi
  int v61; // eax
  __int16 v62; // ax
  __int64 v63; // rax
  int v65; // [rsp+58h] [rbp-B0h]
  int v66; // [rsp+5Ch] [rbp-ACh]
  int v67; // [rsp+60h] [rbp-A8h]
  size_t Size; // [rsp+68h] [rbp-A0h]
  char *v69; // [rsp+70h] [rbp-98h]
  unsigned __int8 *v70; // [rsp+78h] [rbp-90h]
  __int16 *v71; // [rsp+80h] [rbp-88h]
  __int64 v72; // [rsp+88h] [rbp-80h]
  char *v73; // [rsp+90h] [rbp-78h]
  char *v74; // [rsp+98h] [rbp-70h]
  char *v75; // [rsp+A0h] [rbp-68h]
  int v76[34]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v77; // [rsp+130h] [rbp+28h]
  int v78; // [rsp+138h] [rbp+30h]
  int v79; // [rsp+144h] [rbp+3Ch]
  void (__fastcall *v80)(int *, __int64, _WORD *); // [rsp+168h] [rbp+60h]
  void (__fastcall *v81)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B8h] [rbp+B0h]
  __int64 v82; // [rsp+1C0h] [rbp+B8h]
  void (__fastcall *v83)(__int64, __int64, char *, char *, int); // [rsp+1C8h] [rbp+C0h]
  __int64 v84; // [rsp+1D8h] [rbp+D0h]
  __int64 v85; // [rsp+1E0h] [rbp+D8h]
  __int64 v86; // [rsp+1E8h] [rbp+E0h]
  __int64 v87; // [rsp+228h] [rbp+120h]
  __int64 v88; // [rsp+230h] [rbp+128h]
  __int64 v89; // [rsp+240h] [rbp+138h]
  __int64 v90; // [rsp+248h] [rbp+140h]
  __int64 v91; // [rsp+250h] [rbp+148h]
  int v92; // [rsp+258h] [rbp+150h]
  int v93; // [rsp+25Ch] [rbp+154h]
  int v94; // [rsp+260h] [rbp+158h]
  __int64 v95; // [rsp+268h] [rbp+160h]
  __int64 v96; // [rsp+270h] [rbp+168h]
  __int64 v97; // [rsp+278h] [rbp+170h]
  int v98; // [rsp+280h] [rbp+178h]
  __int64 v99; // [rsp+2C0h] [rbp+1B8h]
  __int64 v100; // [rsp+2C8h] [rbp+1C0h]
  __int64 v101; // [rsp+2D0h] [rbp+1C8h]
  __int64 v102; // [rsp+2D8h] [rbp+1D0h]
  __int64 v103; // [rsp+2E0h] [rbp+1D8h]
  _WORD *v104; // [rsp+2E8h] [rbp+1E0h]
  int v105; // [rsp+2F8h] [rbp+1F0h]

  v1 = 4LL;
  v2 = v76;
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
  v15 = v85;
  v16 = *(int **)(v85 + 32);
  v17 = *(unsigned __int16 *)(v85 + 14);
  v72 = *(_QWORD *)(v85 + 24);
  v18 = 4 * v78;
  v19 = (char *)(v16 + 512);
  Size = v18;
  v73 = (char *)(v16 + 512);
  v20 = (char *)v16 + v18 + 2048;
  v21 = &v20[v18];
  v74 = v20;
  v22 = &v20[v18 + v18];
  v75 = &v20[v18];
  v70 = (unsigned __int8 *)v22;
  v23 = 0;
  v69 = &v22[v78];
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
    FixupScan = GetFixupScan((unsigned int *)v76, v99);
    v83(v84, FixupScan, v26, v69, 1);
    v28 = &v20[v18];
    do
    {
      v29 = (unsigned __int8)*v26++;
      *(_DWORD *)v28 = v16[v29];
      v28 += 4;
    }
    while ( v28 < v22 );
    v15 = v85;
    v23 = 0;
    if ( !*(_WORD *)(v85 + 10) )
      v76[0] |= 0x20u;
  }
  v30 = 0;
  v71 = *(__int16 **)(v15 + 40);
  v31 = *(unsigned __int16 *)(v15 + 12);
  v32 = *(_DWORD *)(v15 + 16);
  v65 = v31;
  if ( v32 )
  {
    LOBYTE(v23) = v31 == 1;
    v66 = v23;
    do
    {
      v33 = v70;
      v67 = v32 - 1;
      v34 = GetFixupScan((unsigned int *)v76, v99);
      v83(v84, v34, (char *)v70, v69, 1);
      v35 = &v21[v18];
      v36 = v21;
      v37 = *v71++;
      if ( (v37 & 0x4000) != 0 )
      {
        v38 = v37 & 0x3FFF;
        v39 = -v38;
        v40 = v16;
        v41 = *(_DWORD *)(v72 + 4) + ((v37 >> 15) & 1) - v38;
        v42 = v38 - (*(_DWORD *)(v72 + 4) + ((v37 >> 15) & 1));
        do
        {
          v39 += v38;
          v42 += v41;
          *v40 = v39;
          v40[256] = v42;
          ++v40;
        }
        while ( v40 < v16 + 256 );
        v43 = v65--;
        if ( v43 <= 0 )
        {
          v45 = v104;
          v46 = (char *)(v20 - v19);
          v47 = v19 - v21;
          do
          {
            v48 = (_DWORD *)((char *)v36 + v47);
            *v36 += v16[*v33];
            v49 = (unsigned int)(6 * *(_DWORD *)((char *)v36 + v47 + (_QWORD)v46) - *v36 - *(_DWORD *)((char *)v36 + v47));
            v50 = (6 * *(_DWORD *)((char *)v36 + v47 + (_QWORD)v46) - *v36 - *(_DWORD *)((char *)v36 + v47)) >> 7;
            if ( (v49 & 0x7F800000) != 0 )
              LOWORD(v50) = ~HIWORD(v50);
            *v45 = v50;
            ++v36;
            v45 = (_WORD *)((char *)v45 + v105);
            v51 = (unsigned int)*v33++ + 256;
            *v48 = v16[v51];
          }
          while ( v36 < (_DWORD *)v35 );
          v52 = v76[0];
          if ( SLOBYTE(v76[0]) < 0 )
          {
            v80(v76, v49, v45);
            v52 = v76[0];
          }
          if ( (v52 & 0x800) != 0 )
          {
            AlphaBlendBGRF(v76);
            LOBYTE(v52) = v76[0];
          }
          if ( (v52 & 0x10) != 0 )
          {
            MappingBGRF(v100, v101, v88, v95);
            v53 = v98 + v95;
            if ( v53 == v96 )
              v53 = v97;
            v95 = v53;
          }
          v81(v76, v102, v103, v77, v87, v89, v89 + v93, v94, v82);
          v54 = v92 + v89;
          if ( v54 == v90 )
            v54 = v91;
          v77 += v79;
          ++v30;
          v89 = v54;
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
          if ( v66 )
          {
            memmove(v20, v21, Size);
            v66 = 0;
          }
        }
        v21 = v19;
        for ( i = 0LL; i < 2; ++i )
          (&v73)[i] = (&v74)[i];
        v20 = v74;
        v75 = v19;
        v19 = v73;
      }
      else
      {
        v56 = v72 + (((unsigned __int64)(unsigned __int16)v37 >> 5) & 0x400);
        do
        {
          v57 = *v33++;
          *v36++ += *(_DWORD *)(v56 + 4 * v57);
        }
        while ( v36 < (_DWORD *)v35 );
      }
      v32 = v67;
      v18 = Size;
    }
    while ( v67 );
  }
  if ( v77 != v86 )
  {
    v58 = v104;
    v59 = &v20[v18];
    v60 = v19 - v20;
    do
    {
      v61 = (5 * *(_DWORD *)v20 - *(_DWORD *)&v20[v60]) >> 7;
      if ( ((5 * *(_DWORD *)v20 - *(_DWORD *)&v20[v60]) & 0x7F800000) != 0 )
        LOWORD(v61) = ~HIWORD(v61);
      *v58 = v61;
      v20 += 4;
      v58 = (_WORD *)((char *)v58 + v105);
    }
    while ( v20 < v59 );
    v62 = v76[0];
    if ( SLOBYTE(v76[0]) < 0 )
    {
      ((void (__fastcall *)(int *, _WORD *))v80)(v76, v58);
      v62 = v76[0];
    }
    if ( (v62 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v76);
      LOBYTE(v62) = v76[0];
    }
    if ( (v62 & 0x10) != 0 )
    {
      MappingBGRF(v100, v101, v88, v95);
      v63 = v98 + v95;
      if ( v63 == v96 )
        v63 = v97;
      v95 = v63;
    }
    v81(v76, v102, v103, v77, v87, v89, v89 + v93, v94, v82);
    ++v30;
  }
  return v30;
}
