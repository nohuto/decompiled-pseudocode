/*
 * XREFs of ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x18004975C
 * Callers:
 *     ?HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180001520 (-HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall EvaluateCurrentState(const struct reg_FeatureDescriptor *a1)
{
  if ( *(_DWORD *)g_Feature_1828027707_50553733_FeatureDescriptorDetails )
    return *(_DWORD *)g_Feature_1828027707_50553733_FeatureDescriptorDetails != 1;
  else
    return EvaluateCurrentStateFromRegistry(50553733LL, 2LL);
}
