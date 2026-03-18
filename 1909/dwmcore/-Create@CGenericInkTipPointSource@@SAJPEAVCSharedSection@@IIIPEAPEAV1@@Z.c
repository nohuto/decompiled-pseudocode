/*
 * XREFs of ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z @ 0x180213480
 * Callers:
 *     ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x1802146E4 (-ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CA224 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z @ 0x18021419C (-Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z.c)
 */

__int64 __fastcall CGenericInkTipPointSource::Create(
        struct CSharedSection *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct CGenericInkTipPointSource **a5)
{
  void *v9; // rax
  __int64 v10; // rcx
  void *v11; // rbx
  signed int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  CDirtyRegion *v16; // [rsp+30h] [rbp-18h] BYREF

  v9 = DefaultHeap::Alloc(0x20uLL);
  v11 = v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x20uLL);
    *((_DWORD *)v11 + 2) = 0;
    *(_QWORD *)v11 = &CGenericInkTipPointSource::`vftable';
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 3) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v16 = (CDirtyRegion *)v11;
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
    v12 = CGenericInkTipPointSource::Initialize((CGenericInkTipPointSource *)v11, a1, a2, a3, a4);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x12u, 0LL);
    }
    else
    {
      v16 = 0LL;
      *a5 = (struct CGenericInkTipPointSource *)v11;
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x8007000E, 0x11u, 0LL);
  }
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v16);
  return v14;
}
