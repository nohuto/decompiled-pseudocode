/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@CHDRConversionRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAVCBitmapRealization@@@Z @ 0x180168790
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ @ 0x180166F54 (-CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ.c)
 *     ?IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z @ 0x180167A6C (-IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::SetMultiplaneOverlayPresentInfo(
        CHDRConversionRenderTarget *this,
        char a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6,
        struct CBitmapRealization **a7)
{
  int v7; // esi
  __int64 v12; // rbp
  struct CBitmapRealization **v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  char *v17; // rcx
  struct CBitmapRealization *v18; // rax
  signed int v19; // eax
  __int64 v20; // rcx
  int v21; // edi
  signed int v22; // eax
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // rcx
  const void *v26; // r8
  __int64 v27; // rdx
  int v29; // [rsp+78h] [rbp+10h]

  v7 = *((_DWORD *)this + 120);
  v29 = v7;
  if ( a2 )
  {
    if ( a5 )
    {
      v12 = a5;
      v14 = a7;
      do
      {
        v15 = *(unsigned int *)a6;
        v16 = 136 * v15;
        v17 = (char *)this + 136 * v15 + 488;
        *(_OWORD *)v17 = *(_OWORD *)a6;
        *((_OWORD *)v17 + 1) = *((_OWORD *)a6 + 1);
        *((_OWORD *)v17 + 2) = *((_OWORD *)a6 + 2);
        *((_OWORD *)v17 + 3) = *((_OWORD *)a6 + 3);
        *((_OWORD *)v17 + 4) = *((_OWORD *)a6 + 4);
        *((_OWORD *)v17 + 5) = *((_OWORD *)a6 + 5);
        *((_OWORD *)v17 + 6) = *((_OWORD *)a6 + 6);
        *((_OWORD *)v17 + 7) = *((_OWORD *)a6 + 7);
        *((_QWORD *)v17 + 16) = *((_QWORD *)a6 + 16);
        if ( a7 )
          v18 = *v14;
        else
          v18 = 0LL;
        *((_QWORD *)this + v15 + 95) = v18;
        if ( *(_DWORD *)((char *)this + v16 + 492)
          && !CHDRConversionRenderTarget::IsDesktopDXGIResource(
                (CSwapChainBase **)this - 18,
                *(struct IDXGIResource **)((char *)this + v16 + 496)) )
        {
          *((_BYTE *)this + 776) = 1;
        }
        a6 = (struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)((char *)a6 + 136);
        ++v14;
        --v12;
      }
      while ( v12 );
      v7 = v29;
    }
  }
  else
  {
    memset_0((char *)this + 488, 0, 0x120uLL);
  }
  v19 = CHDRConversionRenderTarget::CalcPresentMode((CHDRConversionRenderTarget *)((char *)this - 144));
  v21 = v19;
  if ( v19 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2CCu, 0LL);
  if ( v7 == 2 && *((_DWORD *)this + 120) != 2 )
  {
    v22 = (*(__int64 (__fastcall **)(CHDRConversionRenderTarget *, _QWORD, _QWORD, _QWORD, const void *, void *))(*(_QWORD *)this + 384LL))(
            this,
            0LL,
            0LL,
            a3,
            a4,
            &unk_1802E22E0);
    v24 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x2D7u, 0LL);
    if ( !v21 || v21 >= 0 && v24 < 0 )
      v21 = v24;
  }
  v25 = *((_QWORD *)this + 4);
  if ( v25 )
  {
    if ( a2 )
    {
      v26 = a4;
      v27 = a3;
    }
    else
    {
      v26 = 0LL;
      v27 = 0LL;
    }
    (*(void (__fastcall **)(__int64, __int64, const void *))(*(_QWORD *)v25 + 128LL))(v25, v27, v26);
  }
  return (unsigned int)v21;
}
