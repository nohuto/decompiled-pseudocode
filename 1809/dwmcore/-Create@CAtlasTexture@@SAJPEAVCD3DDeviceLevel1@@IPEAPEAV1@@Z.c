/*
 * XREFs of ?Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x180004758
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x180004F8C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x180006B18 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x180004810 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180205CF0 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasTexture::Create(struct CD3DDeviceLevel1 *a1, unsigned int a2, struct CAtlasTexture **a3)
{
  _QWORD *v6; // rax
  unsigned int v7; // ecx
  _QWORD *v8; // rbx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  void *v13; // rcx

  v6 = HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
  v8 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x28uLL);
    *v8 = &CAtlasTexture::`vftable';
    v8[1] = 0LL;
    v8[2] = 0LL;
    *((_DWORD *)v8 + 6) = 0;
    *((_DWORD *)v8 + 7) = 0;
    *((_DWORD *)v8 + 8) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v9 = CAtlasTexture::Initialize((CAtlasTexture *)v8, a1, a2);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1Bu);
      *v8 = &CAtlasTexture::`vftable';
      CAtlasTexture::DestroyResources((CAtlasTexture *)v8);
      v13 = (void *)v8[2];
      if ( v13 )
        WPF::ProcessHeapImpl::Free(v13);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v8 + 1);
      WPF::ProcessHeapImpl::Free(v8);
    }
    else
    {
      *a3 = (struct CAtlasTexture *)v8;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x19u);
  }
  return v11;
}
