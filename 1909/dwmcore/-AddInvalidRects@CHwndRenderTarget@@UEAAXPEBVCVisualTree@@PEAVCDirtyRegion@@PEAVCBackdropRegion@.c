/*
 * XREFs of ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180035450
 * Callers:
 *     <none>
 * Callees:
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x180011EF0 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180033BE4 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x180034E80 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180035AFC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180058DE4 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180079F80 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007DEA0 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x18008E190 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AEA10 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B6EE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetRectBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800C04D8 (-GetRectBounds@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180166860 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1801767F4 (-ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x1801929DC (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z.c)
 *     ?RemoveBackdropBlur@CBackdropRegion@@AEAAXI@Z @ 0x180250FE8 (-RemoveBackdropBlur@CBackdropRegion@@AEAAXI@Z.c)
 */

void __fastcall CHwndRenderTarget::AddInvalidRects(
        CHwndRenderTarget *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3,
        struct CBackdropRegion *a4)
{
  _DWORD *v6; // rdx
  bool v7; // si
  int v8; // eax
  bool v9; // zf
  __int64 v10; // rax
  char *v11; // r13
  float v12; // xmm2_4
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rax
  CDirectFlipInfo *v18; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v19; // r8
  __int64 v20; // rdx
  unsigned __int8 v21; // si
  __int64 v22; // r11
  __int64 v23; // rax
  bool v24; // al
  int v25; // ecx
  int v26; // eax
  const struct IRenderTarget *v27; // rsi
  __int64 i; // r9
  int v29; // r9d
  char *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r9
  CBackdropRegion *v33; // r13
  char v34; // r12
  unsigned int v35; // r15d
  __int64 v36; // r8
  CVisual *v37; // r14
  void (__fastcall *v38)(const struct IRenderTarget *, CBackdropRegion **, __int64, __int64); // rax
  CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  int v40; // eax
  unsigned int v41; // ecx
  char *v42; // rdx
  _QWORD *v43; // rcx
  __int64 j; // rax
  int v45; // eax
  unsigned int v46; // ecx
  unsigned int v47; // eax
  void *v48; // rcx
  unsigned int v49; // [rsp+20h] [rbp-A9h]
  _BYTE v51[64]; // [rsp+40h] [rbp-89h] BYREF
  int v52; // [rsp+80h] [rbp-49h]
  __int128 v53; // [rsp+90h] [rbp-39h] BYREF
  CBackdropRegion *v54; // [rsp+A0h] [rbp-29h] BYREF
  float v55; // [rsp+A8h] [rbp-21h]
  float v56; // [rsp+ACh] [rbp-1Dh]
  __int128 v57; // [rsp+B0h] [rbp-19h] BYREF
  char v58; // [rsp+C0h] [rbp-9h] BYREF
  char v59; // [rsp+D0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v9 = *((_BYTE *)this + 89) == 0;
  v54 = a4;
  if ( !v9 )
  {
    CDirtyRegion::SetFullDirty(a3);
    *((_BYTE *)this + 89) = 0;
  }
  v6 = (_DWORD *)*((_QWORD *)this + 12);
  v7 = 0;
  if ( !v6 )
    goto LABEL_13;
  v8 = v6[28];
  if ( ((v6[74] - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( v8 - v6[26] == v6[33] - v6[31] )
    {
      v9 = v6[29] - v6[27] == v6[32] - v6[30];
      goto LABEL_9;
    }
LABEL_10:
    if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 9) + 248LL))((char *)this - 72) )
    {
      v10 = *((_QWORD *)this + 97);
      if ( v10 )
        v7 = *(_BYTE *)(v10 + 13439) == 0;
    }
    goto LABEL_13;
  }
  if ( v8 - v6[26] != v6[32] - v6[30] )
    goto LABEL_10;
  v9 = v6[29] - v6[27] == v6[33] - v6[31];
LABEL_9:
  if ( !v9 )
    goto LABEL_10;
