/*
 * XREFs of ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180078FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180078B10 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x180079814 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x180096094 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800B81EC (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ.c)
 *     memcmp_0 @ 0x1800EC53F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x1801AE814 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801B89F0 (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 */

__int64 __fastcall CDrawListEntryBatch::Render(CDrawListEntryBatch *this)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // r14d
  _DWORD *v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rbx
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  void (__fastcall ***v15)(_QWORD); // rbx
  __int64 v16; // rax
  _QWORD *v17; // r12
  _QWORD *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // r14
  void (__fastcall ***v21)(_QWORD); // rax
  void (__fastcall ***v22)(_QWORD); // rsi
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // r14d
  __int64 v26; // rsi
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // rsi
  int v30; // eax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  int v33; // ecx
  int v34; // eax
  __int64 v35; // rsi
  __int64 v36; // r15
  unsigned int v37; // ecx
  __int64 v38; // rbx
  unsigned int v39; // eax
  unsigned int v40; // edx
  __int64 v41; // rdx
  unsigned int v42; // ecx
  __int64 v43; // rsi
  __int64 v44; // r15
  unsigned int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  __int64 *v51; // rcx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rcx
  int v55; // eax
  unsigned int v56; // ecx
  _OWORD *v57; // r14
  _OWORD *v58; // r15
  __int64 v59; // rbx
  _DWORD *v60; // rdx
  unsigned int v61; // [rsp+28h] [rbp-E0h]
  void **v62; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v63; // [rsp+50h] [rbp-B8h]
  __int64 v64; // [rsp+58h] [rbp-B0h]
  __int64 v65; // [rsp+60h] [rbp-A8h]
  __int64 v66; // [rsp+68h] [rbp-A0h]
  _QWORD v67[3]; // [rsp+70h] [rbp-98h]
  int v68; // [rsp+88h] [rbp-80h]
  int v69; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned __int64 v70; // [rsp+90h] [rbp-78h]
  __int16 v71; // [rsp+98h] [rbp-70h]
  char v72; // [rsp+9Ah] [rbp-6Eh]
  __int64 v73; // [rsp+9Ch] [rbp-6Ch]
  __int128 v74; // [rsp+A4h] [rbp-64h]
  int v75; // [rsp+B4h] [rbp-54h]
  int v76; // [rsp+B8h] [rbp-50h]
  void (__fastcall ***v77)(_QWORD); // [rsp+C8h] [rbp-40h]
  __int64 v78; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v79; // [rsp+D8h] [rbp-30h] BYREF
  __int64 (__fastcall ***v80)(_QWORD, __int64); // [rsp+E0h] [rbp-28h] BYREF
  unsigned __int64 v81; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int64 v82; // [rsp+140h] [rbp+38h]
  __int64 v83; // [rsp+148h] [rbp+40h] BYREF
  __int64 v84; // [rsp+150h] [rbp+48h] BYREF

  v2 = 0LL;
  v63 = (_QWORD *)*((_QWORD *)this + 3);
  v62 = &CD3DBatchExecutionContext::`vftable';
  LOWORD(v81) = 0;
  v3 = v63[80];
  v64 = v3;
  v65 = v63[77];
  v66 = *((_QWORD *)this + 10);
  HIDWORD(v81) = -1;
  v70 = v81;
  v4 = *((_DWORD *)this + 18);
  ++dword_18033C748;
  LODWORD(v67[0]) = 0;
  *(_OWORD *)&v67[1] = 0LL;
  v68 = 24;
  v69 = 0x80000000;
  v71 = 0;
  v72 = 3;
  v73 = 0LL;
  v74 = 0uLL;
  v75 = v4;
  v76 = 0;
  if ( CCommonRegistryData::m_fEnableMegaRects )
  {
    v5 = CMegaRectCollection::ReplaceMegaRectsWithClippedRects((CDrawListEntryBatch *)((char *)this + 88));
    v7 = v5;
    if ( v5 < 0 )
    {
      v61 = 240;
LABEL_126:
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v61, 0LL);
      goto LABEL_52;
    }
    v3 = v64;
  }
  v8 = 0LL;
  if ( *((_DWORD *)this + 18) == 1 )
    v8 = (_DWORD *)((char *)this + 76);
  v9 = *((_QWORD *)this + 4);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 192LL))(v3, 4LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v64 + 344LL))(v64, v63[240]);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v64 + 288LL))(v64, v63[241], 0LL);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v64 + 152LL))(v64, *(_QWORD *)(v66 + 72), 57LL);
  v10 = v66;
  if ( v9 && (v57 = (_OWORD *)(v9 + 16)) != 0LL )
  {
    v58 = (_OWORD *)(v66 + 288);
    if ( memcmp_0(v57, (const void *)(v66 + 288), 0x50uLL) )
    {
      *(_BYTE *)(v66 + 168) = 1;
      *v58 = *v57;
      *(_OWORD *)(v10 + 304) = v57[1];
      *(_OWORD *)(v10 + 320) = v57[2];
      *(_OWORD *)(v10 + 336) = v57[3];
      *(_OWORD *)(v10 + 352) = v57[4];
    }
    v11 = 1;
    v2 = 0LL;
  }
  else
  {
    v11 = 0;
  }
  *(_BYTE *)(v10 + 368) = v11;
  v12 = *(_QWORD *)(v10 + 176) - *((_QWORD *)this + 7);
  if ( !v12 )
    v12 = *(_QWORD *)(v10 + 184) - *((_QWORD *)this + 8);
  if ( v12 )
  {
    *(_BYTE *)(v10 + 168) = 1;
    *(_OWORD *)(v10 + 176) = *(_OWORD *)((char *)this + 56);
  }
  v83 = *(_QWORD *)(v10 + 160);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v64 + 56LL))(v64, 0LL, 1LL, &v83);
  if ( v8 )
  {
    v59 = v66;
    v60 = (_DWORD *)(v66 + 400);
    if ( *v8 == *(_DWORD *)(v66 + 400) )
    {
      if ( !*(_BYTE *)(v66 + 392) )
      {
LABEL_114:
        v84 = *(_QWORD *)(v59 + 384);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v64 + 128LL))(v64, 2LL, 1LL, &v84);
        goto LABEL_13;
      }
    }
    else
    {
      *v60 = *v8;
      *(_BYTE *)(v59 + 392) = 1;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _DWORD, _DWORD))(*(_QWORD *)v63[80] + 384LL))(
      v63[80],
      *(_QWORD *)(v59 + 384),
      0LL,
      0LL,
      v60,
      0,
      0);
    *(_BYTE *)(v59 + 392) = 0;
    goto LABEL_114;
  }
LABEL_13:
  v13 = *((_QWORD *)this + 3);
  if ( !*(_QWORD *)(v13 + 184) )
  {
    v5 = CDrawListEntryBatch::RenderLoop<0>(this, &v62);
    v7 = v5;
    if ( v5 >= 0 )
      goto LABEL_51;
    v61 = 257;
    goto LABEL_126;
  }
  v14 = *(_QWORD *)(v13 + 8);
  v15 = 0LL;
  v16 = *((unsigned int *)this + 12);
  v7 = 0;
  v77 = 0LL;
  v17 = (_QWORD *)(v14 + 8 * v16);
  v18 = (_QWORD *)(v14 + 8LL * *((unsigned int *)this + 13));
  if ( v17 == v18 )
    goto LABEL_50;
  while ( 1 )
  {
    v19 = *v17;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, void ***))(*(_QWORD *)*v17 + 32LL))(*v17, &v62) )
      break;
LABEL_47:
    if ( ++v17 == v18 )
      goto LABEL_48;
  }
  v20 = v66;
  LODWORD(v67[0]) |= 0x80000000;
  if ( *(_QWORD *)(v66 + 40) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v66 + 16) + 640LL) + 120LL))(
      *(_QWORD *)(*(_QWORD *)(v66 + 16) + 640LL),
      *(_QWORD *)(v66 + 24),
      0LL);
    *(_QWORD *)(v20 + 40) = 0LL;
    *(_DWORD *)(v20 + 48) = 0;
    if ( v72 )
    {
      if ( v72 == 2 )
      {
        CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v66 + 112));
        CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v20 + 64));
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)v64 + 160LL))(
          v64,
          DWORD2(v74),
          HIDWORD(v74),
          HIDWORD(v73),
          0,
          v74);
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v64 + 104LL))(v64, DWORD1(v74), (unsigned int)v73);
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v20 + 64) + 640LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v20 + 64) + 640LL),
        *(_QWORD *)(v20 + 72),
        0LL);
      *(_QWORD *)(v20 + 88) = 0LL;
      *(_DWORD *)(v20 + 96) = 0;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v64 + 96LL))(
        v64,
        DWORD2(v74),
        HIDWORD(v73),
        0LL);
    }
    ++v76;
    *(_QWORD *)((char *)&v74 + 4) = 0LL;
    HIDWORD(v74) = 0;
  }
  v21 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 40LL))(v19);
  v77 = v21;
  v22 = v15;
  v2 = (unsigned __int64)v21;
  v15 = v21;
  if ( v21 )
    (**v21)(v21);
  if ( v22 )
    (*v22)[1](v22);
  if ( v67[1] && !(_BYTE)v71 )
  {
    v78 = *(_QWORD *)(v66 + 416);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v64 + 56LL))(v64, 2LL, 1LL, &v78);
    v79 = *(_QWORD *)(v66 + 704);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v64 + 128LL))(v64, 1LL, 1LL, &v79);
    LOBYTE(v71) = 1;
  }
  v23 = (*(__int64 (__fastcall **)(unsigned __int64, void ***, int *))(*(_QWORD *)v2 + 40LL))(v2, &v62, &v69);
  v25 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x1BEu, 0LL);
  }
  else
  {
    v26 = v66;
    if ( *(_BYTE *)(v66 + 168) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(*(_QWORD *)v63[80] + 384LL))(
        v63[80],
        *(_QWORD *)(v66 + 160),
        0LL,
        0LL,
        v66 + 176,
        0,
        0);
      *(_BYTE *)(v26 + 168) = 0;
    }
    LODWORD(v14) = v69;
    if ( v69 >= 0 )
    {
      v81 = (v69 & 4) != 0;
      BYTE1(v81) = (v69 & 8) != 0;
      BYTE2(v81) = (v69 & 2) != 0;
      HIDWORD(v81) = (v69 & 1) != 0 ? 4 : 2;
      BYTE3(v81) = (v69 & 0x10) != 0;
      LOBYTE(v82) = (v69 & 4) != 0;
      v14 = HIDWORD(v81);
      HIDWORD(v82) = HIDWORD(v81);
      BYTE1(v82) = BYTE3(v81);
      if ( HIDWORD(v81) != HIDWORD(v70) || ((v69 & 4) != 0) != (_BYTE)v70 || BYTE3(v81) != BYTE1(v70) )
      {
        v27 = 156LL;
        if ( BYTE3(v81) )
          v27 = 160LL;
        if ( HIDWORD(v81) == 2 )
        {
          v28 = 0LL;
          if ( (v69 & 4) != 0 )
            v28 = 2LL;
        }
        else if ( HIDWORD(v81) == 4 )
        {
          if ( (v69 & 4) != 0 )
            v28 = 3LL;
          else
            v28 = 1LL;
        }
        else
        {
          v28 = 4LL;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v64 + 136LL))(v64, v63[v27 + v28]);
        v70 = v82;
        HIBYTE(v71) = 1;
      }
    }
  }
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v25, 0x138u, 0LL);
    v2 = 0LL;
  }
  v7 = 0;
  if ( v2 )
  {
    v29 = v67[2];
    if ( v67[2] )
    {
      v2 = 0LL;
      if ( *(_DWORD *)(v67[2] + 40LL) )
      {
        while ( 1 )
        {
          v52 = (*(__int64 (__fastcall **)(_QWORD, void ***, _QWORD))(**(_QWORD **)(v29 + 24) + 48LL))(
                  *(_QWORD *)(v29 + 24),
                  &v62,
                  v17[v2 + 1]);
          v7 = v52;
          if ( v52 < 0 )
            break;
          v2 = (unsigned int)(v2 + 1);
          if ( (unsigned int)v2 >= *(_DWORD *)(v29 + 40) )
          {
            v2 = 0LL;
            goto LABEL_93;
          }
        }
        v2 = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v52, 0x4Fu, 0LL);
      }
LABEL_93:
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v7, 0x1E9u, 0LL);
    }
    else
    {
      v30 = (*(__int64 (__fastcall **)(unsigned __int64, void ***, _QWORD))(*(_QWORD *)v2 + 48LL))(v2, &v62, *v17);
      v2 = 0LL;
      v7 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v30, 0x1EEu, 0LL);
    }
  }
  if ( v67[2] )
  {
    v53 = *(unsigned int *)(v67[2] + 40LL);
    ++dword_18033C750;
    dword_18033C754 += v53;
    v67[2] = v2;
    v17 += v53;
  }
  if ( v7 >= 0 )
  {
    LODWORD(v67[0]) = v2;
    goto LABEL_47;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v7, 0x168u, (void *)v2);
LABEL_48:
  if ( v15 )
    (*v15)[1](v15);
LABEL_50:
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v7, 0xFDu, (void *)v2);
  else
LABEL_51:
    CD3DBatchExecutionContext::Flush(&v62, 0x2000LL);
LABEL_52:
  if ( v76 )
    dword_18033C860 += v76;
  v31 = (_QWORD *)v66;
  if ( *(_QWORD *)(v66 + 40) )
  {
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v66 + 16));
    v31 = (_QWORD *)v66;
  }
  if ( v31[11] )
  {
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v31 + 8));
    v31 = (_QWORD *)v66;
  }
  if ( v31[17] )
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v31 + 14));
  v32 = *((_QWORD *)this + 4);
  if ( v32 )
  {
    *((_QWORD *)this + 4) = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
  }
  v33 = *((_DWORD *)this + 12);
  v34 = *((_DWORD *)this + 13);
  if ( v33 != v34 )
    dword_18033C74C += v34 - v33;
  dword_18033C86C += *((_DWORD *)this + 30);
  v35 = *((_QWORD *)this + 14);
  v36 = v35 + *((_QWORD *)this + 15);
  while ( v35 != v36 )
  {
    v51 = *(__int64 **)(*((_QWORD *)this + 12) + 8 * (v35 & (*((_QWORD *)this + 13) - 1LL)));
    if ( v51[4] )
    {
      CHWDrawListEntry::ReplacePrimitive(*v51, &v80, v51 + 4, (__int64)(v51 + 5));
      if ( v80 )
        std::default_delete<CShape>::operator()(v54, v80);
    }
    ++v35;
  }
  std::deque<CMegaRect>::_Tidy((char *)this + 88);
  v38 = *((_QWORD *)this + 3);
  v81 = (unsigned __int64)this;
  v39 = *(_DWORD *)(v38 + 152);
  v40 = v39 + 1;
  if ( v39 + 1 < v39 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0xB8u, 0LL);
  }
  else
  {
    if ( v40 <= *(_DWORD *)(v38 + 148) )
    {
      *(_QWORD *)(*(_QWORD *)(v38 + 128) + 8LL * v39) = v81;
      *(_DWORD *)(v38 + 152) = v40;
      goto LABEL_69;
    }
    v55 = DynArrayImpl<0>::AddMultipleAndSet(v38 + 128, 8LL, 1LL, &v81);
    if ( v55 >= 0 )
LABEL_69:
      _InterlockedIncrement((volatile signed __int32 *)(v81 + 16));
    else
      MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0xC3u, 0LL);
  }
  v41 = *((unsigned int *)this + 12);
  v42 = *((_DWORD *)this + 13);
  if ( (unsigned int)v41 < v42 )
  {
    v43 = 8 * v41;
    v44 = v42 - (unsigned int)v41;
    do
    {
      (*(void (__fastcall **)(_QWORD, CDrawListEntryBatch *))(**(_QWORD **)(v43 + *(_QWORD *)(v38 + 8)) + 48LL))(
        *(_QWORD *)(v43 + *(_QWORD *)(v38 + 8)),
        this);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v43 + *(_QWORD *)(v38 + 8)) + 8LL))(*(_QWORD *)(v43 + *(_QWORD *)(v38 + 8)));
      v43 += 8LL;
      --v44;
    }
    while ( v44 );
  }
  if ( (*(_DWORD *)(v38 + 192))-- == 1 )
  {
    v46 = *(_DWORD *)(v38 + 44);
    if ( v46 <= *(_DWORD *)(v38 + 32) - *(_DWORD *)(v38 + 40) )
      v46 = *(_DWORD *)(v38 + 32) - *(_DWORD *)(v38 + 40);
    *(_DWORD *)(v38 + 44) = v46;
    v47 = *(_DWORD *)(v38 + 84);
    if ( v47 <= *(_DWORD *)(v38 + 72) - *(_DWORD *)(v38 + 80) )
      v47 = *(_DWORD *)(v38 + 72) - *(_DWORD *)(v38 + 80);
    *(_DWORD *)(v38 + 84) = v47;
    v48 = *(_DWORD *)(v38 + 124);
    if ( v48 <= *(_DWORD *)(v38 + 112) - *(_DWORD *)(v38 + 120) )
      v48 = *(_DWORD *)(v38 + 112) - *(_DWORD *)(v38 + 120);
    *(_DWORD *)(v38 + 124) = v48;
    v49 = *(_DWORD *)(v38 + 164);
    if ( v49 <= *(_DWORD *)(v38 + 152) - *(_DWORD *)(v38 + 160) )
      v49 = *(_DWORD *)(v38 + 152) - *(_DWORD *)(v38 + 160);
    *(_DWORD *)(v38 + 164) = v49;
    *(_DWORD *)(v38 + 32) = 0;
    *(_DWORD *)(v38 + 40) = 0;
  }
  *((_QWORD *)this + 6) = -1LL;
  return (unsigned int)v7;
}
