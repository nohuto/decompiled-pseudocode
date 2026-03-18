/*
 * XREFs of ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18003C100
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000ED24 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003C358 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18003C398 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18003C400 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18003C54C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18006F024 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18006F2A8 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180097560 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800E93B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E9418 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::GenerateDrawList(
        CBrushRenderingGraph **this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CBrushRenderingGraph *v8; // rax
  __int64 (__fastcall *v9)(CSpriteVisualContent *, struct CDrawingContext *, const struct D2D_SIZE_F *, unsigned int *); // rax
  __int64 v10; // rcx
  int v11; // ebx
  struct CDrawListBrush *v12; // rax
  CBrushRenderingGraph *v13; // rcx
  CBrushRenderingGraph *v14; // rax
  FLOAT height; // xmm1_4
  __int64 (__fastcall *v16)(CSpriteVisualContent *, struct CDrawingContext **); // rax
  int v17; // eax
  unsigned int v18; // ecx
  int DrawList; // eax
  unsigned int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rdi
  int *v23; // rsi
  int v25; // eax
  unsigned int v26; // ecx
  struct CDrawListBrush *v27; // [rsp+30h] [rbp-D0h] BYREF
  struct CDrawListBrush **v28; // [rsp+38h] [rbp-C8h]
  unsigned int v29[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v30; // [rsp+48h] [rbp-B8h]
  _QWORD v31[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+60h] [rbp-A0h]
  __int16 v33; // [rsp+ACh] [rbp-54h]
  char v34; // [rsp+AEh] [rbp-52h]
  struct CDrawingContext *v35; // [rsp+B0h] [rbp-50h] BYREF
  FLOAT width; // [rsp+B8h] [rbp-48h]
  FLOAT v37; // [rsp+BCh] [rbp-44h]
  int v38; // [rsp+C0h] [rbp-40h]
  __int128 v39; // [rsp+C4h] [rbp-3Ch]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  __int64 v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  __int64 v43; // [rsp+F0h] [rbp-10h]
  int v44; // [rsp+F8h] [rbp-8h] BYREF
  char v45; // [rsp+FCh] [rbp-4h]
  _BYTE v46[2304]; // [rsp+100h] [rbp+0h] BYREF

  if ( dword_18033D37C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18033D37C);
    if ( dword_18033D37C == -1 )
    {
      dword_180337EFC = -2147022876;
      Init_thread_footer(&dword_18033D37C);
    }
  }
  v8 = *this;
  v28 = &v27;
  v27 = 0LL;
  *(_QWORD *)v29 = 0LL;
  v9 = (__int64 (__fastcall *)(CSpriteVisualContent *, struct CDrawingContext *, const struct D2D_SIZE_F *, unsigned int *))*((_QWORD *)v8 + 48);
  v30 = 1;
  v11 = v9((CSpriteVisualContent *)this, a2, a3, v29);
  if ( v30 )
  {
    v10 = *(_QWORD *)v29;
    v12 = *v28;
    *v28 = *(struct CDrawListBrush **)v29;
    if ( v12 )
      std::default_delete<CShape>::operator()(v10, (__int64 (__fastcall ***)(_QWORD, __int64))v12);
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_180337EF8, 2u, v11, 0xDEu, 0LL);
    goto LABEL_13;
  }
  v13 = this[8];
  if ( !v13 )
  {
    v14 = *this;
    height = a3->height;
    width = a3->width;
    v16 = (__int64 (__fastcall *)(CSpriteVisualContent *, struct CDrawingContext **))*((_QWORD *)v14 + 46);
    v37 = height;
    v35 = a2;
    v38 = 0;
    v39 = _xmm;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0;
    v45 = 0;
    v17 = v16((CSpriteVisualContent *)this, &v35);
    v11 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_180337EF8, 2u, v17, 0xE3u, 0LL);
    }
    else
    {
      v31[0] = v27;
      v31[1] = 0LL;
      v32 = 0;
      v33 = 1;
      v34 = 0;
      CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v46);
      DrawList = CBrushDrawListGenerator::GenerateDrawList(
                   (CBrushDrawListGenerator *)&v35,
                   (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v31,
                   (struct CDrawListEntryBuilder *)v46);
      v11 = DrawList;
      if ( DrawList >= 0 )
      {
        CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v46);
        CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v46);
        CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)&v35);
        v22 = 4LL;
        v23 = &v44;
        do
        {
          v23 -= 2;
          --v22;
          if ( *(_QWORD *)v23 )
            std::default_delete<CShape>::operator()(v21, *(__int64 (__fastcall ****)(_QWORD, __int64))v23);
        }
        while ( v22 );
        goto LABEL_13;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_180337EF8, 2u, DrawList, 0xE9u, 0LL);
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v46);
    }
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v35);
    goto LABEL_13;
  }
  if ( *((_BYTE *)a2 + 6351) )
  {
    v25 = CBrushRenderingGraph::RenderSubgraphs(v13, a2, a3, v27, a4);
    v11 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v26, &dword_180337EF8, 2u, v25, 0xF4u, 0LL);
  }
LABEL_13:
  if ( v27 )
    (**(void (__fastcall ***)(struct CDrawListBrush *, __int64))v27)(v27, 1LL);
  return (unsigned int)v11;
}
