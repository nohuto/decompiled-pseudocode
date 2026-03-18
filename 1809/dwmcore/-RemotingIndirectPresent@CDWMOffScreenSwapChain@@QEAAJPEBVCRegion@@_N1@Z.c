/*
 * XREFs of ?RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z @ 0x1800E9C1C
 * Callers:
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1800E9B40 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18005EBC8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800AD850 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1800E9E18 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z @ 0x1800E9F34 (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 *     McTemplateU0qn @ 0x1802045B0 (McTemplateU0qn.c)
 *     ?RemoveAt@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z @ 0x1802048F8 (-RemoveAt@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::RemotingIndirectPresent(
        CDWMOffScreenSwapChain *this,
        FastRegion::Internal::CRgnData **a2,
        char a3,
        char a4)
{
  char v4; // si
  HRGN v7; // r12
  unsigned int v8; // r14d
  __int64 v9; // rdx
  int v10; // eax
  FastRegion::Internal::CRgnData *v11; // rcx
  int v12; // edi
  __int64 v13; // r8
  unsigned int v14; // edi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int i; // esi
  FastRegion::Internal::CRgnData *v20; // rcx
  int v21; // r9d
  char v22; // r10
  FastRegion::Internal::CRgnData *v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // esi
  _QWORD *v26; // r13
  __int128 v27; // xmm2
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // r9
  __int64 v31; // rax
  _OWORD *v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int128 v37; // xmm0
  unsigned int v38; // [rsp+20h] [rbp-E8h]
  char v39; // [rsp+30h] [rbp-D8h]
  HRGN v41; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v42; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B8h]
  unsigned int v44; // [rsp+58h] [rbp-B0h]
  HGDIOBJ ho[2]; // [rsp+70h] [rbp-98h]
  __int128 v46; // [rsp+80h] [rbp-88h]
  __int128 v47; // [rsp+90h] [rbp-78h] BYREF
  __int128 v48; // [rsp+A0h] [rbp-68h]
  int v49; // [rsp+B0h] [rbp-58h]
  struct tagRECT v50; // [rsp+C0h] [rbp-48h] BYREF

  v4 = a4;
  v7 = 0LL;
  v41 = 0LL;
  v8 = 0;
  v43 = 0LL;
  v42 = 0LL;
  v44 = 0;
  if ( !*((_QWORD *)this + 68) || (v39 = 0, a3) )
    v39 = 1;
  if ( a2 && *(_DWORD *)*a2 && *((_QWORD *)this + 56) )
  {
    FastRegion::Internal::CRgnData::BeginIterator(*a2, (struct FastRegion::CRegion::Iterator *)&v47);
    while ( (unsigned __int64)v48 < *((_QWORD *)&v47 + 1) )
    {
      v50.top = *(_DWORD *)v48;
      v50.bottom = *(_DWORD *)(v48 + 8);
      v9 = 2 * v49;
      v50.left = *(_DWORD *)(*((_QWORD *)&v48 + 1) + 4 * v9);
      v50.right = *(_DWORD *)(*((_QWORD *)&v48 + 1) + 4 * v9 + 4);
      v10 = CDWMOffScreenSwapChain::CopyFromTexture(this, &v50);
      v12 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, v10, 0x231u);
        goto LABEL_20;
      }
      FastRegion::Internal::CRgnData::StepIterator(v11, (struct FastRegion::CRegion::Iterator *)&v47);
    }
  }
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
      FastRegion::Internal::CRgnData::BeginIterator(v20, (struct FastRegion::CRegion::Iterator *)&v47);
      v22 = Microsoft_Windows_Dwm_CoreEnableBits;
      while ( (unsigned __int64)v48 < *((_QWORD *)&v47 + 1) )
      {
        v50.top = *(_DWORD *)v48;
        v23 = (FastRegion::Internal::CRgnData *)*((_QWORD *)&v48 + 1);
        v50.bottom = *(_DWORD *)(v48 + 8);
        v24 = 2 * v49;
        v50.left = *(_DWORD *)(*((_QWORD *)&v48 + 1) + 4 * v24);
        v50.right = *(_DWORD *)(*((_QWORD *)&v48 + 1) + 4 * v24 + 4);
        if ( (v22 & 0x20) != 0 )
          McTemplateU0qn(
            (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
            v24,
            *((_QWORD *)this + 56) == 0LL,
            v21,
            (__int64)&v50);
        FastRegion::Internal::CRgnData::StepIterator(v23, (struct FastRegion::CRegion::Iterator *)&v47);
      }
      if ( (v22 & 0x20) != 0 )
        McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Stop);
    }
  }
  v13 = *((unsigned int *)this + 92);
  v14 = 0;
  if ( (_DWORD)v13 )
  {
    v25 = (unsigned int)v41;
    v26 = (_QWORD *)((char *)this + 344);
    do
    {
      v27 = *(_OWORD *)(*v26 + 48LL * v14 + 16);
      v28 = *(_DWORD *)(*v26 + 48LL * v14);
      v46 = *(_OWORD *)(*v26 + 48LL * v14 + 32);
      if ( v28 == 1 )
      {
        v48 = v46;
        v29 = v8 + 1;
        v47 = v27;
        if ( v8 + 1 >= v8 )
          v25 = v8 + 1;
        v30 = v29 < v8 ? 0x80070216 : 0;
        if ( v29 < v8 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(6LL * v14, 0LL, 0, v30, 0xB5u);
        }
        else if ( v25 > HIDWORD(v43) )
        {
          v33 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v42, 32, 1, &v47);
          if ( v33 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0xC0u);
          v8 = v44;
        }
        else
        {
          v31 = v8;
          v8 = v25;
          v32 = (_OWORD *)(v42 + 32 * v31);
          v44 = v25;
          *v32 = v27;
          v32[1] = v48;
        }
        if ( v39 )
          DynArray<_DWMIndirectMetaData,0>::RemoveAt((char *)this + 344, v14--, v13, v30);
      }
      v13 = *((unsigned int *)this + 92);
      ++v14;
    }
    while ( v14 < (unsigned int)v13 );
    v7 = v41;
    v4 = a4;
  }
  if ( !v39 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 68) + 56LL))(
            *((_QWORD *)this + 68),
            *((_QWORD *)this + 43));
    if ( ((v12 + 2147467263) & 0xFFFFFFFB) == 0 )
      v12 = -2003304307;
    if ( v12 < 0 )
    {
      v38 = 663;
      goto LABEL_55;
    }
LABEL_17:
    for ( i = 0; i < *((_DWORD *)this + 92); ++i )
    {
      v36 = *((_QWORD *)this + 43);
      v37 = *(_OWORD *)(v36 + 48LL * i + 16);
      LODWORD(v36) = *(_DWORD *)(v36 + 48LL * i);
      *(_OWORD *)ho = v37;
      if ( !(_DWORD)v36 && ho[1] )
        DeleteObject(ho[1]);
    }
    goto LABEL_18;
  }
  if ( a2 )
  {
    CRegion::CreateHRGN((CRegion *)a2, &v41);
    v7 = v41;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, HRGN, _QWORD, _QWORD))(**((_QWORD **)this + 67) + 24LL))(
          *((_QWORD *)this + 67),
          v7,
          v42,
          v8);
  v12 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x274u);
    goto LABEL_18;
  }
  v17 = *((_QWORD *)this + 68);
  if ( !v17 || !*((_DWORD *)this + 92) || !v4 )
    goto LABEL_17;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 56LL))(v17, *((_QWORD *)this + 43));
  if ( ((v12 + 2147467263) & 0xFFFFFFFB) == 0 )
    v12 = -2003304307;
  if ( v12 >= 0 )
    goto LABEL_17;
  v38 = 650;
LABEL_55:
  MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v12, v38);
LABEL_18:
  if ( v7 )
    DeleteObject(v7);
LABEL_20:
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v42);
  return (unsigned int)v12;
}
