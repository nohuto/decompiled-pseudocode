/*
 * XREFs of ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x1801979D0
 * Callers:
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017CA1C (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x1801979D0 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180016D7C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800E5B18 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x180197420 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@Q.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x1801979D0 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBUtagRECT@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x180197CA0 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBU.c)
 */

__int64 __fastcall CFilterEffect::GetD2DEffectNoRef(
        CFilterEffect *this,
        struct ID2D1Bitmap1 *a2,
        struct ID2DContext *a3,
        struct ID2DContextOwner *a4,
        struct ID2D1Effect **a5)
{
  int v5; // eax
  ID2D1Effect *v6; // rdi
  struct ID2D1Effect *v7; // r14
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  struct ID2D1Effect *v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  struct ID2D1Effect **v17; // rax
  __int64 i; // r15
  __int64 v19; // r13
  __int64 v20; // rcx
  unsigned int v21; // r12d
  char v22; // al
  CFilterEffect *v23; // rcx
  int D2DEffectNoRef; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int InputEffectForAtlasedSurface; // eax
  __int64 v28; // rcx
  struct ID2D1Effect *v30; // [rsp+30h] [rbp-18h] BYREF
  __int64 v31; // [rsp+38h] [rbp-10h]
  struct ID2D1Effect *v32; // [rsp+90h] [rbp+48h] BYREF
  struct ID2D1Bitmap1 *v33; // [rsp+98h] [rbp+50h]
  struct ID2DContext *v34; // [rsp+A0h] [rbp+58h]
  struct ID2DContextOwner *v35; // [rsp+A8h] [rbp+60h]

  v35 = a4;
  v34 = a3;
  v33 = a2;
  v5 = *((_DWORD *)this + 8);
  v6 = 0LL;
  v30 = 0LL;
  v7 = 0LL;
  v32 = 0LL;
  *((_DWORD *)this + 8) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(v5 + 2)) & 6;
  if ( (((unsigned __int8)v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(v5 + 2)) & 6) & 6) != 2 )
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467259, 0x1Du);
LABEL_27:
    *a5 = 0LL;
    goto LABEL_28;
  }
  v11 = CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::FindOrCreateResourceNoRef(
          (CFilterEffect *)((char *)this + 72),
          a3,
          &v30);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x20u);
  }
  else
  {
    v13 = v30;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v30 + 13) + 8LL))(*((_QWORD *)v30 + 13));
    v6 = (ID2D1Effect *)*((_QWORD *)v13 + 13);
    v14 = (*(__int64 (__fastcall **)(CFilterEffect *, ID2D1Effect *))(*(_QWORD *)this + 176LL))(this, v6);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x22u);
    }
    else
    {
      v16 = *((_DWORD *)this + 38);
      if ( v16 )
      {
        if ( v16 > 0 )
        {
          v31 = *((int *)this + 38);
          for ( i = 0LL; i < v31; ++i )
          {
            v19 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * i);
            v20 = *(_QWORD *)(v19 + 24);
            v21 = *(_DWORD *)(*((_QWORD *)this + 17) + 4 * i);
            if ( v20 )
            {
              v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 48LL))(v20, 54LL);
              v23 = *(CFilterEffect **)(v19 + 24);
              if ( v22 )
              {
                v30 = 0LL;
                D2DEffectNoRef = CFilterEffect::GetD2DEffectNoRef(v23, v33, v34, v35, &v30);
                v10 = D2DEffectNoRef;
                if ( D2DEffectNoRef < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, D2DEffectNoRef, 0x3Bu);
                  goto LABEL_26;
                }
                ID2D1Effect::SetInputEffect(v6, v21, v30);
              }
              else
              {
                if ( !(*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v23 + 48LL))(v23, 37LL) )
                {
                  v10 = -2147467263;
                  MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147467263, 0x52u);
                  goto LABEL_27;
                }
                InputEffectForAtlasedSurface = CFilterEffect::GetInputEffectForAtlasedSurface(
                                                 (CFilterEffect *)&v32,
                                                 v34,
                                                 v35,
                                                 (const struct tagRECT *)(v19 + 4),
                                                 *(struct CCompositionSurfaceBitmap **)(v19 + 24),
                                                 &v32);
                v10 = InputEffectForAtlasedSurface;
                if ( InputEffectForAtlasedSurface < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, InputEffectForAtlasedSurface, 0x49u);
                  v7 = v32;
                  goto LABEL_26;
                }
                ID2D1Effect::SetInputEffect(v6, v21, v32);
                ReleaseInterface<ID2D1Geometry>((__int64 *)&v32);
                v7 = v32;
              }
            }
            else
            {
              (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v6 + 112LL))(
                v6,
                v21,
                v33,
                1LL);
            }
          }
        }
        v17 = a5;
      }
      else
      {
        (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v6 + 112LL))(
          v6,
          0LL,
          a2,
          1LL);
        v17 = a5;
        *a5 = v6;
      }
      *v17 = v6;
    }
  }
LABEL_26:
  if ( v10 < 0 )
    goto LABEL_27;
LABEL_28:
  if ( v6 )
    (*(void (__fastcall **)(ID2D1Effect *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v7 + 16LL))(v7);
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return (unsigned int)v10;
}
