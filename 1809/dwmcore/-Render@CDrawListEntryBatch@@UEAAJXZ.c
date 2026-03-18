/*
 * XREFs of ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800C99A0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800220CC (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x1800CBF94 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 *     ?StartExecution@CD3DBatchExecutionContext@@QEAAXAEBUWorldToClipSpace@@PEBVClipPlaneInfoRef@@PEBM@Z @ 0x1800CC648 (-StartExecution@CD3DBatchExecutionContext@@QEAAXAEBUWorldToClipSpace@@PEBVClipPlaneInfoRef@@PEBM.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801899E8 (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x180189B28 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 */

__int64 __fastcall CDrawListEntryBatch::Render(CDrawListEntryBatch *this)
{
  __int64 v1; // rdx
  __int64 v3; // r14
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r15d
  const float *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rcx
  void (__fastcall ***v11)(_QWORD); // rbx
  __int64 v12; // rax
  _QWORD *v13; // r12
  _QWORD *v14; // r13
  __int64 v15; // rdi
  __int64 v16; // r14
  void (__fastcall ***v17)(_QWORD); // r14
  void (__fastcall ***v18)(_QWORD); // rax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // r14d
  __int64 v22; // rdi
  __int64 v23; // rcx
  char v24; // dl
  __int64 v25; // r14
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rcx
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rdi
  unsigned int v35; // eax
  unsigned int v36; // edx
  __int64 v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // rbx
  __int64 v40; // r14
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  __int64 v47; // r8
  __int64 v48; // rdi
  int v49; // eax
  __int64 v50; // rax
  __int64 *v51; // rdx
  __int64 *v52; // r8
  __int64 v53; // rcx
  __int64 *v54; // rcx
  __int64 (__fastcall ***v55)(_QWORD, __int64); // r12
  __int64 v56; // rax
  __int64 (__fastcall ***v57)(_QWORD, __int64); // rdx
  int v58; // eax
  __int64 v59; // rcx
  unsigned int v60; // [rsp+28h] [rbp-89h]
  void **v61; // [rsp+48h] [rbp-69h] BYREF
  __int64 v62; // [rsp+50h] [rbp-61h]
  __int64 v63; // [rsp+58h] [rbp-59h]
  __int64 v64; // [rsp+60h] [rbp-51h]
  __int64 v65; // [rsp+68h] [rbp-49h]
  int v66; // [rsp+70h] [rbp-41h]
  __int128 v67; // [rsp+78h] [rbp-39h]
  int v68; // [rsp+88h] [rbp-29h]
  unsigned int v69; // [rsp+8Ch] [rbp-25h] BYREF
  __int64 v70; // [rsp+90h] [rbp-21h]
  __int16 v71; // [rsp+98h] [rbp-19h]
  __int64 v72; // [rsp+9Ch] [rbp-15h]
  __int64 v73; // [rsp+A4h] [rbp-Dh]
  int v74; // [rsp+ACh] [rbp-5h]
  int v75; // [rsp+B0h] [rbp-1h]
  __int64 v76; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v77; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v78; // [rsp+118h] [rbp+67h]
  int v79; // [rsp+11Ch] [rbp+6Bh]
  CDrawListEntryBatch *v80; // [rsp+120h] [rbp+6Fh] BYREF
  __int64 v81; // [rsp+128h] [rbp+77h]
  void (__fastcall ***v82)(_QWORD); // [rsp+130h] [rbp+7Fh]

  v1 = *((_QWORD *)this + 3);
  v3 = 0LL;
  v61 = &CD3DBatchExecutionContext::`vftable';
  v62 = v1;
  v63 = *(_QWORD *)(v1 + 640);
  v64 = *(_QWORD *)(v1 + 616);
  v65 = *((_QWORD *)this + 10);
  LOBYTE(v78) = 0;
  HIDWORD(v78) = -1;
  v70 = v78;
  v4 = *((_DWORD *)this + 18);
  ++dword_180308068;
  v66 = 0;
  v67 = 0LL;
  v68 = 24;
  v69 = 8;
  v71 = 0;
  v72 = 0LL;
  v73 = 0LL;
  v74 = v4;
  v75 = 0;
  if ( CCommonRegistryData::m_fEnableMegaRects )
  {
    v5 = CMegaRectCollection::ReplaceMegaRectsWithClippedRects((CDrawListEntryBatch *)((char *)this + 88));
    v7 = v5;
    if ( v5 < 0 )
    {
      v60 = 238;
LABEL_105:
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v60);
      goto LABEL_40;
    }
  }
  v8 = 0LL;
  if ( *((_DWORD *)this + 18) == 1 )
    v8 = (const float *)((char *)this + 76);
  CD3DBatchExecutionContext::StartExecution(
    (CD3DBatchExecutionContext *)&v61,
    (CDrawListEntryBatch *)((char *)this + 56),
    *((const struct ClipPlaneInfoRef **)this + 4),
    v8);
  v9 = *((_QWORD *)this + 3);
  if ( !*(_QWORD *)(v9 + 184) )
  {
    v5 = CDrawListEntryBatch::RenderLoop<0>(this, &v61);
    v7 = v5;
    if ( v5 >= 0 )
      goto LABEL_38;
    v60 = 255;
    goto LABEL_105;
  }
  v10 = *(_QWORD *)(v9 + 8);
  v11 = 0LL;
  v12 = *((unsigned int *)this + 12);
  v7 = 0;
  v82 = 0LL;
  v13 = (_QWORD *)(v10 + 8 * v12);
  v14 = (_QWORD *)(v10 + 8LL * *((unsigned int *)this + 13));
  if ( v13 == v14 )
    goto LABEL_37;
  while ( 1 )
  {
    v15 = *v13;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, void ***))(*(_QWORD *)*v13 + 32LL))(*v13, &v61) )
      break;
LABEL_34:
    if ( ++v13 == v14 )
      goto LABEL_35;
  }
  v16 = v65;
  v66 |= 0x80000000;
  if ( *(_QWORD *)(v65 + 40) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v65 + 16) + 640LL) + 120LL))(
      *(_QWORD *)(*(_QWORD *)(v65 + 16) + 640LL),
      *(_QWORD *)(v65 + 24),
      0LL);
    v7 = 0;
    *(_QWORD *)(v16 + 40) = 0LL;
    *(_DWORD *)(v16 + 48) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v16 + 64) + 640LL) + 120LL))(
      *(_QWORD *)(*(_QWORD *)(v16 + 64) + 640LL),
      *(_QWORD *)(v16 + 72),
      0LL);
    *(_QWORD *)(v16 + 88) = 0LL;
    *(_DWORD *)(v16 + 96) = 0;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v63 + 96LL))(
      v63,
      HIDWORD(v73),
      HIDWORD(v72),
      0LL);
    ++v75;
    v73 = 0LL;
  }
  else
  {
    v7 = 0;
  }
  v17 = v11;
  v18 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 40LL))(v15);
  v82 = v18;
  v11 = v18;
  if ( v18 )
    (**v18)(v18);
  if ( v17 )
    (*v17)[1](v17);
  if ( (_QWORD)v67 && !(_BYTE)v71 )
  {
    v76 = *(_QWORD *)(v65 + 304);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v63 + 56LL))(v63, 2LL, 1LL, &v76);
    v77 = *(_QWORD *)(v65 + 592);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v63 + 128LL))(v63, 1LL, 1LL, &v77);
    LOBYTE(v71) = 1;
  }
  v19 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD), void ***, unsigned int *))(*v11)[5])(v11, &v61, &v69);
  v21 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x120u);
  }
  else
  {
    v22 = v65;
    if ( *(_BYTE *)(v65 + 120) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(v62 + 640) + 384LL))(
        *(_QWORD *)(v62 + 640),
        *(_QWORD *)(v65 + 112),
        0LL,
        0LL,
        v65 + 128,
        0,
        0);
      *(_BYTE *)(v22 + 120) = 0;
    }
    v23 = v69;
    if ( v69 != 8 )
    {
      v24 = v69 - 3 <= 2;
      if ( v69 == 2 || v69 == 5 )
      {
        v79 = 4;
        v23 = 2LL;
      }
      else
      {
        v23 = 2LL;
        v79 = 2;
      }
      HIDWORD(v81) = v79;
      LOBYTE(v81) = v24;
      if ( v79 != HIDWORD(v70) || v24 != (_BYTE)v70 )
      {
        if ( v79 == 2 )
        {
          v47 = 0LL;
          if ( v24 )
            v47 = 2LL;
        }
        else if ( v79 == 4 )
        {
          if ( v24 )
            v47 = 3LL;
          else
            v47 = 1LL;
        }
        else
        {
          v47 = 4LL;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v63 + 136LL))(v63, *(_QWORD *)(v62 + 8 * v47 + 1152));
        v70 = v81;
        HIBYTE(v71) = 1;
      }
    }
  }
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v21, 0x136u);
    v10 = 0LL;
  }
  else
  {
    v10 = (__int64)v11;
  }
  if ( v10 )
  {
    v25 = *((_QWORD *)&v67 + 1);
    if ( *((_QWORD *)&v67 + 1) )
    {
      v7 = 0;
      v48 = 0LL;
      if ( *(_DWORD *)(*((_QWORD *)&v67 + 1) + 36LL) )
      {
        while ( 1 )
        {
          v49 = (*(__int64 (__fastcall **)(_QWORD, void ***, _QWORD))(**(_QWORD **)(v25 + 24) + 48LL))(
                  *(_QWORD *)(v25 + 24),
                  &v61,
                  v13[v48 + 1]);
          v7 = v49;
          if ( v49 < 0 )
            break;
          v48 = (unsigned int)(v48 + 1);
          if ( (unsigned int)v48 >= *(_DWORD *)(v25 + 36) )
            goto LABEL_78;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v49, 0x4Au);
      }
LABEL_78:
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v7, 0x14Au);
    }
    else
    {
      v26 = (*(__int64 (__fastcall **)(__int64, void ***, _QWORD))(*(_QWORD *)v10 + 48LL))(v10, &v61, *v13);
      v7 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v26, 0x14Fu);
    }
  }
  v3 = *((_QWORD *)&v67 + 1);
  if ( *((_QWORD *)&v67 + 1) )
  {
    v50 = *(unsigned int *)(*((_QWORD *)&v67 + 1) + 36LL);
    dword_180308074 += v50;
    ++dword_180308070;
    v3 = 0LL;
    *((_QWORD *)&v67 + 1) = 0LL;
    v13 += v50;
  }
  if ( v7 >= 0 )
  {
    v66 = v3;
    goto LABEL_34;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v7, 0x166u);
LABEL_35:
  if ( v11 )
    (*v11)[1](v11);
LABEL_37:
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v7, 0xFBu);
  }
  else
  {
LABEL_38:
    v27 = v65;
    v66 |= 0x200u;
    if ( *(_QWORD *)(v65 + 40) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v65 + 16) + 640LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v65 + 16) + 640LL),
        *(_QWORD *)(v65 + 24),
        0LL);
      *(_QWORD *)(v27 + 40) = v3;
      *(_DWORD *)(v27 + 48) = v3;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v27 + 64) + 640LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v27 + 64) + 640LL),
        *(_QWORD *)(v27 + 72),
        0LL);
      *(_QWORD *)(v27 + 88) = v3;
      *(_DWORD *)(v27 + 96) = v3;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v63 + 96LL))(
        v63,
        HIDWORD(v73),
        HIDWORD(v72),
        0LL);
      ++v75;
      v73 = 0LL;
    }
  }
LABEL_40:
  if ( v75 )
    dword_180308180 += v75;
  if ( *(_QWORD *)(v65 + 40) )
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v65 + 16));
  if ( *(_QWORD *)(v65 + 88) )
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v65 + 64));
  v28 = *((_QWORD *)this + 4);
  if ( v28 )
  {
    *((_QWORD *)this + 4) = v3;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
  }
  v29 = *((_DWORD *)this + 12);
  v30 = *((_DWORD *)this + 13);
  if ( v29 != v30 )
    dword_18030806C += v30 - v29;
  dword_18030818C += *((_DWORD *)this + 30);
  v31 = *((_QWORD *)this + 14);
  v32 = v31 + *((_QWORD *)this + 15);
  while ( v31 != v32 )
  {
    v51 = *(__int64 **)(*((_QWORD *)this + 12) + 8 * (v31 & (*((_QWORD *)this + 13) - 1LL)));
    v52 = v51 + 4;
    if ( v51[4] )
    {
      v53 = *v51;
      *(_OWORD *)(v53 + 56) = *(_OWORD *)(v51 + 5);
      *(_OWORD *)(v53 + 72) = *(_OWORD *)(v51 + 7);
      *(_OWORD *)(v53 + 88) = *(_OWORD *)(v51 + 9);
      *(_OWORD *)(v53 + 104) = *(_OWORD *)(v51 + 11);
      *(_DWORD *)(v53 + 120) = *((_DWORD *)v51 + 26);
      v54 = (__int64 *)(v53 + 136);
      v55 = (__int64 (__fastcall ***)(_QWORD, __int64))*v54;
      *v54 = 0LL;
      if ( v54 != v52 )
      {
        v56 = *v52;
        *v52 = 0LL;
        v57 = (__int64 (__fastcall ***)(_QWORD, __int64))*v54;
        *v54 = v56;
        if ( v57 )
          std::default_delete<CShape>::operator()((__int64)v54, v57);
      }
      if ( v55 )
        (**v55)(v55, 1LL);
    }
    ++v31;
  }
  std::deque<CMegaRect>::_Tidy((_QWORD *)this + 11);
  v34 = *((_QWORD *)this + 3);
  v80 = this;
  v35 = *(_DWORD *)(v34 + 152);
  v36 = v35 + 1;
  if ( v35 + 1 < v35 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    if ( v36 <= *(_DWORD *)(v34 + 148) )
    {
      *(_QWORD *)(*(_QWORD *)(v34 + 128) + 8LL * v35) = v80;
      *(_DWORD *)(v34 + 152) = v36;
      goto LABEL_55;
    }
    v58 = DynArrayImpl<0>::AddMultipleAndSet(v34 + 128, 8, 1, &v80);
    if ( v58 >= 0 )
LABEL_55:
      _InterlockedIncrement((volatile signed __int32 *)v80 + 4);
    else
      MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0xC0u);
  }
  v37 = *((unsigned int *)this + 12);
  v38 = *((_DWORD *)this + 13);
  if ( (unsigned int)v37 < v38 )
  {
    v39 = 8 * v37;
    v40 = v38 - (unsigned int)v37;
    do
    {
      (*(void (__fastcall **)(_QWORD, CDrawListEntryBatch *))(**(_QWORD **)(v39 + *(_QWORD *)(v34 + 8)) + 48LL))(
        *(_QWORD *)(v39 + *(_QWORD *)(v34 + 8)),
        this);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v39 + *(_QWORD *)(v34 + 8)) + 8LL))(*(_QWORD *)(v39 + *(_QWORD *)(v34 + 8)));
      v39 += 8LL;
      --v40;
    }
    while ( v40 );
  }
  if ( (*(_DWORD *)(v34 + 192))-- == 1 )
  {
    v42 = *(_DWORD *)(v34 + 44);
    if ( v42 <= *(_DWORD *)(v34 + 32) - *(_DWORD *)(v34 + 40) )
      v42 = *(_DWORD *)(v34 + 32) - *(_DWORD *)(v34 + 40);
    *(_DWORD *)(v34 + 44) = v42;
    v43 = *(_DWORD *)(v34 + 84);
    if ( v43 <= *(_DWORD *)(v34 + 72) - *(_DWORD *)(v34 + 80) )
      v43 = *(_DWORD *)(v34 + 72) - *(_DWORD *)(v34 + 80);
    *(_DWORD *)(v34 + 84) = v43;
    v44 = *(_DWORD *)(v34 + 124);
    if ( v44 <= *(_DWORD *)(v34 + 112) - *(_DWORD *)(v34 + 120) )
      v44 = *(_DWORD *)(v34 + 112) - *(_DWORD *)(v34 + 120);
    *(_DWORD *)(v34 + 124) = v44;
    v45 = *(_DWORD *)(v34 + 164);
    if ( v45 <= *(_DWORD *)(v34 + 152) - *(_DWORD *)(v34 + 160) )
      v45 = *(_DWORD *)(v34 + 152) - *(_DWORD *)(v34 + 160);
    *(_DWORD *)(v34 + 164) = v45;
    *(_DWORD *)(v34 + 32) = 0;
    *(_DWORD *)(v34 + 40) = 0;
  }
  *((_QWORD *)this + 6) = -1LL;
  return (unsigned int)v7;
}
