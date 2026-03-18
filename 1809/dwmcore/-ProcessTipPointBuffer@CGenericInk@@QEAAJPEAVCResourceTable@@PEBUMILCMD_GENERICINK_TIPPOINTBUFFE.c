/*
 * XREFs of ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x180199830
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18006DA48 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180089DE8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingK.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z @ 0x180198B7C (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessTipPointBuffer(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_GENERICINK_TIPPOINTBUFFER *a3)
{
  unsigned int v6; // edi
  CMILRefCountBase **v7; // rbx
  unsigned int v8; // edx
  __int64 v9; // rcx
  struct CSharedSection *Resource; // rdi
  int v11; // eax
  __int64 v12; // rcx

  v6 = 0;
  wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsageToService((__int64)this, (__int64)a2, (__int64)a3);
  v7 = (CMILRefCountBase **)((char *)this + 216);
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(v7);
  v8 = *((_DWORD *)a3 + 2);
  if ( v8 )
  {
    Resource = (struct CSharedSection *)CResourceTable::GetResource((__int64)a2, v8, 0x88u);
    if ( Resource )
    {
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(v7);
      v11 = CGenericInkTipPointSource::Create(
              Resource,
              *((_DWORD *)a3 + 3),
              *((_DWORD *)a3 + 4),
              *((_DWORD *)a3 + 5),
              v7);
      v6 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xAFu);
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0xAAu);
    }
  }
  return v6;
}
