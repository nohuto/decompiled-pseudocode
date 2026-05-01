/*
 * XREFs of ?HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180001520
 * Callers:
 *     ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x180001460 (-HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z.c)
 * Callees:
 *     CemRcTableFindOrInsertEx @ 0x180035C60 (CemRcTableFindOrInsertEx.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x18004975C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?HampClientPkgReference@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU1@@Z @ 0x180054810 (-HampClientPkgReference@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU1@@Z.c)
 */

void __fastcall HampClientPkgInsert(struct _HAM_CLIENT_CONTEXT *a1, struct _HAM_CLIENT_PACKAGE_CONTEXT *a2)
{
  int v3; // edi
  const struct reg_FeatureDescriptor *v4; // rcx

  v3 = (int)a1;
  if ( (unsigned int)EvaluateCurrentState(a1) )
    HampClientPkgReference(a2);
  CemRcTableFindOrInsertEx(v3 + 56, (_DWORD)a2 + 48, (unsigned int)HampClientPkgCompareByHandle, (_DWORD)a2);
  if ( !(unsigned int)EvaluateCurrentState(v4) )
    HampClientPkgReference(a2);
}
