/*
 * XREFs of ULongLongMult @ 0x1402812BC
 * Callers:
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140843198 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpAddNamespaceNodeToList @ 0x1408433E4 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x140843A54 (VrpDestroyNamespaceNode.c)
 *     VrpDestroyNamespaceNodeList @ 0x140843CF0 (VrpDestroyNamespaceNodeList.c)
 *     VrpFindNamespaceNode @ 0x140843DB8 (VrpFindNamespaceNode.c)
 *     VrpInitializeNamespaceNodeList @ 0x140843E98 (VrpInitializeNamespaceNodeList.c)
 *     SdbpCheckPackageAttributes @ 0x140923610 (SdbpCheckPackageAttributes.c)
 *     SdbpFreePackageAttributes @ 0x140923988 (SdbpFreePackageAttributes.c)
 *     AslPathWildcardFindFirst @ 0x1409272DC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1409278C4 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardFreeFindContext @ 0x14092876C (AslpPathWildcardFreeFindContext.c)
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
