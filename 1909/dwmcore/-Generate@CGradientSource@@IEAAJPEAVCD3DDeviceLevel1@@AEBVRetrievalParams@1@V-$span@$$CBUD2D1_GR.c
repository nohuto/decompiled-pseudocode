/*
 * XREFs of ?Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180018878
 * Callers:
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180018778 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 * Callees:
 *     ?Update@CAtlasImageSource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x180018A34 (-Update@CAtlasImageSource@@QEAAJV-$span@$$CBE$0-0@gsl@@_N@Z.c)
 *     ?Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180018BA4 (-Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@2@AEBQEBVCD3DDeviceLevel1@@@Z @ 0x1800196AC (-find@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3DDevi.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2600 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?CreateGradientStopCollection@CD2DContext@@QEAAJV?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@W4D2D1_GAMMA@@W4D2D1_EXTEND_MODE@@PEAPEAUID2D1GradientStopCollection@@@Z @ 0x18015EA98 (-CreateGradientStopCollection@CD2DContext@@QEAAJV-$span@$$CBUD2D1_GRADIENT_STOP@@$0-0@gsl@@W4D2D.c)
 */

__int64 __fastcall CGradientSource::Generate(
        struct IAtlasEntryOwner *a1,
        struct CD3DDeviceLevel1 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int8 a7,
        int a8)
{
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  struct CAtlasImageSource **v16; // rsi
  int v17; // eax
  unsigned int v18; // ecx
  CD3DDeviceManager *v19; // rcx
  void *v20; // rbx
  int D2DFactoryNoRef; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  struct CD2DFactory *v25; // rsi
  __int64 v26; // r8
  int v27; // eax
  unsigned int v28; // ecx
  struct CD2DFactory **v29; // rax
  _QWORD *v30; // rax
  int GradientStopCollection; // eax
  __int64 v33; // rdx
  unsigned int v34; // ecx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  __int64 v38; // rdx
  unsigned int v39; // ecx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // eax
  unsigned int v49; // ecx
  struct CD2DFactory *v50; // rbx
  struct CD2DFactory *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  struct CD2DFactory *v55[2]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v56[2]; // [rsp+80h] [rbp-39h] BYREF
  __int128 v57; // [rsp+90h] [rbp-29h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-19h]

  v55[0] = a2;
  *(_QWORD *)&v57 = a4;
  v11 = 0;
  std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::find(
    (char *)a1 + 8,
    v56,
    v55);
  v15 = v56[0];
  v16 = (struct CAtlasImageSource **)(v56[0] + 40LL);
  if ( !*(_QWORD *)(v56[0] + 40LL) )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v56[0] + 40LL);
    v17 = CAtlasImageSource::Create(a1, a2, v16);
    v11 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x81u, 0LL);
      return v11;
    }
  }
  if ( *(_QWORD *)a3 && !**(_QWORD **)a3 )
  {
    v20 = DefaultHeap::Alloc(0x2000uLL);
    if ( !v20 )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, 0LL, 0, -2147024882, 0x8Bu, 0LL);
      return v11;
    }
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v19, v55);
    v11 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, D2DFactoryNoRef, 0x8Eu, 0LL);
    }
    else
    {
      v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, unsigned int, int, int, _DWORD, int, void *, int))(**((_QWORD **)v55[0] + 4) + 40LL))(
              *((_QWORD *)v55[0] + 4),
              *(_QWORD *)(v57 + 8),
              *(unsigned int *)v57,
              a7 ^ 1u,
              1,
              (unsigned int)a5 + 1,
              1,
              a8,
              0,
              87,
              v20,
              0x2000);
      v11 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x9Bu, 0LL);
      }
      else
      {
        v25 = *v16;
        v55[0] = v25;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v55);
        LOBYTE(v26) = a6;
        v56[0] = 0x2000LL;
        v56[1] = v20;
        v27 = CAtlasImageSource::Update(v25, v56, v26);
        v11 = v27;
        if ( v27 >= 0 )
        {
          v29 = *(struct CD2DFactory ***)a3;
          v55[0] = 0LL;
          *v29 = v25;
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v55);
          operator delete(v20);
          goto LABEL_10;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xA2u, 0LL);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v55);
      }
    }
    operator delete(v20);
    return v11;
  }
LABEL_10:
  v30 = *(_QWORD **)(a3 + 8);
  if ( v30 && !*v30 )
  {
    v56[0] = 0LL;
    v57 = *(_OWORD *)v57;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v56, v12, v13, v14);
    GradientStopCollection = CD2DContext::CreateGradientStopCollection(
                               (_DWORD)a2,
                               (unsigned int)&v57,
                               a5,
                               a8,
                               (__int64)v56);
    v11 = GradientStopCollection;
    if ( GradientStopCollection < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, GradientStopCollection, 0xB1u, 0LL);
      goto LABEL_32;
    }
    v55[0] = 0LL;
    v57 = 0uLL;
    if ( a7 )
    {
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v55, v33, v35, v36);
      v37 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD, struct CD2DFactory **))(**((_QWORD **)a2 + 29)
                                                                                                 + 80LL))(
              *((_QWORD *)a2 + 29),
              &v57,
              0LL,
              v56[0],
              v55);
      v11 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v37, 0xBDu, 0LL);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v55, v42, v43, v44);
LABEL_32:
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v56, v45, v46, v47);
        return v11;
      }
    }
    else
    {
      v58 = 0LL;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v55, v33, v35, v36);
      v48 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD, struct CD2DFactory **))(**((_QWORD **)a2 + 29)
                                                                                                 + 88LL))(
              *((_QWORD *)a2 + 29),
              &v57,
              0LL,
              v56[0],
              v55);
      v11 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0xCBu, 0LL);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v55, v52, v53, v54);
        goto LABEL_32;
      }
    }
    v50 = v55[0];
    v55[0] = 0LL;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v55, v38, v40, v41);
    v51 = *(struct CD2DFactory **)(v15 + 48);
    if ( v51 != v50 )
    {
      if ( v50 )
      {
        (*(void (__fastcall **)(struct CD2DFactory *))(*(_QWORD *)v50 + 8LL))(v50);
        v51 = *(struct CD2DFactory **)(v15 + 48);
      }
      *(_QWORD *)(v15 + 48) = v50;
      if ( v51 )
        (*(void (__fastcall **)(struct CD2DFactory *))(*(_QWORD *)v51 + 16LL))(v51);
    }
    **(_QWORD **)(a3 + 8) = v50;
    goto LABEL_32;
  }
  return v11;
}
