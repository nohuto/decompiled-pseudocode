/*
 * XREFs of ?ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETPROPERTYSET@@@Z @ 0x1800392C4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x180038D84 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetPropertySet(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EFFECTBRUSH_SETPROPERTYSET *a3)
{
  __int64 Resource; // rax
  unsigned int v5; // ecx
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 12) )
  {
    v7 = -2003303422;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303422, 0x70u, 0LL);
  }
  else
  {
    Resource = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 132LL);
    v6 = Resource;
    if ( Resource )
    {
      if ( *((_QWORD *)this + 12) != Resource )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
        v9 = *((_QWORD *)this + 12);
        *((_QWORD *)this + 12) = v6;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v9);
      }
      if ( CEffectBrush::HasValidTemplate(this) )
        *(_QWORD *)(*((_QWORD *)this + 12) + 72LL) = (char *)this + 80;
      return 0;
    }
    else
    {
      v7 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003303421, 0x76u, 0LL);
    }
  }
  return v7;
}
