/*
 * XREFs of GreGetBoundsRect @ 0x1C00A3168
 * Callers:
 *     NtGdiGetBoundsRect @ 0x1C00A3100 (NtGdiGetBoundsRect.c)
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009F614 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00A3A98 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBoundsRect(HDC a1, struct _POINTL *a2, __int16 a3)
{
  unsigned int v6; // edi
  LONG *v7; // rbx
  __m128i v8; // xmm1
  char *v9; // rcx
  LONG v10; // edx
  signed __int32 v11; // r8d
  int v12; // eax
  LONG v13; // ecx
  LONG v14; // r9d
  LONG v15; // eax
  LONG v16; // eax
  LONG v17; // eax
  LONG v18; // eax
  __int128 v19; // xmm0
  LONG v20; // ecx
  LONG v21; // eax
  LONG v22; // edx
  LONG v23; // r8d
  LONG v24; // eax
  LONG v25; // r9d
  LONG v26; // eax
  LONG v27; // eax
  LONG v28; // eax
  LONG v29; // eax
  LONG v30; // eax
  LONG v31; // edx
  LONG v32; // r8d
  LONG v33; // ecx
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // r9d
  LONG v37; // eax
  LONG v38; // eax
  LONG v39; // eax
  LONG v40; // eax
  LONG v41; // eax
  DC *v43; // [rsp+20h] [rbp-99h] BYREF
  int v44; // [rsp+28h] [rbp-91h]
  int v45; // [rsp+2Ch] [rbp-8Dh]
  _BYTE v46[32]; // [rsp+30h] [rbp-89h] BYREF
  _QWORD v47[2]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v48[32]; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v49[80]; // [rsp+80h] [rbp-39h] BYREF
  struct _POINTL v50[2]; // [rsp+D0h] [rbp+17h] BYREF
  LONG x; // [rsp+E0h] [rbp+27h]
  LONG y; // [rsp+E4h] [rbp+2Bh]
  LONG v53; // [rsp+E8h] [rbp+2Fh]
  LONG v54; // [rsp+ECh] [rbp+33h]

  v43 = 0LL;
  v44 = 0;
  v45 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v46);
  XDCOBJ::vLock((XDCOBJ *)&v43, a1);
  v6 = 3;
  if ( !v43 )
  {
    v6 = 0;
    goto LABEL_97;
  }
  v7 = 0LL;
  if ( a3 < 0 )
  {
    v7 = (LONG *)((char *)v43 + 1064);
    if ( *((_DWORD *)v43 + 266) < *((_DWORD *)v43 + 268) && *((_DWORD *)v43 + 267) < *((_DWORD *)v43 + 269) )
      goto LABEL_6;
LABEL_9:
    v6 = 1;
    goto LABEL_97;
  }
  if ( (a3 & 0x4000) == 0 )
  {
    if ( (unsigned int)ERECTL::bWrapped((DC *)((char *)v43 + 1096)) )
      goto LABEL_9;
    DCOBJ::DCOBJ((DCOBJ *)v49);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v48, (struct XDCOBJ *)&v43, 0);
    if ( (v48[24] & 1) == 0 )
    {
      v6 = XDCOBJ::bFullScreen((XDCOBJ *)&v43) != 0;
      goto LABEL_94;
    }
    v8 = *(__m128i *)((char *)XDCOBJ::prgnEffRao(&v43) + 88);
    v7 = (LONG *)((char *)v43 + 1096);
    v9 = (char *)v43 + 1024;
    if ( (*((_DWORD *)v43 + 10) & 1) == 0 )
      v9 = (char *)v43 + 1016;
    v10 = v8.m128i_i32[0] - *(_DWORD *)v9;
    v11 = _mm_srli_si128(v8, 8).m128i_u32[0] - *(_DWORD *)v9;
    v12 = *((_DWORD *)v9 + 1);
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4)) - v12;
    v14 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - v12;
    v15 = *v7;
    if ( *v7 <= v10 )
      v15 = v10;
    a2->x = v15;
    v16 = v7[2];
    if ( v16 >= v11 )
      v16 = v11;
    a2[1].x = v16;
    v17 = v7[1];
    if ( v17 <= v13 )
      v17 = v13;
    a2->y = v17;
    v18 = v7[3];
    if ( v18 >= v14 )
      v18 = v14;
    a2[1].y = v18;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v47, (struct XDCOBJ *)&v43, 0x402u);
    if ( v47[0] )
    {
      if ( (*(_DWORD *)(v47[0] + 32LL) & 1) != 0 )
      {
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v47, a2, 2LL) )
          goto LABEL_94;
      }
      else
      {
        v19 = *(_OWORD *)&a2->x;
        x = a2->x;
        y = a2[1].y;
        v53 = a2[1].x;
        v54 = a2->y;
        *(_OWORD *)&v50[0].x = v19;
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v47, v50, 4LL) )
        {
          v20 = v50[1].x;
          v21 = v50[1].x;
          v22 = v50[0].x;
          v23 = x;
          if ( v50[0].x < v50[1].x )
            v21 = v50[0].x;
          if ( v21 >= x )
          {
            v24 = x;
          }
          else
          {
            v24 = v50[1].x;
            if ( v50[0].x < v50[1].x )
              v24 = v50[0].x;
          }
          v25 = v53;
          if ( v24 >= v53 )
          {
            v27 = v53;
          }
          else
          {
            v26 = v50[1].x;
            if ( v50[0].x < v50[1].x )
              v26 = v50[0].x;
            if ( v26 >= x )
            {
              v27 = x;
            }
            else
            {
              v27 = v50[1].x;
              if ( v50[0].x < v50[1].x )
                v27 = v50[0].x;
            }
          }
          a2->x = v27;
          v28 = v20;
          if ( v22 > v20 )
            v28 = v22;
          if ( v28 <= v23 )
          {
            v29 = v23;
          }
          else
          {
            v29 = v20;
            if ( v22 > v20 )
              v29 = v22;
          }
          if ( v29 <= v25 )
          {
            v20 = v25;
          }
          else
          {
            v30 = v20;
            if ( v22 > v20 )
              v30 = v22;
            if ( v30 <= v23 )
            {
              v20 = v23;
            }
            else if ( v22 > v20 )
            {
              v20 = v22;
            }
          }
          v31 = v50[0].y;
          v32 = y;
          a2[1].x = v20;
          v33 = v50[1].y;
          v34 = v50[1].y;
          if ( v31 < v50[1].y )
            v34 = v31;
          if ( v34 >= v32 )
          {
            v35 = v32;
          }
          else
          {
            v35 = v50[1].y;
            if ( v31 < v50[1].y )
              v35 = v31;
          }
          v36 = v54;
          if ( v35 >= v54 )
          {
            v38 = v54;
          }
          else
          {
            v37 = v50[1].y;
            if ( v31 < v50[1].y )
              v37 = v31;
            if ( v37 >= v32 )
            {
              v38 = v32;
            }
            else
            {
              v38 = v50[1].y;
              if ( v31 < v50[1].y )
                v38 = v31;
            }
          }
          a2->y = v38;
          v39 = v33;
          if ( v31 > v33 )
            v39 = v31;
          if ( v39 <= v32 )
          {
            v40 = v32;
          }
          else
          {
            v40 = v33;
            if ( v31 > v33 )
              v40 = v31;
          }
          if ( v40 <= v36 )
          {
            v33 = v36;
          }
          else
          {
            v41 = v33;
            if ( v31 > v33 )
              v41 = v31;
            if ( v41 <= v32 )
            {
              v33 = v32;
            }
            else if ( v31 > v33 )
            {
              v33 = v31;
            }
          }
          a2[1].y = v33;
LABEL_94:
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v48);
          DCOBJ::~DCOBJ((DCOBJ *)v49);
          if ( v6 != 3 )
            goto LABEL_97;
          goto LABEL_95;
        }
      }
    }
    v6 = 0;
    goto LABEL_94;
  }
  v7 = (LONG *)((char *)v43 + 1080);
  if ( (unsigned int)ERECTL::bWrapped((DC *)((char *)v43 + 1080)) )
    goto LABEL_9;
LABEL_6:
  *(_OWORD *)&a2->x = *(_OWORD *)v7;
LABEL_95:
  if ( (a3 & 1) != 0 )
  {
    v7[1] = 0x7FFFFFFF;
    *v7 = 0x7FFFFFFF;
    v7[3] = 0x80000000;
    v7[2] = 0x80000000;
  }
LABEL_97:
  MDCOBJ::~MDCOBJ((MDCOBJ *)&v43);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v46);
  return v6;
}
