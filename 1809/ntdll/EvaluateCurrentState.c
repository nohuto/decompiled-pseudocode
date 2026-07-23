/*
 * XREFs of EvaluateCurrentState @ 0x18009F1A4
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x180072F60 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     EvaluateFeature @ 0x18009F24C (EvaluateFeature.c)
 */

_BOOL8 EvaluateCurrentState()
{
  EvaluateFeature();
  return *(_DWORD *)g_Feature_2683562299_61252281_FeatureDescriptorDetails != 1;
}