LABEL_13:
  *((_BYTE *)a3 + 2885) |= v7;
  v11 = (char *)this + 148;
  v12 = 1.0
      / (float)((float)(*((float *)this + 42) * *((float *)this + 37))
              - (float)(*((float *)this + 41) * *((float *)this + 38)));
  if ( v12 > *((float *)a3 + 719) )
    *((float *)a3 + 719) = v12;
  v13 = *((_QWORD *)this + 14);
  if ( v13 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13)
      && (!*(_DWORD *)(*((_QWORD *)this - 7) + 284LL) || *((_BYTE *)this + 790)) )
    {
      *((_BYTE *)this + 788) = 1;
    }
    else
    {
      if ( *((_BYTE *)this + 788) )
        *((_BYTE *)this + 89) = 1;
      *((_BYTE *)this + 788) = 0;
    }
  }
  if ( *((_BYTE *)this + 89) )
  {
    CDirtyRegion::SetFullDirty(a3);
  }
  else
  {
    if ( (*((_BYTE *)this + 356) & 8) == 0 )
      CDirtyRegion::ConvertAnyDirtyToFullDirty(a3);
    v14 = *((_DWORD *)this + 124);
    v15 = *((_QWORD *)this + 59);
    if ( v14 )
    {
      v16 = v14;
      do
      {
        CDirtyRegion::Add(a3);
        v15 += 16LL;
        --v16;
      }
      while ( v16 );
    }
    v17 = *((_QWORD *)this + 97);
    if ( v17 )
    {
      v18 = *(CDirectFlipInfo **)(v17 + 13304);
      if ( v18 )
        CDirectFlipInfo::AddOverdrawToDirtyRegion(v18, a3, (CHwndRenderTarget *)((char *)this + 148));
    }
  }
  if ( *((_QWORD *)this + 13) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 9) + 248LL))((char *)this - 72)
      && (*(int (__fastcall **)(_QWORD, __int128 *, _QWORD))(**((_QWORD **)this + 13) + 120LL))(
           *((_QWORD *)this + 13),
           &v53,
           0LL) >= 0 )
    {
      v21 = 0;
      if ( !CD3DDeviceManager::s_bHwProtectionTempDisabled && !CD3DDeviceManager::s_bHwProtectionTeardown )
      {
        v20 = 0LL;
        if ( HIDWORD(qword_18033D4A4) )
        {
          while ( *(_QWORD *)(qword_18033D490 + 12LL * (unsigned int)v20) != (_QWORD)v53 )
          {
            v20 = (unsigned int)(v20 + 1);
            if ( (unsigned int)v20 >= HIDWORD(qword_18033D4A4) )
              goto LABEL_43;
          }
          v21 = *(_DWORD *)(qword_18033D490 + 12LL * (unsigned int)v20 + 8) != 0;
        }
      }
LABEL_43:
      if ( v21 != (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 144LL))(
                    *((_QWORD *)this + 13),
                    v20) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 13) + 136LL))(*((_QWORD *)this + 13), v21);
        CDirtyRegion::SetFullDirty(a3);
      }
    }
    v22 = *((_QWORD *)this - 7);
    if ( *(_DWORD *)(v22 + 1216) && (*(_BYTE *)(v22 + 1276) || !CDirtyRegion::IsEmpty(a3)) )
    {
      *((_BYTE *)a3 + 2881) = 1;
      *(_BYTE *)(*((_QWORD *)this - 7) + 1276LL) = 0;
      v22 = *((_QWORD *)this - 7);
    }
    if ( *(_DWORD *)(v22 + 1220) )
      *((_BYTE *)a3 + 2882) = 1;
    v23 = *((_QWORD *)this + 97);
    if ( v23 && *(_BYTE *)(v23 + 13439) )
      v11 = (char *)this + 216;
    v52 = *((_DWORD *)v11 + 16);
    v24 = Windows::Foundation::Numerics::invert(
            (Windows::Foundation::Numerics *)v11,
            (const struct Windows::Foundation::Numerics::float4x4 *)v51,
            v19);
    LOWORD(v52) = v52 & 0xCCF;
    v25 = v52;
    if ( !v24 )
      v25 = 0;
    v52 = v25;
    v26 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, struct CDirtyRegion *))(**((_QWORD **)this + 13) + 256LL))(
            *((_QWORD *)this + 13),
            v51,
            a3);
    if ( v26 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7D9,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\hwndrendertarget.cpp",
        (const char *)(unsigned int)v26,
        v49);
    v27 = (const struct IRenderTarget *)*((_QWORD *)this + 13);
    if ( !*((_BYTE *)a3 + 2883) )
    {
      v53 = 0uLL;
      if ( *((_BYTE *)a3 + 2886) )
      {
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)a3 + 319); i = (unsigned int)(v29 + 1) )
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
            &v53,
            (char *)a3 + 16 * (unsigned int)i + 1116);
      }
      else
      {
        v30 = (char *)a3 + 24;
        do
        {
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v53, v30);
          v30 = (char *)(v31 + 16);
          i = v32 - 1;
        }
        while ( i );
      }
      v33 = v54;
      v34 = 0;
      v35 = 0;
      v36 = *((_QWORD *)v54 + 2);
      if ( (unsigned int)((*((_QWORD *)v54 + 3) - v36) / 24) )
      {
        while ( 1 )
        {
          v37 = *(CVisual **)(v36 + 24LL * v35);
          v38 = *(void (__fastcall **)(const struct IRenderTarget *, CBackdropRegion **, __int64, __int64))(*(_QWORD *)v27 + 328LL);
          v57 = *(_OWORD *)(v36 + 24LL * v35 + 8);
          v38(v27, &v54, v36, i);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v54, &v57);
          if ( v55 <= *(float *)&v54
            || v56 <= *((float *)&v54 + 1)
            || *(float *)&v54 >= *(float *)&v53
            && *((float *)&v54 + 1) >= *((float *)&v53 + 1)
            && *((float *)&v53 + 2) >= v55
            && *((float *)&v53 + 3) >= v56
            || !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(&v53, &v54) )
          {
            goto LABEL_91;
          }
          if ( (**((_DWORD **)v37 + 28) & 0x100000) == 0 )
            break;
          WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v37);
          if ( !CWindowBackgroundTreatment::HasValidSource(WindowBackgroundTreatmentInternal, v27) )
          {
            v40 = CDirtyRegion::Add(a3);
            if ( v40 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x43u, 0LL);
              goto LABEL_97;
            }
            v42 = &v58;
