/*
 * XREFs of sub_1800D9558 @ 0x1800D9558
 * Callers:
 *     sub_1800D8C58 @ 0x1800D8C58 (sub_1800D8C58.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180011764 @ 0x180011764 (sub_180011764.c)
 *     sub_180017D44 @ 0x180017D44 (sub_180017D44.c)
 *     sub_18002B7AC @ 0x18002B7AC (sub_18002B7AC.c)
 *     sub_18002BDA4 @ 0x18002BDA4 (sub_18002BDA4.c)
 *     sub_18002C0E4 @ 0x18002C0E4 (sub_18002C0E4.c)
 *     sub_1800676B8 @ 0x1800676B8 (sub_1800676B8.c)
 *     sub_180072200 @ 0x180072200 (sub_180072200.c)
 *     sub_180097B78 @ 0x180097B78 (sub_180097B78.c)
 *     sub_1800B8E18 @ 0x1800B8E18 (sub_1800B8E18.c)
 *     sub_1800D20C4 @ 0x1800D20C4 (sub_1800D20C4.c)
 *     sub_1800D7384 @ 0x1800D7384 (sub_1800D7384.c)
 *     sub_1800D7B1C @ 0x1800D7B1C (sub_1800D7B1C.c)
 *     sub_1800D8468 @ 0x1800D8468 (sub_1800D8468.c)
 *     sub_1800D884C @ 0x1800D884C (sub_1800D884C.c)
 *     sub_1800D89B0 @ 0x1800D89B0 (sub_1800D89B0.c)
 *     sub_1800D8B88 @ 0x1800D8B88 (sub_1800D8B88.c)
 *     sub_1800D8C1C @ 0x1800D8C1C (sub_1800D8C1C.c)
 *     sub_1800D9D54 @ 0x1800D9D54 (sub_1800D9D54.c)
 *     sub_1800DA2DC @ 0x1800DA2DC (sub_1800DA2DC.c)
 *     sub_1800DA3E4 @ 0x1800DA3E4 (sub_1800DA3E4.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     snprintf @ 0x1801274AC (snprintf.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 *__fastcall sub_1800D9558(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, float a6, float *a7)
{
  float v7; // xmm10_4
  __int128 v8; // xmm12
  __int64 *v11; // rdi
  __int64 *v12; // rsi
  __int64 *v13; // r15
  __int64 *v14; // rbx
  __int64 *v15; // rax
  char *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  const void *v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 *v30; // rcx
  __int64 ***v31; // rax
  unsigned __int64 v32; // r8
  __int64 **v33; // rcx
  __int64 v34; // rax
  float v35; // xmm6_4
  float v36; // xmm0_4
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 *v40; // rcx
  double v41; // xmm8_8
  double v42; // xmm9_8
  double *v43; // rax
  int v44; // ecx
  __int128 v45; // xmm2
  __int128 v46; // xmm1
  double v47; // xmm3_8
  __int128 v48; // xmm0
  unsigned __int64 *v49; // rdx
  __int64 v50; // r9
  __int128 v51; // xmm0
  unsigned __int64 *v52; // rdx
  __int64 v53; // r9
  double v54; // xmm3_8
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  char v62; // [rsp+48h] [rbp-C0h]
  __int128 v63; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v64[3]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v65; // [rsp+80h] [rbp-88h]
  const void *v66[3]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v67; // [rsp+A0h] [rbp-68h]
  __int64 v68; // [rsp+A8h] [rbp-60h]
  char v69[16]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v70; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v71; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v72; // [rsp+E0h] [rbp-28h]
  __int64 *v73; // [rsp+E8h] [rbp-20h]
  __int64 *v74; // [rsp+F0h] [rbp-18h]
  __int64 Src[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v76; // [rsp+108h] [rbp+0h]
  unsigned __int64 v77; // [rsp+110h] [rbp+8h]
  void *v78; // [rsp+118h] [rbp+10h] BYREF
  __int64 *v79; // [rsp+120h] [rbp+18h]
  __int64 v80; // [rsp+128h] [rbp+20h]
  __int64 v81[2]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v82; // [rsp+140h] [rbp+38h]
  unsigned __int64 v83; // [rsp+148h] [rbp+40h]
  unsigned __int64 v84; // [rsp+150h] [rbp+48h]
  char Buffer[8]; // [rsp+158h] [rbp+50h] BYREF
  unsigned __int64 v86; // [rsp+170h] [rbp+68h]

  v68 = -2LL;
  *(_BYTE *)a1 = 1;
  *(_QWORD *)(a1 + 8) = a3;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  sub_1800D884C((__int64)&v78, a4);
  v70 = 0LL;
  *(_QWORD *)&v70 = sub_18002B7AC();
  v11 = (__int64 *)v78;
  v12 = v79;
  v13 = 0LL;
  if ( v78 != v79 )
  {
    do
    {
      v76 = 0LL;
      v77 = 0LL;
      sub_18000F444(Src, (__int64)v11);
      sub_1800D89B0(v81, Src);
      v14 = (__int64 *)v70;
      v15 = *(__int64 **)(v70 + 8);
      if ( *((_BYTE *)v15 + 25) )
        goto LABEL_9;
      do
      {
        if ( v15[4] >= v84 )
        {
          v14 = v15;
          v15 = (__int64 *)*v15;
        }
        else
        {
          v15 = (__int64 *)v15[2];
        }
      }
      while ( !*((_BYTE *)v15 + 25) );
      if ( v14 == (__int64 *)v70 || v84 < v14[4] )
LABEL_9:
        v14 = (__int64 *)v70;
      if ( v14 == (__int64 *)v70 )
      {
        *(_QWORD *)&v63 = v84;
        DWORD2(v63) = 1;
        v23 = sub_1800D7384(&v70, (__int64)&v63);
        sub_180072200((__int64 **)&v70, (__int64)v69, 0, v23 + 4, v23);
      }
      else
      {
        sub_1800D7B1C((__int64 *)Buffer, *((_DWORD *)v14 + 10));
        v16 = (char *)sub_18002C0E4(v66, Src, byte_1801F8B70);
        v17 = sub_180097B78((__int64)v64, v16, Buffer);
        sub_180017D44(Src, v17);
        if ( v65 >= 0x10 )
        {
          v18 = v64[0];
          if ( v65 + 1 >= 0x1000 )
          {
            v18 = *(_QWORD *)(v64[0] - 8LL);
            if ( (unsigned __int64)(v64[0] - v18 - 8) > 0x1F )
            {
              o__invalid_parameter_noinfo_noreturn(v18, v65 + 40);
LABEL_47:
              o__invalid_parameter_noinfo_noreturn(v19, v20);
LABEL_48:
              o__invalid_parameter_noinfo_noreturn(v21, v22);
LABEL_49:
              o__invalid_parameter_noinfo_noreturn(v24, v25);
LABEL_50:
              o__invalid_parameter_noinfo_noreturn(v26, v27);
              goto LABEL_51;
            }
          }
          j_j__o_free(v18);
        }
        v64[2] = 0LL;
        v65 = 15LL;
        LOBYTE(v64[0]) = 0;
        if ( v67 >= 0x10 )
        {
          v19 = v66[0];
          if ( v67 + 1 >= 0x1000 )
          {
            v20 = v67 + 40;
            v19 = (const void *)*((_QWORD *)v66[0] - 1);
            if ( (unsigned __int64)((char *)v66[0] - (char *)v19 - 8) > 0x1F )
              goto LABEL_47;
          }
          j_j__o_free(v19);
        }
        v66[2] = 0LL;
        v67 = 15LL;
        LOBYTE(v66[0]) = 0;
        if ( v86 >= 0x10 )
        {
          v21 = *(_QWORD *)Buffer;
          if ( v86 + 1 >= 0x1000 )
          {
            v22 = v86 + 40;
            v21 = *(_QWORD *)(*(_QWORD *)Buffer - 8LL);
            if ( (unsigned __int64)(*(_QWORD *)Buffer - v21 - 8) > 0x1F )
              goto LABEL_48;
          }
          j_j__o_free(v21);
        }
        ++*((_DWORD *)v14 + 10);
      }
      sub_180011764(v11, Src);
      if ( v83 >= 0x10 )
      {
        v24 = v81[0];
        if ( v83 + 1 >= 0x1000 )
        {
          v25 = v83 + 40;
          v24 = *(_QWORD *)(v81[0] - 8);
          if ( (unsigned __int64)(v81[0] - v24 - 8) > 0x1F )
            goto LABEL_49;
        }
        j_j__o_free(v24);
      }
      v82 = 0LL;
      v83 = 15LL;
      LOBYTE(v81[0]) = 0;
      if ( v77 >= 0x10 )
      {
        v26 = Src[0];
        if ( v77 + 1 >= 0x1000 )
        {
          v27 = v77 + 40;
          v26 = *(_QWORD *)(Src[0] - 8);
          if ( (unsigned __int64)(Src[0] - v26 - 8) > 0x1F )
            goto LABEL_50;
        }
        j_j__o_free(v26);
      }
      v11 += 6;
    }
    while ( v11 != v12 );
    v12 = v79;
    v11 = (__int64 *)v78;
  }
  sub_1800D8468((unsigned __int64)v11, (__int128 *)v12, ((char *)v12 - (char *)v11) / 48, v62);
  v63 = xmmword_18025F040;
  v7 = a6;
  (*(void (__fastcall **)(__int64, __int64, __int64, __int128 *, const char *))(*(_QWORD *)a2 + 96LL))(
    a2,
    v28,
    v29,
    &v63,
    "D      S      E     [DMin , DMax ]");
  v8 = xmmword_18025F040;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  *(_QWORD *)&v71 = operator new(0x10uLL);
  *(_OWORD *)v71 = 0LL;
  *(_QWORD *)v71 = &v71;
  v12 = (__int64 *)v78;
  v13 = v79;
  while ( v12 != v13 )
  {
    v14 = v74;
    if ( v74 )
    {
      v30 = v74;
      v11 = v73;
      do
      {
        v31 = 0LL;
        if ( (_QWORD)v71 && *(_QWORD *)v71 )
          v31 = **(__int64 *****)v71;
        v32 = (unsigned __int64)v30 + (_QWORD)v11 - 1;
        if ( v31 && (v33 = *v31) != 0LL && *v33 )
          v34 = **v33;
        else
LABEL_51:
          v34 = 0LL;
        if ( sub_1800D8C1C((__int64)v12, *(_QWORD *)(*(_QWORD *)(v34 + 8) + 8 * (v32 & (*(_QWORD *)(v34 + 16) - 1LL)))) )
          break;
        sub_1800676B8(*(__int64 **)(*((_QWORD *)&v71 + 1) + 8 * (((__int64)v14 + (_QWORD)v11 - 1) & (v72 - 1))), 0);
        v14 = (__int64 *)((char *)v74 - 1);
        v30 = v14;
        v74 = (__int64 *)((char *)v74 - 1);
        v11 = (__int64 *)((unsigned __int64)v73 & -(__int64)(v14 != 0LL));
        v73 = v11;
      }
      while ( v14 );
    }
    sub_1800DA3E4(&v71, v12);
    v35 = (float)((int)v74 - 1);
    if ( (__int64)v74 - 1 < 0 )
      v35 = v35 + 1.8446744e19;
    v76 = 0LL;
    v77 = 15LL;
    LOBYTE(Src[0]) = 0;
    v36 = 40.0 - (float)(v35 + v35);
    v37 = 0LL;
    if ( v36 >= 9.223372e18 )
    {
      v36 = v36 - 9.223372e18;
      if ( v36 < 9.223372e18 )
        v37 = 0x8000000000000000uLL;
    }
    sub_1800B8E18(Src, v12, 0LL, v37 + (unsigned int)(int)v36);
    v63 = v8;
    v40 = Src;
    if ( v77 >= 0x10 )
      v40 = (__int64 *)Src[0];
    (*(void (__fastcall **)(__int64, __int64, __int64, __int128 *, __int64 *))(*(_QWORD *)a2 + 96LL))(
      a2,
      v38,
      v39,
      &v63,
      v40);
    v41 = *((double *)v12 + 4);
    v42 = *((double *)v12 + 5);
    sub_1800D89B0(v81, v12);
    v43 = (double *)sub_1800D9D54(a1, v81);
    v44 = *((_DWORD *)v43 + 41);
    if ( v44 )
    {
      *(double *)&v46 = *v43;
      *(double *)&v45 = *v43;
      if ( (unsigned int)v44 > 1 )
      {
        v48 = *(unsigned __int64 *)v43;
        v49 = (unsigned __int64 *)(v43 + 1);
        v50 = (unsigned int)(v44 - 1);
        do
        {
          v45 = *v49;
          if ( *(double *)&v45 <= *(double *)&v48 )
            v45 = v48;
          ++v49;
          v48 = v45;
          --v50;
        }
        while ( v50 );
        v51 = *(unsigned __int64 *)v43;
        v52 = (unsigned __int64 *)(v43 + 1);
        v53 = (unsigned int)(v44 - 1);
        do
        {
          v46 = *v52;
          if ( *(double *)&v51 <= *(double *)&v46 )
            v46 = v51;
          ++v52;
          v51 = v46;
          --v53;
        }
        while ( v53 );
      }
      v54 = 0.0;
      v55 = *((unsigned int *)v43 + 41);
      do
      {
        v54 = v54 + *v43++;
        --v55;
      }
      while ( v55 );
      v47 = v54 / (double)v44;
    }
    else
    {
      *(_QWORD *)&v45 = 0LL;
      *(_QWORD *)&v46 = 0LL;
      v47 = 0.0;
    }
    snprintf(Buffer, 0x40uLL, "%5.2f  %5.2f  %5.2f [%5.2f, %5.2f]", v47, v41, v42, *(double *)&v46, *(double *)&v45);
    v63 = v8;
    (*(void (__fastcall **)(__int64, __int64, __int64, __int128 *, char *))(*(_QWORD *)a2 + 96LL))(
      a2,
      v56,
      v57,
      &v63,
      Buffer);
    v7 = v7 + 1.0;
    if ( v83 >= 0x10 )
    {
      v58 = v81[0];
      if ( v83 + 1 >= 0x1000 )
      {
        v58 = *(_QWORD *)(v81[0] - 8);
        if ( (unsigned __int64)(v81[0] - v58 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v58, v83 + 40);
LABEL_85:
          o__invalid_parameter_noinfo_noreturn(v59, v60);
          __debugbreak();
        }
      }
      j_j__o_free(v58);
    }
    v82 = 0LL;
    v83 = 15LL;
    LOBYTE(v81[0]) = 0;
    if ( v77 >= 0x10 )
    {
      v59 = Src[0];
      if ( v77 + 1 >= 0x1000 )
      {
        v60 = v77 + 40;
        v59 = *(_QWORD *)(Src[0] - 8);
        if ( (unsigned __int64)(Src[0] - v59 - 8) > 0x1F )
          goto LABEL_85;
      }
      j_j__o_free(v59);
    }
    v12 += 6;
  }
  *a7 = v7;
  sub_1800DA2DC(&v71);
  j_j__o_free(v71);
  *(_QWORD *)&v71 = 0LL;
  sub_18002BDA4((__int64 ***)&v70, (__int64 **)&v63, *(__int64 **)v70, (__int64 *)v70);
  j_j__o_free(v70);
  sub_1800D20C4((__int64)&v78);
  return sub_1800D8B88(a1);
}
