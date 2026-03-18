/*
 * XREFs of ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800317B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x1800042E0 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002CE38 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180030964 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x180031C88 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800399A0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180048EC8 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveBackdropBlur@CBackdropRegion@@AEAAXI@Z @ 0x18005A2B8 (-RemoveBackdropBlur@CBackdropRegion@@AEAAXI@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18005CB5C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?GetRectBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180065E54 (-GetRectBounds@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AA600 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800E4DF4 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015BA40 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180176668 (-ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x180178BB8 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z.c)
 */

void __fastcall CHwndRenderTarget::AddInvalidRects(
        CHwndRenderTarget *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3,
        struct CBackdropRegion *a4)
{
  bool v4; // zf
  CDisplay *v8; // rcx
  bool v9; // r14
  char *v10; // rdi
  float v11; // xmm2_4
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  CDirectFlipInfo *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v18; // r8
  unsigned __int8 v19; // r14
  __int64 v20; // r11
  __int64 v21; // rax
  bool v22; // al
  int v23; // eax
  const struct IRenderTarget *v24; // r12
  char *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r9
  char v28; // r14
  __int64 v29; // rdi
  __int64 v30; // r8
  float v31; // xmm6_4
  CVisual *v32; // r13
  void (__fastcall *v33)(const struct IRenderTarget *, __int64 *); // rax
  float v34; // xmm2_4
  float v35; // xmm0_4
  float v36; // xmm6_4
  float v37; // xmm1_4
  float v38; // xmm3_4
  float v39; // xmm5_4
  float v40; // xmm4_4
  unsigned int v41; // eax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v43; // r8
  struct _LIST_ENTRY *j; // rax
  int v45; // eax
  unsigned int v46; // ecx
  CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // r12
  unsigned int i; // r9d
  int v52; // r9d
  int v53; // eax
  unsigned int v54; // ecx
  unsigned int v55; // [rsp+20h] [rbp-E0h]
  __int64 v56; // [rsp+30h] [rbp-D0h] BYREF
  struct CVisualTree *v57; // [rsp+38h] [rbp-C8h]
  _BYTE v58[64]; // [rsp+40h] [rbp-C0h] BYREF
  int v59; // [rsp+80h] [rbp-80h]
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  __int64 v61; // [rsp+98h] [rbp-68h]
  __int128 v62; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v63; // [rsp+B0h] [rbp-50h]
  _BYTE v64[16]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v65[16]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v4 = *((_BYTE *)this + 89) == 0;
  v57 = a2;
  if ( !v4 )
  {
    CDirtyRegion::SetFullDirty(a3);
    *((_BYTE *)this + 89) = 0;
  }
  v8 = (CDisplay *)*((_QWORD *)this + 12);
  v9 = 0;
  if ( v8 )
  {
    if ( CDisplay::HasVirtualModeScale(v8)
      && !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 9) + 224LL))((char *)this - 72) )
    {
      v49 = *((_QWORD *)this + 97);
      if ( v49 )
        v9 = *(_BYTE *)(v49 + 13423) == 0;
    }
  }
  *((_BYTE *)a3 + 2885) |= v9;
  v10 = (char *)this + 148;
  v11 = 1.0
      / (float)((float)(*((float *)this + 42) * *((float *)this + 37))
              - (float)(*((float *)this + 41) * *((float *)this + 38)));
  if ( v11 > *((float *)a3 + 719) )
    *((float *)a3 + 719) = v11;
  v12 = *((_QWORD *)this + 14);
  if ( v12 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12)
      && (!*(_DWORD *)(*((_QWORD *)this - 7) + 268LL) || *((_BYTE *)this + 790)) )
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
    v13 = *((_QWORD *)this + 59);
    if ( *((_DWORD *)this + 124) )
    {
      v50 = *((unsigned int *)this + 124);
      do
      {
        CDirtyRegion::Add(a3, 0LL, 0LL, v13);
        v13 += 16LL;
        --v50;
      }
      while ( v50 );
    }
    v14 = *((_QWORD *)this + 97);
    if ( v14 )
    {
      v15 = *(CDirectFlipInfo **)(v14 + 13288);
      if ( v15 )
        CDirectFlipInfo::AddOverdrawToDirtyRegion(v15, a3, (CHwndRenderTarget *)((char *)this + 148));
    }
  }
  v16 = *((_QWORD *)this + 13);
  if ( v16 )
  {
    if ( (*(int (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v16 + 120LL))(v16, &v56, 0LL) >= 0 )
    {
      v19 = 0;
      if ( !CD3DDeviceManager::s_bHwProtectionTempDisabled && !CD3DDeviceManager::s_bHwProtectionTeardown )
      {
        v17 = (unsigned int)dword_180308AA8;
        v18 = 0LL;
        if ( dword_180308AA8 )
        {
          while ( *(_QWORD *)(qword_180308A90 + 12LL * (_QWORD)v18) != v56 )
          {
            v18 = (struct Windows::Foundation::Numerics::float4x4 *)(unsigned int)((_DWORD)v18 + 1);
            if ( (unsigned int)v18 >= dword_180308AA8 )
              goto LABEL_20;
          }
          v19 = *(_DWORD *)(qword_180308A90 + 12LL * (_QWORD)v18 + 8) != 0;
        }
      }
LABEL_20:
      if ( v19 != (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, struct Windows::Foundation::Numerics::float4x4 *))(**((_QWORD **)this + 13) + 144LL))(
                    *((_QWORD *)this + 13),
                    v17,
                    v18) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 13) + 136LL))(*((_QWORD *)this + 13), v19);
        CDirtyRegion::SetFullDirty(a3);
      }
    }
    v20 = *((_QWORD *)this - 7);
    if ( *(_DWORD *)(v20 + 1200) && (*(_BYTE *)(v20 + 1259) || !CDirtyRegion::IsEmpty(a3)) )
    {
      *((_BYTE *)a3 + 2881) = 1;
      *(_BYTE *)(*((_QWORD *)this - 7) + 1259LL) = 0;
      v20 = *((_QWORD *)this - 7);
    }
    if ( *(_DWORD *)(v20 + 1204) )
      *((_BYTE *)a3 + 2882) = 1;
    v21 = *((_QWORD *)this + 97);
    v59 = 0;
    if ( v21 && *(_BYTE *)(v21 + 13423) )
      v10 = (char *)this + 216;
    v59 = *((_DWORD *)v10 + 16);
    v22 = Windows::Foundation::Numerics::invert(
            (Windows::Foundation::Numerics *)v10,
            (const struct Windows::Foundation::Numerics::float4x4 *)v58,
            v18);
    LOWORD(v59) = v59 & 0xCCF;
    if ( !v22 )
      v59 = 0;
    v23 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, struct CDirtyRegion *))(**((_QWORD **)this + 13) + 256LL))(
            *((_QWORD *)this + 13),
            v58,
            a3);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7C1,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\hwndrendertarget.cpp",
        (const char *)(unsigned int)v23,
        v55);
    v24 = (const struct IRenderTarget *)*((_QWORD *)this + 13);
    if ( !*((_BYTE *)a3 + 2883) )
    {
      v4 = *((_BYTE *)a3 + 2886) == 0;
      v62 = 0uLL;
      if ( v4 )
      {
        v25 = (char *)a3 + 24;
        do
        {
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v62, v25);
          v25 = (char *)(v26 + 16);
        }
        while ( v27 != 1 );
      }
      else
      {
        for ( i = 0; i < *((_DWORD *)a3 + 319); i = v52 + 1 )
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v62, (char *)a3 + 16 * i + 1116);
      }
      v28 = 0;
      v29 = 0LL;
      while ( 1 )
      {
        v30 = *((_QWORD *)a4 + 2);
        if ( (unsigned int)v29 >= (unsigned int)((*((_QWORD *)a4 + 3) - v30) / 24) )
          goto LABEL_38;
        v32 = *(CVisual **)(v30 + 24 * v29);
        v33 = *(void (__fastcall **)(const struct IRenderTarget *, __int64 *))(*(_QWORD *)v24 + 328LL);
        v63 = *(_OWORD *)(v30 + 24 * v29 + 8);
        v31 = *(float *)&v63;
        v33(v24, &v60);
        v34 = *(float *)&v60;
        if ( v31 > *(float *)&v60 )
        {
          *(float *)&v60 = v31;
          v34 = v31;
        }
        v35 = *((float *)&v60 + 1);
        v36 = *((float *)&v60 + 1);
        if ( *((float *)&v63 + 1) > *((float *)&v60 + 1) )
        {
          HIDWORD(v60) = DWORD1(v63);
          v35 = *((float *)&v63 + 1);
          v36 = *((float *)&v63 + 1);
        }
        v37 = *(float *)&v61;
        v38 = *(float *)&v61;
        if ( *(float *)&v61 > *((float *)&v63 + 2) )
        {
          LODWORD(v61) = DWORD2(v63);
          v37 = *((float *)&v63 + 2);
          v38 = *((float *)&v63 + 2);
        }
        v39 = *((float *)&v61 + 1);
        v40 = *((float *)&v61 + 1);
        if ( *((float *)&v61 + 1) > *((float *)&v63 + 3) )
        {
          HIDWORD(v61) = HIDWORD(v63);
          v39 = *((float *)&v63 + 3);
          v40 = *((float *)&v63 + 3);
        }
        if ( v38 <= v34 || v40 <= v36 )
          break;
        if ( v38 <= v34
          || v40 <= v35
          || v34 >= *(float *)&v62
          && v35 >= *((float *)&v62 + 1)
          && *((float *)&v62 + 2) >= v37
          && *((float *)&v62 + 3) >= v39
          || !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(&v62, &v60) )
        {
          goto LABEL_55;
        }
        if ( (**((_DWORD **)v32 + 28) & 0x100000) != 0 )
        {
          WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v32);
          if ( !CWindowBackgroundTreatment::HasValidSource(WindowBackgroundTreatmentInternal, v24) )
          {
            LOBYTE(v48) = 1;
            v53 = CDirtyRegion::Add(a3, (__int64)v32, v48, (__int64)&v60);
            if ( v53 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x46u);
              goto LABEL_38;
            }
            v62 = *(_OWORD *)CDirtyRegion::GetRectBounds(a3, v64);
            CBackdropRegion::RemoveBackdropBlur(a4, v29);
            v28 = 1;
          }
