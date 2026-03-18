/*
 * XREFs of TouchTargetingRankForRect @ 0x1C022D6E8
 * Callers:
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01C8A3C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C01C9BEC (-_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOIN.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01CA6C8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     TouchTargetingRankForRegion @ 0x1C022DE6C (TouchTargetingRankForRegion.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     ?_TTUpdateRankWithSegment@@YAXJJJJPEAUtagPOINT@@PEAGUtagRECT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C022CD2C (-_TTUpdateRankWithSegment@@YAXJJJJPEAUtagPOINT@@PEAGUtagRECT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 */

__int64 __fastcall TouchTargetingRankForRect(
        int *a1,
        struct tagRECT *a2,
        __int64 a3,
        int *a4,
        int *a5,
        unsigned int a6)
{
  int *v10; // r14
  unsigned int v11; // r12d
  int v12; // r13d
  int v14; // r8d
  int v15; // ecx
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
  LONG y; // r8d
  LONG x; // r9d
  __int16 v30; // ax
  int v31; // r10d
  int v32; // eax
  int v33; // r11d
  int v34; // ecx
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // rdx
  LONG v38; // r10d
  LONG left; // r15d
  int v40; // eax
  LONG top; // ecx
  int v42; // eax
  LONG bottom; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // eax
  int v46; // edx
  bool v47; // zf
  bool v48; // sf
  bool v49; // of
  LONG right; // eax
  LONG v51; // r11d
  LONG v52; // r12d
  unsigned int v53; // ecx
  int v54; // eax
  LONG v55; // r12d
  unsigned int v56; // eax
  __int128 v57; // rax
  __int64 v58; // rdx
  int v59; // eax
  int v60; // edx
  int v61; // eax
  struct tagPOINT v62[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v63; // [rsp+50h] [rbp-20h]
  struct tagRECT v64; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int16 v65; // [rsp+B0h] [rbp+40h] BYREF

  v65 = 4094;
  if ( *(_DWORD *)(a3 + 180)
    && (unsigned int)IntersectRect(&v64, a1, (int *)a3)
    && (!a4 || (unsigned int)IntersectRect(a1, a1, a4))
    && (unsigned int)IntersectRect(a1, &a2->left, a1)
    && *a1 != a1[2]
    && a1[1] != a1[3] )
  {
    v10 = a5;
    if ( a5 )
      *(_QWORD *)a5 = 0LL;
    v11 = a6;
    v63 = 0xFFFFFFFFLL;
    v12 = 0x7FFFFFFF;
    if ( !a6 )
    {
      *(struct tagRECT *)&v62[0].x = *a2;
      if ( a4 && !(unsigned int)IntersectRect(v62, (int *)v62, a4) )
        return 4094LL;
      v14 = 0x7FFFFFFF;
      if ( (unsigned __int64)(*(int *)(a3 + 184) * (__int64)(v62[1].x - v62[0].x) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v14 = *(int *)(a3 + 184) * (__int64)(v62[1].x - v62[0].x) / 1000;
      v15 = 0x7FFFFFFF;
      if ( (unsigned __int64)(*(int *)(a3 + 188) * (__int64)(v62[1].y - v62[0].y) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v15 = *(int *)(a3 + 188) * (__int64)(v62[1].y - v62[0].y) / 1000;
      if ( v14 > 1400 && v15 > 1400 )
        return 4093LL;
    }
    v16 = *a1;
    v17 = a1[2] - 1;
    v18 = a1[1];
    if ( *a1 == v17 )
    {
      v19 = *a1;
      v20 = a1[3] - 1;
    }
    else
    {
      v21 = a1[3] - 1;
      v64 = *a2;
      if ( v18 == v21 )
      {
        _TTUpdateRankWithSegment(v16, v21, v17, v21, v62, &v65, &v64, (const struct tagTOUCHTARGETINGCONTACT *)a3);
LABEL_27:
        if ( v65 == 4094 || !v10 )
          return v65;
        y = v62[0].y;
        x = v62[0].x;
        if ( v11 )
        {
          v30 = v11;
          if ( (_WORD)v11 != 3 )
          {
LABEL_65:
            v59 = a1[2] - 1;
            if ( x == *a1 )
            {
              if ( x + 1 < v59 && x + 1 < *(_DWORD *)(a3 + 8) )
                ++x;
            }
            else if ( x == v59 && x - 1 > *a1 && x - 1 >= *(_DWORD *)a3 )
            {
              --x;
            }
            v60 = a1[1];
            v61 = a1[3] - 1;
            if ( y == v60 )
            {
              if ( y + 1 < v61 && y + 1 < *(_DWORD *)(a3 + 12) )
                ++y;
            }
            else if ( y == v61 && y - 1 > v60 && y - 1 >= *(_DWORD *)(a3 + 4) )
            {
              --y;
            }
            *v10 = x - *(_DWORD *)(a3 + 32);
            v10[1] = y - *(_DWORD *)(a3 + 36);
            return v65;
          }
        }
        else
        {
          v30 = 0;
        }
        v31 = 200;
        if ( v30 == 3 )
          v31 = HIWORD(v11);
        v32 = v62[0].x - *(_DWORD *)(a3 + 32);
        *v10 = v32;
        v33 = y - *(_DWORD *)(a3 + 36);
        v10[1] = v33;
        if ( v32 )
        {
          v34 = 0x7FFFFFFF;
          v35 = *(int *)(a3 + 184) * (__int64)(int)abs32(v32) / 1000;
          if ( v35 + 0x80000000LL <= v63 )
            v34 = v35;
          if ( v34 > v31 )
            return 4094LL;
        }
        if ( v33 )
        {
          v36 = 0x7FFFFFFF;
          v37 = *(int *)(a3 + 188) * (__int64)(int)abs32(v33) / 1000;
          if ( (unsigned __int64)(v37 + 0x80000000LL) <= 0xFFFFFFFF )
            v36 = v37;
          if ( v36 > v31 )
            return 4094LL;
        }
        if ( v11 )
          goto LABEL_65;
        v38 = *(_DWORD *)(a3 + 32);
        left = a2->left;
        if ( v38 < a2->left )
        {
          v40 = *(_DWORD *)(a3 + 36);
          top = a2->top;
          if ( v40 < top )
          {
            v42 = v40 - top;
LABEL_50:
            v44 = abs32(v42);
            v45 = abs32(v38 - left);
            v46 = 0;
            v49 = __OFSUB__(v45, v44);
            v47 = v45 == v44;
            v48 = (int)(v45 - v44) < 0;
LABEL_57:
            LOBYTE(v46) = !(v48 ^ v49 | v47);
            goto LABEL_59;
          }
          bottom = a2->bottom;
          if ( v40 >= bottom )
          {
            v42 = v40 - bottom + 1;
            goto LABEL_50;
          }
LABEL_58:
          v46 = 1;
LABEL_59:
          if ( v46 )
          {
            v57 = *(int *)(a3 + 184) * (__int64)(int)abs32(x - (left + a2->right) / 2) * (__int128)0x20C49BA5E353F7CFLL;
            goto LABEL_62;
          }
LABEL_61:
          v57 = *(int *)(a3 + 188)
              * (__int64)(int)abs32(y - (a2->top + a2->bottom) / 2)
              * (__int128)0x20C49BA5E353F7CFLL;
LABEL_62:
          v58 = (*((_QWORD *)&v57 + 1) >> 63) + (*((__int64 *)&v57 + 1) >> 7);
          if ( (unsigned __int64)(v58 + 0x80000000LL) <= 0xFFFFFFFF )
            v12 = v58;
          if ( v12 > 700 )
            return 4094LL;
          goto LABEL_65;
        }
        right = a2->right;
        if ( v38 < right )
          goto LABEL_61;
        v51 = *(_DWORD *)(a3 + 36);
        v52 = a2->top;
        if ( v51 >= v52 )
        {
          v55 = a2->bottom;
          if ( v51 < v55 )
            goto LABEL_58;
          v53 = abs32(v38 - right + 1);
          v54 = v51 - v55 + 1;
        }
        else
        {
          v53 = abs32(v38 - right + 1);
          v54 = v51 - v52;
        }
        v56 = abs32(v54);
        v46 = 0;
        v49 = __OFSUB__(v53, v56);
        v47 = v53 == v56;
        v48 = (int)(v53 - v56) < 0;
        goto LABEL_57;
      }
      _TTUpdateRankWithSegment(v16, v18, v16, v21, v62, &v65, &v64, (const struct tagTOUCHTARGETINGCONTACT *)a3);
      v22 = a1[3] - 1;
      v23 = a1[2] - 1;
      v24 = *a1;
      v64 = *a2;
      _TTUpdateRankWithSegment(v24, v22, v23, v22, v62, &v65, &v64, (const struct tagTOUCHTARGETINGCONTACT *)a3);
      v25 = a1[2] - 1;
      v26 = a1[3] - 1;
      v27 = a1[1];
      v64 = *a2;
      _TTUpdateRankWithSegment(v25, v26, v25, v27, v62, &v65, &v64, (const struct tagTOUCHTARGETINGCONTACT *)a3);
      v18 = a1[1];
      v16 = a1[2] - 1;
      v19 = *a1;
      v20 = v18;
    }
    v64 = *a2;
    _TTUpdateRankWithSegment(v16, v18, v19, v20, v62, &v65, &v64, (const struct tagTOUCHTARGETINGCONTACT *)a3);
    goto LABEL_27;
  }
  return 4094LL;
}
