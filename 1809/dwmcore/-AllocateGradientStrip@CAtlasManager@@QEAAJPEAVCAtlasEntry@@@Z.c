/*
 * XREFs of ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x180004F8C
 * Callers:
 *     ?Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180004EA8 (-Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x180004758 (-Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800069B0 (--$_Emplace_reallocate@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@st.c)
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x180006B80 (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180205CF0 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasManager::AllocateGradientStrip(CAtlasTexture ***this, struct CAtlasEntry *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rax
  int v6; // esi
  CAtlasTexture **i; // rdx
  CAtlasTexture *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  CAtlasTexture *v14; // rbx
  CAtlasTexture **v15; // rdx
  CAtlasTexture *v16; // rdi
  unsigned int v17; // eax
  void *v18; // rcx
  CAtlasTexture *v19; // rcx
  void *v20; // rcx
  CAtlasTexture *v21; // rbx
  CAtlasTexture *v22; // rcx
  void *v23; // rcx
  struct CAtlasTexture *v24; // [rsp+38h] [rbp-18h] BYREF
  char v25; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+18h]
  CAtlasTexture *v27; // [rsp+70h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (__int64)(this + 35);
  if ( !this )
    v5 = 848LL;
  v6 = *(_DWORD *)v5;
  if ( *(int *)v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v6, 0x12u);
  }
  else
  {
    for ( i = *this; i != this[1]; ++i )
    {
      v8 = *i;
      if ( *((_DWORD *)*i + 7) )
      {
        if ( v8 )
          goto LABEL_8;
        break;
      }
      v17 = *((_DWORD *)v8 + 6);
      if ( v4 > v17 )
        v17 = v4;
      v4 = v17;
    }
    v27 = 0LL;
    v24 = 0LL;
    v25 = 1;
    v12 = CAtlasManager::DetermineIdealAtlasSize(v4);
    v6 = CAtlasTexture::Create((struct CD3DDeviceLevel1 *)(this - 71), v12, &v24);
    if ( v25 )
    {
      v13 = (unsigned int)v24;
      v14 = v27;
      v27 = v24;
      if ( v14 )
      {
        *(_QWORD *)v14 = &CAtlasTexture::`vftable';
        CAtlasTexture::DestroyResources(v14);
        v18 = (void *)*((_QWORD *)v14 + 2);
        if ( v18 )
          WPF::ProcessHeapImpl::Free(v18);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((char *)v14 + 8);
        WPF::ProcessHeapImpl::Free(v14);
      }
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v6, 0x27u);
      v21 = v27;
      if ( v27 )
      {
        v22 = v27;
        *(_QWORD *)v27 = &CAtlasTexture::`vftable';
        CAtlasTexture::DestroyResources(v22);
        v23 = (void *)*((_QWORD *)v21 + 2);
        if ( v23 )
          WPF::ProcessHeapImpl::Free(v23);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((char *)v21 + 8);
        WPF::ProcessHeapImpl::Free(v21);
      }
      return (unsigned int)v6;
    }
    v15 = this[1];
    v8 = v27;
    if ( this[2] == v15 )
    {
      std::vector<std::unique_ptr<CAtlasTexture>>::_Emplace_reallocate<std::unique_ptr<CAtlasTexture>>(this, v15, &v27);
    }
    else
    {
      v27 = 0LL;
      *v15 = v8;
      ++this[1];
    }
    v16 = v27;
    if ( v27 )
    {
      v19 = v27;
      *(_QWORD *)v27 = &CAtlasTexture::`vftable';
      CAtlasTexture::DestroyResources(v19);
      v20 = (void *)*((_QWORD *)v16 + 2);
      if ( v20 )
        WPF::ProcessHeapImpl::Free(v20);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((char *)v16 + 8);
      WPF::ProcessHeapImpl::Free(v16);
    }
LABEL_8:
    v9 = 0LL;
    if ( !*((_DWORD *)v8 + 6) )
LABEL_32:
      ModuleFailFastForHRESULT(2291662981LL, retaddr);
    v10 = *((_QWORD *)v8 + 2);
    while ( *(_QWORD *)(v10 + 8 * v9) )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *((_DWORD *)v8 + 6) )
        goto LABEL_32;
    }
    --*((_DWORD *)v8 + 7);
    *(_QWORD *)(v10 + 8 * v9) = a2;
    if ( *(_QWORD *)a2 )
      ModuleFailFastForHRESULT(2291674884LL, retaddr);
    *(_QWORD *)a2 = v8;
    *((_DWORD *)a2 + 4) = v9 + 1;
  }
  return (unsigned int)v6;
}
