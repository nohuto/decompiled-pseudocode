/*
 * XREFs of ?GetMonitorCapability1@@YAKPEAEPEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C00898F8
 * Callers:
 *     ?GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C008983C (-GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 * Callees:
 *     ?InsertModecapList@@YAKPEAUtagModeCap@@0K@Z @ 0x1C0089D90 (-InsertModecapList@@YAKPEAUtagModeCap@@0K@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

__int64 __fastcall GetMonitorCapability1(
        unsigned __int8 *a1,
        struct tagModeCap *a2,
        struct _FREQUENCY_RAGE *a3,
        char a4)
{
  __m128i si128; // xmm0
  __m128i v5; // xmm1
  int v8; // r14d
  __int64 v9; // r13
  unsigned int inserted; // r10d
  unsigned int v12; // edx
  unsigned __int8 v13; // al
  _DWORD *v14; // rsi
  int i; // ebx
  unsigned __int8 *v16; // rbx
  unsigned __int8 v17; // al
  unsigned __int64 v18; // r8
  int v19; // ecx
  unsigned int v20; // eax
  unsigned __int8 *v21; // rbx
  __int64 v22; // r15
  unsigned __int8 v23; // si
  unsigned __int8 v24; // al
  unsigned __int8 v25; // dl
  unsigned __int8 v26; // r9
  int v27; // r14d
  int v28; // r11d
  unsigned int v29; // eax
  int v30; // edx
  _DWORD *v31; // rax
  _DWORD *v32; // r8
  unsigned __int8 v34; // al
  int v35; // ecx
  unsigned __int8 *v36; // rsi
  __int64 v37; // r14
  unsigned __int8 v38; // al
  unsigned __int64 v39; // r8
  int v40; // ecx
  unsigned int v41; // eax
  unsigned __int64 v43; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v45; // [rsp+38h] [rbp-C8h]
  int v46; // [rsp+40h] [rbp-C0h]
  int v47; // [rsp+44h] [rbp-BCh]
  int v48; // [rsp+48h] [rbp-B8h]
  __int64 v49; // [rsp+4Ch] [rbp-B4h] BYREF
  int v50; // [rsp+54h] [rbp-ACh]
  int v51; // [rsp+58h] [rbp-A8h]
  int v52; // [rsp+5Ch] [rbp-A4h]
  int v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+64h] [rbp-9Ch]
  int v55; // [rsp+6Ch] [rbp-94h]
  int v56; // [rsp+70h] [rbp-90h]
  int v57; // [rsp+74h] [rbp-8Ch]
  int v58; // [rsp+78h] [rbp-88h]
  __int64 v59; // [rsp+7Ch] [rbp-84h]
  int v60; // [rsp+84h] [rbp-7Ch]
  int v61; // [rsp+88h] [rbp-78h]
  int v62; // [rsp+8Ch] [rbp-74h]
  int v63; // [rsp+90h] [rbp-70h]
  __int64 v64; // [rsp+94h] [rbp-6Ch]
  int v65; // [rsp+9Ch] [rbp-64h]
  int v66; // [rsp+A0h] [rbp-60h]
  int v67; // [rsp+A4h] [rbp-5Ch]
  int v68; // [rsp+A8h] [rbp-58h]
  __int64 v69; // [rsp+ACh] [rbp-54h]
  int v70; // [rsp+B4h] [rbp-4Ch]
  int v71; // [rsp+B8h] [rbp-48h]
  int v72; // [rsp+BCh] [rbp-44h]
  int v73; // [rsp+C0h] [rbp-40h]
  __int64 v74; // [rsp+C4h] [rbp-3Ch]
  int v75; // [rsp+CCh] [rbp-34h]
  int v76; // [rsp+D0h] [rbp-30h]
  int v77; // [rsp+D4h] [rbp-2Ch]
  int v78; // [rsp+D8h] [rbp-28h]
  __int64 v79; // [rsp+DCh] [rbp-24h]
  int v80; // [rsp+E4h] [rbp-1Ch]
  int v81; // [rsp+E8h] [rbp-18h]
  int v82; // [rsp+ECh] [rbp-14h]
  int v83; // [rsp+F0h] [rbp-10h]
  __int64 v84; // [rsp+F4h] [rbp-Ch]
  int v85; // [rsp+FCh] [rbp-4h]
  int v86; // [rsp+100h] [rbp+0h]
  int v87; // [rsp+104h] [rbp+4h]
  int v88; // [rsp+108h] [rbp+8h]
  __int64 v89; // [rsp+10Ch] [rbp+Ch]
  int v90; // [rsp+114h] [rbp+14h]
  int v91; // [rsp+118h] [rbp+18h]
  int v92; // [rsp+11Ch] [rbp+1Ch]
  int v93; // [rsp+120h] [rbp+20h]
  __int64 v94; // [rsp+124h] [rbp+24h]
  int v95; // [rsp+12Ch] [rbp+2Ch]
  int v96; // [rsp+130h] [rbp+30h]
  int v97; // [rsp+134h] [rbp+34h]
  int v98; // [rsp+138h] [rbp+38h]
  __int64 v99; // [rsp+13Ch] [rbp+3Ch]
  int v100; // [rsp+144h] [rbp+44h]
  int v101; // [rsp+148h] [rbp+48h]
  int v102; // [rsp+14Ch] [rbp+4Ch]
  int v103; // [rsp+150h] [rbp+50h]
  __int64 v104; // [rsp+154h] [rbp+54h]
  int v105; // [rsp+15Ch] [rbp+5Ch]
  int v106; // [rsp+160h] [rbp+60h]
  int v107; // [rsp+164h] [rbp+64h]
  int v108; // [rsp+168h] [rbp+68h]
  __int64 v109; // [rsp+16Ch] [rbp+6Ch]
  int v110; // [rsp+174h] [rbp+74h]
  __m128i v111; // [rsp+180h] [rbp+80h]
  __m128i v112; // [rsp+190h] [rbp+90h]
  _DWORD v113[2]; // [rsp+1A0h] [rbp+A0h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v5 = _mm_load_si128((const __m128i *)&_xmm);
  v113[0] = -256;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v113[1] = 0xFFFFFF;
  v8 = a4 == 0 ? 0x38 : 0;
  *((_DWORD *)a3 + 2) = 0;
  *(_DWORD *)a3 = v8;
  *((_DWORD *)a3 + 1) = -1;
  v9 = 8LL;
  *((_DWORD *)a3 + 3) = -1;
  *((_DWORD *)a3 + 5) = -1;
  inserted = 0;
  v112 = si128;
  *((_DWORD *)a3 + 4) = 0;
  v12 = 0;
  v111 = v5;
  do
  {
    if ( a1[v12] != *((_BYTE *)v113 + (int)v12) )
      return 0LL;
    ++v12;
  }
  while ( v12 < 8 );
  v46 = 1280;
  v49 = 0LL;
  v52 = 768;
  v57 = 768;
  v62 = 768;
  v67 = 768;
  v47 = 1024;
  v51 = 1024;
  v56 = 1024;
  v61 = 1024;
  v66 = 1024;
  v50 = 0;
  v72 = 600;
  v77 = 600;
  v82 = 600;
  v87 = 600;
  v54 = 0LL;
  v55 = 0;
  v59 = 0LL;
  v60 = 0;
  v64 = 0LL;
  v65 = 0;
  v69 = 0LL;
  v70 = 0;
  v74 = 0LL;
  v75 = 0;
  v79 = 0LL;
  v80 = 0;
  v84 = 0LL;
  v85 = 0;
  v89 = 0LL;
  v90 = 0;
  v94 = 0LL;
  v95 = 0;
  v99 = 0LL;
  v100 = 0;
  v104 = 0LL;
  v105 = 0;
  v109 = 0LL;
  v110 = 0;
  v13 = a1[36];
  v71 = 800;
  v76 = 800;
  v81 = 800;
  v86 = 800;
  v48 = 75;
  v92 = 480;
  v97 = 480;
  v102 = 480;
  v107 = 480;
  v53 = 75;
  v58 = 70;
  v63 = 60;
  v68 = 87;
  v73 = 75;
  v78 = 72;
  v83 = 60;
  v88 = 56;
  v91 = 640;
  v93 = 75;
  v96 = 640;
  v98 = 72;
  v101 = 640;
  v103 = 67;
  v106 = 640;
  v108 = 60;
  a1[36] = v13 & 0x1F | (v13 >> 1) & 0x60;
  v14 = (_DWORD *)&v49 + 1;
  for ( i = 0; i < 13; ++i )
  {
    v14[1] = -1;
    *(v14 - 1) = v8;
    *v14 = 0;
    if ( ((a1[36 - i / 7] >> (i % 7)) & 1) != 0 )
      inserted = InsertModecapList((struct tagModeCap *)(v14 - 4), a2, inserted);
    v14 += 6;
  }
  v16 = a1 + 38;
  v45 = 0xFFFFFFFF00000000uLL;
  HIDWORD(v44) = a4 != 0 ? 0 : 0x38;
  do
  {
    v17 = *v16;
    if ( *v16 >= 2u )
    {
      v18 = (unsigned __int64)v16[1] >> 6;
      LODWORD(v44) = (v16[1] & 0x3F) + 60;
      v19 = 8 * v17 + 248;
      v20 = v19 * v111.m128i_i32[v18];
      LODWORD(v43) = v19;
      HIDWORD(v43) = v20 / v112.m128i_i32[v18];
      inserted = InsertModecapList((struct tagModeCap *)&v43, a2, inserted);
    }
    v16 += 2;
    --v9;
  }
  while ( v9 );
  v21 = a1 + 55;
  v22 = 4LL;
  do
  {
    v23 = *(v21 - 1);
    if ( (v23 || *v21) && (v24 = v21[3]) != 0 )
    {
      v25 = v21[6];
      v26 = v21[3];
      v27 = v21[1] + 16 * (v24 & 0xF0);
      v28 = v21[4] + 16 * (v25 & 0xF0);
      v43 = __PAIR64__(v28, v27);
      if ( v27 && v28 )
      {
        v29 = 10000
            * (v23 + (*v21 << 8))
            / ((v27 + ((v24 & 0xF) << 8) + v21[2])
             * (v28 + ((v25 & 0xF) << 8) + (unsigned int)v21[5]));
        LODWORD(v44) = 10000
                     * (v23 + (*v21 << 8))
                     / ((v27 + ((v26 & 0xF) << 8) + v21[2])
                      * (v28 + ((v25 & 0xF) << 8) + (unsigned int)v21[5]));
        if ( (v21[16] & 0x80u) != 0 )
          LODWORD(v44) = v29 >> 1;
        inserted = InsertModecapList((struct tagModeCap *)&v43, a2, inserted);
      }
    }
    else
    {
      v34 = v21[2];
      if ( v34 == 0xFA )
      {
        v36 = v21 + 4;
        v37 = 6LL;
        do
        {
          v38 = *v36;
          if ( *v36 >= 2u )
          {
            v39 = (unsigned __int64)v36[1] >> 6;
            LODWORD(v44) = (v36[1] & 0x3F) + 60;
            v40 = 8 * v38 + 248;
            v41 = v40 * v111.m128i_i32[v39];
            LODWORD(v43) = v40;
            HIDWORD(v43) = v41 / v112.m128i_i32[v39];
            inserted = InsertModecapList((struct tagModeCap *)&v43, a2, inserted);
          }
          v36 += 2;
          --v37;
        }
        while ( v37 );
      }
      else if ( v34 == 0xFD )
      {
        *(_DWORD *)a3 = v21[4];
        *((_DWORD *)a3 + 1) = v21[5];
        *((_DWORD *)a3 + 2) = 1000 * v21[6];
        v35 = 1000 * v21[7];
        *((_DWORD *)a3 + 4) = 0;
        *((_DWORD *)a3 + 3) = v35;
        *((_DWORD *)a3 + 5) = 10000000 * v21[8];
      }
    }
    v21 += 18;
    --v22;
  }
  while ( v22 );
  v30 = inserted - 2;
  if ( (int)(inserted - 2) >= 0 )
  {
    v31 = (_DWORD *)((char *)a2 + 24 * (int)inserted - 16);
    v32 = (_DWORD *)((char *)a2 + 16 * v30 + 8 * v30 + 8);
    do
    {
      if ( *v32 < *v31 )
        *v32 = *v31;
      v31 -= 6;
      v32 -= 6;
      --v30;
    }
    while ( v30 >= 0 );
  }
  return inserted;
}
