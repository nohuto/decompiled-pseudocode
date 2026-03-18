/*
 * XREFs of ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x180018C7C
 * Callers:
 *     ?Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180018BA4 (-Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x180018478 (-Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18001A03C (--$_Emplace_reallocate@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@st.c)
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x18001A1AC (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180164AA4 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasManager::AllocateGradientStrip(CAtlasTexture ***this, struct CAtlasEntry *a2, __int64 a3)
{
  unsigned int v5; // ecx
  __int64 v6; // rax
  int v7; // esi
  CAtlasTexture **i; // rdx
  CAtlasTexture *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  CAtlasTexture *v15; // rbx
  CAtlasTexture **v16; // rdx
  CAtlasTexture *v17; // rdi
  unsigned int v18; // eax
  void *v19; // rcx
  CAtlasTexture *v20; // rcx
  void *v21; // rcx
  CAtlasTexture *v22; // rbx
  CAtlasTexture *v23; // rcx
  void *v24; // rcx
  struct CAtlasTexture *v25; // [rsp+38h] [rbp-18h] BYREF
  char v26; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+28h]
  CAtlasTexture *v28; // [rsp+80h] [rbp+30h] BYREF

  v5 = 0;
  v6 = (__int64)(this + 39);
  if ( !this )
    v6 = 880LL;
  v7 = *(_DWORD *)v6;
  if ( *(int *)v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v7, 0x12u, 0LL);
  }
  else
  {
    for ( i = *this; i != this[1]; ++i )
    {
      v9 = *i;
      if ( *((_DWORD *)*i + 7) )
      {
        if ( v9 )
          goto LABEL_8;
        break;
      }
      v18 = *((_DWORD *)v9 + 6);
      if ( v5 > v18 )
        v18 = v5;
      v5 = v18;
    }
    v28 = 0LL;
    v25 = 0LL;
    v26 = 1;
    v13 = CAtlasManager::DetermineIdealAtlasSize(v5);
    v7 = CAtlasTexture::Create((struct CD3DDeviceLevel1 *)(this - 71), v13, &v25);
    if ( v26 )
    {
      v14 = (unsigned int)v25;
      v15 = v28;
      v28 = v25;
      if ( v15 )
      {
        *(_QWORD *)v15 = &CAtlasTexture::`vftable';
        CAtlasTexture::DestroyResources(v15);
        v19 = (void *)*((_QWORD *)v15 + 2);
        if ( v19 )
          operator delete(v19);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)v15 + 8);
        operator delete(v15, 0x28uLL);
      }
    }
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v7, 0x27u, 0LL);
      v22 = v28;
      if ( v28 )
      {
        v23 = v28;
        *(_QWORD *)v28 = &CAtlasTexture::`vftable';
        CAtlasTexture::DestroyResources(v23);
        v24 = (void *)*((_QWORD *)v22 + 2);
        if ( v24 )
          operator delete(v24);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)v22 + 8);
        operator delete(v22, 0x28uLL);
      }
      return (unsigned int)v7;
    }
    v16 = this[1];
    v9 = v28;
    if ( this[2] == v16 )
    {
      std::vector<std::unique_ptr<CAtlasTexture>>::_Emplace_reallocate<std::unique_ptr<CAtlasTexture>>(this, v16, &v28);
    }
    else
    {
      v28 = 0LL;
      *v16 = v9;
      ++this[1];
    }
    v17 = v28;
    if ( v28 )
    {
      v20 = v28;
      *(_QWORD *)v28 = &CAtlasTexture::`vftable';
      CAtlasTexture::DestroyResources(v20);
      v21 = (void *)*((_QWORD *)v17 + 2);
      if ( v21 )
        operator delete(v21);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)v17 + 8);
      operator delete(v17, 0x28uLL);
    }
LABEL_8:
    v10 = 0LL;
    if ( !*((_DWORD *)v9 + 6) )
LABEL_34:
      ModuleFailFastForHRESULT(2291662981LL, retaddr, a3);
    v11 = *((_QWORD *)v9 + 2);
    while ( *(_QWORD *)(v11 + 8 * v10) )
    {
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *((_DWORD *)v9 + 6) )
        goto LABEL_34;
    }
    --*((_DWORD *)v9 + 7);
    *(_QWORD *)(v11 + 8 * v10) = a2;
    if ( *(_QWORD *)a2 )
      ModuleFailFastForHRESULT(2291674884LL, retaddr, a3);
    *(_QWORD *)a2 = v9;
    *((_DWORD *)a2 + 4) = v10 + 1;
  }
  return (unsigned int)v7;
}
