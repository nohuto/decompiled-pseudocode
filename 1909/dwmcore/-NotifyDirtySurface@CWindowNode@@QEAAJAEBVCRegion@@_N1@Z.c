/*
 * XREFs of ?NotifyDirtySurface@CWindowNode@@QEAAJAEBVCRegion@@_N1@Z @ 0x18006BD90
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z @ 0x18006B304 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z.c)
 * Callees:
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18006C3FC (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18006C430 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18006CD24 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x18006CD90 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180079F80 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x18007A268 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B6EE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     McTemplateU0xnn @ 0x1801643B0 (McTemplateU0xnn.c)
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x18017F72C (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x180217B4C (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowNode::NotifyDirtySurface(
        CWindowNode *this,
        FastRegion::Internal::CRgnData **a2,
        unsigned __int8 a3,
        char a4)
{
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // r9
  char v9; // r10
  char *v10; // rdx
  LONG *v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rsi
  int v14; // r13d
  LONG *v15; // r14
  __int64 v16; // rcx
  _BYTE *v17; // rdx
  __int64 v18; // r8
  float left; // xmm8_4
  float right; // xmm9_4
  float top; // xmm6_4
  float bottom; // xmm7_4
  bool v23; // sf
  float v24; // xmm12_4
  float v25; // xmm11_4
  float v26; // xmm10_4
  float v27; // xmm11_4
  float v28; // xmm8_4
  float v29; // xmm12_4
  __int64 v30; // rcx
  char *v31; // rdi
  unsigned int v32; // r12d
  unsigned int v33; // r15d
  float v34; // xmm7_4
  _BYTE *v35; // r10
  float *v36; // r11
  __int64 v37; // rsi
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm3_4
  __int64 v41; // rdx
  __int64 v42; // r8
  int v43; // r9d
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // r8
  float v48; // xmm0_4
  float v49; // xmm4_4
  float v50; // xmm4_4
  __int64 v51; // rdx
  __int64 v53; // rcx
  unsigned int v54; // r9d
  float v55; // xmm6_4
  __int64 v56; // r10
  char v57; // r12
  float v58; // xmm2_4
  __int64 v59; // rcx
  unsigned int v60; // r9d
  float v61; // xmm0_4
  unsigned int v62; // eax
  _BYTE *v63; // r11
  __int64 v64; // r15
  unsigned int v65; // eax
  _BYTE *v66; // rax
  int v67; // [rsp+30h] [rbp-D8h]
  char *v70; // [rsp+50h] [rbp-B8h]
  LONG *v71; // [rsp+60h] [rbp-A8h]
  struct tagRECT v72; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v73; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v74; // [rsp+80h] [rbp-88h]
  LONG *v75; // [rsp+88h] [rbp-80h]
  char *v76; // [rsp+90h] [rbp-78h]
  int v77; // [rsp+98h] [rbp-70h]
  int v78; // [rsp+9Ch] [rbp-6Ch]
  __int128 v79; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v80; // [rsp+B8h] [rbp-50h] BYREF
  struct tagRECT rcDst; // [rsp+C8h] [rbp-40h] BYREF
  RECT rcSrc1; // [rsp+D8h] [rbp-30h] BYREF

  if ( *((char *)this + 93) < 0 )
  {
    *((_DWORD *)this + 156) = 0;
    *(_QWORD *)((char *)this + 628) = 1LL;
    *((_BYTE *)this + 93) &= ~0x80u;
    v6 = (void *)*((_QWORD *)this + 122);
    if ( v6 )
    {
      DeleteObject(v6);
      *((_QWORD *)this + 122) = 0LL;
    }
    v7 = (void *)*((_QWORD *)this + 123);
    if ( v7 )
    {
      DeleteObject(v7);
      *((_QWORD *)this + 123) = 0LL;
    }
    *((_BYTE *)this + 1016) = 0;
  }
  if ( *((_BYTE *)this + 938) )
    *((_BYTE *)this + 939) = 0;
  FastRegion::Internal::CRgnData::BeginIterator(*a2, (struct FastRegion::CRegion::Iterator *)&v73);
  v10 = v76;
  v11 = v75;
  v12 = v74;
  LODWORD(v13) = v78;
  v14 = v77;
  v70 = v76;
  v71 = v75;
LABEL_10:
  while ( (unsigned __int64)v11 < v12 )
  {
    v15 = v11 + 2;
    rcSrc1.top = *v11;
    rcSrc1.bottom = v11[2];
    v16 = 2 * v14;
    rcSrc1.left = *(_DWORD *)&v10[4 * v16];
    rcSrc1.right = *(_DWORD *)&v10[4 * v16 + 4];
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0xnn(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEWINDOW,
        *((_QWORD *)this + 80),
        v8,
        (__int64)&rcSrc1,
        v67,
        (__int64)this + 712);
      v10 = v70;
      v12 = v74;
      v9 = a4;
    }
    if ( *((_BYTE *)this + 938) || *((_BYTE *)this + 937) && v9 )
      goto LABEL_37;
    CopyRect(&rcDst, (const RECT *)((char *)this + 664));
    OffsetRect(&rcDst, -rcDst.left, -rcDst.top);
    IntersectRect(&rcDst, &rcSrc1, &rcDst);
    left = (float)rcDst.left;
    right = (float)rcDst.right;
    top = (float)rcDst.top;
    bottom = (float)rcDst.bottom;
    if ( (float)rcDst.right > (float)rcDst.left && bottom > top )
    {
      v23 = *((char *)this + 93) < 0;
      *(float *)&v80 = (float)rcDst.left;
      *((float *)&v80 + 1) = (float)rcDst.top;
      *((float *)&v80 + 2) = (float)rcDst.right;
      *((float *)&v80 + 3) = (float)rcDst.bottom;
      if ( v23 )
      {
        *((_DWORD *)this + 156) = 0;
        *(_QWORD *)((char *)this + 628) = 1LL;
        *((_BYTE *)this + 93) &= ~0x80u;
        CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 976));
      }
      if ( bottom > top )
      {
        v24 = (float)(*((_DWORD *)this + 167) - *((_DWORD *)this + 179));
        v25 = (float)(*((_DWORD *)this + 166) - *((_DWORD *)this + 178));
        v26 = v25 + right;
        v27 = v25 + left;
        v28 = v24 + top;
        v29 = v24 + bottom;
        *(float *)&v80 = v27;
        *(_QWORD *)((char *)&v80 + 4) = __PAIR64__(LODWORD(v26), LODWORD(v28));
        *((float *)&v80 + 3) = v29;
        if ( g_DisplayManager )
        {
          v18 = *((unsigned int *)g_DisplayManager + 18);
          v30 = 0LL;
          if ( (_DWORD)v18 )
          {
            v8 = *((_QWORD *)g_DisplayManager + 6);
            while ( 1 )
            {
              v17 = *(_BYTE **)(v8 + 8 * v30);
              if ( v17[320] || v17[319] || v17[312] )
                break;
              v30 = (unsigned int)(v30 + 1);
              if ( (unsigned int)v30 >= (unsigned int)v18 )
                goto LABEL_27;
            }
            v72.left = (int)v27;
            v72.right = (int)v26;
            v72.top = (int)v28;
            v72.bottom = (int)v29;
            CDwmMetaRegion::AddDirtyRectangle((CWindowNode *)((char *)this + 976), &v72);
          }
        }
LABEL_27:
        v31 = (char *)this + 560;
        if ( v26 > v27 && v29 > v28 )
        {
          v32 = -1;
          v33 = -1;
          v34 = FLOAT_3_4028235e38;
          if ( (*((_BYTE *)this + 628) & 0xF) != 0 )
            goto LABEL_30;
          v54 = 0;
          *((_DWORD *)this + 157) = 1;
          if ( *((_DWORD *)this + 158) > 1u )
          {
            v55 = 0.0;
            v56 = 0LL;
            do
            {
              v57 = 0;
              v58 = v55;
              if ( v31[v56 + 64] )
              {
                v61 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(
                        &v31[16 * (unsigned int)v56],
                        v17,
                        v18);
                if ( v61 > v55 )
                  v55 = v61;
                v62 = v56;
                v18 = (unsigned int)(v56 + 1);
                if ( v61 <= v58 )
                  v62 = v60;
                v54 = v62;
                if ( (unsigned int)v18 < 4 )
                {
                  v63 = (char *)this + (unsigned int)v18 + 624;
                  while ( 1 )
                  {
                    if ( *v63 )
                    {
                      v64 = (unsigned int)v18;
                      if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                              v59,
                                              &v31[16 * (unsigned int)v18]) )
                        break;
                    }
                    v18 = (unsigned int)(v18 + 1);
                    ++v63;
                    if ( (unsigned int)v18 >= 4 )
                      goto LABEL_78;
                  }
                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v59, v17);
                  v31[v64 + 64] = 0;
                  v57 = 1;
                  --*((_DWORD *)this + 158);
                }
              }
LABEL_78:
              v65 = v56 + 1;
              v56 = 0LL;
              if ( !v57 )
                v56 = v65;
            }
            while ( (unsigned int)v56 < 4 );
            v33 = -1;
            v32 = -1;
            goto LABEL_82;
          }
          if ( *((_DWORD *)this + 158) == 1 )
          {
            v66 = (char *)this + 624;
            while ( !*v66 )
            {
              ++v54;
              ++v66;
              if ( v54 >= 4 )
                goto LABEL_30;
            }
LABEL_82:
            if ( v54 )
              CMergedRectBase<4>::SwapExisting((char *)this + 560, 0LL, v54);
          }
LABEL_30:
          LODWORD(v8) = 0;
          v35 = (char *)this + 624;
          v36 = (float *)((char *)this + 572);
          do
          {
            if ( *v35 )
            {
              v38 = *(v36 - 1);
              v39 = *(v36 - 3);
              if ( v38 > v39 )
              {
                v40 = *(v36 - 2);
                if ( *v36 > v40 && v26 > v27 && v29 > v28 && v38 > v27 && v26 > v39 && *v36 > v28 && v29 > v40 )
                {
                  v53 = (unsigned int)v8;
                  goto LABEL_58;
                }
              }
              if ( *((_DWORD *)this + 158) == 4 )
              {
                v79 = *(_OWORD *)(v36 - 3);
                TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v79, &v80);
                TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(&v79, v41, v42);
                TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(&v31[16 * v43], v44, v45);
                v48 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(&v80, v46, v47);
                v29 = *((float *)&v80 + 3);
                v50 = v49 - v48;
                v26 = *((float *)&v80 + 2);
                v28 = *((float *)&v80 + 1);
                v27 = *(float *)&v80;
                if ( v34 > v50 )
                {
                  v34 = v50;
                  v32 = v8;
                }
              }
            }
            else
            {
              v33 = v8;
            }
            LODWORD(v8) = v8 + 1;
            ++v35;
            v36 += 4;
          }
          while ( (unsigned int)v8 < 4 );
          if ( v33 != -1 )
          {
            *(_OWORD *)&v31[16 * v33] = v80;
            v31[v33 + 64] = 1;
            ++*((_DWORD *)this + 157);
            ++*((_DWORD *)this + 158);
            goto LABEL_36;
          }
          v53 = v32;
LABEL_58:
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v31[16 * v53], &v80);
          ++*((_DWORD *)this + 157);
        }
      }
    }
LABEL_36:
    v9 = a4;
    v12 = v74;
    v10 = v70;
LABEL_37:
    v11 = v71;
    if ( ++v14 >= (int)v13 )
    {
      while ( 1 )
      {
        v11 = v15;
        v37 = v15[3];
        v10 = (char *)v15 + v15[1];
        v15 += 2;
        v71 = v11;
        v70 = v10;
        v13 = ((__int64)v15 + v37 - (__int64)v10) >> 3;
        if ( (_DWORD)v13 )
          break;
        if ( (unsigned __int64)v11 >= v12 )
          goto LABEL_10;
      }
      v14 = 0;
    }
  }
  if ( !*((_BYTE *)this + 938) && *((_BYTE *)this + 937) && v9 )
  {
    *((_BYTE *)this + 936) = 0;
    v51 = 5LL;
  }
  else
  {
    v51 = (unsigned int)a3 + 8;
  }
  CVisual::PropagateFlags(this, v51);
  if ( CWindowNode::ProcessReadyGdiSpriteBitmaps(this) )
    CVisual::PropagateFlags(this, 4LL);
  return 0LL;
}
