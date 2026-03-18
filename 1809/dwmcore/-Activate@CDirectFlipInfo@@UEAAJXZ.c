/*
 * XREFs of ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180178910
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180030524 (-GetSourceRect@CBitmapRealization@@QEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z @ 0x180178CE8 (-CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180178FBC (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 *     ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x180179178 (-GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z @ 0x180179618 (-UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z.c)
 *     ?RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z @ 0x1801BD080 (-RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::Activate(CDirectFlipInfo *this)
{
  int v1; // esi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // r14
  bool v10; // bl
  int v11; // eax
  __int64 v12; // rcx
  int CurrentDXGIResource; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  float v25; // [rsp+40h] [rbp-9h]
  __int64 *v26; // [rsp+48h] [rbp-1h] BYREF
  struct IDXGIResource *v27; // [rsp+50h] [rbp+7h] BYREF
  void *v28; // [rsp+58h] [rbp+Fh] BYREF
  struct _LUID v29; // [rsp+60h] [rbp+17h] BYREF
  __int128 v30; // [rsp+68h] [rbp+1Fh] BYREF
  _DWORD v31[4]; // [rsp+78h] [rbp+2Fh] BYREF

  v1 = *((_DWORD *)this + 16);
  v26 = 0LL;
  v3 = *((_QWORD *)this + 2);
  v27 = 0LL;
  v28 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, struct _LUID *, _QWORD))(*(_QWORD *)v3 + 120LL))(v3, &v29, 0LL);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x12Au);
  }
  else if ( v1 == 4 || (v7 = CDirectFlipInfo::CheckIndependentFlipSupport(this, (bool *)this + 85), v6 = v7, v7 >= 0) )
  {
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                      + 4));
    v10 = *((int *)this + 17) < 2 && *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) != -1;
    CDirectFlipInfo::UpdateHDRMetaData(this, (const void **)&v28);
    v11 = CDirectFlipInfo::EnsureIndependentFlipState(this, v10, 0);
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x141u);
    }
    else
    {
      CurrentDXGIResource = CDirectFlipInfo::GetCurrentDXGIResource(this, v29, &v27);
      v6 = CurrentDXGIResource;
      if ( CurrentDXGIResource < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, CurrentDXGIResource, 0x143u);
      }
      else
      {
        v15 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))this + 2))(
                *((_QWORD *)this + 2),
                &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
                &v26);
        v6 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x146u);
        }
        else
        {
          CBitmapRealization::GetSourceRect((__int64)RenderingRealizationNoRef, &v30);
          v17 = *(float *)&v30 + 6291456.25;
          v31[0] = (int)(LODWORD(v17) << 10) >> 11;
          v18 = *((float *)&v30 + 1) + 6291456.25;
          v31[1] = (int)(LODWORD(v18) << 10) >> 11;
          v19 = *((float *)&v30 + 2) + 6291456.25;
          v31[2] = (int)(LODWORD(v19) << 10) >> 11;
          v25 = *((float *)&v30 + 3) + 6291456.25;
          v31[3] = (int)(LODWORD(v25) << 10) >> 11;
          v20 = *v26;
          v21 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*((_QWORD *)RenderingRealizationNoRef + 18) + 24LL))(
                  (__int64)RenderingRealizationNoRef + 144,
                  &v30);
          v22 = (*(__int64 (__fastcall **)(__int64 *, struct IDXGIResource *, _QWORD, _QWORD, void *, _DWORD *))(v20 + 384))(
                  v26,
                  v27,
                  *(unsigned int *)(v21 + 8),
                  *((unsigned int *)this + 26),
                  v28,
                  v31);
          v6 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x153u);
          }
          else
          {
            *((_DWORD *)this + 16) = 4;
            if ( v1 != 4 )
              CCompositionSurfaceInfo::RecordDirectFlipState(
                *((CCompositionSurfaceInfo **)this + 4),
                *((_QWORD *)this + 9),
                1);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x12Eu);
  }
  if ( v26 )
    (*(void (__fastcall **)(__int64 *))(*v26 + 16))(v26);
  if ( v27 )
    ((void (__fastcall *)(struct IDXGIResource *))v27->lpVtbl->Release)(v27);
  return v6;
}
