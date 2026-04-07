/*
 * XREFs of ?HasCasters@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA_NXZ @ 0x1800B4BBC
 * Callers:
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800B5388 (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this)
{
  return RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 16)) == 0;
}
