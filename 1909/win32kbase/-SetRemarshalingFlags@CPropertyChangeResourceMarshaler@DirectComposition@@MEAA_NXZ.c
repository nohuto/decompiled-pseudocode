/*
 * XREFs of ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A717C
 * Callers:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A6D40 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CPropertySetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A8230 (-SetRemarshalingFlags@CPropertySetMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CDropShadowMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01AC240 (-SetRemarshalingFlags@CDropShadowMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CProjectedShadowCasterMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01ADAB0 (-SetRemarshalingFlags@CProjectedShadowCasterMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01ADC20 (-SetRemarshalingFlags@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CProjectedShadowSceneMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01ADC60 (-SetRemarshalingFlags@CProjectedShadowSceneMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AF020 (-SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AF770 (-SetRemarshalingFlags@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CParticleBehaviorsMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B5B20 (-SetRemarshalingFlags@CParticleBehaviorsMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01B71A0 (-SetRemarshalingFlags@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CEffectGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BAB20 (-SetRemarshalingFlags@CEffectGroupMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BAB90 (-SetRemarshalingFlags@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTranslateTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BAC40 (-SetRemarshalingFlags@CTranslateTransform3DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CScaleTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BACB0 (-SetRemarshalingFlags@CScaleTransform3DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CScaleTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BAD50 (-SetRemarshalingFlags@CScaleTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSkewTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BB060 (-SetRemarshalingFlags@CSkewTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BB0E0 (-SetRemarshalingFlags@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTranslateTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BB130 (-SetRemarshalingFlags@CTranslateTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BB2C0 (-SetRemarshalingFlags@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CMatrixTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BB490 (-SetRemarshalingFlags@CMatrixTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CManipulationTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BB6F0 (-SetRemarshalingFlags@CManipulationTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A5EB4 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(
        DirectComposition::CPropertyChangeResourceMarshaler *this)
{
  char v1; // di

  v1 = 0;
  if ( *((_DWORD *)this + 12) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    return 1;
  }
  return v1;
}
