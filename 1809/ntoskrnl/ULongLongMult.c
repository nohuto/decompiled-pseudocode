/*
 * XREFs of ULongLongMult @ 0x14026D6E8
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140808CA0 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1408098D0 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpAddNamespaceNodeToList @ 0x140809B1C (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x14080A1BC (VrpDestroyNamespaceNode.c)
 *     VrpDestroyNamespaceNodeList @ 0x14080A460 (VrpDestroyNamespaceNodeList.c)
 *     VrpFindNamespaceNode @ 0x14080A534 (VrpFindNamespaceNode.c)
 *     SdbpCheckPackageAttributes @ 0x1408E6F60 (SdbpCheckPackageAttributes.c)
 *     SdbpFreePackageAttributes @ 0x1408E72E8 (SdbpFreePackageAttributes.c)
 *     AslPathWildcardFindFirst @ 0x1408EA508 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1408EAAE4 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardFreeFindContext @ 0x1408EBA2C (AslpPathWildcardFreeFindContext.c)
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
