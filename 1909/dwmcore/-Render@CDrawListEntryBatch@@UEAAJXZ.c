/*
 * XREFs of ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800981F0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000ED24 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x18003E7F0 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x180099674 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x180099FC0 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800BB028 (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ.c)
 *     memcmp_0 @ 0x1800F01FF (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x1801ACF54 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801B7150 (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 */

__int64 __fastcall CDrawListEntryBatch::Render(CDrawListEntryBatch *this)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rcx
  int v4; // eax
  signed int v5; // eax
  __int64 v6; // rcx
  signed int v7; // r14d
  _DWORD *v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rbx
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  void (__fastcall ***v15)(_QWORD); // rbx
  __int64 v16; // rax
  _QWORD *v17; // r12
  _QWORD *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // r14
  void (__fastcall ***v21)(_QWORD); // rax
  void (__fastcall ***v22)(_QWORD); // rsi
  signed int v23; // eax
  __int64 v24; // rcx
  signed int v25; // r14d
  __int64 v26; // rsi
  unsigned __int8 v27; // dl
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // rsi
  signed int v31; // eax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  int v34; // ecx
  int v35; // eax
  __int64 v36; // rsi
  __int64 v37; // r15
  __int64 v38; // rcx
  __int64 v39; // rbx
  unsigned int v40; // eax
  unsigned int v41; // edx
  __int64 v42; // rdx
  unsigned int v43; // ecx
  __int64 v44; // rsi
  __int64 v45; // r15
  unsigned int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  __int64 *v52; // rcx
  signed int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rcx
  signed int v56; // eax
  __int64 v57; // rcx
  _OWORD *v58; // r14
  _OWORD *v59; // r15
  __int64 v60; // rbx
  _DWORD *v61; // rdx
  unsigned int v62; // [rsp+28h] [rbp-E0h]
  void **v63; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v64; // [rsp+50h] [rbp-B8h]
  __int64 v65; // [rsp+58h] [rbp-B0h]
  __int64 v66; // [rsp+60h] [rbp-A8h]
  __int64 v67; // [rsp+68h] [rbp-A0h]
  _QWORD v68[3]; // [rsp+70h] [rbp-98h]
  int v69; // [rsp+88h] [rbp-80h]
  int v70; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned __int64 v71; // [rsp+90h] [rbp-78h]
  __int16 v72; // [rsp+98h] [rbp-70h]
  char v73; // [rsp+9Ah] [rbp-6Eh]
  __int64 v74; // [rsp+9Ch] [rbp-6Ch]
  __int128 v75; // [rsp+A4h] [rbp-64h]
  int v76; // [rsp+B4h] [rbp-54h]
  int v77; // [rsp+B8h] [rbp-50h]
  void (__fastcall ***v78)(_QWORD); // [rsp+C8h] [rbp-40h]
  __int64 v79; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v80; // [rsp+D8h] [rbp-30h] BYREF
  __int64 (__fastcall ***v81)(_QWORD, __int64); // [rsp+E0h] [rbp-28h] BYREF
  unsigned __int64 v82; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int64 v83; // [rsp+140h] [rbp+38h]
  __int64 v84; // [rsp+148h] [rbp+40h] BYREF
  __int64 v85; // [rsp+150h] [rbp+48h] BYREF

  v2 = 0LL;
  v64 = (_QWORD *)*((_QWORD *)this + 3);
  v63 = &CD3DBatchExecutionContext::`vftable';
  LOWORD(v82) = 0;
  v3 = v64[80];
  v65 = v3;
  v66 = v64[77];
  v67 = *((_QWORD *)this + 10);
  HIDWORD(v82) = -1;
  v71 = v82;
  v4 = *((_DWORD *)this + 18);
  ++dword_180339838;
  LODWORD(v68[0]) = 0;
  *(_OWORD *)&v68[1] = 0LL;
  v69 = 24;
  v70 = 0x80000000;
  v72 = 0;
  v73 = 3;
  v74 = 0LL;
  v75 = 0uLL;
  v76 = v4;
  v77 = 0;
  if ( CCommonRegistryData::m_fEnableMegaRects )
  {
    v5 = CMegaRectCollection::ReplaceMegaRectsWithClippedRects((CDrawListEntryBatch *)((char *)this + 88));
    v7 = v5;
    if ( v5 < 0 )
    {
      v62 = 240;
LABEL_126:
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v62, 0LL);
      goto LABEL_52;
    }
    v3 = v65;
  }
  v8 = 0LL;
  if ( *((_DWORD *)this + 18) == 1 )
    v8 = (_DWORD *)((char *)this + 76);
  v9 = *((_QWORD *)this + 4);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 192LL))(v3, 4LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v65 + 344LL))(v65, v64[240]);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v65 + 288LL))(v65, v64[241], 0LL);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v65 + 152LL))(v65, *(_QWORD *)(v67 + 72), 57LL);
  v10 = v67;
  if ( v9 && (v58 = (_OWORD *)(v9 + 16)) != 0LL )
  {
    v59 = (_OWORD *)(v67 + 288);
    if ( memcmp_0(v58, (const void *)(v67 + 288), 0x50uLL) )
    {
      *(_BYTE *)(v67 + 168) = 1;
      *v59 = *v58;
      *(_OWORD *)(v10 + 304) = v58[1];
      *(_OWORD *)(v10 + 320) = v58[2];
      *(_OWORD *)(v10 + 336) = v58[3];
      *(_OWORD *)(v10 + 352) = v58[4];
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
  v84 = *(_QWORD *)(v10 + 160);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v65 + 56LL))(v65, 0LL, 1LL, &v84);
  if ( v8 )
  {
    v60 = v67;
    v61 = (_DWORD *)(v67 + 400);
    if ( *v8 == *(_DWORD *)(v67 + 400) )
    {
      if ( !*(_BYTE *)(v67 + 392) )
      {
LABEL_114:
        v85 = *(_QWORD *)(v60 + 384);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v65 + 128LL))(v65, 2LL, 1LL, &v85);
        goto LABEL_13;
      }
    }
    else
    {
      *v61 = *v8;
      *(_BYTE *)(v60 + 392) = 1;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _DWORD, _DWORD))(*(_QWORD *)v64[80] + 384LL))(
      v64[80],
      *(_QWORD *)(v60 + 384),
      0LL,
      0LL,
      v61,
      0,
      0);
    *(_BYTE *)(v60 + 392) = 0;
    goto LABEL_114;
  }
LABEL_13:
  v13 = *((_QWORD *)this + 3);
  if ( !*(_QWORD *)(v13 + 184) )
  {
    v5 = CDrawListEntryBatch::RenderLoop<0>(this, &v63);
    v7 = v5;
    if ( v5 >= 0 )
      goto LABEL_51;
    v62 = 257;
    goto LABEL_126;
  }
  v14 = *(_QWORD *)(v13 + 8);
  v15 = 0LL;
  v16 = *((unsigned int *)this + 12);
  v7 = 0;
  v78 = 0LL;
  v17 = (_QWORD *)(v14 + 8 * v16);
  v18 = (_QWORD *)(v14 + 8LL * *((unsigned int *)this + 13));
  if ( v17 == v18 )
    goto LABEL_50;
  while ( 1 )
  {
    v19 = *v17;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, void ***))(*(_QWORD *)*v17 + 32LL))(*v17, &v63) )
      break;
LABEL_47:
    if ( ++v17 == v18 )
      goto LABEL_48;
  }
  v20 = v67;
  LODWORD(v68[0]) |= 0x80000000;
  if ( *(_QWORD *)(v67 + 40) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v67 + 16) + 640LL) + 120LL))(
      *(_QWORD *)(*(_QWORD *)(v67 + 16) + 640LL),
      *(_QWORD *)(v67 + 24),
      0LL);
    *(_QWORD *)(v20 + 40) = 0LL;
    *(_DWORD *)(v20 + 48) = 0;
    if ( v73 )
    {
      if ( v73 == 2 )
      {
        CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v67 + 112));
        CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v20 + 64));
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)v65 + 160LL))(
          v65,
          DWORD2(v75),
          HIDWORD(v75),
          HIDWORD(v74),
          0,
          v75);
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v65 + 104LL))(v65, DWORD1(v75), (unsigned int)v74);
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
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v65 + 96LL))(
        v65,
        DWORD2(v75),
        HIDWORD(v74),
        0LL);
    }
    ++v77;
    *(_QWORD *)((char *)&v75 + 4) = 0LL;
    HIDWORD(v75) = 0;
  }
  v21 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 40LL))(v19);
  v78 = v21;
  v22 = v15;
  v2 = (unsigned __int64)v21;
  v15 = v21;
  if ( v21 )
    (**v21)(v21);
  if ( v22 )
    (*v22)[1](v22);
  if ( v68[1] && !(_BYTE)v72 )
  {
    v79 = *(_QWORD *)(v67 + 416);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v65 + 56LL))(v65, 2LL, 1LL, &v79);
    v80 = *(_QWORD *)(v67 + 704);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v65 + 128LL))(v65, 1LL, 1LL, &v80);
    LOBYTE(v72) = 1;
  }
  v23 = (*(__int64 (__fastcall **)(unsigned __int64, void ***, int *))(*(_QWORD *)v2 + 40LL))(v2, &v63, &v70);
  v25 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x1BEu, 0LL);
  }
  else
  {
    v26 = v67;
    if ( *(_BYTE *)(v67 + 168) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(*(_QWORD *)v64[80] + 384LL))(
        v64[80],
        *(_QWORD *)(v67 + 160),
        0LL,
        0LL,
        v67 + 176,
        0,
        0);
      *(_BYTE *)(v26 + 168) = 0;
    }
    v14 = (unsigned int)v70;
    if ( v70 >= 0 )
    {
      v27 = (v70 & 4) != 0;
      v82 = v27;
      BYTE1(v82) = (v70 & 8) != 0;
      BYTE2(v82) = (v70 & 2) != 0;
      HIDWORD(v82) = (v70 & 1) != 0 ? 4 : 2;
      BYTE3(v82) = (v70 & 0x10) != 0;
      LOBYTE(v83) = (v70 & 4) != 0;
      v14 = HIDWORD(v82);
      HIDWORD(v83) = HIDWORD(v82);
      BYTE1(v83) = BYTE3(v82);
      if ( HIDWORD(v82) != HIDWORD(v71) || v27 != (_BYTE)v71 || BYTE3(v82) != BYTE1(v71) )
      {
        v28 = 156LL;
        if ( BYTE3(v82) )
          v28 = 160LL;
        if ( HIDWORD(v82) == 2 )
        {
          v29 = 0LL;
          if ( v27 )
            v29 = 2LL;
        }
        else if ( HIDWORD(v82) == 4 )
        {
          if ( v27 )
            v29 = 3LL;
          else
            v29 = 1LL;
        }
        else
        {
          v29 = 4LL;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v65 + 136LL))(v65, v64[v28 + v29]);
        v71 = v83;
        HIBYTE(v72) = 1;
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
    v30 = v68[2];
    if ( v68[2] )
    {
      v2 = 0LL;
      if ( *(_DWORD *)(v68[2] + 40LL) )
      {
        while ( 1 )
        {
          v53 = (*(__int64 (__fastcall **)(_QWORD, void ***, _QWORD))(**(_QWORD **)(v30 + 24) + 48LL))(
                  *(_QWORD *)(v30 + 24),
                  &v63,
                  v17[v2 + 1]);
          v7 = v53;
          if ( v53 < 0 )
            break;
          v2 = (unsigned int)(v2 + 1);
          if ( (unsigned int)v2 >= *(_DWORD *)(v30 + 40) )
          {
            v2 = 0LL;
            goto LABEL_93;
          }
        }
        v2 = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v53, 0x4Fu, 0LL);
      }
LABEL_93:
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v7, 0x1E9u, 0LL);
    }
    else
    {
      v31 = (*(__int64 (__fastcall **)(unsigned __int64, void ***, _QWORD))(*(_QWORD *)v2 + 48LL))(v2, &v63, *v17);
      v2 = 0LL;
      v7 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v31, 0x1EEu, 0LL);
    }
  }
  if ( v68[2] )
  {
    v54 = *(unsigned int *)(v68[2] + 40LL);
    ++dword_180339840;
    dword_180339844 += v54;
    v68[2] = v2;
    v17 += v54;
  }
  if ( v7 >= 0 )
  {
    LODWORD(v68[0]) = v2;
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
    CD3DBatchExecutionContext::Flush(&v63, 0x2000LL);
LABEL_52:
  if ( v77 )
    dword_180339950 += v77;
  v32 = (_QWORD *)v67;
  if ( *(_QWORD *)(v67 + 40) )
  {
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v67 + 16));
    v32 = (_QWORD *)v67;
  }
  if ( v32[11] )
  {
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v32 + 8));
    v32 = (_QWORD *)v67;
  }
  if ( v32[17] )
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v32 + 14));
  v33 = *((_QWORD *)this + 4);
  if ( v33 )
  {
    *((_QWORD *)this + 4) = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
  }
  v34 = *((_DWORD *)this + 12);
  v35 = *((_DWORD *)this + 13);
  if ( v34 != v35 )
    dword_18033983C += v35 - v34;
  dword_18033995C += *((_DWORD *)this + 30);
  v36 = *((_QWORD *)this + 14);
  v37 = v36 + *((_QWORD *)this + 15);
  while ( v36 != v37 )
  {
    v52 = *(__int64 **)(*((_QWORD *)this + 12) + 8 * (v36 & (*((_QWORD *)this + 13) - 1LL)));
    if ( v52[4] )
    {
      CHWDrawListEntry::ReplacePrimitive(*v52, &v81, v52 + 4, (__int64)(v52 + 5));
      if ( v81 )
        std::default_delete<CShape>::operator()(v55, v81);
    }
    ++v36;
  }
  std::deque<CMegaRect>::_Tidy((char *)this + 88);
  v39 = *((_QWORD *)this + 3);
  v82 = (unsigned __int64)this;
  v40 = *(_DWORD *)(v39 + 152);
  v41 = v40 + 1;
  if ( v40 + 1 < v40 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  else
  {
    if ( v41 <= *(_DWORD *)(v39 + 148) )
    {
      *(_QWORD *)(*(_QWORD *)(v39 + 128) + 8LL * v40) = v82;
      *(_DWORD *)(v39 + 152) = v41;
      goto LABEL_69;
    }
    v56 = DynArrayImpl<0>::AddMultipleAndSet(v39 + 128, 8, 1, &v82);
    if ( v56 >= 0 )
LABEL_69:
      _InterlockedIncrement((volatile signed __int32 *)(v82 + 16));
    else
      MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0xC3u, 0LL);
  }
  v42 = *((unsigned int *)this + 12);
  v43 = *((_DWORD *)this + 13);
  if ( (unsigned int)v42 < v43 )
  {
    v44 = 8 * v42;
    v45 = v43 - (unsigned int)v42;
    do
    {
      (*(void (__fastcall **)(_QWORD, CDrawListEntryBatch *))(**(_QWORD **)(v44 + *(_QWORD *)(v39 + 8)) + 48LL))(
        *(_QWORD *)(v44 + *(_QWORD *)(v39 + 8)),
        this);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v44 + *(_QWORD *)(v39 + 8)) + 8LL))(*(_QWORD *)(v44 + *(_QWORD *)(v39 + 8)));
      v44 += 8LL;
      --v45;
    }
    while ( v45 );
  }
  if ( (*(_DWORD *)(v39 + 192))-- == 1 )
  {
    v47 = *(_DWORD *)(v39 + 44);
    if ( v47 <= *(_DWORD *)(v39 + 32) - *(_DWORD *)(v39 + 40) )
      v47 = *(_DWORD *)(v39 + 32) - *(_DWORD *)(v39 + 40);
    *(_DWORD *)(v39 + 44) = v47;
    v48 = *(_DWORD *)(v39 + 84);
    if ( v48 <= *(_DWORD *)(v39 + 72) - *(_DWORD *)(v39 + 80) )
      v48 = *(_DWORD *)(v39 + 72) - *(_DWORD *)(v39 + 80);
    *(_DWORD *)(v39 + 84) = v48;
    v49 = *(_DWORD *)(v39 + 124);
    if ( v49 <= *(_DWORD *)(v39 + 112) - *(_DWORD *)(v39 + 120) )
      v49 = *(_DWORD *)(v39 + 112) - *(_DWORD *)(v39 + 120);
    *(_DWORD *)(v39 + 124) = v49;
    v50 = *(_DWORD *)(v39 + 164);
    if ( v50 <= *(_DWORD *)(v39 + 152) - *(_DWORD *)(v39 + 160) )
      v50 = *(_DWORD *)(v39 + 152) - *(_DWORD *)(v39 + 160);
    *(_DWORD *)(v39 + 164) = v50;
    *(_DWORD *)(v39 + 32) = 0;
    *(_DWORD *)(v39 + 40) = 0;
  }
  *((_QWORD *)this + 6) = -1LL;
  return (unsigned int)v7;
}
