/*
 * XREFs of sub_1800E1698 @ 0x1800E1698
 * Callers:
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 * Callees:
 *     sub_18000E00C @ 0x18000E00C (sub_18000E00C.c)
 *     unknown_libname_113 @ 0x18000F6D4 (unknown_libname_113.c)
 *     sub_180017CD4 @ 0x180017CD4 (sub_180017CD4.c)
 *     sub_180056944 @ 0x180056944 (sub_180056944.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126540 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800E1698(_QWORD *a1)
{
  int v2; // ebx
  _BYTE *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // r12
  const void **v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char **v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // r14
  char *v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // rbx
  char **v21; // rdi
  unsigned __int64 v22; // rsi
  char *v23; // rbx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  char *v30; // rbx
  char **v31; // rdi
  unsigned __int64 v32; // rsi
  char *v33; // rbx
  unsigned __int64 v34; // rcx
  __int64 v35; // rbp
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  void *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  char *v41; // rbx
  char *v42; // rcx
  char *v43; // r8
  _BYTE *v44; // rcx
  char **v45; // rdi
  unsigned __int64 v46; // rsi
  char *v47; // rbx
  unsigned __int64 v48; // rcx
  __int64 v49; // rbp
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rcx
  void *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  char *v55; // rbx
  char *v56; // rcx
  char *v57; // r8
  _BYTE *v58; // rcx
  char **v59; // rdi
  unsigned __int64 v60; // rsi
  char *v61; // rbx
  unsigned __int64 v62; // rcx
  __int64 v63; // rbp
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rcx
  void *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  char *v69; // rbx
  char **v70; // rdi
  unsigned __int64 v71; // rsi
  char *v72; // rbx
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rcx
  void *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  char *v79; // rbx
  _BYTE *v80; // rcx
  __int128 v82; // [rsp+30h] [rbp-78h] BYREF
  __int128 v83; // [rsp+40h] [rbp-68h]
  __int64 v84; // [rsp+50h] [rbp-58h]
  _QWORD *v85; // [rsp+58h] [rbp-50h]
  _QWORD v86[3]; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v87; // [rsp+78h] [rbp-30h]

  v84 = -2LL;
  v85 = a1;
  `eh vector constructor iterator'(
    a1,
    0x28uLL,
    0x40uLL,
    (void (*)(void *))sub_1800E1680,
    (void (*)(void *))sub_1800424C0);
  v2 = 0;
  v3 = a1;
  v4 = 15LL;
  v5 = 31LL;
  do
  {
    sub_18000E00C(v86, v2);
    v6 = sub_180056944(v86, 0LL, "System", 6uLL);
    v82 = *(_OWORD *)v6;
    v83 = *((_OWORD *)v6 + 1);
    v6[2] = 0LL;
    v6[3] = (const void *)15;
    *(_BYTE *)v6 = 0;
    sub_180017CD4(&a1[4 * v2 + 1 + v2], (__int64)&v82);
    if ( *((_QWORD *)&v83 + 1) >= 0x10uLL )
    {
      v7 = v82;
      if ( (unsigned __int64)(*((_QWORD *)&v83 + 1) + 1LL) >= 0x1000 )
      {
        v7 = *(_QWORD *)(v82 - 8);
        if ( (unsigned __int64)(v82 - v7 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v7, *((_QWORD *)&v83 + 1) + 40LL);
LABEL_16:
          o__invalid_parameter_noinfo_noreturn(v8, v9);
          __debugbreak();
        }
      }
      j_j__o_free(v7);
    }
    if ( v87 >= 0x10 )
    {
      v8 = v86[0];
      if ( v87 + 1 >= 0x1000 )
      {
        v9 = v87 + 40;
        v8 = *(_QWORD *)(v86[0] - 8LL);
        if ( (unsigned __int64)(v86[0] - v8 - 8) > 0x1F )
          goto LABEL_16;
      }
      j_j__o_free(v8);
    }
    *v3 = 1;
    ++v2;
    v3 += 40;
  }
  while ( v2 <= 31 );
  v10 = (char **)(a1 + 1);
  v11 = a1[4];
  v12 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v11 < 0xE )
  {
    v14 = v11 >> 1;
    if ( v11 <= 0x7FFFFFFFFFFFFFFFLL - (v11 >> 1) )
    {
      if ( v11 + v14 > 0xF )
        v4 = v11 + v14;
    }
    else
    {
      v4 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v15 = v4 + 1;
    if ( v4 == -1 )
      v15 = -1LL;
    if ( v15 < 0x1000 )
    {
      if ( v15 )
        v20 = (char *)operator new(v15);
      else
        v20 = 0LL;
    }
    else
    {
      v16 = v15 + 39;
      if ( v15 + 39 < v15 )
        v16 = -1LL;
      v17 = operator new(v16);
      if ( !v17 )
      {
        o__invalid_parameter_noinfo_noreturn(v19, v18);
        __debugbreak();
      }
      v20 = (char *)(((unsigned __int64)v17 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v20 - 1) = v17;
    }
    a1[3] = 14LL;
    a1[4] = v4;
    strcpy(v20, "System0_Enable");
    v4 = 15LL;
    *v10 = v20;
  }
  else
  {
    v13 = (char *)(a1 + 1);
    if ( v11 >= 0x10 )
      v13 = *v10;
    a1[3] = 14LL;
    memmove(v13, "System0_Enable", 0xEuLL);
    v13[14] = 0;
  }
  v21 = (char **)(a1 + 6);
  v22 = a1[9];
  if ( v22 < 0xF )
  {
    v24 = v22 >> 1;
    if ( v22 <= 0x7FFFFFFFFFFFFFFFLL - (v22 >> 1) )
    {
      if ( v22 + v24 > 0xF )
        v4 = v22 + v24;
    }
    else
    {
      v4 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v25 = v4 + 1;
    if ( v4 == -1 )
      v25 = -1LL;
    if ( v25 < 0x1000 )
    {
      if ( v25 )
        v30 = (char *)operator new(v25);
      else
        v30 = 0LL;
    }
    else
    {
      v26 = v25 + 39;
      if ( v25 + 39 < v25 )
        v26 = -1LL;
      v27 = operator new(v26);
      if ( !v27 )
      {
        o__invalid_parameter_noinfo_noreturn(v29, v28);
        __debugbreak();
      }
      v30 = (char *)(((unsigned __int64)v27 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v30 - 1) = v27;
    }
    a1[8] = 15LL;
    a1[9] = v4;
    strcpy(v30, "System1_Visible");
    *v21 = v30;
  }
  else
  {
    v23 = (char *)(a1 + 6);
    if ( v22 >= 0x10 )
      v23 = *v21;
    a1[8] = 15LL;
    memmove(v23, "System1_Visible", 0xFuLL);
    v23[15] = 0;
  }
  v31 = (char **)(a1 + 11);
  v32 = a1[14];
  if ( v32 < 0x13 )
  {
    v34 = v32 >> 1;
    if ( v32 <= 0x7FFFFFFFFFFFFFFFLL - (v32 >> 1) )
    {
      v35 = 31LL;
      if ( v32 + v34 > 0x1F )
        v35 = v32 + v34;
    }
    else
    {
      v35 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v36 = v35 + 1;
    if ( v35 == -1 )
      v36 = -1LL;
    if ( v36 < 0x1000 )
    {
      if ( v36 )
        v41 = (char *)operator new(v36);
      else
        v41 = 0LL;
    }
    else
    {
      v37 = v36 + 39;
      if ( v36 + 39 < v36 )
        v37 = -1LL;
      v38 = operator new(v37);
      if ( !v38 )
      {
        o__invalid_parameter_noinfo_noreturn(v40, v39);
        __debugbreak();
      }
      v41 = (char *)(((unsigned __int64)v38 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v41 - 1) = v38;
    }
    a1[13] = 19LL;
    a1[14] = v35;
    strcpy(v41, "System2_VisibleTree");
    if ( v32 >= 0x10 )
    {
      v42 = *v31;
      if ( v32 + 1 >= 0x1000 )
      {
        v43 = (char *)*((_QWORD *)v42 - 1);
        v44 = (_BYTE *)(v42 - v43);
        if ( (unsigned __int64)(v44 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v44, v32 + 40);
          __debugbreak();
        }
        v42 = v43;
      }
      j_j__o_free(v42);
    }
    *v31 = v41;
  }
  else
  {
    v33 = *v31;
    a1[13] = 19LL;
    memmove(v33, "System2_VisibleTree", 0x13uLL);
    v33[19] = 0;
  }
  v45 = (char **)(a1 + 16);
  v46 = a1[19];
  if ( v46 < 0x12 )
  {
    v48 = v46 >> 1;
    if ( v46 <= 0x7FFFFFFFFFFFFFFFLL - (v46 >> 1) )
    {
      v49 = 31LL;
      if ( v46 + v48 > 0x1F )
        v49 = v46 + v48;
    }
    else
    {
      v49 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v50 = v49 + 1;
    if ( v49 == -1 )
      v50 = -1LL;
    if ( v50 < 0x1000 )
    {
      if ( v50 )
        v55 = (char *)operator new(v50);
      else
        v55 = 0LL;
    }
    else
    {
      v51 = v50 + 39;
      if ( v50 + 39 < v50 )
        v51 = -1LL;
      v52 = operator new(v51);
      if ( !v52 )
      {
        o__invalid_parameter_noinfo_noreturn(v54, v53);
        __debugbreak();
      }
      v55 = (char *)(((unsigned __int64)v52 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v55 - 1) = v52;
    }
    a1[18] = 18LL;
    a1[19] = v49;
    strcpy(v55, "System3_Renderable");
    if ( v46 >= 0x10 )
    {
      v56 = *v45;
      if ( v46 + 1 >= 0x1000 )
      {
        v57 = (char *)*((_QWORD *)v56 - 1);
        v58 = (_BYTE *)(v56 - v57);
        if ( (unsigned __int64)(v58 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v58, v46 + 40);
          __debugbreak();
        }
        v56 = v57;
      }
      j_j__o_free(v56);
    }
    *v45 = v55;
  }
  else
  {
    v47 = *v45;
    a1[18] = 18LL;
    memmove(v47, "System3_Renderable", 0x12uLL);
    v47[18] = 0;
  }
  v59 = (char **)(a1 + 21);
  v60 = a1[24];
  if ( v60 < 0xD )
  {
    v62 = v60 >> 1;
    if ( v60 <= 0x7FFFFFFFFFFFFFFFLL - (v60 >> 1) )
    {
      v63 = 15LL;
      if ( v60 + v62 > 0xF )
        v63 = v60 + v62;
    }
    else
    {
      v63 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v64 = v63 + 1;
    if ( v63 == -1 )
      v64 = -1LL;
    if ( v64 < 0x1000 )
    {
      if ( v64 )
        v69 = (char *)operator new(v64);
      else
        v69 = 0LL;
    }
    else
    {
      v65 = v64 + 39;
      if ( v64 + 39 < v64 )
        v65 = -1LL;
      v66 = operator new(v65);
      if ( !v66 )
      {
        o__invalid_parameter_noinfo_noreturn(v68, v67);
        __debugbreak();
      }
      v69 = (char *)(((unsigned __int64)v66 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v69 - 1) = v66;
    }
    a1[23] = 13LL;
    a1[24] = v63;
    strcpy(v69, "System4_Debug");
    *v59 = v69;
  }
  else
  {
    v61 = (char *)(a1 + 21);
    if ( v60 >= 0x10 )
      v61 = *v59;
    a1[23] = 13LL;
    memmove(v61, "System4_Debug", 0xDuLL);
    v61[13] = 0;
  }
  v70 = (char **)(a1 + 26);
  v71 = a1[29];
  if ( v71 < 0xF )
  {
    v73 = v71 >> 1;
    if ( v71 <= 0x7FFFFFFFFFFFFFFFLL - (v71 >> 1) )
    {
      v12 = 15LL;
      if ( v71 + v73 > 0xF )
        v12 = v71 + v73;
    }
    v74 = v12 + 1;
    if ( v12 == -1 )
      v74 = -1LL;
    if ( v74 < 0x1000 )
    {
      if ( v74 )
        v79 = (char *)operator new(v74);
      else
        v79 = 0LL;
    }
    else
    {
      v75 = v74 + 39;
      if ( v74 + 39 < v74 )
        v75 = -1LL;
      v76 = operator new(v75);
      if ( !v76 )
      {
        o__invalid_parameter_noinfo_noreturn(v78, v77);
        __debugbreak();
      }
      v79 = (char *)(((unsigned __int64)v76 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v79 - 1) = v76;
    }
    a1[28] = 15LL;
    a1[29] = v12;
    strcpy(v79, "System5_Loading");
    *v70 = v79;
  }
  else
  {
    v72 = (char *)(a1 + 26);
    if ( v71 >= 0x10 )
      v72 = *v70;
    a1[28] = 15LL;
    memmove(v72, "System5_Loading", 0xFuLL);
    v72[15] = 0;
  }
  unknown_libname_113(a1 + 41, "System8_Transparent");
  unknown_libname_113(a1 + 46, "System9_OpaqueMask");
  unknown_libname_113(a1 + 81, "System16_ShadowCaster");
  v80 = a1 + 160;
  do
  {
    *v80 = 0;
    v80 += 40;
    --v5;
  }
  while ( v5 );
  return a1;
}
