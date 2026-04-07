/*
 * XREFs of ?Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z @ 0x180093E10
 * Callers:
 *     ?Create@CAnimatedGlassSheet@@SAJPEAPEAV1@_N@Z @ 0x180093D04 (-Create@CAnimatedGlassSheet@@SAJPEAPEAV1@_N@Z.c)
 * Callees:
 *     ?Create@CAtlasedImage@@SAJPEAPEAV1@@Z @ 0x180001AAC (-Create@CAtlasedImage@@SAJPEAPEAV1@@Z.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x1800127E8 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x180012F14 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180023F50 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJXZ @ 0x1800252B0 (-Initialize@CAtlasedRectsVisual@@MEAAJXZ.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x1800261A8 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180028B9C (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x1800385E4 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z @ 0x18008D780 (-GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z.c)
 */

__int64 __fastcall CAnimatedGlassSheet::Initialize(CAnimatedGlassSheet *this, unsigned __int8 a2)
{
  int v4; // eax
  int v5; // edi
  __int64 v6; // rcx
  unsigned int v7; // r10d
  CDesktopManager *v8; // rbx
  struct CTopLevelWindow::WindowFrame *v9; // r11
  struct CBitmapSource *WindowFramePart; // rax
  __int64 v11; // r9
  int v12; // r10d
  double v13; // xmm2_8
  int v14; // eax
  int v15; // ecx
  int v16; // esi
  int v17; // r14d
  int v18; // r15d
  int v19; // r12d
  __m128i v20; // xmm0
  LONG *v21; // rsi
  struct CAtlasedImage **v22; // rbx
  __int64 v23; // r14
  int v24; // eax
  struct CTopLevelWindow::WindowFrame *v25; // r12
  int v26; // eax
  struct CBitmapSource *v27; // rdx
  struct CAtlasedImage *v28; // rcx
  struct CAtlasedImage *v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  struct CAtlasedImage *v36; // rcx
  struct tagSIZE v38; // [rsp+38h] [rbp-D0h] BYREF
  struct tagSIZE v39; // [rsp+40h] [rbp-C8h] BYREF
  signed __int64 v40; // [rsp+48h] [rbp-C0h]
  signed __int64 v41; // [rsp+50h] [rbp-B8h]
  _DWORD v42[5]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v43[15]; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v44; // [rsp+A8h] [rbp-60h]
  int v45; // [rsp+ACh] [rbp-5Ch]
  int v46; // [rsp+B0h] [rbp-58h]
  int v47; // [rsp+B4h] [rbp-54h]
  int v48; // [rsp+B8h] [rbp-50h]
  int v49; // [rsp+BCh] [rbp-4Ch]
  int v50; // [rsp+C0h] [rbp-48h]
  int v51; // [rsp+C4h] [rbp-44h]
  int v52; // [rsp+C8h] [rbp-40h]
  int v53; // [rsp+CCh] [rbp-3Ch]
  int v54; // [rsp+D0h] [rbp-38h]
  int v55; // [rsp+D4h] [rbp-34h]
  int v56; // [rsp+D8h] [rbp-30h]
  int v57; // [rsp+DCh] [rbp-2Ch]
  int v58; // [rsp+E0h] [rbp-28h]
  int v59; // [rsp+E4h] [rbp-24h]
  int v60; // [rsp+E8h] [rbp-20h]
  int v61; // [rsp+ECh] [rbp-1Ch]
  int v62; // [rsp+F0h] [rbp-18h]
  int v63; // [rsp+F4h] [rbp-14h]
  int v64; // [rsp+F8h] [rbp-10h]
  int v65; // [rsp+FCh] [rbp-Ch]
  int v66; // [rsp+100h] [rbp-8h]
  int v67; // [rsp+104h] [rbp-4h]
  int v68; // [rsp+108h] [rbp+0h]
  int v69; // [rsp+10Ch] [rbp+4h]
  int v70; // [rsp+110h] [rbp+8h]
  int v71; // [rsp+114h] [rbp+Ch]
  int v72; // [rsp+118h] [rbp+10h]
  int v73; // [rsp+11Ch] [rbp+14h]
  int v74; // [rsp+120h] [rbp+18h]
  int v75; // [rsp+124h] [rbp+1Ch]
  int v76; // [rsp+128h] [rbp+20h]
  int v77; // [rsp+12Ch] [rbp+24h]
  int v78; // [rsp+130h] [rbp+28h]
  int v79; // [rsp+134h] [rbp+2Ch]
  int v80; // [rsp+138h] [rbp+30h]
  int v81; // [rsp+13Ch] [rbp+34h]
  int v82; // [rsp+140h] [rbp+38h]
  int v83; // [rsp+144h] [rbp+3Ch]
  int v84; // [rsp+148h] [rbp+40h]
  int v85; // [rsp+14Ch] [rbp+44h]
  int v86; // [rsp+150h] [rbp+48h]
  int v87; // [rsp+154h] [rbp+4Ch]
  int v88; // [rsp+158h] [rbp+50h]
  int v89; // [rsp+15Ch] [rbp+54h]
  int v90; // [rsp+160h] [rbp+58h]
  int v91; // [rsp+164h] [rbp+5Ch]
  int v92; // [rsp+168h] [rbp+60h]
  int v93; // [rsp+16Ch] [rbp+64h]
  int v94; // [rsp+170h] [rbp+68h]
  int v95; // [rsp+174h] [rbp+6Ch]
  int v96; // [rsp+178h] [rbp+70h]
  int v97; // [rsp+17Ch] [rbp+74h]
  int v98; // [rsp+180h] [rbp+78h]
  int v99; // [rsp+184h] [rbp+7Ch]
  int v100; // [rsp+188h] [rbp+80h]
  int v101; // [rsp+18Ch] [rbp+84h]
  int v102; // [rsp+198h] [rbp+90h] BYREF
  _DWORD v103[17]; // [rsp+19Ch] [rbp+94h] BYREF
  int v104; // [rsp+1E0h] [rbp+D8h]
  int v105; // [rsp+1E8h] [rbp+E0h]
  int v106; // [rsp+1F4h] [rbp+ECh]
  int v107; // [rsp+1FCh] [rbp+F4h]

  v4 = CAtlasedRectsVisual::Initialize(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = a2;
    v7 = 0;
    v8 = CDesktopManager::s_pDesktopManagerInstance;
    v9 = *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8 * (v6 ^ 1));
    v38 = (struct tagSIZE)v9;
    do
    {
      WindowFramePart = CTopLevelWindow::GetWindowFramePart(v9, v7 + 9);
      if ( WindowFramePart )
      {
        v13 = *((double *)v8 + 60);
        *(_QWORD *)v11 = *((_QWORD *)WindowFramePart + 3);
        v14 = (int)((double)*(int *)(v11 + 4) * v13);
        v15 = (int)((double)*(int *)v11 * v13);
      }
      else
      {
        v14 = 0;
        v15 = 0;
      }
      *(_DWORD *)v11 = v15;
      v7 = v12 + 1;
      *(_DWORD *)(v11 + 4) = v14;
    }
    while ( v7 < 0xD );
    v16 = v102;
    v17 = v103[3];
    v18 = v103[2];
    v19 = v103[12];
    *((_DWORD *)this + 118) = v102;
    *((_DWORD *)this + 119) = v17;
    *((_DWORD *)this + 120) = v18;
    *((_DWORD *)this + 121) = v19;
    *((_DWORD *)this + 114) = v16;
    *((_DWORD *)this + 115) = v17;
    *((_DWORD *)this + 116) = v18;
    *((_DWORD *)this + 117) = v19;
    v43[1] = 0;
    v43[2] = 0;
    v60 = 0;
    v20 = _mm_cvtsi32_si128(*((_DWORD *)CTopLevelWindow::GetWindowFramePart(v9, 9u) + 6));
    v42[1] = 0x7FFFFFFF;
    v42[3] = 0x7FFFFFFF;
    v43[4] = 0x7FFFFFFF;
    v43[5] = 0x7FFFFFFF;
    v43[7] = 0x7FFFFFFF;
    v43[10] = 0x7FFFFFFF;
    v43[14] = 0x7FFFFFFF;
    v47 = 0x7FFFFFFF;
    v48 = 0x7FFFFFFF;
    v53 = 0x7FFFFFFF;
    v55 = 0x7FFFFFFF;
    v56 = 0x7FFFFFFF;
    v42[0] = -v16;
    v43[13] = -v16;
    v54 = -v16;
    v42[2] = -v18;
    v43[3] = -v18;
    v43[8] = -v17;
    v43[9] = -v18;
    *(double *)v20.m128i_i64 = _mm_cvtepi32_pd(v20).m128d_f64[0] * *((double *)v8 + 60);
    v49 = -v17;
    v57 = -v19;
    v62 = 0x7FFFFFFF;
    v63 = -v19;
    v64 = 0x7FFFFFFF;
    v66 = 0x7FFFFFFF;
    v67 = -v17;
    v42[4] = (int)*(double *)v20.m128i_i64;
    v43[0] = (int)*(double *)v20.m128i_i64;
    v43[6] = (int)*(double *)v20.m128i_i64;
    v43[11] = (int)*(double *)v20.m128i_i64;
    v44 = (int)*(double *)v20.m128i_i64 - v18;
    v50 = v44;
    v45 = (int)*(double *)v20.m128i_i64 - v19;
    v51 = v45;
    v61 = 0;
    v43[12] = (int)*(double *)v20.m128i_i64;
    v46 = (int)*(double *)v20.m128i_i64;
    v52 = (int)*(double *)v20.m128i_i64;
    v58 = (int)*(double *)v20.m128i_i64;
    v59 = (int)*(double *)v20.m128i_i64;
    v65 = (int)*(double *)v20.m128i_i64;
    v68 = 0x7FFFFFFF;
    v80 = -v103[0];
    v76 = 0x7FFFFFFF;
    v77 = 0x7FFFFFFF;
    v81 = -v103[10];
    v74 = v44;
    v73 = (int)*(double *)v20.m128i_i64 - v17;
    v75 = v45;
    v72 = (int)*(double *)v20.m128i_i64 - v16;
    v69 = -v19;
    v78 = -(v104 + v16);
    v21 = v43;
    v90 = v78;
    v22 = (struct CAtlasedImage **)((char *)this + 280);
    v95 = v106;
    v85 = -(v105 + v17);
    v23 = 0LL;
    v91 = v85;
    v70 = (int)*(double *)v20.m128i_i64;
    v92 = -(v106 + v18);
    v71 = (int)*(double *)v20.m128i_i64;
    v96 = -(v104 + v103[9]);
    v79 = 0x7FFFFFFF;
    v82 = v104;
    v97 = -(v105 + v103[13]);
    v83 = 0x7FFFFFFF;
    v84 = 0x7FFFFFFF;
    v86 = -v18;
    v24 = v107 + v19;
    v87 = -v19;
    v25 = (struct CTopLevelWindow::WindowFrame *)v38;
    v99 = -v24;
    v88 = v105;
    v40 = (char *)&v102 - (char *)this;
    v89 = 0x7FFFFFFF;
    v41 = (char *)v103 - (char *)this;
    v93 = 0x7FFFFFFF;
    v94 = 0x7FFFFFFF;
    v98 = 0x7FFFFFFF;
    v100 = 0x7FFFFFFF;
    v101 = v107;
    while ( 1 )
    {
      v26 = CAtlasedImage::Create((struct CAtlasedImage **)this + v23 + 35);
      v5 = v26;
      if ( v26 < 0 )
        break;
      CAtlasedRectsVisual::InsertAtlasImageAtIndex(this, *v22, *((unsigned int *)this + 66));
      if ( *(int *)((char *)v22 + v40 - 280) <= 0 || *(int *)((char *)v22 + v41 - 280) <= 0 )
        v27 = 0LL;
      else
        v27 = CTopLevelWindow::GetWindowFramePart(v25, (int)v23 + 9);
      CAtlasedImage::SetBitmapSource(*v22, v27);
      CAtlasedImage::SetInsetFromParent(*v22, (const struct _MARGINS *)&v42[6 * v23]);
      if ( *(v21 - 1) != 0x7FFFFFFF )
      {
        v28 = *v22;
        v39.cx = *(v21 - 1);
        v39.cy = *((_DWORD *)v28 + 7);
        CAtlasedImage::SetSize(v28, &v39);
      }
      if ( *v21 != 0x7FFFFFFF )
      {
        v29 = *v22;
        v38.cy = *v21;
        v38.cx = *((_DWORD *)v29 + 6);
        CAtlasedImage::SetSize(v29, &v38);
      }
      v30 = 8;
      if ( *(v21 - 2) != 0x7FFFFFFF )
        v30 = 0;
      v31 = (*(v21 - 5) == 0x7FFFFFFF) | v30;
      v32 = 4;
      if ( *(v21 - 3) != 0x7FFFFFFF )
        v32 = 0;
      v33 = v32 | v31;
      v34 = 2;
      if ( *(v21 - 4) != 0x7FFFFFFF )
        v34 = 0;
      v35 = v34 | v33;
      v36 = *v22;
      if ( *((_DWORD *)*v22 + 16) != v35 )
      {
        *((_DWORD *)v36 + 16) = v35;
        CAtlasedImage::SetDirtyFlags(v36, 1, 0x2000u);
      }
      v23 = (unsigned int)(v23 + 1);
      ++v22;
      v21 += 6;
      if ( (unsigned int)v23 >= 0xD )
        goto LABEL_29;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0xB5u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x4Au);
  }
LABEL_29:
  if ( v5 < 0 )
    CAtlasedRectsVisual::RemoveAllAtlasImages(this);
  return (unsigned int)v5;
}
