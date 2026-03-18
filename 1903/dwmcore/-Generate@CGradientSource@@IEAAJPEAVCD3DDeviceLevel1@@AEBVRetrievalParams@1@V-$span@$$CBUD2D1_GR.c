/*
 * XREFs of ?Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180019FA8
 * Callers:
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180019EA8 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 * Callees:
 *     ?Update@CAtlasImageSource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x18001A164 (-Update@CAtlasImageSource@@QEAAJV-$span@$$CBE$0-0@gsl@@_N@Z.c)
 *     ?Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18001A2D4 (-Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@2@AEBQEBVCD3DDeviceLevel1@@@Z @ 0x18001ADDC (-find@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3DDevi.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2370 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CreateGradientStopCollection@CD2DContext@@QEAAJV?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@W4D2D1_GAMMA@@W4D2D1_EXTEND_MODE@@PEAPEAUID2D1GradientStopCollection@@@Z @ 0x180160188 (-CreateGradientStopCollection@CD2DContext@@QEAAJV-$span@$$CBUD2D1_GRADIENT_STOP@@$0-0@gsl@@W4D2D.c)
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
  __int64 v12; // rdi
  struct CAtlasImageSource **v13; // rsi
  int v14; // eax
  unsigned int v15; // ecx
  CD3DDeviceManager *v16; // rcx
  void *v17; // rbx
  int D2DFactoryNoRef; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  struct CD2DFactory *v22; // rsi
  __int64 v23; // r8
  int v24; // eax
  unsigned int v25; // ecx
  struct CD2DFactory **v26; // rax
  _QWORD *v27; // rax
  int GradientStopCollection; // eax
  unsigned int v30; // ecx
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  struct CD2DFactory *v35; // rbx
  struct CD2DFactory *v36; // rcx
  struct CD2DFactory *v37[2]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v38[2]; // [rsp+80h] [rbp-39h] BYREF
  __int128 v39; // [rsp+90h] [rbp-29h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-19h]

  v37[0] = a2;
  *(_QWORD *)&v39 = a4;
  v11 = 0;
  std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::find(
    (char *)a1 + 8,
    v38,
    v37);
  v12 = v38[0];
  v13 = (struct CAtlasImageSource **)(v38[0] + 40LL);
  if ( !*(_QWORD *)(v38[0] + 40LL) )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v38[0] + 40LL);
    v14 = CAtlasImageSource::Create(a1, a2, v13);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x81u, 0LL);
      return v11;
    }
  }
  if ( *(_QWORD *)a3 && !**(_QWORD **)a3 )
  {
    v17 = DefaultHeap::Alloc(0x2000uLL);
    if ( !v17 )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, 0LL, 0, -2147024882, 0x8Bu, 0LL);
      return v11;
    }
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v16, v37);
    v11 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, D2DFactoryNoRef, 0x8Eu, 0LL);
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, unsigned int, int, int, _DWORD, int, void *, int))(**((_QWORD **)v37[0] + 4) + 40LL))(
              *((_QWORD *)v37[0] + 4),
              *(_QWORD *)(v39 + 8),
              *(unsigned int *)v39,
              a7 ^ 1u,
              1,
              (unsigned int)a5 + 1,
              1,
              a8,
              0,
              87,
              v17,
              0x2000);
      v11 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x9Bu, 0LL);
      }
      else
      {
        v22 = *v13;
        v37[0] = v22;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v37);
        LOBYTE(v23) = a6;
        v38[0] = 0x2000LL;
        v38[1] = v17;
        v24 = CAtlasImageSource::Update(v22, v38, v23);
        v11 = v24;
        if ( v24 >= 0 )
        {
          v26 = *(struct CD2DFactory ***)a3;
          v37[0] = 0LL;
          *v26 = v22;
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v37);
          operator delete(v17);
          goto LABEL_10;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xA2u, 0LL);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v37);
      }
    }
    operator delete(v17);
    return v11;
  }
LABEL_10:
  v27 = *(_QWORD **)(a3 + 8);
  if ( v27 && !*v27 )
  {
    v38[0] = 0LL;
    v39 = *(_OWORD *)v39;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v38);
    GradientStopCollection = CD2DContext::CreateGradientStopCollection(
                               (_DWORD)a2,
                               (unsigned int)&v39,
                               a5,
                               a8,
                               (__int64)v38);
    v11 = GradientStopCollection;
    if ( GradientStopCollection < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, GradientStopCollection, 0xB1u, 0LL);
      goto LABEL_32;
    }
    v37[0] = 0LL;
    v39 = 0uLL;
    if ( a7 )
    {
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v37);
      v31 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD, struct CD2DFactory **))(**((_QWORD **)a2 + 29)
                                                                                                 + 80LL))(
              *((_QWORD *)a2 + 29),
              &v39,
              0LL,
              v38[0],
              v37);
      v11 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0xBDu, 0LL);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v37);
LABEL_32:
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v38);
        return v11;
      }
    }
    else
    {
      v40 = 0LL;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v37);
      v33 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD, struct CD2DFactory **))(**((_QWORD **)a2 + 29)
                                                                                                 + 88LL))(
              *((_QWORD *)a2 + 29),
              &v39,
              0LL,
              v38[0],
              v37);
      v11 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0xCBu, 0LL);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v37);
        goto LABEL_32;
      }
    }
    v35 = v37[0];
    v37[0] = 0LL;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v37);
    v36 = *(struct CD2DFactory **)(v12 + 48);
    if ( v36 != v35 )
    {
      if ( v35 )
      {
        (*(void (__fastcall **)(struct CD2DFactory *))(*(_QWORD *)v35 + 8LL))(v35);
        v36 = *(struct CD2DFactory **)(v12 + 48);
      }
      *(_QWORD *)(v12 + 48) = v35;
      if ( v36 )
        (*(void (__fastcall **)(struct CD2DFactory *))(*(_QWORD *)v36 + 16LL))(v36);
    }
    **(_QWORD **)(a3 + 8) = v35;
    goto LABEL_32;
  }
  return v11;
}
