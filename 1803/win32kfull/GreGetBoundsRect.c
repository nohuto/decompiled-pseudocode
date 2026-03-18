/*
 * XREFs of GreGetBoundsRect @ 0x1C00DE048
 * Callers:
 *     NtGdiGetBoundsRect @ 0x1C00DDFE0 (NtGdiGetBoundsRect.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009C1AC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetBoundsRect(HDC a1, struct _POINTL *a2, __int16 a3)
{
  const struct tagRECT *v5; // rdx
  unsigned int v6; // edi
  struct tagRECT *v7; // rbx
  __int64 v8; // rbx
  __m128i v10; // xmm1
  __int64 v11; // rcx
  int v12; // eax
  LONG v13; // edx
  LONG v14; // r9d
  int v15; // eax
  LONG v16; // ecx
  LONG v17; // r10d
  LONG left; // eax
  LONG right; // eax
  LONG top; // eax
  LONG bottom; // eax
  __int128 v22; // xmm0
  LONG v23; // ecx
  LONG v24; // eax
  LONG v25; // edx
  LONG v26; // r8d
  LONG v27; // eax
  LONG v28; // r9d
  LONG v29; // eax
  LONG v30; // eax
  LONG v31; // eax
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // edx
  LONG v35; // r8d
  LONG v36; // ecx
  LONG v37; // eax
  LONG v38; // eax
  LONG v39; // r9d
  LONG v40; // eax
  LONG v41; // eax
  LONG v42; // eax
  LONG v43; // eax
  LONG v44; // eax
  const struct tagRECT *v45; // [rsp+20h] [rbp-69h] BYREF
  int v46; // [rsp+28h] [rbp-61h]
  unsigned int v47; // [rsp+2Ch] [rbp-5Dh]
  int v48; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v49[3]; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v50[32]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v51; // [rsp+70h] [rbp-19h]
  int v52; // [rsp+78h] [rbp-11h]
  int v53; // [rsp+7Ch] [rbp-Dh]
  struct _POINTL v54[2]; // [rsp+A0h] [rbp+17h] BYREF
  LONG x; // [rsp+B0h] [rbp+27h]
  LONG y; // [rsp+B4h] [rbp+2Bh]
  LONG v57; // [rsp+B8h] [rbp+2Fh]
  LONG v58; // [rsp+BCh] [rbp+33h]

  v45 = 0LL;
  v46 = 0;
  v47 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v45, a1);
  v5 = v45;
  v6 = 3;
  if ( !v45 )
    return 0;
  v7 = 0LL;
  if ( a3 < 0 )
  {
    v7 = (struct tagRECT *)&v45[92];
    if ( v45[92].left < v45[92].right && v45[92].top < v45[92].bottom )
      goto LABEL_10;
    goto LABEL_4;
  }
  if ( (a3 & 0x4000) != 0 )
  {
    v7 = (struct tagRECT *)&v45[93];
    if ( !IsRectEmptyInl(v45 + 93) )
    {
LABEL_10:
      *(struct tagRECT *)&a2->x = *v7;
      goto LABEL_11;
    }
    goto LABEL_4;
  }
  if ( IsRectEmptyInl(v45 + 94) )
  {
LABEL_4:
    v6 = 1;
    goto LABEL_5;
  }
  v51 = 0LL;
  v52 = 0;
  v53 = 0;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v50, (struct XDCOBJ *)&v45, 0);
  if ( (v50[24] & 1) != 0 )
  {
    v10 = *(__m128i *)((char *)XDCOBJ::prgnEffRao((DC **)&v45) + 88);
    v7 = (struct tagRECT *)&v45[94];
    v11 = v45[2].right & 1;
    v12 = *(&v45[89].left + 2 * v11);
    v13 = v10.m128i_i32[0] - v12;
    v14 = _mm_srli_si128(v10, 8).m128i_u32[0] - v12;
    v15 = *(&v45[89].top + 2 * v11);
    v16 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 4)) - v15;
    v17 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 12)) - v15;
    left = v45[94].left;
    if ( left <= v13 )
      left = v13;
    a2->x = left;
    right = v7->right;
    if ( right >= v14 )
      right = v14;
    a2[1].x = right;
    top = v7->top;
    if ( top <= v16 )
      top = v16;
    a2->y = top;
    bottom = v7->bottom;
    if ( bottom >= v17 )
      bottom = v17;
    a2[1].y = bottom;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v49, (struct XDCOBJ *)&v45, 1026);
    if ( !v49[0] )
      goto LABEL_29;
    if ( (*(_DWORD *)(v49[0] + 32LL) & 1) != 0 )
    {
      if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v49, a2, 2LL) )
        goto LABEL_27;
      goto LABEL_29;
    }
    v22 = *(_OWORD *)&a2->x;
    x = a2->x;
    y = a2[1].y;
    v57 = a2[1].x;
    v58 = a2->y;
    *(_OWORD *)&v54[0].x = v22;
    if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v49, v54, 4LL) )
    {
LABEL_29:
      v6 = 0;
      goto LABEL_27;
    }
    v23 = v54[1].x;
    v24 = v54[1].x;
    v25 = v54[0].x;
    v26 = x;
    if ( v54[0].x < v54[1].x )
      v24 = v54[0].x;
    if ( v24 >= x )
    {
      v27 = x;
    }
    else
    {
      v27 = v54[1].x;
      if ( v54[0].x < v54[1].x )
        v27 = v54[0].x;
    }
    v28 = v57;
    if ( v27 >= v57 )
    {
      v30 = v57;
    }
    else
    {
      v29 = v54[1].x;
      if ( v54[0].x < v54[1].x )
        v29 = v54[0].x;
      if ( v29 >= x )
      {
        v30 = x;
      }
      else
      {
        v30 = v54[1].x;
        if ( v54[0].x < v54[1].x )
          v30 = v54[0].x;
      }
    }
    a2->x = v30;
    v31 = v23;
    if ( v25 > v23 )
      v31 = v25;
    if ( v31 <= v26 )
    {
      v32 = v26;
    }
    else
    {
      v32 = v23;
      if ( v25 > v23 )
        v32 = v25;
    }
    if ( v32 <= v28 )
    {
      v23 = v28;
    }
    else
    {
      v33 = v23;
      if ( v25 > v23 )
        v33 = v25;
      if ( v33 <= v26 )
      {
        v23 = v26;
      }
      else if ( v25 > v23 )
      {
        v23 = v25;
      }
    }
    v34 = v54[0].y;
    v35 = y;
    a2[1].x = v23;
    v36 = v54[1].y;
    v37 = v54[1].y;
    if ( v34 < v54[1].y )
      v37 = v34;
    if ( v37 >= v35 )
    {
      v38 = v35;
    }
    else
    {
      v38 = v54[1].y;
      if ( v34 < v54[1].y )
        v38 = v34;
    }
    v39 = v58;
    if ( v38 >= v58 )
    {
      v41 = v58;
    }
    else
    {
      v40 = v54[1].y;
      if ( v34 < v54[1].y )
        v40 = v34;
      if ( v40 >= v35 )
      {
        v41 = v35;
      }
      else
      {
        v41 = v54[1].y;
        if ( v34 < v54[1].y )
          v41 = v34;
      }
    }
    a2->y = v41;
    v42 = v36;
    if ( v34 > v36 )
      v42 = v34;
    if ( v42 <= v35 )
    {
      v43 = v35;
    }
    else
    {
      v43 = v36;
      if ( v34 > v36 )
        v43 = v34;
    }
    if ( v43 <= v39 )
    {
      v36 = v39;
    }
    else
    {
      v44 = v36;
      if ( v34 > v36 )
        v44 = v34;
      if ( v44 <= v35 )
      {
        v36 = v35;
      }
      else if ( v34 > v36 )
      {
        v36 = v34;
      }
    }
    a2[1].y = v36;
  }
  else
  {
    v6 = XDCOBJ::bFullScreen((XDCOBJ *)&v45) != 0;
  }
LABEL_27:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v50);
  v5 = v45;
  if ( v6 == 3 )
  {
LABEL_11:
    if ( (a3 & 1) != 0 )
    {
      v7->top = 0x7FFFFFFF;
      v7->left = 0x7FFFFFFF;
      v7->bottom = 0x80000000;
      v7->right = 0x80000000;
      v5 = v45;
    }
  }
LABEL_5:
  if ( v5 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v45);
    v48 = 0;
    v8 = *(_QWORD *)&v45->left;
    HmgDecrementExclusiveReferenceCountEx(v45, v47, &v48);
    if ( v48 )
      bDeleteDCInternalEx(v8, 0LL);
  }
  return v6;
}
