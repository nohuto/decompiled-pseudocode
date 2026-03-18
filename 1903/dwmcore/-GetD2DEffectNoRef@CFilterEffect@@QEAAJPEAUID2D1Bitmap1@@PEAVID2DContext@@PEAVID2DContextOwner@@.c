/*
 * XREFs of ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x1801CCCF0
 * Callers:
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017E698 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x1801CCCF0 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180026628 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18003B9EC (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x1801CC6F0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@Q.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x1801CCCF0 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBUtagRECT@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x1801CCFD8 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBU.c)
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
  signed int v11; // eax
  __int64 v12; // rcx
  struct ID2D1Effect *v13; // rbx
  signed int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 i; // r15
  __int64 v18; // r13
  __int64 v19; // rcx
  unsigned int v20; // r12d
  char v21; // al
  CFilterEffect *v22; // rcx
  signed int D2DEffectNoRef; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  signed int InputEffectForAtlasedSurface; // eax
  __int64 v27; // rcx
  struct ID2D1Effect *v29; // [rsp+30h] [rbp-18h] BYREF
  __int64 v30; // [rsp+38h] [rbp-10h]
  struct ID2D1Effect *v31; // [rsp+90h] [rbp+48h] BYREF
  struct ID2D1Bitmap1 *v32; // [rsp+98h] [rbp+50h]
  struct ID2DContext *v33; // [rsp+A0h] [rbp+58h]
  struct ID2DContextOwner *v34; // [rsp+A8h] [rbp+60h]

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v5 = *((_DWORD *)this + 8);
  v6 = 0LL;
  v29 = 0LL;
  v7 = 0LL;
  v31 = 0LL;
  *((_DWORD *)this + 8) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(v5 + 2)) & 6;
  if ( (((unsigned __int8)v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(v5 + 2)) & 6) & 6) != 2 )
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80004005, 0x1Bu, 0LL);
LABEL_27:
    *a5 = 0LL;
    goto LABEL_28;
  }
  v11 = CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::FindOrCreateResourceNoRef(
          (CFilterEffect *)((char *)this + 72),
          a3,
          &v29);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1Eu, 0LL);
  }
  else
  {
    v13 = v29;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v29 + 13) + 8LL))(*((_QWORD *)v29 + 13));
    v6 = (ID2D1Effect *)*((_QWORD *)v13 + 13);
    v14 = (*(__int64 (__fastcall **)(CFilterEffect *, ID2D1Effect *))(*(_QWORD *)this + 216LL))(this, v6);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x20u, 0LL);
    }
    else
    {
      v16 = *((_DWORD *)this + 38);
      if ( v16 )
      {
        if ( v16 > 0 )
        {
          v30 = *((int *)this + 38);
          for ( i = 0LL; i < v30; ++i )
          {
            v18 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * i);
            v19 = *(_QWORD *)(v18 + 24);
            v20 = *(_DWORD *)(*((_QWORD *)this + 17) + 4 * i);
            if ( v19 )
            {
              v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, 56LL);
              v22 = *(CFilterEffect **)(v18 + 24);
              if ( v21 )
              {
                v29 = 0LL;
                D2DEffectNoRef = CFilterEffect::GetD2DEffectNoRef(v22, v32, v33, v34, &v29);
                v10 = D2DEffectNoRef;
                if ( D2DEffectNoRef < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, D2DEffectNoRef, 0x39u, 0LL);
                  goto LABEL_26;
                }
                ID2D1Effect::SetInputEffect(v6, v20, v29);
              }
              else
              {
                if ( !(*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v22 + 48LL))(v22, 39LL) )
                {
                  v10 = -2147467263;
                  MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, 0x80004001, 0x50u, 0LL);
                  goto LABEL_27;
                }
                InputEffectForAtlasedSurface = CFilterEffect::GetInputEffectForAtlasedSurface(
                                                 (CFilterEffect *)&v31,
                                                 v33,
                                                 v34,
                                                 (const struct tagRECT *)(v18 + 4),
                                                 *(struct CCompositionSurfaceBitmap **)(v18 + 24),
                                                 &v31);
                v10 = InputEffectForAtlasedSurface;
                if ( InputEffectForAtlasedSurface < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, InputEffectForAtlasedSurface, 0x47u, 0LL);
                  v7 = v31;
                  goto LABEL_26;
                }
                ID2D1Effect::SetInputEffect(v6, v20, v31);
                ReleaseInterface<ID2D1Geometry>((__int64 *)&v31);
                v7 = v31;
              }
            }
            else
            {
              (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v6 + 112LL))(
                v6,
                v20,
                v32,
                1LL);
            }
          }
        }
      }
      else
      {
        (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v6 + 112LL))(
          v6,
          0LL,
          a2,
          1LL);
      }
      *a5 = v6;
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
