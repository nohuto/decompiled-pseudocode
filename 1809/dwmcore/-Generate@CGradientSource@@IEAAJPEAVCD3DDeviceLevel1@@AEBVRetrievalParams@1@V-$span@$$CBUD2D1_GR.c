/*
 * XREFs of ?Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N3W4D2D1_EXTEND_MODE@@@Z @ 0x180004B70
 * Callers:
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180004A7C (-Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 * Callees:
 *     ?Update@CAtlasImageSource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x180004D38 (-Update@CAtlasImageSource@@QEAAJV-$span@$$CBE$0-0@gsl@@_N@Z.c)
 *     ?Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180004EA8 (-Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@2@AEBQEBVCD3DDeviceLevel1@@@Z @ 0x1800059C4 (-find@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3DDevi.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientSource::Generate(
        struct IAtlasEntryOwner *a1,
        struct CD3DDeviceLevel1 *a2,
        __int64 a3,
        unsigned int *a4,
        unsigned __int8 a5,
        char a6,
        int a7)
{
  unsigned int v11; // esi
  __int64 v12; // rbx
  struct CAtlasImageSource **v13; // rdi
  int v14; // eax
  unsigned int v15; // ecx
  CD3DDeviceManager *v16; // rcx
  void *v17; // r14
  int D2DFactoryNoRef; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  struct CD2DFactory *v22; // rdi
  __int64 v23; // r8
  int v24; // eax
  unsigned int v25; // ecx
  struct CD2DFactory **v26; // rax
  _QWORD *v27; // rax
  unsigned int v29; // ecx
  int v30; // edi
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rdi
  _QWORD *v40; // rax
  __int64 v41; // rcx
  struct CD2DFactory *v42[2]; // [rsp+70h] [rbp-51h] BYREF
  __int128 v43; // [rsp+80h] [rbp-41h] BYREF
  __int128 v44; // [rsp+90h] [rbp-31h]
  __int128 v45; // [rsp+A0h] [rbp-21h] BYREF

  v42[0] = a2;
  v11 = 0;
  std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::find(
    (char *)a1 + 8,
    &v43,
    v42);
  v12 = v43;
  v13 = (struct CAtlasImageSource **)(v43 + 40);
  if ( !*(_QWORD *)(v43 + 40) )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v43 + 40);
    v14 = CAtlasImageSource::Create(a1, a2, v13);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x80u);
      return v11;
    }
  }
  if ( *(_QWORD *)a3 && !**(_QWORD **)a3 )
  {
    v17 = HeapAlloc(WPF::g_processHeap, 0, 0x2000uLL);
    if ( !v17 )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, 0LL, 0, -2147024882, 0x8Au);
      return v11;
    }
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v16, v42);
    v11 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, D2DFactoryNoRef, 0x8Du);
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, unsigned int, int, int, _DWORD, int, void *, int))(**((_QWORD **)v42[0] + 4) + 40LL))(
              *((_QWORD *)v42[0] + 4),
              *((_QWORD *)a4 + 1),
              *a4,
              0LL,
              1,
              (unsigned int)a5 + 1,
              1,
              a7,
              0,
              87,
              v17,
              0x2000);
      v11 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x9Au);
      }
      else
      {
        v22 = *v13;
        v42[0] = v22;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v42);
        LOBYTE(v23) = a6;
        *(_QWORD *)&v43 = 0x2000LL;
        *((_QWORD *)&v43 + 1) = v17;
        v45 = v43;
        v24 = CAtlasImageSource::Update(v22, &v45, v23);
        v11 = v24;
        if ( v24 >= 0 )
        {
          v26 = *(struct CD2DFactory ***)a3;
          v42[0] = 0LL;
          *v26 = v22;
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v42);
          WPF::ProcessHeapImpl::Free(v17);
          goto LABEL_10;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xA1u);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v42);
      }
    }
    WPF::ProcessHeapImpl::Free(v17);
    return v11;
  }
LABEL_10:
  v27 = *(_QWORD **)(a3 + 8);
  if ( v27 && !*v27 )
  {
    v44 = *(_OWORD *)a4;
    v42[0] = 0LL;
    *(_QWORD *)&v43 = 0LL;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v42);
    v42[0] = 0LL;
    v30 = *((_DWORD *)a2 + 212);
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v30, 0x868u);
    }
    else
    {
      v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, struct CD2DFactory **))(**((_QWORD **)a2 + 29)
                                                                                                  + 72LL))(
              *((_QWORD *)a2 + 29),
              *((_QWORD *)&v44 + 1),
              (unsigned int)v44,
              a5,
              a7,
              v42);
      v30 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x86Eu);
    }
    v33 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(a2, (unsigned int)v30, 0LL);
    v11 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0xB0u);
    }
    else
    {
      v35 = v43;
      v45 = 0uLL;
      if ( (_QWORD)v43 )
      {
        *(_QWORD *)&v43 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      v36 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, struct CD2DFactory *, __int128 *))(**((_QWORD **)a2 + 29) + 80LL))(
              *((_QWORD *)a2 + 29),
              &v45,
              0LL,
              v42[0],
              &v43);
      v11 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0xB9u);
      }
      else
      {
        v38 = *(_QWORD *)(v12 + 48);
        v39 = v43;
        if ( v38 != (_QWORD)v43 )
        {
          if ( (_QWORD)v43 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v43 + 8LL))(v43);
            v38 = *(_QWORD *)(v12 + 48);
          }
          *(_QWORD *)(v12 + 48) = v39;
          if ( v38 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
          v39 = v43;
        }
        v40 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)&v43 = 0LL;
        *v40 = v39;
      }
    }
    v41 = v43;
    if ( (_QWORD)v43 )
    {
      *(_QWORD *)&v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v42);
  }
  return v11;
}
