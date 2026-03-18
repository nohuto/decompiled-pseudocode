/*
 * XREFs of ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x180006B18
 * Callers:
 *     ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x180036CCC (-CompactAtlases@CAtlasManager@@QEAAXXZ.c)
 * Callees:
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x180004758 (-Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x180006B80 (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x180205B20 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180205CF0 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x180205E3C (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 */

__int64 __fastcall CAtlasManager::CompactSingleAtlas(const struct CAtlasTexture ***this, bool *a2)
{
  const struct CAtlasTexture **v2; // rsi
  int v4; // edi
  bool v5; // r14
  unsigned int v6; // eax
  __int64 v7; // r9
  unsigned int v8; // r8d
  unsigned int v10; // ecx
  CAtlasTexture *v11; // rbx
  void *v12; // rcx
  const struct CAtlasTexture *v13; // rdx
  CAtlasTexture *v14; // rcx
  CAtlasTexture *v15; // rbx
  CAtlasTexture *v16; // rcx
  void *v17; // rcx
  struct CAtlasTexture *v18; // [rsp+38h] [rbp-18h] BYREF
  char v19; // [rsp+40h] [rbp-10h]
  unsigned int v20; // [rsp+80h] [rbp+30h] BYREF
  CAtlasTexture *v21; // [rsp+88h] [rbp+38h]

  v2 = *this;
  v4 = 0;
  v5 = 0;
  v6 = CAtlasManager::DetermineIdealAtlasSize(*((_DWORD *)**this + 6) - *((_DWORD *)**this + 7));
  if ( v6 < v8 )
  {
    v21 = 0LL;
    v18 = 0LL;
    v19 = 1;
    v4 = CAtlasTexture::Create((struct CD3DDeviceLevel1 *)(v7 - 568), v6, &v18);
    if ( v19 )
    {
      v10 = (unsigned int)v18;
      v11 = v21;
      v21 = v18;
      if ( v11 )
      {
        *(_QWORD *)v11 = &CAtlasTexture::`vftable';
        CAtlasTexture::DestroyResources(v11);
        v12 = (void *)*((_QWORD *)v11 + 2);
        if ( v12 )
          WPF::ProcessHeapImpl::Free(v12);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((char *)v11 + 8);
        WPF::ProcessHeapImpl::Free(v11);
      }
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v4, 0x7Bu);
    }
    else
    {
      v13 = *v2;
      v20 = 0;
      CAtlasTexture::CopyFrom(v21, v13, &v20);
      v14 = *v2;
      v5 = 1;
      *v2 = v21;
      v21 = v14;
      CAtlasTexture::PurgeAndNotify(v14);
    }
    v15 = v21;
    if ( v21 )
    {
      v16 = v21;
      *(_QWORD *)v21 = &CAtlasTexture::`vftable';
      CAtlasTexture::DestroyResources(v16);
      v17 = (void *)*((_QWORD *)v15 + 2);
      if ( v17 )
        WPF::ProcessHeapImpl::Free(v17);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((char *)v15 + 8);
      WPF::ProcessHeapImpl::Free(v15);
    }
  }
  *a2 = v5;
  return (unsigned int)v4;
}
