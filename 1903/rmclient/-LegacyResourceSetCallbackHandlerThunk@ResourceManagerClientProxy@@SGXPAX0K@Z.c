/*
 * XREFs of ?LegacyResourceSetCallbackHandlerThunk@ResourceManagerClientProxy@@SGXPAX0K@Z @ 0x100148D0
 * Callers:
 *     <none>
 * Callees:
 *     ?LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IAEXPAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x10014824 (-LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IAEXPAU_RM_WNF_LEGACY_RESOURCE_SET.c)
 */

void __stdcall ResourceManagerClientProxy::LegacyResourceSetCallbackHandlerThunk(
        struct _RTL_CRITICAL_SECTION *a1,
        struct _RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD *a2,
        unsigned int a3)
{
  ResourceManagerClientProxy::LegacyResourceSetCallbackHandler(a1, a2);
}
