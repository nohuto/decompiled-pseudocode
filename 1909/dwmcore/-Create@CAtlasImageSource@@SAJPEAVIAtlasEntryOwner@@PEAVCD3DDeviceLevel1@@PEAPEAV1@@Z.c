/*
 * XREFs of ?Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180018BA4
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180018878 (-Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GR.c)
 * Callees:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x180018C7C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CAtlasImageSource::Create(
        struct IAtlasEntryOwner *a1,
        struct CD3DDeviceLevel1 *a2,
        struct CAtlasImageSource **a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  unsigned int v8; // ecx
  int GradientStrip; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  _DWORD *v13; // [rsp+58h] [rbp+20h] BYREF

  v6 = DefaultHeap::Alloc(0x40uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 0;
    *(_QWORD *)v6 = &CAtlasImageSource::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v6 + 2) = &CAtlasImageSource::`vftable'{for `IImageSource'};
    *((_QWORD *)v6 + 3) = &CAtlasImageSource::`vftable'{for `IBitmapRealization'};
    *((_QWORD *)v6 + 4) = 0LL;
    v6[12] = -1;
    *((_QWORD *)v6 + 5) = a1;
    *((_WORD *)v6 + 28) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  v13 = v7;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v13);
  if ( v7 )
  {
    GradientStrip = CAtlasManager::AllocateGradientStrip(
                      (CAtlasManager *)(((unsigned __int64)a2 + 568) & -(__int64)(a2 != 0LL)),
                      (struct CAtlasEntry *)(v7 + 8));
    v11 = GradientStrip;
    if ( GradientStrip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, GradientStrip, 0x27u, 0LL);
    }
    else
    {
      v13 = 0LL;
      *a3 = (struct CAtlasImageSource *)v7;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x25u, 0LL);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v13);
  return v11;
}
