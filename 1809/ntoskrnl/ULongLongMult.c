/*
 * XREFs of ULongLongMult @ 0x14026D7E8
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140808C80 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1408098B0 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpAddNamespaceNodeToList @ 0x140809AFC (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x14080A19C (VrpDestroyNamespaceNode.c)
 *     VrpDestroyNamespaceNodeList @ 0x14080A440 (VrpDestroyNamespaceNodeList.c)
 *     VrpFindNamespaceNode @ 0x14080A514 (VrpFindNamespaceNode.c)
 *     SdbpCheckPackageAttributes @ 0x1408E6F40 (SdbpCheckPackageAttributes.c)
 *     SdbpFreePackageAttributes @ 0x1408E72C8 (SdbpFreePackageAttributes.c)
 *     AslPathWildcardFindFirst @ 0x1408EA4E8 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1408EAAC4 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardFreeFindContext @ 0x1408EBA0C (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  ULONGLONG v4; // rcx
  HRESULT result; // eax

  v4 = ullMultiplicand * ullMultiplier;
  result = 0;
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = v4;
  }
  else
  {
    *pullResult = -1LL;
    return -2147024362;
  }
  return result;
}
