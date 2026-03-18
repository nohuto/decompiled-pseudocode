/*
 * XREFs of ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0067CB0
 * Callers:
 *     xxxScrollWindowEx @ 0x1C002E8F4 (xxxScrollWindowEx.c)
 *     _ScrollDC @ 0x1C0069628 (_ScrollDC.c)
 * Callees:
 *     UnionRect @ 0x1C0032D48 (UnionRect.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     GreGetLayout @ 0x1C0069560 (GreGetLayout.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GreTransformPoints @ 0x1C00D963C (GreTransformPoints.c)
 *     SubtractRect @ 0x1C00ECF64 (SubtractRect.c)
 *     GetDCOrgOnScreen @ 0x1C012E2F8 (GetDCOrgOnScreen.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C015B848 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall InternalScrollDC(
        struct tagWND *a1,
        HDC a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        HRGN a7,
        HRGN a8,
        struct tagRECT *a9,
        int a10)
{
  int v10; // r12d
  HRGN v11; // rbx
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int ClipBox; // r14d
  __m128i *v17; // rcx
  __m128i v18; // xmm6
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rcx
  HRGN v22; // rdi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct tagRECT v27; // xmm0
  __int64 v28; // rdi
  __int64 v29; // rdx
  int v30; // r9d
  __int64 v31; // r8
  int v32; // r10d
  __int64 v33; // rbx
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // edi
  int v40; // ecx
  __int32 v41; // ecx
  int v42; // ecx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+70h] [rbp-90h]
  HRGN v48; // [rsp+78h] [rbp-88h] BYREF
  int v49; // [rsp+80h] [rbp-80h]
  HRGN EmptyRgn; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  __int64 v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  __int64 v55; // [rsp+B0h] [rbp-50h]
  struct tagRECT *v56; // [rsp+B8h] [rbp-48h]
  int v57; // [rsp+C0h] [rbp-40h] BYREF
  int v58; // [rsp+C4h] [rbp-3Ch]
  int v59; // [rsp+C8h] [rbp-38h]
  int v60; // [rsp+CCh] [rbp-34h]
  __m128i v61; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v62; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v63; // [rsp+E8h] [rbp-18h]
  struct tagRECT v64; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v65; // [rsp+100h] [rbp+0h] BYREF
  __int64 v66; // [rsp+108h] [rbp+8h]
  struct tagRECT v67; // [rsp+110h] [rbp+10h] BYREF
  __int128 v68; // [rsp+120h] [rbp+20h] BYREF
  __m128i v69; // [rsp+130h] [rbp+30h]

  v10 = a3;
  v11 = a8;
  v13 = 0LL;
  v56 = a5;
  v48 = a7;
  v65 = 0LL;
  v66 = 0LL;
  v61 = 0uLL;
  v68 = 0uLL;
  v64 = (struct tagRECT)0LL;
  v67 = (struct tagRECT)0LL;
  v62 = 0LL;
  v63 = 0LL;
  LODWORD(v52) = a3;
  LODWORD(v51) = 0;
  EmptyRgn = 0LL;
  v45 = 0LL;
  v53 = 0LL;
  v14 = *(_QWORD *)(gpDispInfo + 40LL);
  v54 = 0LL;
  v47 = 0LL;
  v49 = 0;
  if ( !(unsigned int)GreLockVisRgnSharedOrExclusive(v14) )
    return 0LL;
  ClipBox = GreGetClipBox(a2, &v65, 1LL);
  if ( !ClipBox )
    goto LABEL_97;
  v17 = (__m128i *)&v65;
  if ( v56 )
    v17 = (__m128i *)v56;
  v18 = *v17;
  v61 = *v17;
  if ( a6 )
    v68 = (__int128)*a6;
  LODWORD(v55) = a4;
  LODWORD(v56) = v10;
  if ( a10 )
  {
    GreTransformPoints((_DWORD)a2, (unsigned int)&v65, (unsigned int)&v65, 2, 1);
    GreTransformPoints((_DWORD)a2, (unsigned int)&v61, (unsigned int)&v61, 2, 1);
    if ( (GreGetLayout(a2) & 1) != 0 )
    {
      v40 = v65;
      LODWORD(v65) = v66;
      LODWORD(v66) = v40;
      v41 = v61.m128i_i32[0];
      v61.m128i_i32[0] = v61.m128i_i32[2];
      v61.m128i_i32[2] = v41;
      LODWORD(v51) = 1;
    }
    if ( a6 )
    {
      GreTransformPoints((_DWORD)a2, (unsigned int)&v68, (unsigned int)&v68, 2, 1);
      if ( (_DWORD)v51 )
      {
        v42 = v68;
        LODWORD(v68) = DWORD2(v68);
        DWORD2(v68) = v42;
      }
    }
    v58 = 0;
    v57 = 0;
    v60 = a4;
    v59 = v10;
    GreTransformPoints((_DWORD)a2, (unsigned int)&v57, (unsigned int)&v57, 2, 1);
    v10 = v59 - v57;
    v18 = v61;
    a4 = v60 - v58;
    LODWORD(v52) = v59 - v57;
  }
  if ( ClipBox == 1 )
  {
    v22 = 0LL;
    goto LABEL_23;
  }
  if ( ClipBox == 3 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(ClipBox - 1, v15);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_97;
    v18 = v61;
    v19 = 1;
    v49 = 1;
  }
  else
  {
    v19 = 0;
  }
  v20 = (unsigned int)(v10 + _mm_cvtsi128_si32(v18));
  v64.left = v20;
  v64.right = v10 + _mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
  v64.top = a4 + _mm_cvtsi128_si32(_mm_srli_si128(v18, 4));
  v21 = (unsigned int)(a4 + _mm_cvtsi128_si32(_mm_srli_si128(v18, 12)));
  v64.bottom = v21;
  if ( !a6 )
  {
LABEL_28:
    if ( ClipBox != 2 )
    {
LABEL_62:
      if ( v49 || (EmptyRgn = (HRGN)CreateEmptyRgn(v21, v20), (unsigned int)GetTrueClipRgn(a2, EmptyRgn)) )
      {
        v53 = CreateEmptyRgn(v21, v20);
        SetRectRgnIndirect(v53, &v61);
        if ( (unsigned int)GreCombineRgn(v53, v53, EmptyRgn, 1LL) )
        {
          v54 = CreateEmptyRgn(v36, v35);
          SetRectRgnIndirect(v54, &v64);
          if ( (unsigned int)GreCombineRgn(v54, v54, EmptyRgn, 1LL) )
          {
            v39 = 1;
            if ( v48 == (HRGN)1 )
              goto LABEL_122;
            v47 = CreateEmptyRgn(v38, v37);
            if ( (unsigned int)GreCombineRgn(v47, v53, 0LL, 5LL) )
            {
              GreOffsetRgn(v47, (unsigned int)v52);
              v39 = GreCombineRgn(v47, v47, v54, 1LL);
              if ( (unsigned __int64)v48 > 1 )
              {
                v13 = CreateEmptyRgn(v38, v37);
                if ( !v39 )
                  goto LABEL_116;
                if ( v39 != 1 )
                {
                  v51 = 0LL;
                  GetDCOrgOnScreen(a2, &v51);
                  GreCombineRgn(v13, v48, 0LL, 5LL);
                  GreOffsetRgn(v13, (unsigned int)-(int)v51);
                  v39 = GreCombineRgn(v47, v47, v13, 4LL);
                }
                if ( !v39 )
                  goto LABEL_116;
                if ( v39 != 1 )
                {
                  GreOffsetRgn(v13, (unsigned int)v52);
                  v39 = GreCombineRgn(v47, v47, v13, 4LL);
                }
              }
              if ( v39 )
              {
LABEL_122:
                if ( !a8 )
                {
                  if ( !a9 )
                    goto LABEL_81;
                  if ( !v13 )
                    v13 = CreateEmptyRgn(v38, v37);
                  v11 = (HRGN)v13;
                  if ( !v13 )
                    goto LABEL_81;
                }
                ClipBox = GreCombineRgn(v11, v54, v53, 2LL);
                if ( ClipBox )
                {
                  if ( v39 != 1 )
                    ClipBox = GreCombineRgn(v11, v11, v47, 4LL);
                  if ( !a9 || (unsigned int)GreGetRgnBox(v11, a9) )
                  {
LABEL_81:
                    if ( v39 != 1 )
                    {
                      v48 = 0LL;
                      GreGetDCOrg(a2, &v48);
                      v33 = v47;
                      GreOffsetRgn(v47, (unsigned int)v48);
                      GreSelectVisRgnShared(a2, v47, 4LL);
                      if ( a10 )
                        GreTransformPoints((_DWORD)a2, (unsigned int)&v64, (unsigned int)&v64, 2, 0);
                      NtGdiBitBltInternal(
                        a2,
                        (unsigned int)v64.left,
                        (unsigned int)v64.top,
                        (unsigned int)(v64.right - v64.left),
                        v64.bottom - v64.top,
                        a2,
                        v64.left - (_DWORD)v56,
                        v64.top - v55,
                        13369376,
                        0,
                        0);
                      GreSelectVisRgnShared(a2, v47, 4LL);
                      v28 = v45;
                      goto LABEL_48;
                    }
                    v28 = v45;
LABEL_47:
                    v33 = v47;
LABEL_48:
                    if ( a10 && a9 )
                      GreTransformPoints((_DWORD)a2, (_DWORD)a9, (_DWORD)a9, 2, 0);
                    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
                    GreDeleteObject(EmptyRgn);
                    GreDeleteObject(v28);
                    GreDeleteObject(v13);
                    GreDeleteObject(v53);
                    GreDeleteObject(v54);
                    GreDeleteObject(v33);
                    return ClipBox;
                  }
                }
              }
            }
          }
        }
      }
LABEL_116:
      v28 = v45;
      goto LABEL_117;
    }
LABEL_29:
    if ( (unsigned __int64)v48 <= 1 )
    {
      v69 = v18;
      IntersectRect(&v64, &v64, &v65);
      v24 = IntersectRect(&v61, &v61, &v65);
      LODWORD(v51) = v24;
      if ( v48 != (HRGN)1 )
      {
        LODWORD(v62) = v10 + v61.m128i_i32[0];
        LODWORD(v63) = v10 + v61.m128i_i32[2];
        HIDWORD(v62) = a4 + v61.m128i_i32[1];
        HIDWORD(v63) = a4 + v61.m128i_i32[3];
        IntersectRect(&v62, &v62, &v64);
        v24 = v51;
      }
      if ( v24 )
      {
        if ( (unsigned int)IntersectRect(&v67, &v61, &v64) )
        {
          if ( v10 && a4 )
            goto LABEL_105;
          UnionRect(&v67, v61.m128i_i32, &v64.left);
          SubtractRect(&v67, &v67, &v62);
          v27 = v67;
LABEL_36:
          if ( a9 )
            *a9 = v27;
          if ( a8 && !(unsigned int)SetRectRgnIndirect(a8, &v67) )
            goto LABEL_116;
          ClipBox = 2;
          if ( v67.left >= v67.right || v67.top >= v67.bottom )
            ClipBox = 1;
          goto LABEL_41;
        }
        v43 = v61.m128i_i64[0] - v69.m128i_i64[0];
        if ( v61.m128i_i64[0] == v69.m128i_i64[0] )
          v43 = v61.m128i_i64[1] - v69.m128i_i64[1];
        if ( v43 )
        {
LABEL_105:
          if ( a8 || a9 && (v13 = CreateEmptyRgn(v26, v25), (v11 = (HRGN)v13) != 0LL) )
          {
            v44 = v45;
            if ( !v45 )
            {
              v44 = CreateEmptyRgn(v26, v25);
              v45 = v44;
            }
            SetRectRgnIndirect(v44, &v61);
            SetRectRgnIndirect(v11, &v64);
            v28 = v45;
            if ( !(unsigned int)GreCombineRgn(v11, v11, v45, 2LL) )
              goto LABEL_117;
            SetRectRgnIndirect(v45, &v62);
            ClipBox = GreCombineRgn(v11, v11, v45, 4LL);
            if ( !ClipBox || a9 && !(unsigned int)GreGetRgnBox(v11, a9) )
              goto LABEL_117;
            goto LABEL_42;
          }
LABEL_41:
          v28 = v45;
LABEL_42:
          v29 = (unsigned int)v62;
          v30 = v63;
          if ( (int)v62 < (int)v63 )
          {
            v31 = HIDWORD(v62);
            v32 = HIDWORD(v63);
            if ( SHIDWORD(v62) < SHIDWORD(v63) )
            {
              if ( a10 )
              {
                GreTransformPoints((_DWORD)a2, (unsigned int)&v62, (unsigned int)&v62, 2, 0);
                v32 = HIDWORD(v63);
                v30 = v63;
                v31 = HIDWORD(v62);
                v29 = (unsigned int)v62;
              }
              NtGdiBitBltInternal(
                a2,
                v29,
                v31,
                (unsigned int)(v30 - v29),
                v32 - v31,
                a2,
                v29 - (_DWORD)v56,
                v31 - v55,
                13369376,
                0,
                0);
            }
          }
          goto LABEL_47;
        }
        v27 = (struct tagRECT)v61;
      }
      else
      {
        v27 = v64;
      }
      v67 = v27;
      goto LABEL_36;
    }
    goto LABEL_62;
  }
  if ( (unsigned __int64)v48 <= 1 && ClipBox == 2 )
  {
    if ( !(unsigned int)IntersectRect(&v65, &v65, &v68) )
    {
      v22 = EmptyRgn;
      goto LABEL_23;
    }
    goto LABEL_29;
  }
  if ( !v19 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v21, v20);
    v22 = EmptyRgn;
    if ( (unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
    {
      v49 = 1;
      goto LABEL_57;
    }
LABEL_97:
    v28 = 0LL;
LABEL_117:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreDeleteObject(EmptyRgn);
    GreDeleteObject(v28);
    GreDeleteObject(v13);
    GreDeleteObject(v53);
    GreDeleteObject(v54);
    GreDeleteObject(v47);
    return 0LL;
  }
  v22 = EmptyRgn;
LABEL_57:
  v45 = CreateEmptyRgn(v21, v20);
  SetRectRgnIndirect(v45, &v68);
  v34 = GreCombineRgn(v22, v45, v22, 1LL);
  ClipBox = v34;
  if ( !v34 )
    goto LABEL_116;
  v20 = v34 - 1;
  if ( v34 != 1 )
  {
    if ( v34 == 2 )
    {
      if ( !(unsigned int)GreGetRgnBox(v22, &v65) )
        goto LABEL_116;
      v18 = v61;
      goto LABEL_29;
    }
    v18 = v61;
    goto LABEL_28;
  }
LABEL_23:
  if ( a8 && !(unsigned int)SetEmptyRgn(a8) )
    goto LABEL_116;
  if ( a9 )
  {
    *(_QWORD *)&a9->left = 0LL;
    *(_QWORD *)&a9->right = 0LL;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteObject(v22);
  GreDeleteObject(v45);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  return 1LL;
}
