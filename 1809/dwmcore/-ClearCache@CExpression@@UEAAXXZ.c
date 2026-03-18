/*
 * XREFs of ?ClearCache@CExpression@@UEAAXXZ @ 0x1801959F0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1800EF1C0 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

void __fastcall CExpression::ClearCache(CExpression *this)
{
  int v2; // eax
  void *v3; // rcx

  LOBYTE(v2) = EvaluateCurrentState((int **)&g_Feature_2862660923_57931444_FeatureDescriptorDetails);
  v3 = (void *)*((_QWORD *)this + 39);
  if ( !v2 || v3 )
    memset_0(v3, 0, *((unsigned int *)this + 80));
}
