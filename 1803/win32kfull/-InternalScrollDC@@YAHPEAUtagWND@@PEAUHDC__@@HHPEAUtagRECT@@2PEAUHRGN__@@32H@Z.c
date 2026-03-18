/*
 * XREFs of ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C002C73C
 * Callers:
 *     _ScrollDC @ 0x1C002D2F8 (_ScrollDC.c)
 *     xxxScrollWindowEx @ 0x1C002F500 (xxxScrollWindowEx.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     GreGetLayout @ 0x1C002D278 (GreGetLayout.c)
 *     GetDCOrgOnScreen @ 0x1C00642A4 (GetDCOrgOnScreen.c)
 *     UnionRect @ 0x1C0072864 (UnionRect.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     GreTransformPoints @ 0x1C00E552C (GreTransformPoints.c)
 *     SubtractRect @ 0x1C00EE444 (SubtractRect.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0131454 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall InternalScrollDC(
        struct tagWND *a1,
        HDC a2,
        unsigned int a3,
        unsigned int a4,
        __m128i *a5,
        struct tagRECT *a6,
        HRGN a7,
        HRGN a8,
        struct tagRECT *a9,
        int a10)
{
  unsigned int v10; // r15d
  HRGN v11; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int ClipBox; // r12d
  __m128i *v18; // rcx
  struct tagRECT *v19; // rbx
  __m128i v20; // xmm6
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rbx
  int v25; // r8d
  __int64 v26; // rcx
  HRGN v27; // rbx
  __int64 v29; // r12
  unsigned int v30; // eax
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct tagRECT v34; // xmm0
  __int64 v35; // rdx
  int v36; // r9d
  __int64 v37; // r8
  int v38; // r10d
  __int64 v39; // r13
  __int64 v40; // rbx
  HRGN v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // ebx
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  LONG x; // ecx
  __int32 v51; // ecx
  LONG left; // ecx
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 v55; // [rsp+60h] [rbp-A0h]
  unsigned int v56; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h]
  int v59; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+88h] [rbp-78h]
  int v61; // [rsp+90h] [rbp-70h]
  HRGN EmptyRgn; // [rsp+98h] [rbp-68h]
  HRGN v63; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-58h]
  __int64 v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  struct tagRECT *v67; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v68; // [rsp+C8h] [rbp-38h]
  unsigned int v69; // [rsp+CCh] [rbp-34h]
  struct _POINTL v70; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v71; // [rsp+D8h] [rbp-28h]
  unsigned int v72; // [rsp+DCh] [rbp-24h]
  __m128i v73; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v74; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v75; // [rsp+F8h] [rbp-8h]
  struct tagRECT v76; // [rsp+100h] [rbp+0h] BYREF
  __m128i v77; // [rsp+110h] [rbp+10h] BYREF
  struct _POINTL v78; // [rsp+120h] [rbp+20h] BYREF
  LONG v79; // [rsp+128h] [rbp+28h]
  struct tagRECT v80; // [rsp+130h] [rbp+30h] BYREF
  struct tagRECT v81; // [rsp+140h] [rbp+40h] BYREF

  v10 = a4;
  v11 = a8;
  v67 = a6;
  v63 = a7;
  v56 = a4;
  v59 = 0;
  EmptyRgn = 0LL;
  v64 = 0LL;
  v55 = 0LL;
  v65 = 0LL;
  v14 = *(_QWORD *)(gpDispInfo + 40LL);
  v66 = 0LL;
  v60 = 0LL;
  v61 = 0;
  if ( !(unsigned int)GreLockVisRgnSharedOrExclusive(v14) )
    return 0LL;
  ClipBox = GreGetClipBox(a2, &v78, 1LL);
  if ( !ClipBox )
    goto LABEL_139;
  v18 = (__m128i *)&v78;
  if ( a5 )
    v18 = a5;
  v19 = v67;
  v20 = *v18;
  v73 = *v18;
  if ( v67 )
    v81 = *v67;
  v69 = a3;
  v68 = v10;
  if ( a10 )
  {
    v57 = 0LL;
    v58 = 0LL;
    XDCOBJ::vLock((XDCOBJ *)&v57, a2);
    if ( v57 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v77, (struct XDCOBJ *)&v57, 0x80000204);
      if ( v77.m128i_i64[0] )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v77, &v78, &v78, 2uLL);
      if ( v57 )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v57);
        v56 = 0;
        v21 = *v57;
        HmgDecrementExclusiveReferenceCountEx(v57, HIDWORD(v58), &v56);
        if ( v56 )
          bDeleteDCInternalEx(v21, 0LL);
      }
    }
    v58 = 0LL;
    v57 = 0LL;
    XDCOBJ::vLock((XDCOBJ *)&v57, a2);
    if ( v57 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v77, (struct XDCOBJ *)&v57, 0x80000204);
      if ( v77.m128i_i64[0] )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v77, (struct _POINTL *)&v73, (struct _POINTL *)&v73, 2uLL);
      if ( v57 )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v57);
        v56 = 0;
        v22 = *v57;
        HmgDecrementExclusiveReferenceCountEx(v57, HIDWORD(v58), &v56);
        if ( v56 )
          bDeleteDCInternalEx(v22, 0LL);
      }
    }
    if ( (GreGetLayout(a2) & 1) != 0 )
    {
      x = v78.x;
      v78.x = v79;
      v79 = x;
      v51 = v73.m128i_i32[0];
      v73.m128i_i32[0] = v73.m128i_i32[2];
      v73.m128i_i32[2] = v51;
      v59 = 1;
    }
    if ( v67 )
    {
      v58 = 0LL;
      v57 = 0LL;
      XDCOBJ::vLock((XDCOBJ *)&v57, a2);
      if ( v57 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v77, (struct XDCOBJ *)&v57, 0x80000204);
        if ( v77.m128i_i64[0] )
          EXFORMOBJ::bXform((EXFORMOBJ *)&v77, (struct _POINTL *)&v81, (struct _POINTL *)&v81, 2uLL);
        if ( v57 )
        {
          XDCOBJ::RestoreAttributes((XDCOBJ *)&v57);
          v56 = 0;
          v23 = *v57;
          HmgDecrementExclusiveReferenceCountEx(v57, HIDWORD(v58), &v56);
          if ( v56 )
            bDeleteDCInternalEx(v23, 0LL);
        }
      }
      if ( v59 )
      {
        left = v81.left;
        v81.left = v81.right;
        v81.right = left;
      }
    }
    v70 = 0LL;
    v58 = 0LL;
    v71 = a3;
    v72 = v10;
    v57 = 0LL;
    XDCOBJ::vLock((XDCOBJ *)&v57, a2);
    if ( v57 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v77, (struct XDCOBJ *)&v57, 0x80000204);
      if ( v77.m128i_i64[0] )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v77, &v70, &v70, 2uLL);
      if ( v57 )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v57);
        v59 = 0;
        v24 = *v57;
        HmgDecrementExclusiveReferenceCountEx(v57, HIDWORD(v58), &v59);
        if ( v59 )
          bDeleteDCInternalEx(v24, 0LL);
      }
    }
    a3 = v71 - v70.x;
    v10 = v72 - v70.y;
    v20 = v73;
    v19 = v67;
    v56 = v72 - v70.y;
  }
  if ( ClipBox == 1 )
    goto LABEL_45;
  if ( ClipBox == 3 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(ClipBox - 1, v15);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_139;
    v20 = v73;
    v25 = 1;
    v61 = 1;
  }
  else
  {
    v25 = v61;
  }
  v15 = a3 + _mm_cvtsi128_si32(v20);
  v76.left = v15;
  v76.right = a3 + _mm_cvtsi128_si32(_mm_srli_si128(v20, 8));
  v76.top = v10 + _mm_cvtsi128_si32(_mm_srli_si128(v20, 4));
  v26 = v10 + _mm_cvtsi128_si32(_mm_srli_si128(v20, 12));
  v76.bottom = v26;
  if ( !v19 )
  {
LABEL_110:
    if ( ClipBox != 2 )
    {
LABEL_83:
      if ( !v61 )
      {
        EmptyRgn = (HRGN)CreateEmptyRgn(v26, v15);
        if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
          goto LABEL_139;
      }
      v65 = CreateEmptyRgn(v26, v15);
      SetRectRgnIndirect(v65, &v73);
      v41 = EmptyRgn;
      if ( !(unsigned int)GreCombineRgn(v65, v65, EmptyRgn, 1LL) )
        goto LABEL_139;
      v66 = CreateEmptyRgn(v43, v42);
      SetRectRgnIndirect(v66, &v76);
      if ( !(unsigned int)GreCombineRgn(v66, v66, v41, 1LL) )
        goto LABEL_139;
      v46 = 1;
      if ( v63 == (HRGN)1 )
      {
        v39 = 0LL;
        goto LABEL_96;
      }
      v60 = CreateEmptyRgn(v45, v44);
      if ( (unsigned int)GreCombineRgn(v60, v65, 0LL, 5LL) )
      {
        v47 = v60;
        GreOffsetRgn(v60, a3, v56);
        v46 = GreCombineRgn(v47, v47, v66, 1LL);
        if ( (unsigned __int64)v63 <= 1 )
          goto LABEL_117;
        v48 = CreateEmptyRgn(v45, v44);
        v55 = v48;
        if ( !v46 )
        {
          v39 = v48;
          goto LABEL_140;
        }
        if ( v46 != 1 )
        {
          GetDCOrgOnScreen(a2, &v67);
          GreCombineRgn(v55, v63, 0LL, 5LL);
          GreOffsetRgn(v55, (unsigned int)-(int)v67, (unsigned int)-HIDWORD(v67));
          v46 = GreCombineRgn(v60, v60, v55, 4LL);
          v48 = v55;
        }
        if ( !v46 )
          goto LABEL_139;
        if ( v46 == 1 )
        {
LABEL_117:
          v39 = v55;
        }
        else
        {
          GreOffsetRgn(v48, a3, v56);
          v39 = v55;
          v46 = GreCombineRgn(v60, v60, v55, 4LL);
        }
        if ( !v46 )
        {
LABEL_140:
          GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
          GreDeleteObject(EmptyRgn);
          GreDeleteObject(v64);
          GreDeleteObject(v39);
          GreDeleteObject(v65);
          GreDeleteObject(v66);
          GreDeleteObject(v60);
          return 0LL;
        }
LABEL_96:
        if ( a8 )
          goto LABEL_148;
        if ( a9 )
        {
          v49 = v55;
          if ( !v55 )
          {
            v49 = CreateEmptyRgn(v45, v44);
            v55 = v49;
          }
          v39 = v55;
          v11 = (HRGN)v49;
          if ( v49 )
          {
LABEL_148:
            ClipBox = GreCombineRgn(v11, v66, v65, 2LL);
            if ( !ClipBox )
              goto LABEL_140;
            if ( v46 != 1 )
              ClipBox = GreCombineRgn(v11, v11, v60, 4LL);
            if ( a9 && !(unsigned int)GreGetRgnBox(v11, a9) )
              goto LABEL_140;
          }
        }
        if ( v46 != 1 )
        {
          GreGetDCOrg(a2, &v63);
          v40 = v60;
          GreOffsetRgn(v60, (unsigned int)v63, HIDWORD(v63));
          GreSelectVisRgnShared(a2, v40, 4LL);
          if ( a10 )
            GreTransformPoints(a2, 0);
          NtGdiBitBltInternal(
            a2,
            (unsigned int)v76.left,
            (unsigned int)v76.top,
            (unsigned int)(v76.right - v76.left),
            v76.bottom - v76.top,
            a2,
            v76.left - v69,
            v76.top - v68,
            13369376,
            0,
            0);
          GreSelectVisRgnShared(a2, v40, 4LL);
          goto LABEL_77;
        }
LABEL_76:
        v40 = v60;
LABEL_77:
        if ( a10 && a9 )
          GreTransformPoints(a2, 0);
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
        GreDeleteObject(EmptyRgn);
        GreDeleteObject(v64);
        GreDeleteObject(v39);
        GreDeleteObject(v65);
        GreDeleteObject(v66);
        GreDeleteObject(v40);
        return ClipBox;
      }
LABEL_139:
      v39 = v55;
      goto LABEL_140;
    }
LABEL_58:
    if ( (unsigned __int64)v63 <= 1 )
    {
      v77 = v20;
      IntersectRect(&v76, &v76, &v78);
      v31 = IntersectRect(&v73, &v73, &v78);
      if ( v63 == (HRGN)1 )
      {
        v74 = 0LL;
        v75 = 0LL;
      }
      else
      {
        LODWORD(v74) = a3 + v73.m128i_i32[0];
        LODWORD(v75) = a3 + v73.m128i_i32[2];
        HIDWORD(v74) = v10 + v73.m128i_i32[1];
        HIDWORD(v75) = v10 + v73.m128i_i32[3];
        IntersectRect(&v74, &v74, &v76);
      }
      if ( v31 )
      {
        if ( (unsigned int)IntersectRect(&v80, &v73, &v76) )
        {
          if ( a3 && v10 )
            goto LABEL_130;
          UnionRect(&v80, &v73, &v76);
          SubtractRect(&v80, &v80, &v74);
          v34 = v80;
LABEL_65:
          if ( a9 )
            *a9 = v34;
          if ( a8 && !(unsigned int)SetRectRgnIndirect(a8, &v80) )
            goto LABEL_139;
          ClipBox = 2;
          if ( v80.left >= v80.right || v80.top >= v80.bottom )
            ClipBox = 1;
LABEL_70:
          v35 = (unsigned int)v74;
          v36 = v75;
          if ( (int)v74 < (int)v75 )
          {
            v37 = HIDWORD(v74);
            v38 = HIDWORD(v75);
            if ( SHIDWORD(v74) < SHIDWORD(v75) )
            {
              if ( a10 )
              {
                GreTransformPoints(a2, 0);
                v38 = HIDWORD(v75);
                v36 = v75;
                v37 = HIDWORD(v74);
                v35 = (unsigned int)v74;
              }
              NtGdiBitBltInternal(
                a2,
                v35,
                v37,
                (unsigned int)(v36 - v35),
                v38 - v37,
                a2,
                v35 - v69,
                v37 - v68,
                13369376,
                0,
                0);
            }
          }
          v39 = v55;
          goto LABEL_76;
        }
        v53 = v73.m128i_i64[0] - v77.m128i_i64[0];
        if ( v73.m128i_i64[0] == v77.m128i_i64[0] )
          v53 = v73.m128i_i64[1] - v77.m128i_i64[1];
        if ( v53 )
        {
LABEL_130:
          if ( a8 || a9 && (v55 = CreateEmptyRgn(v33, v32), (v11 = (HRGN)v55) != 0LL) )
          {
            v54 = v64;
            if ( !v64 )
            {
              v54 = CreateEmptyRgn(v33, v32);
              v64 = v54;
            }
            SetRectRgnIndirect(v54, &v73);
            SetRectRgnIndirect(v11, &v76);
            if ( !(unsigned int)GreCombineRgn(v11, v11, v54, 2LL) )
              goto LABEL_139;
            SetRectRgnIndirect(v54, &v74);
            ClipBox = GreCombineRgn(v11, v11, v54, 4LL);
            if ( !ClipBox || a9 && !(unsigned int)GreGetRgnBox(v11, a9) )
              goto LABEL_139;
          }
          goto LABEL_70;
        }
        v34 = (struct tagRECT)v73;
      }
      else
      {
        v34 = v76;
      }
      v80 = v34;
      goto LABEL_65;
    }
    goto LABEL_83;
  }
  if ( (unsigned __int64)v63 <= 1 && ClipBox == 2 )
  {
    if ( !(unsigned int)IntersectRect(&v78, &v78, &v81) )
    {
LABEL_45:
      v27 = EmptyRgn;
      goto LABEL_46;
    }
    goto LABEL_58;
  }
  if ( v25 )
  {
    v27 = EmptyRgn;
  }
  else
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v26, v15);
    v27 = EmptyRgn;
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_139;
    v61 = 1;
  }
  v64 = CreateEmptyRgn(v26, v15);
  v29 = v64;
  SetRectRgnIndirect(v64, &v81);
  v30 = GreCombineRgn(v27, v29, v27, 1LL);
  ClipBox = v30;
  if ( !v30 )
    goto LABEL_139;
  v15 = v30 - 1;
  if ( v30 != 1 )
  {
    if ( v30 == 2 )
    {
      if ( !(unsigned int)GreGetRgnBox(v27, &v78) )
        goto LABEL_139;
      v20 = v73;
      goto LABEL_58;
    }
    v20 = v73;
    goto LABEL_110;
  }
LABEL_46:
  if ( a8 && !(unsigned int)SetEmptyRgn(a8, v15, v16) )
    goto LABEL_139;
  if ( a9 )
  {
    *(_QWORD *)&a9->left = 0LL;
    *(_QWORD *)&a9->right = 0LL;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteObject(v27);
  GreDeleteObject(v64);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  return 1LL;
}
