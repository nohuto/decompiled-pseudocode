/*
 * XREFs of ?CreateFromGDISection@CSectionBitmapSubRectRealization@@SAJPEAXAEBUtagRECT@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEAPEAVCBitmapRealization@@@Z @ 0x180226B58
 * Callers:
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@IEAAJII@Z @ 0x180198574 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@IEAAJII@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ??0CSectionBitmapSubRectRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_NAEBUtagRECT@@@Z @ 0x180226A90 (--0CSectionBitmapSubRectRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@A.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapSubRectRealization@@EEAAJXZ @ 0x180226D20 (-EnsureBitmapCacheSource@CSectionBitmapSubRectRealization@@EEAAJXZ.c)
 */

__int64 __fastcall CSectionBitmapSubRectRealization::CreateFromGDISection(
        void *a1,
        __m128i *a2,
        unsigned int a3,
        unsigned int a4,
        enum DXGI_ALPHA_MODE a5,
        bool a6,
        struct CBitmapRealization **a7)
{
  __m128i v11; // xmm0
  LONG left; // ecx
  LONG v13; // edx
  LONG v14; // eax
  int v15; // ecx
  __int32 v16; // ecx
  CSectionBitmapSubRectRealization *v17; // rax
  __int64 v18; // rcx
  CMILCOMBase *v19; // rbx
  unsigned int v20; // edi
  int v21; // eax
  __int64 v22; // rcx
  bool v24; // [rsp+28h] [rbp-B1h]
  struct tagRECT v25; // [rsp+38h] [rbp-A1h] BYREF
  void *v26; // [rsp+48h] [rbp-91h] BYREF
  __int64 v27; // [rsp+50h] [rbp-89h]
  unsigned __int64 v28; // [rsp+58h] [rbp-81h]
  _DWORD v29[10]; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v30[32]; // [rsp+88h] [rbp-51h] BYREF

  memset_0(v30, 0, 0x78uLL);
  memset_0(v29, 0, 0x20uLL);
  v11 = *a2;
  v13 = a2->m128i_i32[2];
  v25 = (struct tagRECT)*a2;
  left = v25.left;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( v25.left <= v13 )
  {
    left = v25.right;
    v13 = v25.left;
  }
  else
  {
    v25.left = v13;
    v25.right = left;
    v11 = (__m128i)v25;
  }
  v14 = a2->m128i_i32[1];
  if ( v14 > a2->m128i_i32[3] )
  {
    v25.top = a2->m128i_i32[3];
    v25.bottom = v14;
    v11 = (__m128i)v25;
  }
  v15 = left - v13;
  v30[0] = a5;
  if ( v15 < 0 )
    v15 = 0;
  v25 = (struct tagRECT)v11;
  LODWORD(v27) = v15;
  v16 = _mm_srli_si128(v11, 8).m128i_i32[1] - v11.m128i_i32[1];
  *a7 = 0LL;
  v30[11] = 0;
  if ( v16 < 0 )
    v16 = 0;
  v29[0] = 1;
  HIDWORD(v27) = v16;
  v26 = a1;
  v28 = __PAIR64__(a4, a3);
  v17 = (CSectionBitmapSubRectRealization *)HeapAlloc(WPF::g_processHeap, 0, 0x1E8uLL);
  if ( v17 )
    v19 = CSectionBitmapSubRectRealization::CSectionBitmapSubRectRealization(
            v17,
            (const struct CSM_BUFFER_ATTRIBUTES *)v30,
            (const struct CSM_REALIZATION_INFO *)v29,
            (const struct CSM_SYSMEM_SECTION_INFO *)&v26,
            v24,
            &v25);
  else
    v19 = 0LL;
  if ( v19 )
  {
    CMILCOMBase::InternalAddRef(v19);
    v21 = CSectionBitmapSubRectRealization::EnsureBitmapCacheSource(v19);
    v20 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x38u);
      CGdiSpriteBitmap::Release(v19);
    }
    else
    {
      *a7 = v19;
    }
  }
  else
  {
    v20 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x32u);
  }
  return v20;
}