LABEL_90:
            v53 = *(_OWORD *)CDirtyRegion::GetRectBounds(a3, v42);
            CBackdropRegion::RemoveBackdropBlur(v33, v35);
            v34 = 1;
          }
LABEL_91:
          v36 = *((_QWORD *)v33 + 2);
          v47 = v35 + 1;
          v35 = 0;
          if ( !v34 )
            v35 = v47;
          v34 = 0;
          if ( v35 >= (unsigned int)((*((_QWORD *)v33 + 3) - v36) / 24) )
            goto LABEL_97;
        }
        v43 = (_QWORD *)*((_QWORD *)CVisual::FindTreeData(v37, a2) + 16);
        if ( v43 )
        {
          while ( (const struct IRenderTarget *)v43[2] != v27 )
          {
            v43 = (_QWORD *)v43[10];
            if ( !v43 )
              goto LABEL_88;
          }
          for ( j = v43[3]; j != v43[4]; j += 16LL )
          {
            if ( !*(_DWORD *)j && !*(_DWORD *)(j + 4) )
            {
              if ( *(_QWORD *)(j + 8) && !CCommonRegistryData::m_fDisableDrawListCaching )
                goto LABEL_91;
              break;
            }
          }
        }
LABEL_88:
        v45 = CDirtyRegion::Add(a3);
        if ( v45 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x58u, 0LL);
          goto LABEL_97;
        }
        v42 = &v59;
        goto LABEL_90;
      }
    }
  }
LABEL_97:
  *((_BYTE *)this + 89) = 0;
  v48 = (void *)*((_QWORD *)this + 59);
  *((_DWORD *)this + 124) = 0;
  if ( v48 != *((void **)this + 60) )
  {
    operator delete(v48);
    *((_QWORD *)this + 59) = *((_QWORD *)this + 60);
    *((_DWORD *)this + 123) = *((_DWORD *)this + 122);
  }
}
