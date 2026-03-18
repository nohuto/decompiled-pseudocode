/*
 * XREFs of ViXdvSetRequestedAPIsforDIF @ 0x140966E7C
 * Callers:
 *     ViXdvDriverLoadImage @ 0x140966AD4 (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ViSetRequestedOrderDependentAPIs @ 0x1403275A8 (ViSetRequestedOrderDependentAPIs.c)
 *     ViSetRequestedAPIs @ 0x14096688C (ViSetRequestedAPIs.c)
 */

char __fastcall ViXdvSetRequestedAPIsforDIF(int (__fastcall *a1)(__int64 *, int *))
{
  if ( a1(&VfDifAPIThunkContextHead, VfRuleClasses) < 0 )
    return 0;
  ViSetRequestedAPIs((__int64)&VfRegularThunks);
  ViSetRequestedOrderDependentAPIs();
  ViSetRequestedAPIs((__int64)&VfPoolThunks);
  ViSetRequestedAPIs((__int64)&VfMandatoryThunks);
  ViSetRequestedAPIs((__int64)&VfXdvThunks);
  return 1;
}
