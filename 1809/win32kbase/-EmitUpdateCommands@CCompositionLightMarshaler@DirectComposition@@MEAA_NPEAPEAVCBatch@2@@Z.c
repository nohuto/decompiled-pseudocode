/*
 * XREFs of ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00734A0
 * Callers:
 *     ?EmitUpdateCommands@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00730D0 (-EmitUpdateCommands@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitUpdateCommands@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0073280 (-EmitUpdateCommands@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitUpdateCommands@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0073300 (-EmitUpdateCommands@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0178460 (-EmitUpdateCommands@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitAddTargets@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@W4Enum@CompositionLightProperty@@@Z @ 0x1C0073520 (-EmitAddTargets@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@W4Enum@Compo.c)
 *     ??$EmitClearTargets@UMILCMD_COMPOSITIONLIGHT_CLEARTARGETS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@W4CompositionLightMarshalerFlag@01@W4MILCMD@@@Z @ 0x1C00736CC (--$EmitClearTargets@UMILCMD_COMPOSITIONLIGHT_CLEARTARGETS@@@CCompositionLightMarshaler@DirectCom.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_458179f7e7760ae58d38049705b55e9e___ @ 0x1C0170F88 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_458179f7e7760ae58d38049705b55e9.c)
 */

char __fastcall DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  char *v7; // rcx
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned __int8)DirectComposition::CCompositionLightMarshaler::EmitClearTargets<MILCMD_COMPOSITIONLIGHT_CLEARTARGETS>() )
    return 0;
  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v8) )
      return 0;
    v7 = (char *)v8;
    *(_DWORD *)v8 = 12;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 1) = 89;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  if ( !(unsigned __int8)DirectComposition::CCompositionLightMarshaler::EmitAddTargets(this, a2, 0LL) )
    return 0;
  v4 = 1;
  if ( !(unsigned __int8)DirectComposition::CCompositionLightMarshaler::EmitAddTargets(this, a2, 1LL) )
    return 0;
  v5 = *((_DWORD *)this + 4);
  v8 = this;
  if ( (v5 & 0x80u) != 0 )
  {
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_458179f7e7760ae58d38049705b55e9e___(
                            this,
                            a2,
                            &v8) )
    {
      *((_DWORD *)this + 4) &= ~0x80u;
      return v4;
    }
    return 0;
  }
  return v4;
}