LABEL_55:
          v41 = v29 + 1;
          v29 = 0LL;
          if ( !v28 )
            v29 = v41;
          v28 = 0;
        }
        else
        {
          Flink = CVisual::FindTreeData(v32, v57)[8].Flink;
          if ( Flink )
          {
            while ( (const struct IRenderTarget *)Flink[1].Flink != v24 )
            {
              Flink = Flink[5].Flink;
              if ( !Flink )
                goto LABEL_68;
            }
            for ( j = Flink[1].Blink; j != Flink[2].Flink; ++j )
            {
              if ( !LODWORD(j->Flink) && !HIDWORD(j->Flink) )
              {
                if ( j->Blink && !CCommonRegistryData::m_fDisableDrawListCaching )
                  goto LABEL_55;
                break;
              }
            }
          }
LABEL_68:
          LOBYTE(v43) = 1;
          v45 = CDirtyRegion::Add(a3, (__int64)v32, v43, (__int64)&v60);
          if ( v45 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x5Bu);
            goto LABEL_38;
          }
          v62 = *(_OWORD *)CDirtyRegion::GetRectBounds(a3, v65);
          CBackdropRegion::RemoveBackdropBlur(a4, v29);
          v29 = 0LL;
          v28 = 0;
        }
      }
      v61 = 0LL;
      v60 = 0LL;
      goto LABEL_55;
    }
  }
LABEL_38:
  *((_BYTE *)this + 89) = 0;
  *((_DWORD *)this + 124) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 472, 16LL);
}
