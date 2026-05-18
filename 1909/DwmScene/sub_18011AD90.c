/*
 * XREFs of sub_18011AD90 @ 0x18011AD90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     sub_18011A5EC @ 0x18011A5EC (sub_18011A5EC.c)
 *     sub_18011B8A8 @ 0x18011B8A8 (sub_18011B8A8.c)
 *     sub_18011BB6C @ 0x18011BB6C (sub_18011BB6C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18011AD90(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        void *a15,
        char a16,
        char a17,
        char a18,
        char a19,
        __int64 a20,
        __int64 **a21)
{
  __int64 v21; // r14
  float v23; // xmm6_4
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  float v27; // xmm1_4
  float v28; // xmm0_4
  __int64 v29; // rax
  __int64 v30; // rcx
  void *v31; // rdi
  ULONG result; // eax
  volatile signed __int64 *v33; // rcx
  __int64 v34; // rax
  void *v35; // rcx
  _QWORD *v36; // rax
  bool v37; // cf
  void *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  float v41; // xmm0_4
  int v42; // [rsp+38h] [rbp-D0h] BYREF
  float v43; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v44; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+48h] [rbp-C0h]
  __int64 v46; // [rsp+50h] [rbp-B8h]
  _BYTE v47[144]; // [rsp+58h] [rbp-B0h] BYREF
  float v48; // [rsp+E8h] [rbp-20h] BYREF
  int v49; // [rsp+ECh] [rbp-1Ch] BYREF
  int v50; // [rsp+F0h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE *v52; // [rsp+118h] [rbp+10h]
  int v53; // [rsp+120h] [rbp+18h]
  int v54; // [rsp+124h] [rbp+1Ch]
  int *v55; // [rsp+128h] [rbp+20h]
  __int64 v56; // [rsp+130h] [rbp+28h]
  __int64 v57; // [rsp+138h] [rbp+30h]
  __int64 v58; // [rsp+140h] [rbp+38h]
  __int64 v59; // [rsp+148h] [rbp+40h]
  __int64 v60; // [rsp+150h] [rbp+48h]
  float *v61; // [rsp+158h] [rbp+50h]
  __int64 v62; // [rsp+160h] [rbp+58h]
  float *v63; // [rsp+168h] [rbp+60h]
  __int64 v64; // [rsp+170h] [rbp+68h]
  float *v65; // [rsp+178h] [rbp+70h]
  __int64 v66; // [rsp+180h] [rbp+78h]
  char *v67; // [rsp+188h] [rbp+80h]
  __int64 v68; // [rsp+190h] [rbp+88h]
  char *v69; // [rsp+198h] [rbp+90h]
  __int64 v70; // [rsp+1A0h] [rbp+98h]
  char *v71; // [rsp+1A8h] [rbp+A0h]
  __int64 v72; // [rsp+1B0h] [rbp+A8h]
  char *v73; // [rsp+1B8h] [rbp+B0h]
  __int64 v74; // [rsp+1C0h] [rbp+B8h]
  char *v75; // [rsp+1C8h] [rbp+C0h]
  __int64 v76; // [rsp+1D0h] [rbp+C8h]
  char *v77; // [rsp+1D8h] [rbp+D0h]
  __int64 v78; // [rsp+1E0h] [rbp+D8h]
  char *v79; // [rsp+1E8h] [rbp+E0h]
  __int64 v80; // [rsp+1F0h] [rbp+E8h]
  char *v81; // [rsp+1F8h] [rbp+F0h]
  __int64 v82; // [rsp+200h] [rbp+F8h]
  char *v83; // [rsp+208h] [rbp+100h]
  __int64 v84; // [rsp+210h] [rbp+108h]
  char *v85; // [rsp+218h] [rbp+110h]
  __int64 v86; // [rsp+220h] [rbp+118h]
  void *v87; // [rsp+228h] [rbp+120h]
  int v88; // [rsp+230h] [rbp+128h]
  int v89; // [rsp+234h] [rbp+12Ch]
  char *v90; // [rsp+238h] [rbp+130h]
  __int64 v91; // [rsp+240h] [rbp+138h]
  char *v92; // [rsp+248h] [rbp+140h]
  __int64 v93; // [rsp+250h] [rbp+148h]
  char *v94; // [rsp+258h] [rbp+150h]
  __int64 v95; // [rsp+260h] [rbp+158h]
  char *v96; // [rsp+268h] [rbp+160h]
  __int64 v97; // [rsp+270h] [rbp+168h]
  void *v98; // [rsp+278h] [rbp+170h]
  int v99; // [rsp+280h] [rbp+178h]
  int v100; // [rsp+284h] [rbp+17Ch]
  float *v101; // [rsp+288h] [rbp+180h]
  __int64 v102; // [rsp+290h] [rbp+188h]
  __int64 v103; // [rsp+298h] [rbp+190h]
  __int64 v104; // [rsp+2A0h] [rbp+198h]
  __int64 v105; // [rsp+2A8h] [rbp+1A0h]
  __int64 v106; // [rsp+2B0h] [rbp+1A8h]
  float *v107; // [rsp+2B8h] [rbp+1B0h]
  __int64 v108; // [rsp+2C0h] [rbp+1B8h]
  int *v109; // [rsp+2C8h] [rbp+1C0h]
  __int64 v110; // [rsp+2D0h] [rbp+1C8h]
  int *v111; // [rsp+2D8h] [rbp+1D0h]
  __int64 v112; // [rsp+2E0h] [rbp+1D8h]
  __int64 *v113; // [rsp+2E8h] [rbp+1E0h]
  __int64 v114; // [rsp+2F0h] [rbp+1E8h]
  float v115; // [rsp+360h] [rbp+258h] BYREF
  float v116; // [rsp+368h] [rbp+260h] BYREF
  float v117; // [rsp+370h] [rbp+268h] BYREF

  v117 = a4;
  v116 = a3;
  v115 = a2;
  v21 = (__int64)a21;
  v48 = 0.0;
  v50 = 0;
  v23 = 0.0;
  v49 = 0;
  if ( a21[1] )
  {
    v24 = *a21;
    v25 = **a21;
    v26 = *(_QWORD *)(v25 + 56);
    if ( v26 )
    {
      v27 = (float)(int)v26;
      if ( v26 < 0 )
        v27 = v27 + 1.8446744e19;
      v28 = *(float *)(v25 + 48) / v27;
    }
    else
    {
      v28 = 0.0;
    }
    v48 = v28;
    v45 = *v24;
    v50 = *(_DWORD *)(v45 + 44);
    v46 = *v24;
    v49 = *(_DWORD *)(v46 + 40);
  }
  v29 = sub_18011B8A8((char *)(a1 + 120));
  v30 = *(_QWORD *)(a1 + 112);
  v31 = (void *)v29;
  *(_QWORD *)(a1 + 112) = v29;
  if ( v30 )
  {
    o__aligned_free(v30);
    v31 = *(void **)(a1 + 112);
  }
  sub_18011A5EC((__int64)v31);
  result = sub_18011BB6C(v31);
  if ( (unsigned int)dword_18025EE60 > 5 && (qword_18025EE70 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_18025EE78 & 0x400000000000LL) == qword_18025EE78 )
    {
      v33 = *(volatile signed __int64 **)(a1 + 112);
      if ( v33 )
      {
        _InterlockedExchangeAdd64(v33 + 18, 0LL);
        sub_18011BB6C((void *)v33);
      }
      else
      {
        v47[0] = 0;
      }
      v34 = -1LL;
      do
        ++v34;
      while ( v47[v34] );
      v54 = 0;
      v53 = v34 + 1;
      v52 = v47;
      v35 = a15;
      v55 = &v42;
      v57 = *(_QWORD *)(a1 + 8);
      v59 = *(_QWORD *)(a1 + 24);
      v61 = &v115;
      v63 = &v116;
      v65 = &v117;
      v67 = &a5;
      v69 = &a6;
      v71 = &a7;
      v73 = &a8;
      v75 = &a9;
      v77 = &a10;
      v79 = &a11;
      v81 = &a12;
      v83 = &a13;
      v85 = &a14;
      LODWORD(v34) = 0;
      v42 = 1;
      v56 = 4LL;
      v58 = 16LL;
      v60 = 16LL;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 4LL;
      v74 = 4LL;
      v76 = 8LL;
      v78 = 8LL;
      v80 = 8LL;
      v82 = 8LL;
      v84 = 8LL;
      v86 = 8LL;
      if ( a15 )
      {
        v34 = -1LL;
        do
          ++v34;
        while ( *((_WORD *)a15 + v34) );
      }
      v89 = 0;
      v88 = 2 * v34 + 2;
      v91 = 8LL;
      v90 = &a16;
      v93 = 4LL;
      v92 = &a17;
      if ( !a15 )
        v35 = &unk_1801E36D8;
      v87 = v35;
      v94 = &a18;
      v96 = &a19;
      v36 = (_QWORD *)(a1 + 80);
      v37 = *(_QWORD *)(a1 + 104) < 0x10uLL;
      v95 = 4LL;
      v97 = 8LL;
      if ( !v37 )
        v36 = (_QWORD *)*v36;
      v38 = &unk_18014402A;
      LODWORD(v39) = 0;
      if ( v36 )
      {
        v38 = v36;
        v39 = -1LL;
        do
          ++v39;
        while ( *((_BYTE *)v36 + v39) );
      }
      v98 = v38;
      v99 = v39 + 1;
      v100 = 0;
      v40 = *(_QWORD *)(a20 + 16);
      if ( v40 )
      {
        v41 = (float)(int)v40;
        if ( v40 < 0 )
          v41 = v41 + 1.8446744e19;
        v23 = *(float *)(a20 + 8) / v41;
      }
      v43 = v23;
      v101 = &v43;
      v105 = a20 + 4;
      v107 = &v48;
      v109 = &v49;
      v111 = &v50;
      LODWORD(v44) = *(_DWORD *)(v21 + 8);
      v113 = &v44;
      v102 = 4LL;
      v103 = a20;
      v104 = 4LL;
      v106 = 4LL;
      v108 = 4LL;
      v110 = 4LL;
      v112 = 4LL;
      v114 = 4LL;
      return sub_180001128((__int64)&dword_18025EE60, (unsigned __int8 *)dword_180225175, 0LL, 0LL, 0x20u, &v51);
    }
  }
  return result;
}
