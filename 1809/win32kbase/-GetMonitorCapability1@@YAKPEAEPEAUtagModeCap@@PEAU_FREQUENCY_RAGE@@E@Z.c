/*
 * XREFs of ?GetMonitorCapability1@@YAKPEAEPEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C0056D54
 * Callers:
 *     ?GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C00577E0 (-GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 * Callees:
 *     ?InsertModecapList@@YAKPEAUtagModeCap@@0K@Z @ 0x1C00571DC (-InsertModecapList@@YAKPEAUtagModeCap@@0K@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
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
  unsigned __int8 v25; // r9
  unsigned __int8 v26; // dl
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
  int v43; // [rsp+28h] [rbp-D8h] BYREF
  int v44; // [rsp+2Ch] [rbp-D4h]
  unsigned int v45; // [rsp+30h] [rbp-D0h]
  int v46; // [rsp+34h] [rbp-CCh]
  int v47; // [rsp+38h] [rbp-C8h]
  int v48; // [rsp+3Ch] [rbp-C4h]
  int v49; // [rsp+40h] [rbp-C0h]
  int v50; // [rsp+44h] [rbp-BCh]
  int v51; // [rsp+48h] [rbp-B8h]
  __int64 v52; // [rsp+4Ch] [rbp-B4h] BYREF
  int v53; // [rsp+54h] [rbp-ACh]
  int v54; // [rsp+58h] [rbp-A8h]
  int v55; // [rsp+5Ch] [rbp-A4h]
  int v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+64h] [rbp-9Ch]
  int v58; // [rsp+6Ch] [rbp-94h]
  int v59; // [rsp+70h] [rbp-90h]
  int v60; // [rsp+74h] [rbp-8Ch]
  int v61; // [rsp+78h] [rbp-88h]
  __int64 v62; // [rsp+7Ch] [rbp-84h]
  int v63; // [rsp+84h] [rbp-7Ch]
  int v64; // [rsp+88h] [rbp-78h]
  int v65; // [rsp+8Ch] [rbp-74h]
  int v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+94h] [rbp-6Ch]
  int v68; // [rsp+9Ch] [rbp-64h]
  int v69; // [rsp+A0h] [rbp-60h]
  int v70; // [rsp+A4h] [rbp-5Ch]
  int v71; // [rsp+A8h] [rbp-58h]
  __int64 v72; // [rsp+ACh] [rbp-54h]
  int v73; // [rsp+B4h] [rbp-4Ch]
  int v74; // [rsp+B8h] [rbp-48h]
  int v75; // [rsp+BCh] [rbp-44h]
  int v76; // [rsp+C0h] [rbp-40h]
  __int64 v77; // [rsp+C4h] [rbp-3Ch]
  int v78; // [rsp+CCh] [rbp-34h]
  int v79; // [rsp+D0h] [rbp-30h]
  int v80; // [rsp+D4h] [rbp-2Ch]
  int v81; // [rsp+D8h] [rbp-28h]
  __int64 v82; // [rsp+DCh] [rbp-24h]
  int v83; // [rsp+E4h] [rbp-1Ch]
  int v84; // [rsp+E8h] [rbp-18h]
  int v85; // [rsp+ECh] [rbp-14h]
  int v86; // [rsp+F0h] [rbp-10h]
  __int64 v87; // [rsp+F4h] [rbp-Ch]
  int v88; // [rsp+FCh] [rbp-4h]
  int v89; // [rsp+100h] [rbp+0h]
  int v90; // [rsp+104h] [rbp+4h]
  int v91; // [rsp+108h] [rbp+8h]
  __int64 v92; // [rsp+10Ch] [rbp+Ch]
  int v93; // [rsp+114h] [rbp+14h]
  int v94; // [rsp+118h] [rbp+18h]
  int v95; // [rsp+11Ch] [rbp+1Ch]
  int v96; // [rsp+120h] [rbp+20h]
  __int64 v97; // [rsp+124h] [rbp+24h]
  int v98; // [rsp+12Ch] [rbp+2Ch]
  int v99; // [rsp+130h] [rbp+30h]
  int v100; // [rsp+134h] [rbp+34h]
  int v101; // [rsp+138h] [rbp+38h]
  __int64 v102; // [rsp+13Ch] [rbp+3Ch]
  int v103; // [rsp+144h] [rbp+44h]
  int v104; // [rsp+148h] [rbp+48h]
  int v105; // [rsp+14Ch] [rbp+4Ch]
  int v106; // [rsp+150h] [rbp+50h]
  __int64 v107; // [rsp+154h] [rbp+54h]
  int v108; // [rsp+15Ch] [rbp+5Ch]
  int v109; // [rsp+160h] [rbp+60h]
  int v110; // [rsp+164h] [rbp+64h]
  int v111; // [rsp+168h] [rbp+68h]
  __int64 v112; // [rsp+16Ch] [rbp+6Ch]
  int v113; // [rsp+174h] [rbp+74h]
  __m128i v114; // [rsp+180h] [rbp+80h]
  __m128i v115; // [rsp+190h] [rbp+90h]
  _DWORD v116[2]; // [rsp+1A0h] [rbp+A0h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v5 = _mm_load_si128((const __m128i *)&_xmm);
  v116[0] = -256;
  v116[1] = 0xFFFFFF;
  *((_DWORD *)a3 + 2) = 0;
  *((_DWORD *)a3 + 4) = 0;
  v8 = a4 == 0 ? 0x38 : 0;
  v9 = 8LL;
  *(_DWORD *)a3 = v8;
  *((_DWORD *)a3 + 1) = -1;
  *((_DWORD *)a3 + 3) = -1;
  inserted = 0;
  *((_DWORD *)a3 + 5) = -1;
  v12 = 0;
  v115 = si128;
  v114 = v5;
  do
  {
    if ( a1[v12] != *((_BYTE *)v116 + (int)v12) )
      return 0LL;
    ++v12;
  }
  while ( v12 < 8 );
  v49 = 1280;
  v52 = 0LL;
  v55 = 768;
  v60 = 768;
  v65 = 768;
  v70 = 768;
  v50 = 1024;
  v54 = 1024;
  v59 = 1024;
  v64 = 1024;
  v69 = 1024;
  v53 = 0;
  v75 = 600;
  v80 = 600;
  v85 = 600;
  v90 = 600;
  v57 = 0LL;
  v58 = 0;
  v62 = 0LL;
  v63 = 0;
  v67 = 0LL;
  v68 = 0;
  v72 = 0LL;
  v73 = 0;
  v77 = 0LL;
  v78 = 0;
  v82 = 0LL;
  v83 = 0;
  v87 = 0LL;
  v88 = 0;
  v92 = 0LL;
  v93 = 0;
  v97 = 0LL;
  v98 = 0;
  v102 = 0LL;
  v103 = 0;
  v107 = 0LL;
  v108 = 0;
  v112 = 0LL;
  v113 = 0;
  v13 = a1[36];
  v74 = 800;
  v79 = 800;
  v84 = 800;
  v89 = 800;
  v51 = 75;
  v95 = 480;
  v100 = 480;
  v105 = 480;
  v110 = 480;
  v56 = 75;
  v61 = 70;
  v66 = 60;
  v71 = 87;
  v76 = 75;
  v81 = 72;
  v86 = 60;
  v91 = 56;
  v94 = 640;
  v96 = 75;
  v99 = 640;
  v101 = 72;
  v104 = 640;
  v106 = 67;
  v109 = 640;
  v111 = 60;
  a1[36] = v13 & 0x1F | (v13 >> 1) & 0x60;
  v14 = (_DWORD *)&v52 + 1;
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
  v47 = 0;
  v48 = -1;
  v46 = a4 != 0 ? 0 : 0x38;
  do
  {
    v17 = *v16;
    if ( *v16 >= 2u )
    {
      v18 = (unsigned __int64)v16[1] >> 6;
      v45 = (v16[1] & 0x3F) + 60;
      v19 = 8 * v17 + 248;
      v20 = v19 * v114.m128i_i32[v18];
      v43 = v19;
      v44 = v20 / v115.m128i_i32[v18];
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
      v43 = v27;
      v44 = v28;
      if ( v27 && v28 )
      {
        v29 = 10000
            * (v23 + (*v21 << 8))
            / ((v28 + ((v25 & 0xF) << 8) + v21[5])
             * (v27 + ((v24 & 0xF) << 8) + (unsigned int)v21[2]));
        v45 = 10000
            * (v23 + (*v21 << 8))
            / ((v28 + ((v25 & 0xF) << 8) + v21[5])
             * (v27 + ((v26 & 0xF) << 8) + (unsigned int)v21[2]));
        if ( (v21[16] & 0x80u) != 0 )
          v45 = v29 >> 1;
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
            v45 = (v36[1] & 0x3F) + 60;
            v40 = 8 * v38 + 248;
            v41 = v40 * v114.m128i_i32[v39];
            v43 = v40;
            v44 = v41 / v115.m128i_i32[v39];
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
