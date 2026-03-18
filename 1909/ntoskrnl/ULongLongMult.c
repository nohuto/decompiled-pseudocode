/*
 * XREFs of ULongLongMult @ 0x14028101C
 * Callers:
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14084280C (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpAddNamespaceNodeToList @ 0x140842A58 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x1408430C8 (VrpDestroyNamespaceNode.c)
 *     VrpDestroyNamespaceNodeList @ 0x140843364 (VrpDestroyNamespaceNodeList.c)
 *     VrpFindNamespaceNode @ 0x14084342C (VrpFindNamespaceNode.c)
 *     VrpInitializeNamespaceNodeList @ 0x14084350C (VrpInitializeNamespaceNodeList.c)
 *     SdbpCheckPackageAttributes @ 0x140923070 (SdbpCheckPackageAttributes.c)
 *     SdbpFreePackageAttributes @ 0x1409233E8 (SdbpFreePackageAttributes.c)
 *     AslPathWildcardFindFirst @ 0x140926D3C (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140927324 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardFreeFindContext @ 0x1409281CC (AslpPathWildcardFreeFindContext.c)
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
