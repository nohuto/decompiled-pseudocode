/*
 * XREFs of ?ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTYSET@@@Z @ 0x1800DF37C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x1800DFD50 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetPropertySet(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETPROPERTYSET *a3)
{
  unsigned int v3; // ebx
  __int64 Resource; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( *((_QWORD *)this + 11) )
  {
    v3 = -2003303422;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303422, 0x74u);
  }
  else
  {
    Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x74u);
    v7 = Resource;
    if ( Resource )
    {
      if ( *((_QWORD *)this + 11) != Resource )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
        v9 = *((_QWORD *)this + 11);
        *((_QWORD *)this + 11) = v7;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v9);
      }
      if ( CEffectBrush::HasValidTemplate(this) )
        *(_QWORD *)(*((_QWORD *)this + 11) + 72LL) = (char *)this + 72;
    }
    else
    {
      v3 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0x7Au);
    }
  }
  return v3;
}
