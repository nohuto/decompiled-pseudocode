/*
 * XREFs of ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x18004B230
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180049B50 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800B0BE0 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800B0D7C (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x18015ED28 (McTemplateU0xq.c)
 *     ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x180194374 (-CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z.c)
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x1801946EC (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180194BF4 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z @ 0x180194C54 (-TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall COverlayContext::ApplyOverlayOrDirectFlipConfiguration(
        COverlayContext *this,
        bool *a2,
        bool *a3,
        __int64 a4)
{
  int v4; // esi
  char v5; // r12
  bool v6; // r14
  __int64 v9; // rbx
  char v10; // bp
  __int64 v11; // r15
  CDirectFlipInfo **v12; // rbx
  __int64 v13; // rcx
  CDirectFlipInfo *v14; // rax
  char v15; // al
  _BYTE *v16; // rcx
  __int64 result; // rax
  void (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rax
  __int64 v19; // r9
  int v20; // eax
  int Candidate; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned int v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+70h] [rbp+8h] BYREF
  bool *v29; // [rsp+78h] [rbp+10h]

  v29 = a2;
  v4 = 0;
  v5 = 0;
  v28 = 0LL;
  v6 = 0;
  if ( *((_BYTE *)this + 13446) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 128LL))(
      *((_QWORD *)this + 2),
      *((unsigned int *)this + 27));
  v9 = *((_QWORD *)this + 1054);
  v10 = 1;
  v11 = *((_QWORD *)this + 1055);
  while ( v9 != v11 )
  {
    LOBYTE(a4) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(v9 + 24) + 136LL))(
      *(_QWORD *)(v9 + 24),
      *((_QWORD *)this + 11),
      1LL,
      a4);
    v9 += 256LL;
  }
  v12 = (CDirectFlipInfo **)((char *)this + 13304);
  v13 = *((_QWORD *)this + 1663);
  if ( v13
    && *(_QWORD *)(v13 + 24) == *((_QWORD *)this + 1647)
    && *(_QWORD *)(v13 + 32) == *((_QWORD *)this + 1648)
    && *(_QWORD *)(v13 + 72) == *((_QWORD *)this + 1653)
    && *(_DWORD *)(v13 + 116) == *((_DWORD *)this + 3317) )
  {
    v6 = (*(_DWORD *)(v13 + 68) == 1) == (*((_DWORD *)this + 3305) == 1);
  }
  if ( *((int *)this + 3304) > 0
    && ((*((_QWORD *)this + 1055) - *((_QWORD *)this + 1054)) & 0xFFFFFFFFFFFFFF00uLL) == 0
    && !*((_DWORD *)this + 3354) )
  {
    v18 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1648)
                                                                                              + 40LL))(*((_QWORD *)this + 1648));
    v5 = 1;
    if ( v18 )
      (**v18)(v18, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v28);
    if ( v28 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 40LL))(v28) )
    {
      v5 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_7;
      v19 = 0LL;
      goto LABEL_45;
    }
    if ( *((int *)this + 3305) >= 3
      && (!v6 || *((_BYTE *)*v12 + 99))
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 432LL))(*((_QWORD *)this + 2)) )
    {
      v5 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_7;
      v19 = 2LL;
      goto LABEL_45;
    }
    if ( v6 && !CDirectFlipInfo::RenderingRealizationChanged(*v12) )
    {
      v20 = *((_DWORD *)this + 3305);
      if ( v20 >= 3 && v20 != 4 )
      {
        v5 = 0;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v19 = 1LL;
LABEL_45:
          McTemplateU0xq(
            *(unsigned int *)(*((_QWORD *)this + 1648) + 40LL),
            &EVTDESC_ADVANCED_DIRECTFLIP_CANCEL,
            *(unsigned int *)(*((_QWORD *)this + 1648) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*((_QWORD *)this + 1648) + 40LL)) << 32),
            v19);
        }
      }
    }
  }
LABEL_7:
  v14 = *v12;
  if ( !*v12 )
    goto LABEL_8;
  if ( *((int *)v14 + 16) < 4 || !v5 || !v6 )
  {
    COverlayContext::ClearDirectFlip(this);
    v14 = *v12;
    *((_BYTE *)this + 13447) = 1;
  }
  if ( !v14 )
  {
LABEL_8:
    if ( v5 )
    {
      Candidate = CDirectFlipInfo::CreateCandidate(
                    (COverlayContext *)((char *)this + 13152),
                    (struct CDirectFlipInfo **)this + 1663);
      v4 = Candidate;
      if ( Candidate < 0 )
      {
        v27 = 771;
        goto LABEL_65;
      }
      if ( *((_DWORD *)*v12 + 17) != 1 )
      {
        v23 = CDirectFlipInfo::EnsurePinnedResources(*v12);
        v4 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x307u, 0LL);
        if ( v4 == -2005532292 )
        {
          COverlayContext::ClearDirectFlip(this);
          v4 = 0;
        }
        else if ( v4 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v4, 0x313u, 0LL);
          goto LABEL_14;
        }
        if ( *v12 )
        {
          LOBYTE(v25) = 1;
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)*v12 + 4) + 296LL))(
            *((_QWORD *)*v12 + 4),
            1LL,
            v25);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0xq(v26, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *((_QWORD *)this + 11), 1LL);
        }
      }
    }
  }
  if ( *v12 )
  {
    Candidate = CDirectFlipInfo::TransferAdvancedDirectFlipState(*v12, (COverlayContext *)((char *)this + 13152));
    v4 = Candidate;
    if ( Candidate >= 0 )
    {
      if ( *((int *)*v12 + 17) >= 3 )
        *((_BYTE *)this + 13447) = 1;
      goto LABEL_10;
    }
    v27 = 803;
LABEL_65:
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, Candidate, v27, 0LL);
    goto LABEL_14;
  }
LABEL_10:
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1644) + 8LL))((char *)this + 13152);
  v15 = *((_BYTE *)this + 13446);
  if ( !*((_BYTE *)this + 13447) && !v15 )
  {
    v15 = 0;
    v10 = 0;
  }
  v16 = v29;
  *a3 = v15;
  *v16 = v10;
LABEL_14:
  if ( v4 < 0 )
    COverlayContext::Reset(this);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  result = (unsigned int)v4;
  *((_WORD *)this + 6723) = 0;
  return result;
}
