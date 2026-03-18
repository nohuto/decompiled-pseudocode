/*
 * XREFs of ?RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z @ 0x1800DBBE8
 * Callers:
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1800DBB10 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18008F2B4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BDFD4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1800DBDE8 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z @ 0x1800DBE94 (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015EAF8 (McTemplateU0.c)
 *     McTemplateU0d @ 0x18015EC70 (McTemplateU0d.c)
 *     McTemplateU0qn @ 0x180164840 (McTemplateU0qn.c)
 *     ?RemoveAt@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z @ 0x180164B68 (-RemoveAt@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::RemotingIndirectPresent(
        CDWMOffScreenSwapChain *this,
        const struct CRegion *a2,
        char a3,
        char a4)
{
  unsigned int v4; // edi
  char v5; // r15
  HRGN v8; // r12
  unsigned int v9; // esi
  char v10; // r13
  __int64 v11; // rdx
  signed int v12; // eax
  FastRegion::Internal::CRgnData *v13; // rcx
  signed int v14; // edi
  signed int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 i; // rsi
  FastRegion::Internal::CRgnData *v20; // rcx
  int v21; // r9d
  char v22; // r10
  FastRegion::Internal::CRgnData *v23; // rcx
  __int64 v24; // rdx
  _QWORD *v25; // r15
  __int128 v26; // xmm2
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  _OWORD *v30; // rax
  signed int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int128 v35; // xmm0
  unsigned int v36; // [rsp+20h] [rbp-E8h]
  HRGN v38; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v39; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B8h]
  unsigned int v41; // [rsp+58h] [rbp-B0h]
  HGDIOBJ ho[2]; // [rsp+70h] [rbp-98h]
  __int128 v43; // [rsp+80h] [rbp-88h]
  __int128 v44; // [rsp+90h] [rbp-78h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-68h]
  int v46; // [rsp+B0h] [rbp-58h]
  struct tagRECT v47; // [rsp+C0h] [rbp-48h] BYREF

  v4 = 0;
  v5 = a4;
  v8 = 0LL;
  v38 = 0LL;
  v9 = 0;
  v40 = 0LL;
  v39 = 0LL;
  v41 = 0;
  if ( !*((_QWORD *)this + 68) || (v10 = 0, a3) )
    v10 = 1;
  if ( !a2 || !**(_DWORD **)a2 || !*((_QWORD *)this + 56) )
  {
LABEL_12:
    if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &MILEVENT_MEDIA_UCE_BLTDESKTOP_RECT) )
    {
      v20 = (FastRegion::Internal::CRgnData *)*((_QWORD *)this + 34);
      if ( *(_DWORD *)v20 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Start, 0LL);
          v20 = (FastRegion::Internal::CRgnData *)*((_QWORD *)this + 34);
        }
        FastRegion::Internal::CRgnData::BeginIterator(v20, (struct FastRegion::CRegion::Iterator *)&v44);
        v22 = Microsoft_Windows_Dwm_CoreEnableBits;
        while ( (unsigned __int64)v45 < *((_QWORD *)&v44 + 1) )
        {
          v47.top = *(_DWORD *)v45;
          v23 = (FastRegion::Internal::CRgnData *)*((_QWORD *)&v45 + 1);
          v47.bottom = *(_DWORD *)(v45 + 8);
          v24 = 2 * v46;
          v47.left = *(_DWORD *)(*((_QWORD *)&v45 + 1) + 4 * v24);
          v47.right = *(_DWORD *)(*((_QWORD *)&v45 + 1) + 4 * v24 + 4);
          if ( (v22 & 0x20) != 0 )
            McTemplateU0qn(
              (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
              v24,
              *((_QWORD *)this + 56) == 0LL,
              v21,
              (__int64)&v47);
          FastRegion::Internal::CRgnData::StepIterator(v23, (struct FastRegion::CRegion::Iterator *)&v44);
        }
        if ( (v22 & 0x20) != 0 )
          McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Stop);
      }
    }
    if ( *((_DWORD *)this + 92) )
    {
      v25 = (_QWORD *)((char *)this + 344);
      do
      {
        v26 = *(_OWORD *)(*v25 + 48LL * v4 + 16);
        v27 = *(_DWORD *)(*v25 + 48LL * v4);
        v43 = *(_OWORD *)(*v25 + 48LL * v4 + 32);
        if ( v27 == 1 )
        {
          v28 = v9 + 1;
          v45 = v43;
          v44 = v26;
          if ( (unsigned int)v28 < v9 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, 0x80070216, 0xB8u, 0LL);
          }
          else if ( (unsigned int)v28 > HIDWORD(v40) )
          {
            v31 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v39, 32, 1, &v44);
            if ( v31 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0xC3u, 0LL);
            v9 = v41;
          }
          else
          {
            v29 = v9++;
            v30 = (_OWORD *)(v39 + 32 * v29);
            v41 = v28;
            *v30 = v26;
            v30[1] = v45;
          }
          if ( v10 )
            DynArray<_DWMIndirectMetaData,0>::RemoveAt((char *)this + 344, v4--);
        }
        ++v4;
      }
      while ( v4 < *((_DWORD *)this + 92) );
      v5 = a4;
    }
    if ( v10 )
    {
      if ( a2 )
      {
        CRegion::CreateHRGN(a2, &v38);
        v8 = v38;
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, HRGN, _QWORD, _QWORD))(**((_QWORD **)this + 67) + 24LL))(
              *((_QWORD *)this + 67),
              v8,
              v39,
              v9);
      v14 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x249u, 0LL);
        goto LABEL_21;
      }
      v17 = *((_QWORD *)this + 68);
      if ( v17 && *((_DWORD *)this + 92) && v5 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 56LL))(v17, *((_QWORD *)this + 43));
        if ( ((v14 + 2147467263) & 0xFFFFFFFB) == 0 )
          v14 = -2003304307;
        if ( v14 < 0 )
        {
          v36 = 607;
LABEL_53:
          MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v14, v36, 0LL);
LABEL_21:
          if ( v8 )
            DeleteObject(v8);
          goto LABEL_23;
        }
      }
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 68) + 56LL))(
              *((_QWORD *)this + 68),
              *((_QWORD *)this + 43));
      if ( ((v14 + 2147467263) & 0xFFFFFFFB) == 0 )
        v14 = -2003304307;
      if ( v14 < 0 )
      {
        v36 = 620;
        goto LABEL_53;
      }
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 92); i = (unsigned int)(i + 1) )
    {
      v34 = *((_QWORD *)this + 43);
      v35 = *(_OWORD *)(v34 + 48 * i + 16);
      LODWORD(v34) = *(_DWORD *)(v34 + 48 * i);
      *(_OWORD *)ho = v35;
      if ( !(_DWORD)v34 && ho[1] )
        DeleteObject(ho[1]);
    }
    goto LABEL_21;
  }
  FastRegion::Internal::CRgnData::BeginIterator(
    *(FastRegion::Internal::CRgnData **)a2,
    (struct FastRegion::CRegion::Iterator *)&v44);
  while ( 1 )
  {
    if ( (unsigned __int64)v45 >= *((_QWORD *)&v44 + 1) )
    {
      v4 = 0;
      goto LABEL_12;
    }
    v47.top = *(_DWORD *)v45;
    v47.bottom = *(_DWORD *)(v45 + 8);
    v11 = 2 * v46;
    v47.left = *(_DWORD *)(*((_QWORD *)&v45 + 1) + 4 * v11);
    v47.right = *(_DWORD *)(*((_QWORD *)&v45 + 1) + 4 * v11 + 4);
    v12 = CDWMOffScreenSwapChain::CopyFromTexture(this, &v47);
    v14 = v12;
    if ( v12 < 0 )
      break;
    FastRegion::Internal::CRgnData::StepIterator(v13, (struct FastRegion::CRegion::Iterator *)&v44);
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v13, 0LL, 0, v12, 0x206u, 0LL);
LABEL_23:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v39);
  return (unsigned int)v14;
}
