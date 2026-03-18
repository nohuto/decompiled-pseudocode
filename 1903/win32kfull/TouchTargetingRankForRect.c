/*
 * XREFs of TouchTargetingRankForRect @ 0x1C025C430
 * Callers:
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C020363C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C0204510 (-_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOIN.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0204D90 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     TouchTargetingRankForRegion @ 0x1C025CC18 (TouchTargetingRankForRegion.c)
 * Callees:
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     ?_TTUpdateRankWithSegment@@YAXJJJJPEAUtagPOINT@@PEAGUtagRECT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C025BA78 (-_TTUpdateRankWithSegment@@YAXJJJJPEAUtagPOINT@@PEAGUtagRECT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 */

__int64 __fastcall TouchTargetingRankForRect(int *a1, struct tagRECT *a2, int *a3, int *a4, int *a5, unsigned int a6)
{
  int v10; // r9d
  int v11; // r14d
  signed int v12; // eax
  int v13; // r12d
  int *v14; // rdi
  unsigned int v15; // r13d
  int v16; // r10d
  int v17; // r8d
  int v19; // r15d
  int v20; // r12d
  int v21; // r9d
  signed int v22; // edx
  signed int v23; // ecx
  LONG y; // r9d
  LONG x; // r10d
  __int16 v26; // ax
  int v27; // r11d
  int v28; // eax
  int v29; // r15d
  int v30; // r8d
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // rdx
  LONG left; // r15d
  int v35; // r11d
  int v36; // eax
  LONG top; // ecx
  int v38; // eax
  LONG bottom; // ecx
  BOOL v40; // r8d
  LONG right; // eax
  int v42; // r15d
  LONG v43; // r13d
  int v44; // ecx
  int v45; // eax
  LONG v46; // r13d
  __int128 v47; // rax
  int v48; // r8d
  __int64 v49; // rdx
  struct tagTOUCHTARGETINGCONTACT *v50; // [rsp+38h] [rbp-28h]
  int v51; // [rsp+40h] [rbp-20h]
  int v52; // [rsp+44h] [rbp-1Ch]
  struct tagPOINT v53; // [rsp+48h] [rbp-18h] BYREF
  struct tagRECT v54; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v55; // [rsp+A0h] [rbp+40h] BYREF

  v55 = 4094;
  v53 = 0LL;
  *(_QWORD *)&v54.left = 0LL;
  *(_QWORD *)&v54.right = 0LL;
  if ( !a3[45] || !(unsigned int)IntersectRect(&v54, a1, a3) || a4 && !(unsigned int)IntersectRect(a1, a1, a4) )
    return 4094LL;
  if ( !(unsigned int)IntersectRect(a1, &a2->left, a1) )
    return 4094LL;
  v10 = a1[2];
  v11 = *a1;
  v51 = v10;
  if ( *a1 == v10 )
    return 4094LL;
  v12 = a1[1];
  v13 = a1[3];
  v52 = v12;
  if ( v12 == v13 )
    return 4094LL;
  v14 = a5;
  if ( a5 )
    *(_QWORD *)a5 = 0LL;
  v15 = a6;
  v16 = 0x7FFFFFFF;
  if ( !a6 )
  {
    v54 = *a2;
    if ( a4 )
    {
      if ( !(unsigned int)IntersectRect(&v54, &v54.left, a4) )
        return 4094LL;
      v10 = v51;
      v16 = 0x7FFFFFFF;
    }
    v17 = 0x7FFFFFFF;
    if ( (unsigned __int64)(a3[46] * (__int64)(v54.right - v54.left) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v17 = a3[46] * (__int64)(v54.right - v54.left) / 1000;
    if ( (unsigned __int64)(a3[47] * (__int64)(v54.bottom - v54.top) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v16 = a3[47] * (__int64)(v54.bottom - v54.top) / 1000;
    if ( v17 > 1400 && v16 > 1400 )
      return 4093LL;
    v12 = v52;
  }
  v19 = v10 - 1;
  v50 = (struct tagTOUCHTARGETINGCONTACT *)a3;
  v20 = v13 - 1;
  v21 = v20;
  if ( v11 == v19 )
  {
    v22 = v12;
    v23 = v11;
LABEL_27:
    v54 = *a2;
    _TTUpdateRankWithSegment(v23, v22, v11, v21, &v53, &v55, &v54, v50);
    goto LABEL_28;
  }
  v54 = *a2;
  if ( v12 != v20 )
  {
    _TTUpdateRankWithSegment(v11, v12, v11, v20, &v53, &v55, &v54, (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v54 = *a2;
    _TTUpdateRankWithSegment(v11, v20, v19, v20, &v53, &v55, &v54, (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v54 = *a2;
    _TTUpdateRankWithSegment(v51 - 1, v20, v51 - 1, v52, &v53, &v55, &v54, (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v50 = (struct tagTOUCHTARGETINGCONTACT *)a3;
    v21 = v52;
    v22 = v52;
    v23 = v51 - 1;
    goto LABEL_27;
  }
  _TTUpdateRankWithSegment(v11, v20, v19, v20, &v53, &v55, &v54, (const struct tagTOUCHTARGETINGCONTACT *)a3);
LABEL_28:
  if ( v55 == 4094 || !v14 )
    return v55;
  y = v53.y;
  x = v53.x;
  if ( v15 )
  {
    v26 = v15;
    if ( (_WORD)v15 != 3 )
      goto LABEL_65;
  }
  else
  {
    v26 = 0;
  }
  v27 = 200;
  if ( v26 == 3 )
    v27 = HIWORD(v15);
  v28 = v53.x - a3[8];
  *v14 = v28;
  v29 = y - a3[9];
  v14[1] = v29;
  if ( v28 )
  {
    v30 = 0x7FFFFFFF;
    v31 = a3[46] * (__int64)(int)abs32(v28) / 1000;
    if ( (unsigned __int64)(v31 + 0x80000000LL) <= 0xFFFFFFFF )
      v30 = v31;
    if ( v30 > v27 )
      return 4094LL;
  }
  if ( v29 )
  {
    v32 = 0x7FFFFFFF;
    v33 = a3[47] * (__int64)(int)abs32(v29) / 1000;
    if ( (unsigned __int64)(v33 + 0x80000000LL) <= 0xFFFFFFFF )
      v32 = v33;
    if ( v32 > v27 )
      return 4094LL;
  }
  if ( v15 )
  {
LABEL_65:
    if ( x == v11 )
    {
      if ( x + 1 < v51 - 1 && x + 1 < a3[2] )
        ++x;
    }
    else if ( x == v51 - 1 && x - 1 > v11 && x - 1 >= *a3 )
    {
      --x;
    }
    if ( y == v52 )
    {
      if ( y + 1 < v20 && y + 1 < a3[3] )
        ++y;
    }
    else if ( y == v20 && y - 1 > v52 && y - 1 >= a3[1] )
    {
      --y;
    }
    *v14 = x - a3[8];
    v14[1] = y - a3[9];
    return v55;
  }
  left = a2->left;
  v35 = a3[8];
  v53.x = left;
  if ( v35 < left )
  {
    v36 = a3[9];
    top = a2->top;
    if ( v36 < top )
    {
      v38 = v36 - top;
LABEL_50:
      v40 = (int)abs32(v35 - left) > (int)abs32(v38);
      goto LABEL_59;
    }
    bottom = a2->bottom;
    if ( v36 >= bottom )
    {
      v38 = v36 - bottom + 1;
      goto LABEL_50;
    }
    goto LABEL_58;
  }
  right = a2->right;
  if ( v35 < right )
    goto LABEL_61;
  v42 = a3[9];
  v43 = a2->top;
  if ( v42 < v43 )
  {
    v44 = abs32(v35 - right + 1);
    v45 = v42 - v43;
LABEL_56:
    left = v53.x;
    v40 = v44 > (int)abs32(v45);
    goto LABEL_59;
  }
  v46 = a2->bottom;
  if ( v42 >= v46 )
  {
    v44 = abs32(v35 - right + 1);
    v45 = v42 - v46 + 1;
    goto LABEL_56;
  }
  left = v53.x;
LABEL_58:
  v40 = 1;
LABEL_59:
  if ( v40 )
  {
    v47 = a3[46] * (__int64)(int)abs32(x - (left + a2->right) / 2) * (__int128)0x20C49BA5E353F7CFLL;
    goto LABEL_62;
  }
LABEL_61:
  v47 = a3[47] * (__int64)(int)abs32(y - (a2->top + a2->bottom) / 2) * (__int128)0x20C49BA5E353F7CFLL;
LABEL_62:
  v48 = 0x7FFFFFFF;
  v49 = (*((_QWORD *)&v47 + 1) >> 63) + (*((__int64 *)&v47 + 1) >> 7);
  if ( (unsigned __int64)(v49 + 0x80000000LL) <= 0xFFFFFFFF )
    v48 = v49;
  if ( v48 <= 700 )
    goto LABEL_65;
  return 4094LL;
}
