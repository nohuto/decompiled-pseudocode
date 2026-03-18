/*
 * XREFs of ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0002A3C
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00922E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     AdjustBoundingBox @ 0x1C0004784 (AdjustBoundingBox.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall ESTROBJ::vEudcOpaqueArea(ESTROBJ *this, struct _POINTFIX *a2, int a3)
{
  __int64 *v3; // r10
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  int v10; // r11d
  int v11; // r10d
  int v12; // esi
  int v13; // r9d
  int v14; // r15d
  int v15; // r8d
  int v16; // r14d
  int v17; // r12d
  int v18; // ecx
  int v19; // edx
  int v20; // r9d
  int v21; // r13d
  int v22; // r8d
  int v23; // edx
  int v24; // r13d
  int v25; // r9d
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // [rsp+30h] [rbp-20h] BYREF
  __int64 v31; // [rsp+38h] [rbp-18h] BYREF
  __int128 v32; // [rsp+40h] [rbp-10h] BYREF
  int v33; // [rsp+90h] [rbp+40h] BYREF
  int v34; // [rsp+A0h] [rbp+50h]
  int v35; // [rsp+A8h] [rbp+58h] BYREF

  v34 = a3;
  v3 = (__int64 *)*((_QWORD *)this + 7);
  v35 = 0;
  v33 = 0;
  v31 = 0LL;
  v6 = 0;
  v7 = *v3;
  v30 = 0LL;
  if ( *(_DWORD *)(v7 + 824) + 4 <= 0 )
    return;
  v8 = -16LL;
  do
  {
    DWORD2(v32) = 0;
    switch ( v6 )
    {
      case 0:
        goto LABEL_9;
      case 1:
        if ( !*((_DWORD *)this + 62) )
          goto LABEL_9;
        v29 = *(_QWORD *)(*v3 + 704);
        break;
      case 2:
        if ( !*((_DWORD *)this + 63) )
          goto LABEL_9;
        v29 = *(_QWORD *)(*v3 + 712);
        break;
      case 3:
        if ( !*((_DWORD *)this + 64) )
          goto LABEL_9;
        v29 = *(_QWORD *)(*v3 + 720);
        break;
      default:
        v9 = *((_QWORD *)this + 33);
        if ( v9 )
        {
          if ( *(_DWORD *)(v8 + v9) )
          {
            v28 = *(_QWORD *)(*v3 + 728);
            if ( v28 )
            {
              if ( *(_QWORD *)(v28 + 8LL * (unsigned int)(v6 - 4)) )
              {
                *(_QWORD *)&v32 = *(_QWORD *)(v28 + 8LL * (unsigned int)(v6 - 4));
LABEL_32:
                AdjustBoundingBox(
                  (_DWORD)v3,
                  (unsigned int)&v32,
                  (unsigned int)&v35,
                  (unsigned int)&v33,
                  (__int64)&v31,
                  (__int64)&v30);
                goto LABEL_9;
              }
            }
          }
        }
        goto LABEL_9;
    }
    if ( v29 )
    {
      *(_QWORD *)&v32 = v29;
      goto LABEL_32;
    }
LABEL_9:
    *(_QWORD *)&v32 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
    v3 = (__int64 *)*((_QWORD *)this + 7);
    ++v6;
    v8 += 4LL;
  }
  while ( v6 < *(_DWORD *)(*v3 + 824) + 4 );
  v10 = v35;
  v11 = v33;
  if ( v35 || v33 )
  {
    v12 = v30;
    v13 = v30;
    v14 = v31;
    v15 = v30;
    v16 = HIDWORD(v30);
    v17 = HIDWORD(v31);
    v18 = HIDWORD(v30);
    if ( (int)v31 < (int)v30 )
      v13 = v31;
    v19 = HIDWORD(v30);
    v20 = v13 >> 4;
    v21 = _mm_cvtsi128_si32(*(__m128i *)((char *)this + 12));
    v32 = *(_OWORD *)((char *)this + 12);
    if ( (int)v31 > (int)v30 )
      v15 = v31;
    v22 = (v15 + 15) >> 4;
    if ( SHIDWORD(v31) < SHIDWORD(v30) )
      v19 = HIDWORD(v31);
    v23 = v19 >> 4;
    if ( SHIDWORD(v31) > SHIDWORD(v30) )
      v18 = HIDWORD(v31);
    v24 = v20 + v21;
    v25 = v22 + DWORD2(v32);
    v26 = v23 + DWORD1(v32);
    v27 = HIDWORD(v32) + ((v18 + 15) >> 4);
    if ( v26 < *((_DWORD *)this + 4) )
      *((_DWORD *)this + 4) = v26;
    if ( v27 > *((_DWORD *)this + 6) )
      *((_DWORD *)this + 6) = v27;
    if ( v24 < *((_DWORD *)this + 3) )
      *((_DWORD *)this + 3) = v24;
    if ( v25 > *((_DWORD *)this + 5) )
      *((_DWORD *)this + 5) = v25;
    if ( v34 )
    {
      if ( v10 )
      {
        a2->x += v14;
        a2->y += v17;
        a2[1].x += v14;
        a2[1].y += v17;
      }
      if ( v11 )
      {
        a2[2].x += v12;
        a2[2].y += v16;
        a2[3].x += v12;
        a2[3].y += v16;
      }
    }
  }
}
