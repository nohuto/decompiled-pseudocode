/*
 * XREFs of CommonBuffer_RebalanceResourcesWorkItem @ 0x1C000CE40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C004801C (XilCoreCommonBuffer_FreeUnusedResources.c)
 */

__int64 __fastcall CommonBuffer_RebalanceResourcesWorkItem(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3048))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v2 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v1,
         off_1C0056298);
  return XilCoreCommonBuffer_FreeUnusedResources(v2 + 88);
}
