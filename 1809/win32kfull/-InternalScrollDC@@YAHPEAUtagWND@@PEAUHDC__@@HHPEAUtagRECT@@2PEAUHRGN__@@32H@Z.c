/*
 * XREFs of ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C003A0C8
 * Callers:
 *     xxxScrollWindowEx @ 0x1C0079188 (xxxScrollWindowEx.c)
 *     _ScrollDC @ 0x1C00F8D1C (_ScrollDC.c)
 * Callees:
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     UnionRect @ 0x1C0079C20 (UnionRect.c)
 *     GreGetLayout @ 0x1C007BE5C (GreGetLayout.c)
 *     GreTransformPoints @ 0x1C00F6EBC (GreTransformPoints.c)
 *     SubtractRect @ 0x1C010956C (SubtractRect.c)
 *     GetDCOrgOnScreen @ 0x1C010DCE4 (GetDCOrgOnScreen.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0154250 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall InternalScrollDC(
        struct tagWND *a1,
        HDC a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        HRGN a7,
        HRGN a8,
        struct tagRECT *a9,
        int a10)
{
  __int64 v11; // r13
  HRGN v12; // rbx
  __int64 v13; // rcx
  unsigned int ClipBox; // r14d
  __m128i *v15; // rcx
  __m128i v16; // xmm6
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  HRGN v20; // rdi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct tagRECT v26; // xmm0
  __int64 v27; // rdi
  int v28; // edx
  int v29; // r9d
  int v30; // r8d
  int v31; // r10d
  __int64 v32; // rbx
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // edi
  int v41; // ecx
  __int32 v42; // ecx
  int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // [rsp+60h] [rbp-A0h]
  __int64 v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+78h] [rbp-88h]
  HRGN v51; // [rsp+80h] [rbp-80h]
  HRGN v52; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v53[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 EmptyRgn; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h]
  unsigned int v56; // [rsp+A8h] [rbp-58h]
  unsigned int v57; // [rsp+ACh] [rbp-54h]
  int v58; // [rsp+B0h] [rbp-50h]
  int v59; // [rsp+B4h] [rbp-4Ch]
  unsigned int v60; // [rsp+B8h] [rbp-48h]
  unsigned int v61; // [rsp+BCh] [rbp-44h]
  __m128i v62; // [rsp+C0h] [rbp-40h] BYREF
  int v63[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v64; // [rsp+D8h] [rbp-28h]
  int v65[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v66; // [rsp+F0h] [rbp-10h] BYREF
  int v67; // [rsp+F8h] [rbp-8h]
  struct tagRECT v68; // [rsp+100h] [rbp+0h] BYREF
  __int128 v69; // [rsp+110h] [rbp+10h] BYREF
  __m128i v70; // [rsp+120h] [rbp+20h]

  v11 = 0LL;
  v12 = a8;
  v52 = a7;
  v53[0] = 0;
  v51 = 0LL;
  v46 = 0LL;
  EmptyRgn = 0LL;
  v13 = *(_QWORD *)(gpDispInfo + 40LL);
  v55 = 0LL;
  v48 = 0LL;
  v49 = 0;
  if ( !(unsigned int)GreLockVisRgnSharedOrExclusive(v13) )
    return 0LL;
  ClipBox = GreGetClipBox(a2, &v66, 1LL);
  if ( !ClipBox )
    goto LABEL_98;
  v15 = (__m128i *)&v66;
  if ( a5 )
    v15 = (__m128i *)a5;
  v16 = *v15;
  v62 = *v15;
  if ( a6 )
    v69 = (__int128)*a6;
  v57 = a3;
  v56 = a4;
  if ( a10 )
  {
    GreTransformPoints(a2, 1);
    GreTransformPoints(a2, 1);
    if ( (GreGetLayout(a2) & 1) != 0 )
    {
      v41 = v66;
      v66 = v67;
      v67 = v41;
      v42 = v62.m128i_i32[0];
      v62.m128i_i32[0] = v62.m128i_i32[2];
      v62.m128i_i32[2] = v42;
      v53[0] = 1;
    }
    if ( a6 )
    {
      GreTransformPoints(a2, 1);
      if ( v53[0] )
      {
        v43 = v69;
        LODWORD(v69) = DWORD2(v69);
        DWORD2(v69) = v43;
      }
    }
    v59 = 0;
    v58 = 0;
    v61 = a4;
    v60 = a3;
    GreTransformPoints(a2, 1);
    v16 = v62;
  }
  if ( ClipBox == 1 )
  {
    v20 = 0LL;
    goto LABEL_23;
  }
  if ( ClipBox == 3 )
  {
    v51 = (HRGN)((__int64 (*)(void))CreateEmptyRgn)();
    if ( !(unsigned int)GetTrueClipRgn(a2, v51) )
      goto LABEL_98;
    v16 = v62;
    v17 = 1LL;
    v49 = 1;
  }
  else
  {
    v17 = 0LL;
  }
  v18 = a3 + _mm_cvtsi128_si32(v16);
  v65[0] = v18;
  v65[2] = a3 + _mm_cvtsi128_si32(_mm_srli_si128(v16, 8));
  v65[1] = a4 + _mm_cvtsi128_si32(_mm_srli_si128(v16, 4));
  v19 = a4 + _mm_cvtsi128_si32(_mm_srli_si128(v16, 12));
  v65[3] = v19;
  if ( !a6 )
  {
LABEL_28:
    if ( ClipBox != 2 )
    {
LABEL_63:
      if ( v49 || (v51 = (HRGN)CreateEmptyRgn(v19, v18, v17), (unsigned int)GetTrueClipRgn(a2, v51)) )
      {
        EmptyRgn = CreateEmptyRgn(v19, v18, v17);
        SetRectRgnIndirect(EmptyRgn, &v62);
        if ( (unsigned int)GreCombineRgn(EmptyRgn, EmptyRgn, v51, 1LL) )
        {
          v55 = CreateEmptyRgn(v35, v34, v36);
          SetRectRgnIndirect(v55, v65);
          if ( (unsigned int)GreCombineRgn(v55, v55, v51, 1LL) )
          {
            v40 = 1;
            if ( v52 == (HRGN)1 )
              goto LABEL_123;
            v48 = CreateEmptyRgn(v38, v37, v39);
            if ( (unsigned int)GreCombineRgn(v48, EmptyRgn, 0LL, 5LL) )
            {
              GreOffsetRgn(v48, a3, a4);
              v40 = GreCombineRgn(v48, v48, v55, 1LL);
              if ( (unsigned __int64)v52 > 1 )
              {
                v11 = CreateEmptyRgn(v38, v37, v39);
                if ( !v40 )
                  goto LABEL_117;
                if ( v40 != 1 )
                {
                  GetDCOrgOnScreen(a2, v53);
                  GreCombineRgn(v11, v52, 0LL, 5LL);
                  GreOffsetRgn(v11, (unsigned int)-v53[0], (unsigned int)-v53[1]);
                  v40 = GreCombineRgn(v48, v48, v11, 4LL);
                }
                if ( !v40 )
                  goto LABEL_117;
                if ( v40 != 1 )
                {
                  GreOffsetRgn(v11, a3, a4);
                  v40 = GreCombineRgn(v48, v48, v11, 4LL);
                }
              }
              if ( v40 )
              {
LABEL_123:
                if ( !a8 )
                {
                  if ( !a9 )
                    goto LABEL_82;
                  if ( !v11 )
                    v11 = CreateEmptyRgn(v38, v37, v39);
                  v12 = (HRGN)v11;
                  if ( !v11 )
                    goto LABEL_82;
                }
                ClipBox = GreCombineRgn(v12, v55, EmptyRgn, 2LL);
                if ( ClipBox )
                {
                  if ( v40 != 1 )
                    ClipBox = GreCombineRgn(v12, v12, v48, 4LL);
                  if ( !a9 || (unsigned int)GreGetRgnBox(v12, a9) )
                  {
LABEL_82:
                    if ( v40 != 1 )
                    {
                      GreGetDCOrg(a2, &v52);
                      v32 = v48;
                      GreOffsetRgn(v48, (unsigned int)v52, HIDWORD(v52));
                      GreSelectVisRgnShared(a2, v48, 4LL);
                      if ( a10 )
                        GreTransformPoints(a2, 0);
                      NtGdiBitBltInternal(
                        a2,
                        v65[0],
                        v65[1],
                        v65[2] - v65[0],
                        v65[3] - v65[1],
                        a2,
                        v65[0] - v57,
                        v65[1] - v56,
                        13369376,
                        0,
                        0);
                      GreSelectVisRgnShared(a2, v48, 4LL);
                      v27 = v46;
                      goto LABEL_48;
                    }
                    v27 = v46;
LABEL_47:
                    v32 = v48;
LABEL_48:
                    if ( a10 && a9 )
                      GreTransformPoints(a2, 0);
                    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
                    GreDeleteObject(v51);
                    GreDeleteObject(v27);
                    GreDeleteObject(v11);
                    GreDeleteObject(EmptyRgn);
                    GreDeleteObject(v55);
                    GreDeleteObject(v32);
                    return ClipBox;
                  }
                }
              }
            }
          }
        }
      }
LABEL_117:
      v27 = v46;
      goto LABEL_118;
    }
LABEL_29:
    if ( (unsigned __int64)v52 <= 1 )
    {
      v70 = v16;
      IntersectRect(v65, v65, &v66);
      v22 = IntersectRect(&v62, &v62, &v66);
      v53[0] = v22;
      if ( v52 == (HRGN)1 )
      {
        *(_QWORD *)v63 = 0LL;
        v64 = 0LL;
      }
      else
      {
        v63[0] = a3 + v62.m128i_i32[0];
        LODWORD(v64) = a3 + v62.m128i_i32[2];
        v63[1] = a4 + v62.m128i_i32[1];
        HIDWORD(v64) = a4 + v62.m128i_i32[3];
        IntersectRect(v63, v63, v65);
        v22 = v53[0];
      }
      if ( v22 )
      {
        if ( (unsigned int)IntersectRect(&v68, &v62, v65) )
        {
          if ( a3 && a4 )
            goto LABEL_106;
          UnionRect(&v68, &v62, v65);
          SubtractRect(&v68, &v68, v63);
          v26 = v68;
LABEL_36:
          if ( a9 )
            *a9 = v26;
          if ( a8 && !(unsigned int)SetRectRgnIndirect(a8, &v68) )
            goto LABEL_117;
          ClipBox = 2;
          if ( v68.left >= v68.right || v68.top >= v68.bottom )
            ClipBox = 1;
          goto LABEL_41;
        }
        v44 = v62.m128i_i64[0] - v70.m128i_i64[0];
        if ( v62.m128i_i64[0] == v70.m128i_i64[0] )
          v44 = v62.m128i_i64[1] - v70.m128i_i64[1];
        if ( v44 )
        {
LABEL_106:
          if ( a8 || a9 && (v11 = CreateEmptyRgn(v24, v23, v25), (v12 = (HRGN)v11) != 0LL) )
          {
            v45 = v46;
            if ( !v46 )
            {
              v45 = CreateEmptyRgn(v24, v23, v25);
              v46 = v45;
            }
            SetRectRgnIndirect(v45, &v62);
            SetRectRgnIndirect(v12, v65);
            v27 = v46;
            if ( !(unsigned int)GreCombineRgn(v12, v12, v46, 2LL) )
              goto LABEL_118;
            SetRectRgnIndirect(v46, v63);
            ClipBox = GreCombineRgn(v12, v12, v46, 4LL);
            if ( !ClipBox || a9 && !(unsigned int)GreGetRgnBox(v12, a9) )
              goto LABEL_118;
            goto LABEL_42;
          }
LABEL_41:
          v27 = v46;
LABEL_42:
          v28 = v63[0];
          v29 = v64;
          if ( v63[0] < (int)v64 )
          {
            v30 = v63[1];
            v31 = HIDWORD(v64);
            if ( v63[1] < SHIDWORD(v64) )
            {
              if ( a10 )
              {
                GreTransformPoints(a2, 0);
                v31 = HIDWORD(v64);
                v29 = v64;
                v30 = v63[1];
                v28 = v63[0];
              }
              NtGdiBitBltInternal(a2, v28, v30, v29 - v28, v31 - v30, a2, v28 - v57, v30 - v56, 13369376, 0, 0);
            }
          }
          goto LABEL_47;
        }
        v26 = (struct tagRECT)v62;
      }
      else
      {
        v26 = *(struct tagRECT *)v65;
      }
      v68 = v26;
      goto LABEL_36;
    }
    goto LABEL_63;
  }
  if ( (unsigned __int64)v52 <= 1 && ClipBox == 2 )
  {
    if ( !(unsigned int)IntersectRect(&v66, &v66, &v69) )
    {
      v20 = v51;
      goto LABEL_23;
    }
    goto LABEL_29;
  }
  if ( !(_DWORD)v17 )
  {
    v51 = (HRGN)((__int64 (*)(void))CreateEmptyRgn)();
    v20 = v51;
    if ( (unsigned int)GetTrueClipRgn(a2, v51) )
    {
      v49 = 1;
      goto LABEL_58;
    }
LABEL_98:
    v27 = 0LL;
LABEL_118:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreDeleteObject(v51);
    GreDeleteObject(v27);
    GreDeleteObject(v11);
    GreDeleteObject(EmptyRgn);
    GreDeleteObject(v55);
    GreDeleteObject(v48);
    return 0LL;
  }
  v20 = v51;
LABEL_58:
  v46 = ((__int64 (*)(void))CreateEmptyRgn)();
  SetRectRgnIndirect(v46, &v69);
  v33 = GreCombineRgn(v20, v46, v20, 1LL);
  ClipBox = v33;
  if ( !v33 )
    goto LABEL_117;
  v18 = v33 - 1;
  if ( v33 != 1 )
  {
    if ( v33 == 2 )
    {
      if ( !(unsigned int)GreGetRgnBox(v20, &v66) )
        goto LABEL_117;
      v16 = v62;
      goto LABEL_29;
    }
    v16 = v62;
    goto LABEL_28;
  }
LABEL_23:
  if ( a8 && !(unsigned int)SetEmptyRgn(a8) )
    goto LABEL_117;
  if ( a9 )
  {
    *(_QWORD *)&a9->left = 0LL;
    *(_QWORD *)&a9->right = 0LL;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteObject(v20);
  GreDeleteObject(v46);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  return 1LL;
}
