/*
 * XREFs of ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800266A0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180026D0C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180026DE0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18005C51C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800AE7D4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800B3CBC (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800B40E0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800EC020 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800EC088 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::GenerateDrawList(
        CSpriteVisualContent *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // ebx
  struct CDrawListBrush *v11; // rax
  CBrushRenderingGraph *v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v16; // rax
  FLOAT height; // xmm1_4
  __int64 (__fastcall *v18)(CSpriteVisualContent *, struct CDrawingContext **); // rax
  int v19; // eax
  unsigned int v20; // ecx
  int DrawList; // eax
  unsigned int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rdi
  int *v25; // rsi
  struct CDrawListBrush *v26; // [rsp+30h] [rbp-D0h] BYREF
  struct CDrawListBrush **v27; // [rsp+38h] [rbp-C8h]
  unsigned int v28[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v29; // [rsp+48h] [rbp-B8h]
  _QWORD v30[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+60h] [rbp-A0h]
  __int16 v32; // [rsp+ACh] [rbp-54h]
  char v33; // [rsp+AEh] [rbp-52h]
  struct CDrawingContext *v34; // [rsp+B0h] [rbp-50h] BYREF
  FLOAT width; // [rsp+B8h] [rbp-48h]
  FLOAT v36; // [rsp+BCh] [rbp-44h]
  int v37; // [rsp+C0h] [rbp-40h]
  __int128 v38; // [rsp+C4h] [rbp-3Ch]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  __int64 v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  __int64 v42; // [rsp+F0h] [rbp-10h]
  int v43; // [rsp+F8h] [rbp-8h] BYREF
  char v44; // [rsp+FCh] [rbp-4h]
  _BYTE v45[2304]; // [rsp+100h] [rbp+0h] BYREF

  if ( dword_18030BD08 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18030BD08);
    if ( dword_18030BD08 == -1 )
    {
      dword_18030688C = -2147022876;
      Init_thread_footer(&dword_18030BD08);
    }
  }
  v29 = 1;
  v27 = &v26;
  v8 = *(_QWORD *)this;
  v26 = 0LL;
  *(_QWORD *)v28 = 0LL;
  v10 = (*(__int64 (__fastcall **)(CSpriteVisualContent *, struct CDrawingContext *, const struct D2D_SIZE_F *, unsigned int *))(v8 + 320))(
          this,
          a2,
          a3,
          v28);
  if ( v29 )
  {
    v9 = *(_QWORD *)v28;
    v11 = *v27;
    *v27 = *(struct CDrawListBrush **)v28;
    if ( v11 )
      std::default_delete<CShape>::operator()(v9, (__int64 (__fastcall ***)(_QWORD, __int64))v11);
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_180306888, 2u, v10, 0xD1u);
    goto LABEL_10;
  }
  v12 = (CBrushRenderingGraph *)*((_QWORD *)this + 8);
  if ( v12 )
  {
    if ( *((_BYTE *)a2 + 6351) )
    {
      v13 = CBrushRenderingGraph::RenderSubgraphs(v12, a2, a3, v26, a4);
      v10 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_180306888, 2u, v13, 0xE7u);
    }
    goto LABEL_10;
  }
  v16 = *(_QWORD *)this;
  height = a3->height;
  width = a3->width;
  v18 = *(__int64 (__fastcall **)(CSpriteVisualContent *, struct CDrawingContext **))(v16 + 304);
  v36 = height;
  v34 = a2;
  v37 = 0;
  v38 = _xmm;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0;
  v44 = 0;
  v19 = v18(this, &v34);
  v10 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_180306888, 2u, v19, 0xD6u);
    goto LABEL_24;
  }
  v30[0] = v26;
  v30[1] = 0LL;
  v31 = 0;
  v32 = 1;
  v33 = 0;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v45);
  DrawList = CBrushDrawListGenerator::GenerateDrawList(
               (CBrushDrawListGenerator *)&v34,
               (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v30,
               (struct CDrawListEntryBuilder *)v45);
  v10 = DrawList;
  if ( DrawList < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_180306888, 2u, DrawList, 0xDCu);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v45);
LABEL_24:
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v34);
    goto LABEL_10;
  }
  CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v45);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v45);
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)&v34);
  v24 = 4LL;
  v25 = &v43;
  do
  {
    v25 -= 2;
    --v24;
    if ( *(_QWORD *)v25 )
      std::default_delete<CShape>::operator()(v23, *(__int64 (__fastcall ****)(_QWORD, __int64))v25);
  }
  while ( v24 );
LABEL_10:
  if ( v26 )
    (**(void (__fastcall ***)(struct CDrawListBrush *, __int64))v26)(v26, 1LL);
  return (unsigned int)v10;
}
