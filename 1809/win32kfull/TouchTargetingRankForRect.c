/*
 * XREFs of TouchTargetingRankForRect @ 0x1C0243640
 * Callers:
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01ECD8C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C01EDEF4 (-_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOIN.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01EE9F4 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     TouchTargetingRankForRegion @ 0x1C0243DC4 (TouchTargetingRankForRegion.c)
 * Callees:
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     ?_TTUpdateRankWithSegment@@YAXJJJJPEAUtagPOINT@@PEAGUtagRECT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C0242C98 (-_TTUpdateRankWithSegment@@YAXJJJJPEAUtagPOINT@@PEAGUtagRECT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 */

__int64 __fastcall TouchTargetingRankForRect(int *a1, struct tagRECT *a2, int *a3, int *a4, int *a5, unsigned int a6)
{
  int *v10; // r14
  unsigned int v11; // r12d
  int v12; // r13d
  int v13; // r8d
  int v14; // ecx
  signed int v16; // ecx
  signed int v17; // r8d
  signed int v18; // edx
  signed int v19; // r8d
  signed int v20; // r9d
  signed int v21; // eax
  signed int v22; // edx
  signed int v23; // r8d
  signed int v24; // ecx
  signed int v25; // ecx
  signed int v26; // edx
  signed int v27; // r9d
  LONG y; // r9d
  LONG x; // r10d
  __int16 v30; // ax
  int v31; // r11d
  int v32; // eax
  int v33; // r15d
  int v34; // r8d
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // rdx
  LONG v38; // r8d
  LONG left; // r12d
  int v40; // eax
  LONG top; // ecx
  unsigned int v42; // ecx
  int v43; // eax
  LONG v44; // ecx
  int v45; // edx
  int v46; // ecx
  LONG right; // r15d
  int v48; // r11d
  unsigned int v49; // ecx
  unsigned int v50; // eax
  int v51; // edx
  bool v52; // zf
  bool v53; // sf
  bool v54; // of
  LONG bottom; // eax
  int v56; // r11d
  unsigned int v57; // eax
  __int128 v58; // rax
  __int64 v59; // rdx
  int v60; // eax
  int v61; // edx
  int v62; // eax
  struct tagPOINT v63[2]; // [rsp+40h] [rbp-20h] BYREF
  struct tagRECT v64; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v65; // [rsp+A0h] [rbp+40h] BYREF

  v65 = 4094;
  if ( !a3[45]
    || !(unsigned int)IntersectRect(&v64, a1, a3)
    || a4 && !(unsigned int)IntersectRect(a1, a1, a4)
    || !(unsigned int)IntersectRect(a1, &a2->left, a1)
    || *a1 == a1[2]
    || a1[1] == a1[3] )
  {
    return 4094LL;
  }
  v10 = a5;
  if ( a5 )
    *(_QWORD *)a5 = 0LL;
  v11 = a6;
  v12 = 0x7FFFFFFF;
  if ( !a6 )
  {
    *(struct tagRECT *)&v63[0].x = *a2;
    if ( a4 && !(unsigned int)IntersectRect(v63, (int *)v63, a4) )
      return 4094LL;
    v13 = 0x7FFFFFFF;
    if ( (unsigned __int64)(a3[46] * (__int64)(v63[1].x - v63[0].x) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v13 = a3[46] * (__int64)(v63[1].x - v63[0].x) / 1000;
    v14 = 0x7FFFFFFF;
    if ( (unsigned __int64)(a3[47] * (__int64)(v63[1].y - v63[0].y) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v14 = a3[47] * (__int64)(v63[1].y - v63[0].y) / 1000;
    if ( v13 > 1400 && v14 > 1400 )
      return 4093LL;
  }
  v16 = *a1;
  v17 = a1[2] - 1;
  v18 = a1[1];
  if ( *a1 == v17 )
  {
    v19 = *a1;
    v20 = a1[3] - 1;
LABEL_25:
    v64 = *a2;
    _TTUpdateRankWithSegment(v16, v18, v19, v20, v63, &v65, &v64, (const struct tagTOUCHTARGETINGCONTACT *)a3);
    goto LABEL_26;
  }
  v21 = a1[3] - 1;
  v64 = *a2;
  if ( v18 != v21 )
  {
    _TTUpdateRankWithSegment(v16, v18, v16, v21, v63, &v65, &v64, (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v22 = a1[3] - 1;
    v23 = a1[2] - 1;
    v24 = *a1;
    v64 = *a2;
    _TTUpdateRankWithSegment(v24, v22, v23, v22, v63, &v65, &v64, (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v25 = a1[2] - 1;
    v26 = a1[3] - 1;
    v27 = a1[1];
    v64 = *a2;
    _TTUpdateRankWithSegment(v25, v26, v25, v27, v63, &v65, &v64, (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v18 = a1[1];
    v16 = a1[2] - 1;
    v19 = *a1;
    v20 = v18;
    goto LABEL_25;
  }
  _TTUpdateRankWithSegment(v16, v21, v17, v21, v63, &v65, &v64, (const struct tagTOUCHTARGETINGCONTACT *)a3);
LABEL_26:
  if ( v65 == 4094 || !v10 )
    return v65;
  y = v63[0].y;
  x = v63[0].x;
  if ( v11 )
  {
    v30 = v11;
    if ( (_WORD)v11 != 3 )
      goto LABEL_63;
  }
  else
  {
    v30 = 0;
  }
  v31 = 200;
  if ( v30 == 3 )
    v31 = HIWORD(v11);
  v32 = v63[0].x - a3[8];
  *v10 = v32;
  v33 = y - a3[9];
  v10[1] = v33;
  if ( v32 )
  {
    v34 = 0x7FFFFFFF;
    v35 = a3[46] * (__int64)(int)abs32(v32) / 1000;
    if ( (unsigned __int64)(v35 + 0x80000000LL) <= 0xFFFFFFFF )
      v34 = v35;
    if ( v34 > v31 )
      return 4094LL;
  }
  if ( v33 )
  {
    v36 = 0x7FFFFFFF;
    v37 = a3[47] * (__int64)(int)abs32(v33) / 1000;
    if ( (unsigned __int64)(v37 + 0x80000000LL) <= 0xFFFFFFFF )
      v36 = v37;
    if ( v36 > v31 )
      return 4094LL;
  }
  if ( v11 )
  {
LABEL_63:
    v60 = a1[2] - 1;
    if ( x == *a1 )
    {
      if ( x + 1 < v60 && x + 1 < a3[2] )
        ++x;
    }
    else if ( x == v60 && x - 1 > *a1 && x - 1 >= *a3 )
    {
      --x;
    }
    v61 = a1[1];
    v62 = a1[3] - 1;
    if ( y == v61 )
    {
      if ( y + 1 < v62 && y + 1 < a3[3] )
        ++y;
    }
    else if ( y == v62 && y - 1 > v61 && y - 1 >= a3[1] )
    {
      --y;
    }
    *v10 = x - a3[8];
    v10[1] = y - a3[9];
    return v65;
  }
  v38 = a3[8];
  left = a2->left;
  if ( v38 >= a2->left )
  {
    right = a2->right;
    if ( v38 < right )
      goto LABEL_59;
    v48 = a3[9];
    v63[0].x = a2->top;
    if ( v48 < v63[0].x )
    {
      v49 = abs32(v38 - right + 1);
      v50 = abs32(v48 - v63[0].x);
      v51 = 0;
      v54 = __OFSUB__(v49, v50);
      v52 = v49 == v50;
      v53 = (int)(v49 - v50) < 0;
LABEL_55:
      LOBYTE(v51) = !(v53 ^ v54 | v52);
      goto LABEL_57;
    }
    bottom = a2->bottom;
    if ( v48 >= bottom )
    {
      v56 = v48 - bottom;
      v45 = (v56 + 1) >> 31;
      v46 = v56 + 1;
      v43 = v38 - right + 1;
      goto LABEL_53;
    }
  }
  else
  {
    v40 = a3[9];
    top = a2->top;
    if ( v40 < top )
    {
      v42 = abs32(v40 - top);
      v43 = v38 - left;
LABEL_54:
      v57 = abs32(v43);
      v51 = 0;
      v54 = __OFSUB__(v57, v42);
      v52 = v57 == v42;
      v53 = (int)(v57 - v42) < 0;
      goto LABEL_55;
    }
    v44 = a2->bottom;
    if ( v40 >= v44 )
    {
      v45 = (v40 - v44 + 1) >> 31;
      v46 = v40 - v44 + 1;
      v43 = v38 - left;
LABEL_53:
      v42 = (v45 ^ v46) - v45;
      goto LABEL_54;
    }
  }
  v51 = 1;
LABEL_57:
  if ( v51 )
  {
    v58 = a3[46] * (__int64)(int)abs32(x - (left + a2->right) / 2) * (__int128)0x20C49BA5E353F7CFLL;
    goto LABEL_60;
  }
LABEL_59:
  v58 = a3[47] * (__int64)(int)abs32(y - (a2->top + a2->bottom) / 2) * (__int128)0x20C49BA5E353F7CFLL;
LABEL_60:
  v59 = (*((_QWORD *)&v58 + 1) >> 63) + (*((__int64 *)&v58 + 1) >> 7);
  if ( (unsigned __int64)(v59 + 0x80000000LL) <= 0xFFFFFFFF )
    v12 = v59;
  if ( v12 <= 700 )
    goto LABEL_63;
  return 4094LL;
}
